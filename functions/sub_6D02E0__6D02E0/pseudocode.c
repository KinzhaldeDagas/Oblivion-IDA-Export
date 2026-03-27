int __thiscall sub_6D02E0(_WORD *this, int a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_6D04E0(v3);
    *(_DWORD *)v4 = &NiMultiTargetTransformController::`vftable';
    *(_DWORD *)(v4 + 0x3C) = 0;
    *(_DWORD *)(v4 + 0x40) = 0;
    *(_WORD *)(v4 + 0x44) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_6D0170(this, v4, a2);
  return v4;
}
