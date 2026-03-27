char __cdecl sub_7C2EC0(int a1, int a2)
{
  _DWORD *v2; // eax
  bool v3; // zf
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = 0;
  if ( !NiTMap_GetAt(&off_B2CBC4, a1, &v5) )
    return 0;
  v2 = *(_DWORD **)(v5 + 0x38);
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v3 = v2[2] == a2;
    v2 = (_DWORD *)*v2;
    if ( v3 )
      break;
    if ( !v2 )
      return 0;
  }
  return 1;
}
