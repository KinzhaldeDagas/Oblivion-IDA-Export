void __usercall raise_::_LN51(int a1@<eax>, int a2@<ebx>, int a3@<ebp>, _DWORD *a4@<edi>, PVOID *a5@<esi>)
{
  if ( *(_DWORD *)(a3 - 0x1C) != a1 )
    _lock(a1);
  *(_DWORD *)(a3 - 4) = 0;
  if ( a2 == 8 || a2 == 0xB || a2 == 4 )
  {
    *(_DWORD *)(a3 - 0x2C) = a4[0x18];
    a4[0x18] = 0;
    if ( a2 != 8 )
      goto LABEL_12;
    *(_DWORD *)(a3 - 0x30) = a4[0x19];
    a4[0x19] = 0x8C;
  }
  if ( a2 == 8 )
  {
    for ( *(_DWORD *)(a3 - 0x24) = dword_B31340;
          *(_DWORD *)(a3 - 0x24) < dword_B31340 + dword_B31344;
          ++*(_DWORD *)(a3 - 0x24) )
    {
      *(_DWORD *)(0xC * *(_DWORD *)(a3 - 0x24) + a4[0x17] + 8) = 0;
    }
LABEL_13:
    *(_DWORD *)(a3 - 4) = 0xFFFFFFFE;
    ((void (*)(void))raise_::_LN37_0)();
    JUMPOUT(0x98DC37);
  }
LABEL_12:
  *a5 = _encoded_null();
  goto LABEL_13;
}
