struct _DS3DBUFFER
{
DWORD dwSize;
D3DVECTOR vPosition;
D3DVECTOR vVelocity;
DWORD dwInsideConeAngle;
DWORD dwOutsideConeAngle;
D3DVECTOR vConeOrientation;
LONG lConeOutsideVolume;
D3DVALUE flMinDistance;
D3DVALUE flMaxDistance;
DWORD dwMode;
};
