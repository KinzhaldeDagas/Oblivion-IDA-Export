// Sort helper for compact branch pointer vectors used by branch LOD ranking.
void __usercall OB_CBranch_SortBranchVector_010201A0(int a1@<esi>, int a2)
{
  char *v2; // ebx
  char *v3; // esi
  int v4; // [esp+Ch] [ebp-4h]

  v2 = *(char **)(a2 + 8); /*0x791418*/
  LOBYTE(v4) = 0; /*0x79141e*/
  if ( *(_DWORD *)(a2 + 4) > (unsigned int)v2 ) /*0x791423*/
    _invalid_parameter_noinfo((int)v2, a2, a1); /*0x791425*/
  v3 = *(char **)(a2 + 4); /*0x79142a*/
  if ( (unsigned int)v3 > *(_DWORD *)(a2 + 8) ) /*0x791430*/
    _invalid_parameter_noinfo((int)v2, a2, (int)v3); /*0x791432*/
  OB_BranchPtrVector_IntrosortByFuzzyVolume_010201A0(v3, v2, (v2 - v3) >> 2, v4); /*0x791446*/
}
