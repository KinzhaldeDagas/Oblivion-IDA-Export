int __usercall sub_410D10@<eax>(char a1@<bpl>, const char *a2)
{
  char *v5; // ebx
  unsigned __int8 *i; // esi
  const unsigned __int8 *v7; // edi
  int result; // eax
  size_t v9; // [esp-8h] [ebp-10h]
  int v10; // [esp+0h] [ebp-8h]

  HIDWORD(v9) = 1;
  LODWORD(v9) = strlen(a2) + 1;
  v5 = (char *)j_MemoryHeap_Alloc(&FormHeap, a1, v9, v10);
  strcpy(v5, a2);
  for ( i = _mbstok((unsigned __int8 *)v5, (const unsigned __int8 *)&byte_A319FC);
        i;
        i = _mbstok(0, (const unsigned __int8 *)&byte_A319FC) )
  {
    if ( !byte_B33426 )
    {
      if ( sub_410390(1) )
      {
        v7 = &i[strlen((const char *)i) - 3];
        if ( _mbsicmp(v7, &aBik) )
        {
          if ( !_mbsicmp(v7, &aDds_0) )
            sub_410840((int)v7, (int)i, (const char *)i);
        }
        else
        {
          sub_410BA0((const char *)i, 1, 1, 0, byte_B030B4, COERCE_FLOAT(byte_B33427), 0);
        }
      }
    }
  }
  result = MemoryHeap_Free_checked(v5);
  byte_B33426 = 0;
  return result;
}
