void __stdcall EffectSetting_LoadForm(Data *a1)
{
  if ( TESFile_GetRecordType(a1) == 0xC ) /*0x416122*/
    EffectSetting_LoadForm_::LoadFirstChunk(a1); /*0x416122*/
  else
    EffectSetting_LoadForm_::Done((int)a1); /*0x416126*/
}
