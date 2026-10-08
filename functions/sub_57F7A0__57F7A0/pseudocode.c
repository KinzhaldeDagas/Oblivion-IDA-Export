int __thiscall sub_57F7A0(int this, int a2, int a3)
{
  int result; // eax

  if ( a2 == 2 ) /*0x57f7b0*/
  {
    switch ( a3 ) /*0x57f7be*/
    {
      case 0x2A: /*0x57f7be*/
      case 0x36: /*0x57f7be*/
        *(_DWORD *)(this + 0x118) &= 0xFFFBu; /*0x57f7f0*/
        *(_BYTE *)(this + 0x114) = 0; /*0x57f7fa*/
        break;
      case 0x38: /*0x57f7be*/
      case 0xB8: /*0x57f7be*/
        *(_DWORD *)(this + 0x118) &= 0xFFFEu; /*0x57f7e4*/
        break;
      case 0x1D: /*0x57f7be*/
      case 0x9D: /*0x57f7be*/
        *(_DWORD *)(this + 0x118) &= 0xFFFDu; /*0x57f7d8*/
        break;
    }
    *(_DWORD *)(this + 0x120) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x57f805*/
    *(_DWORD *)(this + 0x124) = 0; /*0x57f80b*/
    *(_DWORD *)(this + 0x11C) = 0; /*0x57f811*/
    return 0; /*0x57f81c*/
  }
  if ( a2 != 1 ) /*0x57f822*/
    return 0; /*0x57f9e9*/
  result = ScancodeToChar(a3, *(unsigned __int8 *)(this + 0x114)); /*0x57f83f*/
  switch ( result ) /*0x57f847*/
  {
    case 0x1B: /*0x57f847*/
      return 0; /*0x57f847*/
    case 8: /*0x57f847*/
      *(_DWORD *)(this + 0x120) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x57f859*/
      *(_DWORD *)(this + 0x124) = 0; /*0x57f85f*/
      *(_DWORD *)(this + 0x11C) = 0x80000000; /*0x57f865*/
      return 0x80000000; /*0x57f870*/
    case 0x7C: /*0x57f847*/
      return 0; /*0x57f880*/
    case 0xD: /*0x57f847*/
      return 0x80000008; /*0x57f893*/
  }
  switch ( a3 ) /*0x57f8a2*/
  {
    case 0x2A: /*0x57f8a2*/
    case 0x36: /*0x57f8a2*/
      *(_DWORD *)(this + 0x118) |= 4u; /*0x57f9d9*/
      *(_BYTE *)(this + 0x114) = 1; /*0x57f9e0*/
      return 0; /*0x57f9e0*/
    case 0x38: /*0x57f8a2*/
    case 0xB8: /*0x57f8a2*/
      *(_DWORD *)(this + 0x118) |= 1u; /*0x57f9c9*/
      return 0; /*0x57f9d2*/
    case 0x1D: /*0x57f8a2*/
    case 0x9D: /*0x57f8a2*/
      *(_DWORD *)(this + 0x118) |= 2u; /*0x57f9b9*/
      return 0; /*0x57f9c2*/
    case 0xCB: /*0x57f8a2*/
      sub_57DC30((_DWORD *)this, 0x80000001); /*0x57f8e2*/
      return 0x80000001; /*0x57f8e9*/
    case 0xCD: /*0x57f8a2*/
      sub_57DC30((_DWORD *)this, 0x80000002); /*0x57f900*/
      return 0x80000002; /*0x57f907*/
    case 0xC8: /*0x57f8a2*/
      return 0x80000003; /*0x57f91d*/
    case 0xD0: /*0x57f8a2*/
      return 0x80000004; /*0x57f933*/
    case 0xC7: /*0x57f8a2*/
      return 0x80000005; /*0x57f949*/
    case 0xCF: /*0x57f8a2*/
      return 0x80000006; /*0x57f95f*/
    case 0xD1: /*0x57f8a2*/
      return 0x8000000A; /*0x57f975*/
    case 0xC9: /*0x57f8a2*/
      return 0x80000009; /*0x57f98b*/
    case 0xD3: /*0x57f8a2*/
      sub_57DC30((_DWORD *)this, 0x80000007); /*0x57f9a2*/
      return 0x80000007; /*0x57f9a9*/
  }
  return result; /*0x57f817*/
}
