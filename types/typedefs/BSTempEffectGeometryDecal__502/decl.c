struct BSTempEffectGeometryDecal
{
BSTempEffect base;
void *decalCreationData;
NiAVObject *generatedGeometry;
NiGeometry *targetGeometry;
void *unknown24;
bool creationFailed;
UInt8 padding29[3];
NiGeometry *sourceGeometry;
NiNode *sourceParentNode;
float projectionPointX;
float projectionPointY;
float projectionPointZ;
float orientationVectorX;
float orientationVectorY;
float orientationVectorZ;
float footprintScale;
float randomRotation;
};
