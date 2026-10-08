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

  v2 = *(this + 8); /*0x439983*/
  v3 = *((_DWORD *)MEMORY[0xB33A1C] + 1); /*0x439986*/
  v13[0] = 0; /*0x43998f*/
  v4 = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)v3 + 4))(v3, v2, v13); /*0x43999a*/
  v5 = v4 != 0 ? v13[0] : 0;
  v6 = *(this + 0xA); /*0x4399ac*/
  if ( v6 != v5 ) /*0x4399b1*/
  {
    if ( v6 ) /*0x4399b5*/
      InterlockedDecrement((volatile LONG *)(v6 + 0xC)); /*0x4399bb*/
    *(this + 0xA) = v5; /*0x4399bf*/
    if ( v5 ) /*0x4399c2*/
      InterlockedIncrement((volatile LONG *)(v5 + 0xC)); /*0x4399c8*/
  }
  if ( *(this + 0xA) ) /*0x4399ce*/
  {
    *((_BYTE *)this + 0x2C) |= 1u; /*0x4399d3*/
  }
  else
  {
    sub_434710((char *)*(this + 8), Src); /*0x4399ee*/
    v7 = *(this + 9); /*0x4399f3*/
    if ( v7 ) /*0x4399f8*/
    {
      FileInBSA = sub_42EBC0(0, v7, 0xFFFFFFFF, 0); /*0x439a07*/
    }
    else
    {
      v9 = (char *)*(this + 8); /*0x439a0b*/
      if ( v9 ) /*0x439a10*/
        FileInBSA = ArchiveManager_FindFileInBSA(v9, 0xFFFFFFFF, 1); /*0x439a1f*/
      else
        FileInBSA = 0; /*0x439a23*/
    }
    NiStream::NiStream((NiStream *)v14); /*0x439a29*/
    v14[0] = &BSStream::`vftable'; /*0x439a2e*/
    v14[0x123] = 0; /*0x439a36*/
    v14[0x122] = 0; /*0x439a3d*/
    v16 = 0; /*0x439a51*/
    if ( sub_6F9980((char *)v14, Src, (void (__thiscall ***)(_DWORD, int))FileInBSA) ) /*0x439a58*/
    {
      v10 = (const char **)FormHeapAlloc(0x10u); /*0x439a63*/
      v13[1] = v10; /*0x439a6b*/
      LOBYTE(v16) = 1; /*0x439a71*/
      if ( v10 ) /*0x439a79*/
        v11 = sub_439140(v10, (char *)*(this + 8), (UInt32)v14); /*0x439a8b*/
      else
        v11 = 0; /*0x439a8f*/
      v12 = *(this + 0xA); /*0x439a91*/
      if ( (const char **)v12 != v11 ) /*0x439a96*/
      {
        if ( v12 ) /*0x439a9a*/
          InterlockedDecrement((volatile LONG *)(v12 + 0xC)); /*0x439aa0*/
        *(this + 0xA) = v11; /*0x439aa4*/
        if ( v11 ) /*0x439aa7*/
          InterlockedIncrement((volatile LONG *)v11 + 3); /*0x439aad*/
      }
    }
    v16 = 0xFFFFFFFF; /*0x439ab7*/
    BSStream::~BSStream((BSStream *)v14); /*0x439ac2*/
  }
}
