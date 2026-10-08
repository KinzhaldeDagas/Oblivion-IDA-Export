struct OB_SIndexedGeometryOutput_010201A0
{
int discreteLodLevel;
unsigned __int16 numStrips;
unsigned __int16 pad_06;
const unsigned __int16 *stripLengths;
const unsigned __int16 **strips;
unsigned __int16 vertexCount;
unsigned __int16 pad_12;
const unsigned int *packedColors;
const float *normals;
const float *binormals;
const float *tangents;
const float *coords;
const float *diffuseTexcoords;
const float *shadowTexcoords;
const float *windWeights;
const unsigned __int8 *windMatrixIndices;
float alphaTestValue;
};
