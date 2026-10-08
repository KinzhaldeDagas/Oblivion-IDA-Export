struct SunMembr
{
SkyObjectMembr super;
void *SunBillboard;
void *SunGlareBillboard;
NiGeometry *SunGeometry;
NiGeometry *SunGlareGeometry;
NiTArray_void *SunPickList;
NiDirectionalLight *SunDirLight;
float unk20;
UInt8 unk24;
UInt8 pad25[3];
};
