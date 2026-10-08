void __thiscall sub_4246F0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax
  int v3; // esi
  int v4; // ecx

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_TresPassPackage); /*0x4246f6*/
  v3 = (int)ExtraData; /*0x4246fb*/
  if ( ExtraData ) /*0x4246ff*/
  {
    sub_566830((unsigned int *)ExtraData[1].vtbl, 1); /*0x424706*/
    if ( sub_45A500(g_TESSaveLoadGame) ) /*0x424711*/
    {
      TESSaveLoadGame_DeleteForm(g_TESSaveLoadGame, *(TESForm **)(v3 + 0xC)); /*0x424724*/
      *(_DWORD *)(v3 + 0xC) = 0; /*0x42472e*/
      BaseExtraList_RemoveExtraByPtr(this, v3, 1); /*0x424735*/
    }
    else
    {
      v4 = *(_DWORD *)(v3 + 0xC); /*0x42473d*/
      if ( v4 ) /*0x424742*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x10))(v4, 1); /*0x42474b*/
      *(_DWORD *)(v3 + 0xC) = 0; /*0x424752*/
      BaseExtraList_RemoveExtraByPtr(this, v3, 1); /*0x424759*/
    }
  }
}
