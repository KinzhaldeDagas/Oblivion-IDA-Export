char __thiscall sub_4F9700(TESForm *this, Data *a1)
{
  signed int i; // eax
  const char *v4; // eax
  char *v5; // ebx
  _DWORD *v6; // eax
  int v8; // [esp-4h] [ebp-14h]
  int v9[3]; // [esp+0h] [ebp-10h] BYREF

  TESFile_InitializeFormFromRecord(a1, this, v9[0], v9[1]); /*0x4f9719*/
  TESForm_SetIsLinked(this, 0); /*0x4f9722*/
  for ( i = TESFile_GetChunkType(a1); i; i = TESFile_GetChunkType(a1) ) /*0x4f9730*/
  {
    if ( i > 0x4D414E46 ) /*0x4f9745*/
    {
      if ( i == 0x4D414E4C ) /*0x4f97db*/
      {
        v5 = (char *)FormHeapAlloc(0xCu); /*0x4f980f*/
        TESFile_GetChunkData(a1, v5, 0xCu); /*0x4f9816*/
        if ( v5 ) /*0x4f981d*/
        {
          if ( *((_DWORD *)this + 0xB) ) /*0x4f981f*/
          {
            v6 = (_DWORD *)FormHeapAlloc(8u); /*0x4f9827*/
            if ( v6 ) /*0x4f9831*/
            {
              *v6 = *((_DWORD *)this + 0xB); /*0x4f9836*/
              v6[1] = 0; /*0x4f9838*/
            }
            else
            {
              v6 = 0; /*0x4f9841*/
            }
            v6[1] = *((_DWORD *)this + 0xC); /*0x4f9846*/
            *((_DWORD *)this + 0xC) = v6; /*0x4f9849*/
          }
          *((_DWORD *)this + 0xB) = v5; /*0x4f984c*/
        }
      }
      else if ( i == 0x4E4F4349 ) /*0x4f97e2*/
      {
        if ( this ) /*0x4f97e6*/
          TESTexture_Load((int)(this + 1), a1); /*0x4f97ed*/
        else
          TESTexture_Load(0, a1); /*0x4f97fb*/
      }
    }
    else
    {
      switch ( i ) /*0x4f974b*/
      {
        case 0x4D414E46: /*0x4f974b*/
          v4 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)( /*0x4f97c0*/
                               this,
                               this->member.refID);
          PrintError("File %s contains old data for loadscreen %s (%08X).", a1->name, v4, v8); /*0x4f97cc*/
          break;
        case 0x43534544: /*0x4f974b*/
          _alloca_(v9[0]); /*0x4f9791*/
          TESFile_GetChunkData(a1, (char *)v9, 0); /*0x4f979d*/
          BSStringT_Set((BSStringT *)((char *)this + 0x34), (const char *)v9, 0); /*0x4f97a8*/
          break;
        case 0x44494445: /*0x4f974b*/
          _alloca_(v9[0]); /*0x4f9765*/
          TESFile_GetChunkData(a1, (char *)v9, 0x200u); /*0x4f9774*/
          this->vtbl->SetEditorID(this, (const char *)v9); /*0x4f9784*/
          break;
      }
    }
    if ( !TESFile_GetNextChunk(a1) ) /*0x4f9851*/
      break; /*0x4f9858*/
  }
  return 1; /*0x4f986e*/
}
