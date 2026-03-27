void __thiscall sub_439400(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  char v4; // al
  int v5; // edi
  int v6; // eax
  int v7; // eax
  ArchiveFile *FileInBSA; // edi
  char *v9; // eax
  volatile LONG *v10; // eax
  volatile LONG *v11; // edi
  volatile LONG *v12; // eax
  int v13; // [esp+14h] [ebp-5B0h] BYREF
  int v14; // [esp+18h] [ebp-5ACh]
  volatile LONG *v15; // [esp+1Ch] [ebp-5A8h]
  _DWORD v16[292]; // [esp+20h] [ebp-5A4h] BYREF
  char Src[260]; // [esp+4B0h] [ebp-114h] BYREF
  unsigned int v18; // [esp+5C0h] [ebp-4h]

  v2 = *(this + 8);
  v3 = *(_DWORD *)ModelLoaderPtr;
  v13 = 0;
  v4 = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)v3 + 4))(v3, v2, &v13);
  v5 = v4 != 0 ? v13 : 0;
  v6 = *(this + 0xA);
  if ( v6 != v5 )
  {
    if ( v6 )
      InterlockedDecrement((volatile LONG *)(v6 + 4));
    *(this + 0xA) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  if ( *(this + 0xA) )
  {
    *((_BYTE *)this + 0x34) |= 0x10u;
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
    NiStream::NiStream((NiStream *)v16);
    v16[0] = &BSStream::`vftable';
    v16[0x123] = 0;
    v16[0x122] = 0;
    v18 = 0;
    if ( sub_6F9980((char *)v16, Src, (int)FileInBSA) || (*(_BYTE *)(this + 0xD) & 0x20) != 0 )
    {
      v10 = (volatile LONG *)FormHeapAlloc(0xCu);
      v15 = v10;
      LOBYTE(v18) = 1;
      if ( v10 )
      {
        LOBYTE(v14) = *(_BYTE *)(this + 0xD) & 1;
        v11 = sub_4390B0(v10, (const char *)*(this + 8), (char *)v16, v14);
      }
      else
      {
        v11 = 0;
      }
      v12 = (volatile LONG *)*(this + 0xA);
      if ( v12 != v11 )
      {
        if ( v12 )
          InterlockedDecrement(v12 + 1);
        *(this + 0xA) = v11;
        if ( v11 )
          InterlockedIncrement(v11 + 1);
      }
    }
    v18 = 0xFFFFFFFF;
    BSStream::~BSStream((BSStream *)v16);
  }
}
