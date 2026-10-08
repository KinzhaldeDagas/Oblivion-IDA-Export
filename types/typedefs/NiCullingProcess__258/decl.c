struct NiCullingProcess
{
NiCullingProcessVtbl *vtbl;
UInt8 UseAppendVirtual;
UInt8 pad05[3];
CullingVisibleGeometryArray *VisibleGeo;
NiCamera *Camera;
NiFrustum CameraFrustum;
NiFrustumPlanes Planes;
};
