// Oblivion TESTopic::LoadForm recognizes XIDX (unlike TESCS TESTopic_LoadForm 0x4F02D0) and writes it to the separate TESTopic.unk30 U32 field using GetChunkData4. This is raw runtime scalar storage; this loader performs no FormID resolution for XIDX. The TESCS loader's QSTI/QSTR quest-list paths are separate.
bool __thiscall TESTopic::LoadForm(TESTopic *this, void *tesFile)
{
  signed int i; // eax
  Data *OverrideFile; // eax
  int *v6; // eax
  int *v7; // esi
  TESFullName *p_fullname; // eax
  int v9[3]; // [esp+0h] [ebp-14h] BYREF
  int v10; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType((Data *)tesFile) != 0x39 ) /*0x530201*/
    return 0; /*0x530203*/
  TESFile_InitializeFormFromRecord((Data *)tesFile, (TESForm *)this, v9[0], v9[1]); /*0x53020d*/
  for ( i = TESFile_GetChunkType((Data *)tesFile); i; i = TESFile_GetChunkType((Data *)tesFile) ) /*0x53021b*/
  {
    if ( i > 0x49545351 ) /*0x530226*/
    {
      if ( i == 0x4C4C5546 ) /*0x5302d6*/
      {
        if ( this ) /*0x5302ee*/
          p_fullname = &this->fullname; /*0x5302f0*/
        else
          p_fullname = 0; /*0x5302f5*/
        TESFullname_Load(p_fullname, (Data *)tesFile); /*0x5302f9*/
      }
      else if ( i == 0x58444958 )               // DIAL XIDX branch: TESFile_GetChunkData4 writes directly into TESTopic.unk30 at 0x5302E5. This is distinct from DATA/topicType at 0x530274. Bounded widths overlay the field; size>4 gets the maxSize-1 forced-zero path, and size0 preserves it. /*0x5302dd*/
      {
        TESFile_GetChunkData4((Data *)tesFile, (char *)&this->unk30); /*0x5302e5*/
      }
    }
    else
    {
      switch ( i ) /*0x53022c*/
      {
        case 0x49545351: /*0x53022c*/
          v10 = 0; /*0x530284*/
          TESFile_GetChunkData4((Data *)tesFile, (char *)&v10); /*0x53028b*/
          OverrideFile = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF); /*0x530294*/
          TESForm_ResolveFormID((UInt32 *)&v10, OverrideFile); /*0x53029e*/
          v6 = sub_52FC40((int **)this, v10, 0); /*0x5302ae*/
          v7 = v6; /*0x5302b3*/
          if ( v6 ) /*0x5302b7*/
          {
            NiTLargeArray_Resize32((unsigned int *)v6 + 1, v6[3] + 0x64); /*0x5302c3*/
            v7[6] = 0xA; /*0x5302c8*/
          }
          break;
        case 0x41544144: /*0x53022c*/
          TESFile_GetChunkData((Data *)tesFile, (char *)&this->topicType, 1u);// DIAL/DATA writes directly to the existing topicType byte with GetChunkData(maxSize=1). Zero bytes preserve current state; one byte assigns its value; overlong sizes force zero and copy no payload bytes. Repeated DATA entries are replayed in order. /*0x530274*/
          break;
        case 0x44494445: /*0x53022c*/
          _alloca_(v9[0]); /*0x530246*/
          TESFile_GetChunkData((Data *)tesFile, (char *)v9, 0x200u); /*0x530255*/
          this->vtbl->SetEditorID((TESForm *)this, (const char *)v9); /*0x530265*/
          break;
      }
    }
    if ( !TESFile_GetNextChunk((Data *)tesFile) ) /*0x530303*/
      break; /*0x53030a*/
  }
  unk_B3650C = (int)this; /*0x53031b*/
  return 1; /*0x530326*/
}
