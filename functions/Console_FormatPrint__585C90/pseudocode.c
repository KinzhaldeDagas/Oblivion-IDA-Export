void __thiscall Console_FormatPrint(_DWORD *this, char *Format, va_list ArgList)
{
  _DWORD *v3; // edi
  int v4; // esi
  _DWORD *Singleton; // eax
  unsigned int v6; // esi
  int v7; // ebp
  unsigned int v8; // eax
  char *v9; // ebp
  int **v10; // esi
  int v11; // edi
  int *v12; // eax
  int v13; // edi
  int v14; // eax
  bool v15; // [esp+17h] [ebp-83Dh]
  BSStringT v17; // [esp+1Ch] [ebp-838h] BYREF
  BSStringT v18; // [esp+24h] [ebp-830h] BYREF
  int v19; // [esp+2Ch] [ebp-828h]
  int v20; // [esp+30h] [ebp-824h]
  BSStringT v21; // [esp+34h] [ebp-820h] BYREF
  int v22; // [esp+3Ch] [ebp-818h] BYREF
  int v23; // [esp+40h] [ebp-814h] BYREF
  char v24[2048]; // [esp+44h] [ebp-810h] BYREF
  int v25; // [esp+850h] [ebp-4h]

  v3 = this; /*0x585cd4*/
  v17.m_data = 0; /*0x585ce1*/
  v17.m_dataLen = 0; /*0x585ce5*/
  v17.m_bufLen = 0; /*0x585cea*/
  v25 = 0; /*0x585cf5*/
  BSStringT_Format(&v17, Format, ArgList); /*0x585cfc*/
  v4 = dword_B13994; /*0x585d01*/
  v23 = 0x4B0; /*0x585d07*/
  v22 = 0; /*0x585d0f*/
  Singleton = FontManager_GetSingleton(); /*0x585d16*/
  v19 = sub_574A80((_DWORD *)Singleton[v4 - 1], &v17, &v23, &v22, 0, 0); /*0x585d38*/
  if ( v19 )
  {
    v6 = 0; /*0x585d4a*/
    v7 = v17.m_data - v24; /*0x585d4c*/
    while ( 1 )
    {
      v8 = v17.m_dataLen == (__int16)0xFFFF ? strlen(v17.m_data) : (unsigned __int16)v17.m_dataLen;
      if ( v6 > v8 ) /*0x585d74*/
        break; /*0x585d74*/
      v24[v6] = v24[v6 + v7]; /*0x585d7d*/
      ++v6; /*0x585d7f*/
    }
    v9 = v24; /*0x585d88*/
    v20 = 0; /*0x585d8c*/
    if ( v19 > 0 ) /*0x585d90*/
    {
      v10 = (int **)(v3 + 1); /*0x585d96*/
      do /*0x585eab*/
      {
        v15 = v3[0xB] == v3[4]; /*0x585dac*/
        v18.m_data = 0; /*0x585db1*/
        v18.m_dataLen = 0; /*0x585db5*/
        v18.m_bufLen = 0; /*0x585dba*/
        LOBYTE(v25) = 1; /*0x585dc5*/
        BSStringT_Set(&v18, v9, 0); /*0x585dcd*/
        v11 = ((int (__thiscall *)(int **))(*v10)[1])(v10); /*0x585ddf*/
        BSStringT_Set((BSStringT *)(v11 + 8), v18.m_data, 0); /*0x585de6*/
        *(_DWORD *)v11 = 0; /*0x585deb*/
        *(_DWORD *)(v11 + 4) = v10[2]; /*0x585df0*/
        v12 = v10[2]; /*0x585df3*/
        if ( v12 ) /*0x585df8*/
          *v12 = v11; /*0x585dfa*/
        else
          v10[1] = (int *)v11; /*0x585dfe*/
        v10[3] = (int *)((char *)v10[3] + 1); /*0x585e01*/
        v10[2] = (int *)v11; /*0x585e09*/
        if ( v15 ) /*0x585e10*/
          *(this + 0xB) = *(this + 4); /*0x585e15*/
        while ( *(this + 4) > dword_B13984 ) /*0x585e29*/
        {
          sub_585AC0(v10, &v21); /*0x585e32*/
          FormHeapFree((unsigned int)v21.m_data); /*0x585e3c*/
          --*(this + 0xB); /*0x585e44*/
          v21.m_data = 0; /*0x585e48*/
          v21.m_bufLen = 0; /*0x585e4c*/
          v21.m_dataLen = 0; /*0x585e51*/
        }
        v13 = v20 + 1; /*0x585e5c*/
        if ( v20 + 1 < v19 ) /*0x585e63*/
        {
          for ( ; *v9; ++v9 ) /*0x585e65*/
            ; /*0x585e70*/
          ++v9; /*0x585e78*/
        }
        LOBYTE(v25) = 0; /*0x585e80*/
        FormHeapFree((unsigned int)v18.m_data); /*0x585e87*/
        v14 = v13; /*0x585e8c*/
        v3 = this; /*0x585e8e*/
        v18.m_data = 0; /*0x585e99*/
        v18.m_bufLen = 0; /*0x585e9d*/
        v18.m_dataLen = 0; /*0x585ea2*/
        v20 = v14; /*0x585ea7*/
      }
      while ( v14 < v19 ); /*0x585eab*/
    }
    if ( v3[0xB] == v3[4] ) /*0x585eb7*/
      sub_585620(v3); /*0x585ebb*/
  }
  FormHeapFree((unsigned int)v17.m_data); /*0x585ec5*/
}
