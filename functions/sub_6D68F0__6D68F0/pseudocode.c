int __stdcall sub_6D68F0(int a1)
{
  float *v1; // eax
  float *v2; // esi
  int v3; // ecx

  v1 = (float *)FormHeapAlloc(0x38u);
  v2 = v1;
  if ( !v1 )
    JUMPOUT(0x6D6993);
  sub_6EC220(v1);
  *(_DWORD *)v2 = &NiTransformInterpolator::`vftable';
  *((_DWORD *)v2 + 3) = dword_B24260;
  v3 = dword_B24264;
  *((_DWORD *)v2 + 4) = dword_B24264;
  return sub_6D6954(v3, dword_B24268, a1);
}
