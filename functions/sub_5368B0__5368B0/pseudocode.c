char __cdecl sub_5368B0(int a1)
{
  int BhkCollisionObject; // eax
  _DWORD *v2; // esi
  int v3; // eax
  char result; // al
  int v5; // eax
  int v6; // edi
  unsigned int v7; // esi

  if ( !a1 ) /*0x5368ba*/
    return 0; /*0x536950*/
  BhkCollisionObject = NiAVObject_GetBhkCollisionObject(a1); /*0x5368c2*/
  if ( BhkCollisionObject ) /*0x5368cc*/
  {
    v2 = *(_DWORD **)(BhkCollisionObject + 0x10); /*0x5368ce*/
    if ( v2 ) /*0x5368d3*/
    {
      v3 = v2[2]; /*0x5368d5*/
      if ( (!v3 || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 0x50) + 8))(*(_DWORD *)(v3 + 0x50)) != 6) /*0x5368f5*/
        && sub_4B6D90(v2) != 7 )
      {
        return 1; /*0x5368f7*/
      }
    }
  }
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x536904*/
  v6 = v5; /*0x536906*/
  if ( !v5 ) /*0x53690a*/
    return 0; /*0x53690a*/
  v7 = 0; /*0x536913*/
  if ( !*(_WORD *)(v5 + 0xB6) ) /*0x53690c*/
    return 0; /*0x53694b*/
  do /*0x536943*/
  {
    result = sub_5368B0(*(_DWORD *)(*(_DWORD *)(v6 + 0xB0) + 4 * v7)); /*0x53692b*/
    if ( result ) /*0x536935*/
      break; /*0x536935*/
    ++v7; /*0x53693e*/
  }
  while ( *(unsigned __int16 *)(v6 + 0xB6) > v7 ); /*0x536943*/
  return result; /*0x5368fa*/
}
