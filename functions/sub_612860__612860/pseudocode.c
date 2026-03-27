char __stdcall sub_612860(void **a1)
{
  int *FormID; // eax
  TESSaveLoad *v2; // ecx
  TESSaveLoad *v4; // ecx

  if ( a1 && *a1 )
  {
    FormID = (int *)MagicItem_GetFormID(*a1);
    v2 = SaveLoad_CurrentSavegame;
    a1 = (void **)FormID;
    return SaveLoad_SaveFormID(v2, (int)&a1, 4u);
  }
  else
  {
    v4 = SaveLoad_CurrentSavegame;
    a1 = 0;
    return SaveLoad_SaveFormID(v4, (int)&a1, 4u);
  }
}
