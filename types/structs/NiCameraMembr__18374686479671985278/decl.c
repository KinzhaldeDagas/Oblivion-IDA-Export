struct NiCameraMembr
{
NiAVObjectMembr super;
float WorldToCam[4][4];
NiFrustum Frustum;
float MinNearPlaneDist;
float MaxFarNearRatio;
NiViewport ViewPort;
float LODAdjust;
};
