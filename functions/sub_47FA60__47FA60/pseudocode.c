int __cdecl sub_47FA60(int *a1)
{
  int v1; // esi
  int v3; // eax
  int v4; // [esp+4h] [ebp-8h] BYREF

  if ( !a1 )
    return 0;
  v1 = *sub_47F990(a1, &v4, (int)dword_BA7B80);
  if ( !v1 )
    return 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1);
  if ( !v3 )
    return 0;
  while ( (char *)v3 != dword_BA7D24 )
  {
    v3 = *(_DWORD *)(v3 + 4);
    if ( !v3 )
      return 0;
  }
  return v1;
}
