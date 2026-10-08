// Stores the supplied local NiBound in both the persistent local-bound fields (+0xC4..+0xD0) and current world-bound fields (+0x20..+0x2C). Fallout was consulted only after this behavior was observed and supplies the conventional SetLocalBound label.
int __thiscall TallGrassTriStrips__SetLocalBound(_DWORD *this, int a2, int a3, int a4, int a5)
{
  *(this + 0x31) = a2; /*0x864472*/
  *(this + 8) = a2; /*0x864478*/
  *(this + 0x32) = a3; /*0x86447b*/
  *(this + 9) = a3; /*0x864481*/
  *(this + 0x33) = a4; /*0x864484*/
  *(this + 0xA) = a4; /*0x86448a*/
  *(this + 0x34) = a5; /*0x86448d*/
  *(this + 0xB) = a5; /*0x864493*/
  return a2; /*0x864496*/
}
