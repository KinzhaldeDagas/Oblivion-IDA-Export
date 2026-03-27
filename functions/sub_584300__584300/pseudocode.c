InterfaceManager *__cdecl sub_584300(int a1, float a2)
{
  int v2; // eax
  double v3; // st7
  int v4; // ecx
  double v5; // st6
  InterfaceManager *result; // eax
  float v7; // [esp+8h] [ebp+4h]

  sub_583CF0(a1);
  v2 = FormHeapAlloc(0x14u);
  v3 = 0.0;
  v4 = 0;
  if ( v2 )
  {
    *(float *)(v2 + 4) = 0.0;
    *(_DWORD *)(v2 + 0xC) = 0;
    v5 = flt_A37080;
    *(_DWORD *)(v2 + 0x10) = 0;
    *(_DWORD *)v2 = 0;
    *(float *)(v2 + 8) = v5;
    v4 = v2;
  }
  *(_DWORD *)v4 = a1;
  if ( a2 > 0.0 )
    v3 = a2;
  v7 = v3;
  *(float *)(v4 + 8) = v7;
  *(_DWORD *)(v4 + 0xC) = *(_DWORD *)(InterfaceManagerPtr->unk0C0[0x1C] + 0xC);
  *(_DWORD *)(*(_DWORD *)(InterfaceManagerPtr->unk0C0[0x1C] + 0xC) + 0x10) = v4;
  result = InterfaceManagerPtr;
  *(_DWORD *)(InterfaceManagerPtr->unk0C0[0x1C] + 0xC) = v4;
  return result;
}
