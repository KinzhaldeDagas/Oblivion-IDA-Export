// Queued texture/model stream loader. Checks model-loader cache for the requested path, otherwise opens archive/loose file data and builds the stream-backed object.
void __thiscall QueuedTexture_LoadModelStream(_DWORD *this)
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

  v2 = *(this + 8); /*0x439443*/
  v3 = *(_DWORD *)MEMORY[0xB33A1C]; /*0x439446*/
  v13 = 0; /*0x43944e*/
  v4 = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)v3 + 4))(v3, v2, &v13); /*0x439459*/
  v5 = v4 != 0 ? v13 : 0;
  v6 = *(this + 0xA); /*0x43946b*/
  if ( v6 != v5 ) /*0x439470*/
  {
    if ( v6 ) /*0x439474*/
      InterlockedDecrement((volatile LONG *)(v6 + 4)); /*0x43947a*/
    *(this + 0xA) = v5; /*0x43947e*/
    if ( v5 ) /*0x439481*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x439487*/
  }
  if ( *(this + 0xA) ) /*0x43948d*/
  {
    *((_BYTE *)this + 0x34) |= 0x10u; /*0x439492*/
  }
  else
  {
    sub_434710((char *)*(this + 8), Src); /*0x4394ad*/
    v7 = *(this + 9); /*0x4394b2*/
    if ( v7 ) /*0x4394b7*/
    {
      FileInBSA = sub_42EBC0(0, v7, 0xFFFFFFFF, 0); /*0x4394c6*/
    }
    else
    {
      v9 = (char *)*(this + 8); /*0x4394ca*/
      if ( v9 ) /*0x4394cf*/
        FileInBSA = ArchiveManager_FindFileInBSA(v9, 0xFFFFFFFF, 1); /*0x4394de*/
      else
        FileInBSA = 0; /*0x4394e2*/
    }
    NiStream::NiStream((NiStream *)v16); /*0x4394e8*/
    v16[0] = &BSStream::`vftable'; /*0x4394ed*/
    v16[0x123] = 0; /*0x4394f5*/
    v16[0x122] = 0; /*0x4394fc*/
    v18 = 0; /*0x439510*/
    if ( sub_6F9980((char *)v16, Src, (void (__thiscall ***)(_DWORD, int))FileInBSA) /*0x439524*/
      || (*(_BYTE *)(this + 0xD) & 0x20) != 0 )
    {
      v10 = (volatile LONG *)FormHeapAlloc(0xCu); /*0x439528*/
      v15 = v10; /*0x439530*/
      LOBYTE(v18) = 1; /*0x439536*/
      if ( v10 ) /*0x43953e*/
      {
        LOBYTE(v14) = *(_BYTE *)(this + 0xD) & 1; /*0x439546*/
        v11 = sub_4390B0(v10, (const char *)*(this + 8), (char *)v16, v14); /*0x43955f*/
      }
      else
      {
        v11 = 0; /*0x439563*/
      }
      v12 = (volatile LONG *)*(this + 0xA); /*0x439565*/
      if ( v12 != v11 ) /*0x43956a*/
      {
        if ( v12 ) /*0x43956e*/
          InterlockedDecrement(v12 + 1); /*0x439574*/
        *(this + 0xA) = v11; /*0x439578*/
        if ( v11 ) /*0x43957b*/
          InterlockedIncrement(v11 + 1); /*0x439581*/
      }
    }
    v18 = 0xFFFFFFFF; /*0x43958b*/
    BSStream::~BSStream((BSStream *)v16); /*0x439596*/
  }
}
