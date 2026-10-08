char __thiscall sub_4823D0(unsigned int *this, float a2)
{
  char result; // al
  unsigned int v4; // ebp
  unsigned int i; // edi
  unsigned int j; // esi
  int v7; // eax
  unsigned int v8; // edx
  ExtraDataList *v9; // ecx

  result = sub_4CCCE0(); /*0x4823dd*/
  v4 = *(this + 3); /*0x4823e2*/
  MEMORY[0xB33E90][0x57C] = MEMORY[0xB33E90][0x57C] == 0; /*0x4823ef*/
  for ( i = 0; i < v4; ++i ) /*0x4823fa*/
  {
    for ( j = 0; j < v4; ++j ) /*0x482400*/
    {
      result = 1; /*0x482404*/
      if ( i && j && i != v4 - 1 && j != v4 - 1 ) /*0x482415*/
        goto LABEL_12; /*0x482415*/
      if ( (((unsigned __int8)i ^ (unsigned __int8)j) & 1) != 0 ) /*0x48241e*/
        result = 0; /*0x482420*/
      if ( MEMORY[0xB33E90][0x57C] ) /*0x482422*/
        result = result == 0; /*0x48242d*/
      if ( result ) /*0x482432*/
      {
LABEL_12:
        v7 = *(this + 4); /*0x482437*/
        v8 = j + i * *(this + 3); /*0x48243d*/
        v9 = *(ExtraDataList **)(v7 + 8 * v8); /*0x48243f*/
        result = v7 + 8 * v8; /*0x482444*/
        if ( v9 ) /*0x482447*/
          result = sub_4D4970(v9, a2);          // BloodOnDeath decode 2026-05-30: exterior grid update calls sub_4D4970 for selected child cells; the decal counter reset happens inside each child-cell geometry update path. /*0x482451*/
      }
    }
  }
  return result; /*0x482468*/
}
