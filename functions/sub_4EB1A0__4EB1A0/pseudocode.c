void __thiscall sub_4EB1A0(_DWORD *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // esi
  const char *v8; // eax
  int ArgList; // [esp+18h] [ebp-28h]
  _DWORD *v10; // [esp+24h] [ebp-1Ch] BYREF
  BSStringT v11; // [esp+28h] [ebp-18h] BYREF
  int v12; // [esp+3Ch] [ebp-4h]

  v11.m_data = 0;
  v11.m_dataLen = 0;
  v11.m_bufLen = 0;
  v12 = 0;
  ArgList = 0xFFFFFFE0;
  do
  {
    v2 = 0x20 * ArgList;
    v3 = 0xFFFFFFE0;
    do
    {
      BSStringT_Static_Format(
        &v11,
        ".\\Data\\Meshes\\Landscape\\LOD\\%i.%02i.%02i.%i.NIF",
        *(_DWORD *)(*(this + 4) + 0xC),
        v2,
        0x20 * v3,
        0x20);
      if ( OBSE_g_FileFinder )
      {
        if ( OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, v11.m_data, 0, 0, 0xFFFFFFFF) )
        {
          v4 = FormHeapAlloc(0x10u);
          v5 = v4;
          LOBYTE(v12) = 1;
          if ( v4 )
          {
            *(_DWORD *)(v4 + 4) = this;
            v6 = (_DWORD *)FormHeapAlloc(0x60u);
            v10 = v6;
            LOBYTE(v12) = 2;
            if ( v6 )
              *(_DWORD *)v5 = sub_4EC650(v6, v5);
            else
              *(_DWORD *)v5 = 0;
            *(_WORD *)(v5 + 8) = 0;
            *(_WORD *)(v5 + 0xA) = 0;
          }
          else
          {
            v5 = 0;
          }
          *(_WORD *)(v5 + 8) = ArgList;
          *(_WORD *)(v5 + 0xA) = v3;
          v7 = ((__int16)ArgList << 0x10) | (unsigned __int16)v3;
          LOBYTE(v12) = 0;
          if ( NiTMap_GetAt(this, v7, &v10) )
          {
            PrintError(
              "Unable to add LOD for LOD space (%i, %i) because LOD already exists.",
              *(__int16 *)(v5 + 8),
              *(__int16 *)(v5 + 0xA));
          }
          else
          {
            NiTMap_SetAt(this, v7, v5);
            *(_DWORD *)(v5 + 4) = this;
          }
          v8 = (const char *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4) + 0xD4))(*(this + 4));
          sub_40FEC0("Found terrain LOD file for %i, %i in worldspace '%s'", ArgList, v3, v8);
          v2 = 0x20 * ArgList;
        }
      }
      ++v3;
    }
    while ( v3 < 0x20 );
    ++ArgList;
  }
  while ( ArgList < 0x20 );
  FormHeapFree((unsigned int)v11.m_data);
}
