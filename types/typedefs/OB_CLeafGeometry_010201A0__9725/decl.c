struct OB_CLeafGeometry_010201A0
{
unsigned __int8 manualLighting;
unsigned __int8 vertexWeighting;
unsigned __int8 pad_02[2];
OB_CWindEngine_010201A0 *windEngine;
unsigned __int16 rockingGroupCount;
unsigned __int16 pad_0A;
float *timeOffsets;
float **perLodLeafCardVertexTables;
float *leafDiffuseTexcoords;
float *vertexProgramBillboardTable;
unsigned __int16 leafTextureCount;
unsigned __int16 pad_1E;
OB_stVec3_010201A0 *leafTextureDimensions;
OB_stVec3_010201A0 *leafTextureOrigins;
unsigned __int16 leafLodCount;
unsigned __int16 pad_2A;
OB_SLodGeometry_010201A0 *lodGeometryRecords;
};
