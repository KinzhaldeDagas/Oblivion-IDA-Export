void __usercall raise_::_LN51(int a1@<eax>, int a2@<ebx>, int a3@<ebp>, _DWORD *a4@<edi>, PVOID *a5@<esi>)
{
  if ( *(_DWORD *)(a3 - 0x1C) != a1 ) /*0x98dbb9*/
    _lock(a1); /*0x98dbbc*/
  *(_DWORD *)(a3 - 4) = 0; /*0x98dbc4*/
  if ( a2 == 8 || a2 == 0xB || a2 == 4 ) /*0x98dbd4*/
  {
    *(_DWORD *)(a3 - 0x2C) = a4[0x18]; /*0x98dbd9*/
    a4[0x18] = 0; /*0x98dbdc*/
    if ( a2 != 8 ) /*0x98dbe2*/
      goto LABEL_12; /*0x98dbe2*/
    *(_DWORD *)(a3 - 0x30) = a4[0x19]; /*0x98dbe7*/
    a4[0x19] = 0x8C; /*0x98dbea*/
  }
  if ( a2 == 8 ) /*0x98dbf4*/
  {
    for ( *(_DWORD *)(a3 - 0x24) = dword_B31340; /*0x98dbfc*/
          *(_DWORD *)(a3 - 0x24) < dword_B31340 + dword_B31344;
          ++*(_DWORD *)(a3 - 0x24) )
    {
      *(_DWORD *)(0xC * *(_DWORD *)(a3 - 0x24) + a4[0x17] + 8) = 0; /*0x98dc1b*/
    }
LABEL_13:
    *(_DWORD *)(a3 - 4) = 0xFFFFFFFE; /*0x98dc2b*/
    ((void (*)(void))raise_::_LN37_0)(); /*0x98dc32*/
    JUMPOUT(0x98DC37); /*0x98dc37*/
  }
LABEL_12:
  *a5 = _encoded_null(); /*0x98dc24*/
  goto LABEL_13; /*0x98dc29*/
}
