// Recursively flattens compact CBranch tree into a pointer vector for branch LOD ranking.
unsigned int __thiscall OB_CBranch_BuildBranchVector_010201A0(_DWORD *this, OB_stVector4_010201A0 *a2)
{
  unsigned int v3; // edi
  int i; // ebx
  unsigned int result; // eax
  int v6; // eax
  unsigned int value; // [esp+10h] [ebp-4h] BYREF

  value = (unsigned int)this; /*0x7917f2*/
  OB_stVector4_PushBack_010201A0(a2, &value); /*0x7917f6*/
  v3 = 0; /*0x7917fb*/
  for ( i = 0; ; i += 0xC ) /*0x7917fd*/
  {
    result = *(this + 3); /*0x791800*/
    if ( !result ) /*0x791805*/
      break; /*0x791805*/
    result = (int)(*(this + 4) - result) / 0xC; /*0x79181a*/
    if ( v3 >= result ) /*0x79181e*/
      break; /*0x79181e*/
    v6 = *(this + 3); /*0x791820*/
    if ( !v6 || v3 >= (*(this + 4) - v6) / 0xC ) /*0x79183e*/
      _invalid_parameter_noinfo(); /*0x791840*/
    OB_CBranch_BuildBranchVector_010201A0(*(_DWORD **)(*(this + 3) + i + 8), &a2->allocatorState); /*0x79184d*/
    ++v3; /*0x791852*/
  }
  return result; /*0x79185a*/
}
