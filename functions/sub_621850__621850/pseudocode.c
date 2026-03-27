double __usercall sub_621850@<st0>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, double result@<st0>)
{
  _DWORD **v7; // eax

  if ( *(_DWORD *)(a1 + 0x6C) == 1 )
  {
    if ( *(float *)(a1 + 0xD8) >= *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4) )
    {
      if ( sub_6135F0(a1) && (v7 = (_DWORD **)sub_6135F0(a1), sub_5E5640(v7)) || *(_BYTE *)(a1 + 0x15A) )
      {
        if ( *(_DWORD *)(a1 + 0x74) == 2 )
        {
          *(_DWORD *)(a1 + 0x78) = 2;
          *(_DWORD *)(a1 + 0x74) = 3;
          sub_6213D0(a1);
        }
        sub_61CE40(a1, a2, a3, result);
      }
    }
    else
    {
      sub_619920(a1, 0);
    }
  }
  return result;
}
