struct OB_SLeafGeometryOutput_010201A0
{
unsigned __int8 active;
unsigned __int8 pad_01[3];
float lodFadeOrRockScalar;
int discreteLodLevel;
unsigned __int16 leafCount;
unsigned __int16 pad_0E;
const unsigned __int8 *leafMapIndices;
const unsigned __int8 *leafCardIndices;
const float *centerCoords;
const float **diffuseTexcoords;
const float **cardCoords;
const unsigned int *packedColors;
const float *normals;
const float *binormals;
const float *tangents;
const float *windWeights;
const unsigned __int8 *windMatrixIndices;
};
