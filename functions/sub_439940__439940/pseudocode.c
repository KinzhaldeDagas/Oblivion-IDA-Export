void __thiscall sub_439940(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  char v4; // al
  int v5; // edi
  int v6; // eax
  int v7; // eax
  ArchiveFile *FileInBSA; // edi
  char *v9; // eax
  const char **v10; // eax
  const char **v11; // edi
  int v12; // eax
  _DWORD v13[2]; // [esp+14h] [ebp-5ACh] BYREF
  _DWORD v14[292]; // [esp+1Ch] [ebp-5A4h] BYREF
  char Src[260]; // [esp+4ACh] [ebp-114h] BYREF
  unsigned int v16; // [esp+5BCh] [ebp-4h]

  v2 = *(this + 8);
  v3 = *((_DWORD *)ModelLoaderPtr + 1);
  v13[0] = 0;
  v4 = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)v3 + 4))(v3, v2, v13);
  v5 = v4 != 0 ? v13[0] : 0;
  v6 = *(this + 0xA);
  if ( v6 != v5 )
  {
    if ( v6 )
      InterlockedDecrement((volatile LONG *)(v6 + 0xC));
    *(this + 0xA) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 0xC));
  }
  if ( *(this + 0xA) )
  {
    *((_BYTE *)this + 0x2C) |= 1u;
  }
  else
  {
    sub_434710((char *)*(this + 8), Src);
    v7 = *(this + 9);
    if ( v7 )
    {
      FileInBSA = sub_42EBC0(0, v7, 0xFFFFFFFF, 0);
    }
    else
    {
      v9 = (char *)*(this + 8);
      if ( v9 )
        FileInBSA = ArchiveManager_FindFileInBSA(v9, 0xFFFFFFFF, 1);
      else
        FileInBSA = 0;
    }
    NiStream::NiStream((NiStream *)v14);
    v14[0] = &BSStream::`vftable';
    v14[0x123] = 0;
    v14[0x122] = 0;
    v16 = 0;
    if ( sub_6F9980((char *)v14, Src, (int)FileInBSA) )
    {
      v10 = (const char **)FormHeapAlloc(0x10u);
      v13[1] = v10;
      LOBYTE(v16) = 1;
      if ( v10 )
        v11 = sub_439140(v10, (char *)*(this + 8), (int)v14);
      else
        v11 = 0;
      v12 = *(this + 0xA);
      if ( (const char **)v12 != v11 )
      {
        if ( v12 )
          InterlockedDecrement((volatile LONG *)(v12 + 0xC));
        *(this + 0xA) = v11;
        if ( v11 )
          InterlockedIncrement((volatile LONG *)v11 + 3);
      }
    }
    v16 = 0xFFFFFFFF;
    BSStream::~BSStream((BSStream *)v14);
  }
}
