char __thiscall sub_4F9700(TESForm *this, Data *a1)
{
  signed int i; // eax
  const char *v4; // eax
  char *v5; // ebx
  _DWORD *v6; // eax
  int v8; // [esp-4h] [ebp-14h]
  int v9[3]; // [esp+0h] [ebp-10h] BYREF

  TESFile_InitializeFormFromRecord(a1, this, v9[0], v9[1]);
  TESForm_SetIsLinked(this, 0);
  for ( i = TESFile_GetChunkType(a1); i; i = TESFile_GetChunkType(a1) )
  {
    if ( i > 0x4D414E46 )
    {
      if ( i == 0x4D414E4C )
      {
        v5 = (char *)FormHeapAlloc(0xCu);
        TESFile_GetChunkData(a1, v5, 0xCu);
        if ( v5 )
        {
          if ( *((_DWORD *)this + 0xB) )
          {
            v6 = (_DWORD *)FormHeapAlloc(8u);
            if ( v6 )
            {
              *v6 = *((_DWORD *)this + 0xB);
              v6[1] = 0;
            }
            else
            {
              v6 = 0;
            }
            v6[1] = *((_DWORD *)this + 0xC);
            *((_DWORD *)this + 0xC) = v6;
          }
          *((_DWORD *)this + 0xB) = v5;
        }
      }
      else if ( i == 0x4E4F4349 )
      {
        if ( this )
          TESTexture_Load((int)(this + 1), a1);
        else
          TESTexture_Load(0, a1);
      }
    }
    else
    {
      switch ( i )
      {
        case 0x4D414E46:
          v4 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(
                               this,
                               this->member.refID);
          PrintError("File %s contains old data for loadscreen %s (%08X).", a1->name, v4, v8);
          break;
        case 0x43534544:
          _alloca_();
          TESFile_GetChunkData(a1, (char *)v9, 0);
          BSStringT_Set((BSStringT *)((char *)this + 0x34), (const char *)v9, 0);
          break;
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a1, (char *)v9, 0x200u);
          this->vtbl->SetEditorID(this, (const char *)v9);
          break;
      }
    }
    if ( !TESFile_GetNextChunk(a1) )
      break;
  }
  return 1;
}
