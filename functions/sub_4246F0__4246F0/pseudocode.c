void __thiscall sub_4246F0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax
  int v3; // esi
  int v4; // ecx

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_TresPassPackage);
  v3 = (int)ExtraData;
  if ( ExtraData )
  {
    sub_566830((unsigned int *)ExtraData[1].vtbl, 1);
    if ( sub_45A500(SaveLoad_CurrentSavegame) )
    {
      sub_45C7A0((char *)SaveLoad_CurrentSavegame, *(TESForm **)(v3 + 0xC));
      *(_DWORD *)(v3 + 0xC) = 0;
      BaseExtraList_RemoveExtraByPtr(this, v3, 1);
    }
    else
    {
      v4 = *(_DWORD *)(v3 + 0xC);
      if ( v4 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x10))(v4, 1);
      *(_DWORD *)(v3 + 0xC) = 0;
      BaseExtraList_RemoveExtraByPtr(this, v3, 1);
    }
  }
}
