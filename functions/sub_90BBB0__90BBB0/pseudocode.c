int __cdecl sub_90BBB0(int a1, int a2, unsigned int a3)
{
  int result; // eax
  signed int v4; // ebx
  _DWORD *v5; // edi
  int i; // esi
  int v7; // eax
  signed int v8; // eax

  while ( 2 ) /*0x90bbb4*/
  {
    result = 0xFFFFFFFF; /*0x90bbb4*/
    switch ( a2 ) /*0x90bbc7*/
    {
      case 0: /*0x90bbc7*/
      case 1: /*0x90bbc7*/
      case 2: /*0x90bbc7*/
      case 3: /*0x90bbc7*/
      case 4: /*0x90bbc7*/
      case 5: /*0x90bbc7*/
      case 6: /*0x90bbc7*/
      case 7: /*0x90bbc7*/
      case 8: /*0x90bbc7*/
      case 9: /*0x90bbc7*/
      case 0xA: /*0x90bbc7*/
      case 0xB: /*0x90bbc7*/
      case 0xC: /*0x90bbc7*/
      case 0xD: /*0x90bbc7*/
      case 0xE: /*0x90bbc7*/
      case 0xF: /*0x90bbc7*/
      case 0x10: /*0x90bbc7*/
      case 0x11: /*0x90bbc7*/
      case 0x12: /*0x90bbc7*/
      case 0x18: /*0x90bbc7*/
        result = sub_940C50(a1); /*0x90bbd2*/
        break; /*0x90bbd2*/
      case 0x13: /*0x90bbc7*/
        a2 = *(unsigned __int8 *)(a1 + 0xD); /*0x90bbe4*/
        continue; /*0x90bbec*/
      case 0x14: /*0x90bbc7*/
      case 0x15: /*0x90bbc7*/
      case 0x16: /*0x90bbc7*/
      case 0x1A: /*0x90bbc7*/
      case 0x1B: /*0x90bbc7*/
      case 0x1C: /*0x90bbc7*/
        result = a3; /*0x90bbd7*/
        break; /*0x90bbdb*/
      case 0x19: /*0x90bbc7*/
        v4 = 1; /*0x90bbf8*/
        v5 = (_DWORD *)sub_90D1F0((_DWORD *)a1); /*0x90bc02*/
        for ( i = 0; i < sub_90D240(v5); ++i ) /*0x90bc0f*/
        {
          v7 = sub_90D260(v5, i); /*0x90bc19*/
          v8 = sub_90BBB0(v7, *(unsigned __int8 *)(v7 + 0xC), a3); /*0x90bc25*/
          if ( v8 > v4 ) /*0x90bc2f*/
            v4 = v8; /*0x90bc31*/
        }
        result = v4; /*0x90bc42*/
        break; /*0x90bc42*/
      default:
        return result;
    }
    break;
  }
  return result; /*0x90bbdb*/
}
