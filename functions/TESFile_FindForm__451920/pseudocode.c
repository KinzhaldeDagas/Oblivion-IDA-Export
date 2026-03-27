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

  v13 = 0;
  if ( a2 )
  {
    if ( this->headerRead )
    {
      bsFile = this->bsFile;
      if ( bsFile )
      {
        if ( *((_BYTE *)bsFile + 0x24) )
        {
          a2->vtbl->SeekRecordTypeFast(a2, this);
          if ( v5 )
            return 1;
          TESFile_JumpToBOF(this, 1);
          p_currentRecord = &this->currentRecord;
          if ( this->currentRecord.chunkInfo.type == dword_B05E14 )
          {
            do
              TESFile_NextRecordEx(this, 1);
            while ( p_currentRecord->chunkInfo.type == dword_B05E14 );
          }
          v8 = *(TESForm **)(0xC * ((int (__thiscall *)(TESForm *))a2->vtbl->Unk_1C)(a2) + 0xB05E08);
          refID = a2->member.refID;
          type = (TESForm *)p_currentRecord->chunkInfo.type;
          v15 = v8;
          for ( i = 1; p_currentRecord->chunkInfo.type; type = (TESForm *)p_currentRecord->chunkInfo.type )
          {
            if ( !i )
              return v13;
            if ( type == (TESForm *)dword_B05E20 )
            {
              v11 = ((int (__thiscall *)(TESForm *, Data::FormInfo *, int, _DWORD))a2->vtbl->Unk_2F)(
                      a2,
                      &this->currentRecord,
                      1,
                      0);
              v12 = this;
              if ( v11 )
                goto LABEL_18;
              TESFile::NextGroup(this);
            }
            else
            {
              if ( type != v15 || this->currentRecord.formID != refID )
              {
                v12 = this;
LABEL_18:
                TESFile_NextRecordEx(v12, 1);
                continue;
              }
              i = 0;
              v13 = 1;
            }
          }
        }
      }
    }
  }
  return v13;
}
