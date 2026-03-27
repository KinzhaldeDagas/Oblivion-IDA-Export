void __stdcall EffectSetting_LoadForm(Data *a1)
{
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  if ( TESFile_GetRecordType(a1) == 0xC )
    EffectSetting_LoadForm_::LoadFirstChunk(a1);
  else
    EffectSetting_LoadForm_::Done((int)&savedregs, (int)a1);
}
