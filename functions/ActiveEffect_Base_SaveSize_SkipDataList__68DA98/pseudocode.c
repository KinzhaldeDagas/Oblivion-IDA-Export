// positive sp value has been detected, the output may be wrong!
__int16 __stdcall ActiveEffect_Base_SaveSize_::SkipDataList(int a1)
{
  char next; // al
  __int16 v3; // [esp-4h] [ebp-4h]

  next = (char)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  if ( (unsigned __int8)next < 0x48u )
    return ActiveEffect_Base_SaveSize_::LowbitUnk14(next, a1);
  else
    return v3 + 4;
}
