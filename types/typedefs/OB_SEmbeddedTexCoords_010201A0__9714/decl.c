struct OB_SEmbeddedTexCoords_010201A0
{
int leafTexcoordSetCount; ///< Count written by token 10002.
int leafTexcoordFloatTable; ///< Pointer to count*8 floats.
int billboardTexcoordSetCount; ///< Count written by token 10003; stock parser does not mirror this into CSpeedTreeRT+0x54.
int billboardTexcoordFloatTable; ///< Pointer to count*8 floats used by 360/horizontal billboard exports.
int frondTexcoordSetCount; ///< Count written by token 10004.
int frondTexcoordFloatTable; ///< Pointer to count*8 floats.
char compositeFilenameSmallString[28]; ///< Small-string storage normalized through 0x789430.
float shadowTexcoords8Floats[8]; ///< Inline shadow texcoords; default is (1,1),(0,1),(0,0),(1,0).
};
