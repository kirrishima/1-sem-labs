<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<head><title>My first template rule</title>
<style>table{  border-collapse: collapse;}th, td{  border: 2px solid black; padding: 10px; text-align: center;}</style>
</head>
<body>
<h2>Book store's stuff</h2>
<table border="0" >
<tr bgcolor="#9acd32">
<th>Title</th>
<th>Author</th>
<th>Genre</th> <th>Price</th></tr>
<xsl:for-each select="bookstore/book">
<xsl:sort select="author" order="ascending"/>
<tr>
<td><xsl:value-of select="name"/></td>
<td><xsl:value-of select="author"/></td>
<td><xsl:value-of select="genre"/></td>
<td><xsl:value-of select="price"/></td>
</tr>
</xsl:for-each>
</table></body></html>
</xsl:template>
</xsl:stylesheet>
