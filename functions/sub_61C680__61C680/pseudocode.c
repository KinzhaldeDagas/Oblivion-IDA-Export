int __thiscall sub_61C680(int this, int a2)
{
  bool v3; // zf
  char *Name; // eax
  int result; // eax

  v3 = *(_DWORD *)(this + 0x70) == 0xA; /*0x61c687*/
  *(_DWORD *)(this + 0xAC) = a2; /*0x61c68b*/
  if ( !v3 ) /*0x61c691*/
  {
    if ( unk_B3B908 ) /*0x61c693*/
    {
      Name = TESObjectREFR_GetName(*(TESObjectREFR **)(this + 0x3C)); /*0x61c6a4*/
      Interface_ConsolePrint("%.20s is going to %s!", Name, "Switch weapons"); /*0x61c6af*/
    }
    *(float *)(this + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x61c6bd*/
  }
  *(_DWORD *)(this + 0x70) = 0xA; /*0x61c6c5*/
  result = sub_619420(this); /*0x61c6cc*/
  *(_BYTE *)(this + 0x114) = 1; /*0x61c6d1*/
  return result; /*0x61c6d8*/
}
