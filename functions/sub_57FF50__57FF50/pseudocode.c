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

  if ( *this )
  {
    LOWORD(v3) = *((_WORD *)this + 0xE);
    v4 = (BSStringT *)(this + 0x18);
    v17 = this + 0x18;
    if ( (_WORD)v3 == 0xFFFF )
      v3 = strlen(v4->m_data);
    else
      v3 = (unsigned __int16)v3;
    if ( v3 )
    {
      m_data = v4->m_data;
      v6 = (char *)(a2 - v4->m_data);
      do
      {
        v7 = *m_data;
        m_data[(_DWORD)v6] = *m_data;
        ++m_data;
      }
      while ( v7 );
    }
    else
    {
      a2[0] = 0;
    }
    LOWORD(v8) = *((_WORD *)this + 0xE);
    if ( (_WORD)v8 == 0xFFFF )
      v8 = strlen(v4->m_data);
    else
      v8 = (unsigned __int16)v8;
    switch ( arg0 )
    {
      case 0x80000000:
        v9 = *((_DWORD *)this + 1);
        if ( v9 > 0 )
        {
          v10 = v9 - 1;
          if ( v9 - 1 < v8 )
            qmemcpy(&a2[v10], &a2[v10 + 1], v8 - v10);
          *((_DWORD *)this + 1) = v10;
          a2[v8 - 1] = 0;
          goto LABEL_33;
        }
        break;
      case 0x80000001:
        v12 = *((_DWORD *)this + 1);
        if ( v12 > 0 )
        {
          v8 = v12 - 1;
          goto LABEL_21;
        }
        break;
      case 0x80000002:
        v13 = *((_DWORD *)this + 1);
        if ( v13 < v8 )
          *((_DWORD *)this + 1) = v13 + 1;
        break;
      case 0x80000005:
        *((_DWORD *)this + 1) = 0;
        break;
      case 0x80000006:
LABEL_21:
        *((_DWORD *)this + 1) = v8;
        break;
      case 0x80000007:
        v11 = *((_DWORD *)this + 1);
        if ( v11 < v8 )
        {
          qmemcpy(&a2[v11], &a2[v11 + 1], v8 - v11);
          a2[v8 - 1] = 0;
          BSStringT_Set(v4, a2, 0);
        }
        break;
      case 0x80000008:
        *this = 0;
        break;
      case 0x80000009:
      case 0x8000000A:
        return;
      default:
        v14 = v8;
        if ( v8 > *((_DWORD *)this + 1) )
        {
          v15 = *((_DWORD *)this + 1);
          do
          {
            a2[v14] = a2[v14 - 1];
            --v14;
          }
          while ( v14 > v15 );
          v4 = (BSStringT *)v17;
        }
        v16 = *((_DWORD *)this + 3) == 0xFFFFFFFF;
        a2[v14] = arg0;
        a2[v8 + 1] = 0;
        if ( v16 || (unsigned __int8)sub_57DE00(a2) )
        {
          ++*((_DWORD *)this + 1);
LABEL_33:
          BSStringT_Set(v4, a2, 0);
        }
        break;
    }
  }
}
