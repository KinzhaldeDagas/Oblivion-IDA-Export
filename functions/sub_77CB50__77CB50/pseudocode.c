char __cdecl sub_77CB50(int a1)
{
  int v1; // ecx
  int v3; // esi
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = v1; /*0x77cb50*/
  if ( !unk_B42898 ) /*0x77cb51*/
    return 0; /*0x77cb5a*/
  if ( !NiTMap_GetAt((_DWORD *)unk_B42898 + 9, a1, &v4) ) /*0x77cb6d*/
    return 0; /*0x77cb6d*/
  v3 = v4; /*0x77cb76*/
  if ( !v4 ) /*0x77cb7c*/
    return 0; /*0x77cb7f*/
  if ( *(_DWORD *)(v4 + 4) == 1 ) /*0x77cb8c*/
    NiTMap_RemoveAt((_DWORD *)unk_B42898 + 9, a1); /*0x77cb98*/
  if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x77cb9e*/
    (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x77cbb1*/
  return 1; /*0x77cb5d*/
}
