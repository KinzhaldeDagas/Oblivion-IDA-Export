struct _D3DLIGHT
{
DWORD dwSize;
D3DLIGHTTYPE dltType;
D3DCOLORVALUE dcvColor;
D3DVECTOR dvPosition;
D3DVECTOR dvDirection;
D3DVALUE dvRange;
D3DVALUE dvFalloff;
D3DVALUE dvAttenuation0;
D3DVALUE dvAttenuation1;
D3DVALUE dvAttenuation2;
D3DVALUE dvTheta;
D3DVALUE dvPhi;
};
