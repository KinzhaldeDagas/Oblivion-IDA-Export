double __cdecl sub_88F1B0(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  float v5; // [esp+4h] [ebp-4h]

  v5 = 1.0;
  if ( a1 )
  {
    if ( !a2 || (v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x58))(a1, a2)) == 0 )
      v2 = a1;
    v3 = sub_497420(v2);
    if ( v3 )
      return *(float *)(v3 + 0x14);
  }
  return v5;
}
