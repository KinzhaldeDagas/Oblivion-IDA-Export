char __thiscall TESFile::FindForm(Data *this, TESForm *a2)
{
  BSFile *bsFile; // eax
  bool v5; // al
  Data::FormInfo *p_currentRecord; // ebp
  TESForm *v8; // edx
  TESForm *type; // eax
  char i; // bl
  char v11; // al
  Data *v12; // ecx
  char v13; // [esp+Bh] [ebp-5h]
  UInt32 refID; // [esp+Ch] [ebp-4h]
  TESForm *v15; // [esp+14h] [ebp+4h]

  v13 = 0; /*0x45192d*/
  if ( a2 ) /*0x451932*/
  {
    if ( this->headerRead ) /*0x451938*/
    {
      bsFile = this->bsFile; /*0x451945*/
      if ( bsFile ) /*0x45194a*/
      {
        if ( *((_BYTE *)bsFile + 0x24) ) /*0x451950*/
        {
          a2->vtbl->SeekRecordTypeFast(a2, this); /*0x451962*/
          if ( v5 ) /*0x451966*/
            return 1; /*0x45196f*/
          TESFile_JumpToBOF(this, 1); /*0x451977*/
          p_currentRecord = &this->currentRecord; /*0x451988*/
          if ( this->currentRecord.chunkInfo.type == dword_B05E14 ) /*0x45198e*/
          {
            do /*0x4519a2*/
              TESFile_NextRecordEx(this, 1); /*0x451994*/
            while ( p_currentRecord->chunkInfo.type == dword_B05E14 ); /*0x4519a2*/
          }
          v8 = *(TESForm **)(0xC * ((int (__thiscall *)(TESForm *))a2->vtbl->Unk_1C)(a2) + 0xB05E08); /*0x4519b4*/
          refID = a2->member.refID; /*0x4519bb*/
          type = (TESForm *)p_currentRecord->chunkInfo.type; /*0x4519bf*/
          v15 = v8; /*0x4519c4*/
          for ( i = 1; p_currentRecord->chunkInfo.type; type = (TESForm *)p_currentRecord->chunkInfo.type ) /*0x4519bf*/
          {
            if ( !i ) /*0x4519d2*/
              return v13; /*0x4519d2*/
            if ( type == (TESForm *)dword_B05E20 ) /*0x4519da*/
            {
              v11 = ((int (__thiscall *)(TESForm *, Data::FormInfo *, int, _DWORD))a2->vtbl->Unk_2F)( /*0x4519eb*/
                      a2,
                      &this->currentRecord,
                      1,
                      0);
              v12 = this; /*0x4519ef*/
              if ( v11 ) /*0x4519f1*/
                goto LABEL_18; /*0x4519f1*/
              TESFile::NextGroup(this); /*0x4519f3*/
            }
            else
            {
              if ( type != v15 || this->currentRecord.formID != refID ) /*0x451a0a*/
              {
                v12 = this; /*0x451a15*/
LABEL_18:
                TESFile_NextRecordEx(v12, 1); /*0x451a17*/
                continue; /*0x451a19*/
              }
              i = 0; /*0x451a0c*/
              v13 = 1; /*0x451a0e*/
            }
          }
        }
      }
    }
  }
  return v13; /*0x451968*/
}
