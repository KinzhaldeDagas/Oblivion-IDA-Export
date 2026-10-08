struct SceneGraph
{
void **vftable;
NiNodeMembr super;
NiCamera *camera;
UInt32 unk0E0;
NiCullingProcess *cullingProcess;
UInt8 IsMinFarPlaneDistance;
UInt8 pad0E8[3];
float cameraFOV;
};
