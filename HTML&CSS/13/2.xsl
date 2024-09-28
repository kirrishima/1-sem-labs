<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:template match="/">
    <html>
      <head>
        <title>Аттестация</title>
        <style>
          td {
            padding: 8px;
          }
          .red-bg {
            background-color: red;
          }
          .green-bg {
            background-color: green;
          }
        </style>
      </head>
      <body>
        <h2>Таблица с аттестацией</h2>
        <table border="1">
          <tr>
            <th>Имя</th>
            <th>Предмет</th>
            <th>Оценка</th>
          </tr>
          <xsl:for-each select="assessment/student/subject">

            <tr>
              <td><xsl:value-of select="../name"/></td>
              <td><xsl:value-of select="name"/></td>
              <td>
                <xsl:attribute name="class">
                  <xsl:choose>
                    <xsl:when test="grade &lt; 4">red-bg</xsl:when>
                    <xsl:when test="grade &gt; 8">green-bg</xsl:when>
                  </xsl:choose>
                </xsl:attribute>
                <xsl:value-of select="grade"/>
              </td>
            </tr>
          </xsl:for-each>
        </table>
      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>
