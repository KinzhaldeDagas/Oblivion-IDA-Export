void __cdecl ActiveEffect_Base_SaveAEList_::CheckRecordVersion_(int a1, int a2, int a3, int a4, _WORD *a5)
{
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x68dfeb*/
    ActiveEffect_Base_SaveAEList_::SetOldHeader(a1, a2, a3, a4, a5); /*0x68dff3*/
  else
    ActiveEffect_Base_SaveAEList_::Epilogue(); /*0x68dff2*/
}
