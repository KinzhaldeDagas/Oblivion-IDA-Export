struct _D3DMATERIAL
{
DWORD dwSize;
union
{
D3DCOLORVALUE diffuse;
D3DCOLORVALUE dcvDiffuse;
};
union
{
D3DCOLORVALUE ambient;
D3DCOLORVALUE dcvAmbient;
};
union
{
D3DCOLORVALUE specular;
D3DCOLORVALUE dcvSpecular;
};
union
{
D3DCOLORVALUE emissive;
D3DCOLORVALUE dcvEmissive;
};
union
{
D3DVALUE power;
D3DVALUE dvPower;
};
D3DTEXTUREHANDLE hTexture;
DWORD dwRampSize;
};
