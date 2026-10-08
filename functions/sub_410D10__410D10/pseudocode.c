int __usercall sub_410D10@<eax>(char a1@<bpl>, const char *a2)
{
  char *v2; // ebx
  unsigned __int8 *i; // esi
  const unsigned __int8 *v4; // edi
  int result; // eax
  size_t v6; // [esp-8h] [ebp-10h]
  int v7; // [esp+0h] [ebp-8h]

  HIDWORD(v6) = 1; /*0x410d2b*/
  LODWORD(v6) = strlen(a2) + 1; /*0x410d30*/
  v2 = (char *)j_MemoryHeap_Alloc(&FormHeap, a1, v6, v7); /*0x410d3b*/
  strcpy(v2, a2); /*0x410d3f*/
  for ( i = _mbstok((unsigned __int8 *)v2, asc_A319FC); i; i = _mbstok(0, asc_A319FC) ) /*0x410d61*/
  {
    if ( !unk_B33426 ) /*0x410d77*/
    {
      if ( Input_CheckLoadPumpControls(1) ) /*0x410d7b*/
      {
        v4 = &i[strlen((const char *)i) - 3]; /*0x410d9b*/
        if ( _mbsicmp(v4, &aBik) ) /*0x410da5*/
        {
          if ( !_mbsicmp(v4, &aDds_0) ) /*0x410dd9*/
            sub_410840((int)v4, (int)i, (const char *)i); /*0x410de6*/
        }
        else
        {
          sub_410BA0((const char *)i, 1, 1, 0, byte_B030B4, COERCE_FLOAT(unk_B33427), 0); /*0x410dc9*/
        }
      }
    }
  }
  result = MemoryHeap_Free_checked(v2); /*0x410e0e*/
  unk_B33426 = 0; /*0x410e14*/
  return result; /*0x410e13*/
}
