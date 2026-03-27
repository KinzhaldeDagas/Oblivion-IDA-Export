int __thiscall sub_61C680(int this, int a2)
{
  bool v3; // zf
  char *Name; // eax
  int result; // eax

  v3 = *(_DWORD *)(this + 0x70) == 0xA;
  *(_DWORD *)(this + 0xAC) = a2;
  if ( !v3 )
  {
    if ( byte_B3B908 )
    {
      Name = TESObjectREFR_GetName(*(TESObjectREFR **)(this + 0x3C));
      Interface_ConsolePrint("%.20s is going to %s!", Name, "Switch weapons");
    }
    *(float *)(this + 0x188) = flt_A30634;
  }
  *(_DWORD *)(this + 0x70) = 0xA;
  result = sub_619420(this);
  *(_BYTE *)(this + 0x114) = 1;
  return result;
}
