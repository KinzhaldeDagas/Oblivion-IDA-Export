struct OB_SLodGeometry_010201A0
{
unsigned __int8 active;
unsigned __int8 pad_01[3];
float lodFadeOrRockScalar;
int discreteLodLevel;
unsigned __int16 leafCount;
unsigned __int16 pad_0E;
unsigned __int8 *leafMapIndices;
unsigned __int8 *leafCardIndices;
float *centerCoords;
float **diffuseTexcoords;
float **cardCoords;
unsigned int *packedColors;
float *normals;
float *binormals;
float *tangents;
float *windWeights;
unsigned __int8 *windMatrixIndices;
unsigned __int8 generatedCardTableValid;
unsigned __int8 pad_3D[3];
float *originalCenterCoords;
};
