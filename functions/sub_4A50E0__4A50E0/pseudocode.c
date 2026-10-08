// Verified: writes Sound data header + 4-byte RDMD metadata + a packed RDSD array of 12-byte records; record +0 is music type form pointer, +4/+8 Unknown.
void __thiscall TESRegionDataSound_Save(TESRegionDataSound *self)
{
  int v2; // eax
  unsigned int v3; // ebp
  bool v4; // zf
  TESRegionSoundNode *p_sounds; // esi
  TESRegionSoundNode *v6; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // edi
  unsigned int v9; // edx
  unsigned int *v10; // eax
  OblivionTESRegionSoundRecord *record; // ecx
  size_t v12; // [esp-4h] [ebp-28h]

  TESRegionData_SaveHeader(&self->base); /*0x4a5107*/
  v2 = ((int (__thiscall *)(TESRegionDataSound *))self->base.vtable[1].saveRegionDataHeader)(self); /*0x4a5113*/
  TESForm_PutCurrentChunkData4(0x444D4452, v2); /*0x4a511b*/
  v3 = 0; /*0x4a5123*/
  v4 = &self->sounds == 0; /*0x4a5125*/
  p_sounds = &self->sounds; /*0x4a5125*/
  v6 = p_sounds; /*0x4a5128*/
  if ( !v4 ) /*0x4a512a*/
  {
    do /*0x4a513d*/
    {
      if ( v6->record ) /*0x4a5130*/
        ++v3; /*0x4a5135*/
      v6 = v6->next; /*0x4a5138*/
    }
    while ( v6 ); /*0x4a513d*/
  }
  v7 = (unsigned int *)FormHeapAlloc((0xC * (unsigned __int64)v3) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v3);
  v8 = v7; /*0x4a5157*/
  if ( v7 ) /*0x4a516a*/
    sub_401080(v7, 0xC, v3, (void *(__thiscall *)(void *))sub_4A5040); /*0x4a5175*/
  else
    v8 = 0; /*0x4a517c*/
  v9 = 0; /*0x4a517e*/
  if ( p_sounds ) /*0x4a518a*/
  {
    v10 = v8; /*0x4a518c*/
    do /*0x4a51b5*/
    {
      record = p_sounds->record; /*0x4a5190*/
      if ( !p_sounds->record ) /*0x4a5190*/
        break; /*0x4a5194*/
      if ( v9 >= v3 ) /*0x4a5198*/
        break; /*0x4a5198*/
      *v10 = record->musicType; /*0x4a519c*/
      v10[1] = record->unknown04; /*0x4a51a1*/
      v10[2] = record->unknown08; /*0x4a51a7*/
      p_sounds = p_sounds->next; /*0x4a51aa*/
      ++v9; /*0x4a51ad*/
      v10 += 3; /*0x4a51b0*/
    }
    while ( p_sounds ); /*0x4a51b5*/
  }
  LODWORD(v12) = 0xC * v3; /*0x4a51bf*/
  TESForm_PutFormRecordChunkData(0x44534452, v8, v12); /*0x4a51c6*/
  FormHeapFree((unsigned int)v8); /*0x4a51cc*/
}
