void __thiscall sub_57FF50(char *this, int arg0)
{
  unsigned int v3; // eax
  BSStringT *v4; // ebx
  const char *m_data; // eax
  char *v6; // edx
  char v7; // cl
  signed int v8; // eax
  int v9; // ecx
  int v10; // edx
  signed int v11; // edx
  int v12; // eax
  signed int v13; // ecx
  signed int v14; // ecx
  signed int v15; // esi
  bool v16; // zf
  char *v17; // [esp+4h] [ebp-408h]
  char a2[1024]; // [esp+8h] [ebp-404h] BYREF

  if ( *this ) /*0x57ff67*/
  {
    LOWORD(v3) = *((_WORD *)this + 0xE); /*0x57ff71*/
    v4 = (BSStringT *)(this + 0x18); /*0x57ff7a*/
    v17 = this + 0x18; /*0x57ff7d*/
    if ( (_WORD)v3 == 0xFFFF ) /*0x57ff81*/
      v3 = strlen(v4->m_data); /*0x57ff91*/
    else
      v3 = (unsigned __int16)v3; /*0x57ff95*/
    if ( v3 ) /*0x57ff9a*/
    {
      m_data = v4->m_data; /*0x57ffa2*/
      v6 = (char *)(a2 - v4->m_data); /*0x57ffa8*/
      do /*0x57ffba*/
      {
        v7 = *m_data; /*0x57ffb0*/
        m_data[(_DWORD)v6] = *m_data; /*0x57ffb2*/
        ++m_data; /*0x57ffb5*/
      }
      while ( v7 ); /*0x57ffba*/
    }
    else
    {
      a2[0] = 0; /*0x57ff9c*/
    }
    LOWORD(v8) = *((_WORD *)this + 0xE); /*0x57ffbc*/
    if ( (_WORD)v8 == 0xFFFF ) /*0x57ffc4*/
      v8 = strlen(v4->m_data); /*0x57ffd9*/
    else
      v8 = (unsigned __int16)v8; /*0x57ffdd*/
    switch ( arg0 ) /*0x57fff8*/
    {
      case 0x80000000: /*0x57fff8*/
        v9 = *((_DWORD *)this + 1); /*0x57ffff*/
        if ( v9 > 0 ) /*0x580004*/
        {
          v10 = v9 - 1; /*0x58000a*/
          if ( v9 - 1 < v8 ) /*0x58000f*/
            qmemcpy(&a2[v10], &a2[v10 + 1], v8 - v10); /*0x58001d*/
          *((_DWORD *)this + 1) = v10; /*0x58001f*/
          a2[v8 - 1] = 0; /*0x580022*/
          goto LABEL_33; /*0x580027*/
        }
        break; /*0x580027*/
      case 0x80000001: /*0x57fff8*/
        v12 = *((_DWORD *)this + 1); /*0x580053*/
        if ( v12 > 0 ) /*0x580058*/
        {
          v8 = v12 - 1; /*0x58005a*/
          goto LABEL_21; /*0x58005a*/
        }
        break; /*0x58005a*/
      case 0x80000002: /*0x57fff8*/
        v13 = *((_DWORD *)this + 1); /*0x580062*/
        if ( v13 < v8 ) /*0x580067*/
          *((_DWORD *)this + 1) = v13 + 1; /*0x58006c*/
        break; /*0x58006f*/
      case 0x80000005: /*0x57fff8*/
        *((_DWORD *)this + 1) = 0; /*0x580071*/
        break; /*0x580078*/
      case 0x80000006: /*0x57fff8*/
LABEL_21:
        *((_DWORD *)this + 1) = v8; /*0x58005d*/
        break; /*0x580060*/
      case 0x80000007: /*0x57fff8*/
        v11 = *((_DWORD *)this + 1); /*0x58002c*/
        if ( v11 < v8 ) /*0x580031*/
        {
          qmemcpy(&a2[v11], &a2[v11 + 1], v8 - v11); /*0x580043*/
          a2[v8 - 1] = 0; /*0x58004b*/
          BSStringT_Set(v4, a2, 0); /*0x580051*/
        }
        break; /*0x580051*/
      case 0x80000008: /*0x57fff8*/
        *this = 0; /*0x58007a*/
        break; /*0x58007e*/
      case 0x80000009: /*0x57fff8*/
      case 0x8000000A: /*0x57fff8*/
        return;
      default:
        v14 = v8; /*0x580083*/
        if ( v8 > *((_DWORD *)this + 1) ) /*0x580085*/
        {
          v15 = *((_DWORD *)this + 1); /*0x580087*/
          do /*0x58009d*/
          {
            a2[v14] = a2[v14 - 1]; /*0x580094*/
            --v14; /*0x580098*/
          }
          while ( v14 > v15 ); /*0x58009d*/
          v4 = (BSStringT *)v17; /*0x58009f*/
        }
        v16 = *((_DWORD *)this + 3) == 0xFFFFFFFF; /*0x5800a3*/
        a2[v14] = arg0; /*0x5800a7*/
        a2[v8 + 1] = 0; /*0x5800ab*/
        if ( v16 || (unsigned __int8)sub_57DE00(a2) ) /*0x5800b9*/
        {
          ++*((_DWORD *)this + 1); /*0x5800c2*/
LABEL_33:
          BSStringT_Set(v4, a2, 0); /*0x5800c6*/
        }
        break; /*0x5800cf*/
    }
  }
}
