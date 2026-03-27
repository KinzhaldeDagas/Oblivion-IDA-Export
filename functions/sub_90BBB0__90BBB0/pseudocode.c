unsigned int __cdecl sub_90BBB0(int a1, int a2, unsigned int a3)
{
  unsigned int result; // eax
  signed int v4; // ebx
  _DWORD *v5; // edi
  int i; // esi
  int v7; // eax
  signed int v8; // eax

  while ( 2 )
  {
    result = 0xFFFFFFFF;
    switch ( a2 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x18:
        result = sub_940C50(a1);
        break;
      case 0x13:
        a2 = *(unsigned __int8 *)(a1 + 0xD);
        continue;
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x1A:
      case 0x1B:
      case 0x1C:
        result = a3;
        break;
      case 0x19:
        v4 = 1;
        v5 = (_DWORD *)sub_90D1F0((_DWORD *)a1);
        for ( i = 0; i < sub_90D240(v5); ++i )
        {
          v7 = sub_90D260(v5, i);
          v8 = sub_90BBB0(v7, *(unsigned __int8 *)(v7 + 0xC), a3);
          if ( v8 > v4 )
            v4 = v8;
        }
        result = v4;
        break;
      default:
        return result;
    }
    break;
  }
  return result;
}
