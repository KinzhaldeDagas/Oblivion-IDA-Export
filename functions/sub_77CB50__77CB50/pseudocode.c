char __cdecl sub_77CB50(int a1)
{
  int v1; // ecx
  int v3; // esi
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = v1;
  if ( !dword_B42898 )
    return 0;
  if ( !NiTMap_GetAt((_DWORD *)dword_B42898 + 9, a1, &v4) )
    return 0;
  v3 = v4;
  if ( !v4 )
    return 0;
  if ( *(_DWORD *)(v4 + 4) == 1 )
    NiTMap_RemoveAt((_DWORD *)dword_B42898 + 9, a1);
  if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
    (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  return 1;
}
