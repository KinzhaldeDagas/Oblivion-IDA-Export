NiAVObject *__cdecl sub_8AFCE0(int a1)
{
  char v1; // dl
  int *v2; // ecx
  Atmosphere *v3; // ecx
  int *v5; // esi
  int **v6; // ecx
  _DWORD v7[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = *(_BYTE *)(a1 + 0x18);
  if ( v1 == 1 )
  {
    v2 = (int *)(a1 + *(_DWORD *)(a1 + 0x10));
    if ( v2 )
    {
      v3 = (Atmosphere *)*sub_47F990(v2, v7, (int)dword_BA7B80);
      if ( v3 )
        return sub_452A60(v3);
      return 0;
    }
  }
  if ( v1 != 2 )
    return 0;
  v5 = (int *)(a1 + *(_DWORD *)(a1 + 0x10));
  if ( !v5 )
    return 0;
  v3 = (Atmosphere *)*sub_47F990(v5, v7, (int)dword_BA7B80);
  if ( v3 )
    return sub_452A60(v3);
  v6 = (int **)v5[3];
  if ( v6 )
    return (NiAVObject *)sub_89F6B0(v6, 0);
  else
    return 0;
}
