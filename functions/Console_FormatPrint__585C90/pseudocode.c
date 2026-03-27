void __thiscall Console_FormatPrint(_DWORD *this, char *Format, va_list ArgList)
{
  double v3; // st6
  double v4; // st7
  _DWORD *v5; // edi
  int v6; // esi
  _DWORD *Singleton; // eax
  unsigned int v8; // esi
  int v9; // ebp
  unsigned int v10; // eax
  char *v11; // ebp
  int **v12; // esi
  int v13; // edi
  int *v14; // eax
  int v15; // edi
  int v16; // eax
  bool v17; // [esp+17h] [ebp-83Dh]
  BSStringT v19; // [esp+1Ch] [ebp-838h] BYREF
  BSStringT v20; // [esp+24h] [ebp-830h] BYREF
  int v21; // [esp+2Ch] [ebp-828h]
  int v22; // [esp+30h] [ebp-824h]
  BSStringT v23; // [esp+34h] [ebp-820h] BYREF
  int v24; // [esp+3Ch] [ebp-818h] BYREF
  int v25; // [esp+40h] [ebp-814h] BYREF
  char v26[2048]; // [esp+44h] [ebp-810h] BYREF
  int v27; // [esp+850h] [ebp-4h]

  v5 = this;
  v19.m_data = 0;
  v19.m_dataLen = 0;
  v19.m_bufLen = 0;
  v27 = 0;
  BSStringT_Format(&v19, Format, ArgList);
  v6 = dword_B13994;
  v25 = 0x4B0;
  v24 = 0;
  Singleton = FontManager_GetSingleton();
  v21 = sub_574A80((_DWORD *)Singleton[v6 - 1], (const char **)&v19.m_data, &v25, &v24, 0, 0);
  if ( v21 )
  {
    v8 = 0;
    v9 = v19.m_data - v26;
    while ( 1 )
    {
      v10 = v19.m_dataLen == (__int16)0xFFFF ? strlen(v19.m_data) : (unsigned __int16)v19.m_dataLen;
      if ( v8 > v10 )
        break;
      v26[v8] = v26[v8 + v9];
      ++v8;
    }
    v11 = v26;
    v22 = 0;
    if ( v21 > 0 )
    {
      v12 = (int **)(v5 + 1);
      do
      {
        v17 = v5[0xB] == v5[4];
        v20.m_data = 0;
        v20.m_dataLen = 0;
        v20.m_bufLen = 0;
        LOBYTE(v27) = 1;
        BSStringT_Set(&v20, v11, 0);
        v13 = ((int (__thiscall *)(int **))(*v12)[1])(v12);
        BSStringT_Set((BSStringT *)(v13 + 8), v20.m_data, 0);
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = v12[2];
        v14 = v12[2];
        if ( v14 )
          *v14 = v13;
        else
          v12[1] = (int *)v13;
        v12[3] = (int *)((char *)v12[3] + 1);
        v12[2] = (int *)v13;
        if ( v17 )
          *(this + 0xB) = *(this + 4);
        while ( *(this + 4) > dword_B13984 )
        {
          sub_585AC0(v12, &v23);
          FormHeapFree((unsigned int)v23.m_data);
          --*(this + 0xB);
          v23.m_data = 0;
          v23.m_bufLen = 0;
          v23.m_dataLen = 0;
        }
        v15 = v22 + 1;
        if ( v22 + 1 < v21 )
        {
          for ( ; *v11; ++v11 )
            ;
          ++v11;
        }
        LOBYTE(v27) = 0;
        FormHeapFree((unsigned int)v20.m_data);
        v16 = v15;
        v5 = this;
        v20.m_data = 0;
        v20.m_bufLen = 0;
        v20.m_dataLen = 0;
        v22 = v16;
      }
      while ( v16 < v21 );
    }
    if ( v5[0xB] == v5[4] )
      sub_585620(v5, (unsigned int)v11, v3, v4);
  }
  FormHeapFree((unsigned int)v19.m_data);
}
