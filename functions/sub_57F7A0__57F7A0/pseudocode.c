int __thiscall sub_57F7A0(int this, int a2, int a3)
{
  int result; // eax

  if ( a2 == 2 )
  {
    switch ( a3 )
    {
      case 0x2A:
      case 0x36:
        *(_DWORD *)(this + 0x118) &= 0xFFFBu;
        *(_BYTE *)(this + 0x114) = 0;
        break;
      case 0x38:
      case 0xB8:
        *(_DWORD *)(this + 0x118) &= 0xFFFEu;
        break;
      case 0x1D:
      case 0x9D:
        *(_DWORD *)(this + 0x118) &= 0xFFFDu;
        break;
    }
    *(_DWORD *)(this + 0x120) = Seed;
    *(_DWORD *)(this + 0x124) = 0;
    *(_DWORD *)(this + 0x11C) = 0;
    return 0;
  }
  if ( a2 != 1 )
    return 0;
  result = ScancodeToChar(a3, *(unsigned __int8 *)(this + 0x114));
  switch ( result )
  {
    case 0x1B:
      return 0;
    case 8:
      *(_DWORD *)(this + 0x120) = Seed;
      *(_DWORD *)(this + 0x124) = 0;
      *(_DWORD *)(this + 0x11C) = 0x80000000;
      return 0x80000000;
    case 0x7C:
      return 0;
    case 0xD:
      return 0x80000008;
  }
  switch ( a3 )
  {
    case 0x2A:
    case 0x36:
      *(_DWORD *)(this + 0x118) |= 4u;
      *(_BYTE *)(this + 0x114) = 1;
      return 0;
    case 0x38:
    case 0xB8:
      *(_DWORD *)(this + 0x118) |= 1u;
      return 0;
    case 0x1D:
    case 0x9D:
      *(_DWORD *)(this + 0x118) |= 2u;
      return 0;
    case 0xCB:
      sub_57DC30((_DWORD *)this, 0x80000001);
      return 0x80000001;
    case 0xCD:
      sub_57DC30((_DWORD *)this, 0x80000002);
      return 0x80000002;
    case 0xC8:
      return 0x80000003;
    case 0xD0:
      return 0x80000004;
    case 0xC7:
      return 0x80000005;
    case 0xCF:
      return 0x80000006;
    case 0xD1:
      return 0x8000000A;
    case 0xC9:
      return 0x80000009;
    case 0xD3:
      sub_57DC30((_DWORD *)this, 0x80000007);
      return 0x80000007;
  }
  return result;
}
