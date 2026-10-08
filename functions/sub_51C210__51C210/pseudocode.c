// Load an Oblivion CLAS record. DATA is a fixed 0x34-byte payload containing two attributes, specialization, seven majors, flags/services, and training data. Invalid uniqueness/attribute data is reported after loading, but the routine still returns success; no minor list is loaded.
bool __thiscall TESClass_LoadForm(TESClass *this, Data *file)
{
  signed int i; // eax
  TESFullName *p_fullName; // eax
  const char *v6; // eax
  int v7[3]; // [esp+0h] [ebp-10h] BYREF

  if ( TESFile_GetRecordType(file) != 5 ) /*0x51c230*/
    return 0; /*0x51c232*/
  TESFile_InitializeFormFromRecord(file, (TESForm *)this, v7[0], v7[1]); /*0x51c23c*/
  for ( i = TESFile_GetChunkType(file); i; i = TESFile_GetChunkType(file) ) /*0x51c24a*/
  {
    if ( i > 0x44494445 ) /*0x51c255*/
    {
      if ( i == 0x4C4C5546 ) /*0x51c2c7*/
      {
        if ( this ) /*0x51c2ed*/
          p_fullName = &this->members.fullName; /*0x51c2ef*/
        else
          p_fullName = 0; /*0x51c2f4*/
        TESFullname_Load(p_fullName, file); /*0x51c2f8*/
      }
      else if ( i == 0x4E4F4349 ) /*0x51c2ce*/
      {
        if ( this ) /*0x51c2d2*/
          TESTexture_Load((int)&this->members.texture, file); /*0x51c2d9*/
        else
          TESTexture_Load(0, file); /*0x51c2e4*/
      }
    }
    else
    {
      switch ( i ) /*0x51c257*/
      {
        case 0x44494445: /*0x51c257*/
          _alloca_(v7[0]); /*0x51c29f*/
          TESFile_GetChunkData(file, (char *)v7, 0x200u); /*0x51c2ae*/
          this->__vftable->super.SetEditorID((TESForm *)this, (const char *)v7); /*0x51c2be*/
          break;
        case 0x41544144: /*0x51c257*/
          TESForm_LoadGenericComponents((TESForm *)this, file, this->members.attributes, 0x34u); /*0x51c292*/
          break;
        case 0x43534544: /*0x51c257*/
          if ( this ) /*0x51c26d*/
            TESDescription_Load((int)&this->members.description, (int)file); /*0x51c274*/
          else
            TESDescription_Load(0, (int)file); /*0x51c282*/
          break;
      }
    }
    if ( !TESFile_GetNextChunk(file) ) /*0x51c302*/
      break; /*0x51c309*/
  }
  if ( !TESClass_ValidateData(this) )           // Post-load validation failure only emits an error; the CLAS record remains loaded and this function returns true. /*0x51c31c*/
  {
    v6 = this->__vftable->super.GetEditorName(this); /*0x51c32f*/
    PrintError("Class %s contains invalid data. Make sure all attributes and skills are unique.", v6); /*0x51c337*/
  }
  return 1; /*0x51c344*/
}
