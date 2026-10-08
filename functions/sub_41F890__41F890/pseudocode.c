BSExtraData *__thiscall sub_41F890(ExtraDataList *this, int a2)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // edi
  ExtraHavok *v5; // eax
  BSExtraData *v6; // eax
  int v7; // esi

  result = BaseExtraList_GetExtraData(this, kExtraData_Havok); /*0x41f8b7*/
  v4 = result; /*0x41f8c2*/
  if ( a2 ) /*0x41f8c4*/
  {
    if ( !result ) /*0x41f8c8*/
    {
      v5 = (ExtraHavok *)FormHeapAlloc(0x14u); /*0x41f8cc*/
      if ( v5 ) /*0x41f8de*/
        v6 = (BSExtraData *)ExtraHavok::ExtraHavok(v5, 0); /*0x41f8e3*/
      else
        v6 = 0; /*0x41f8ea*/
      v4 = v6; /*0x41f8f7*/
      result = (BSExtraData *)BaseExtraList_AddExtra(this, v6); /*0x41f8f9*/
    }
  }
  v7 = *(_DWORD *)&v4[1].members.type; /*0x41f8fe*/
  if ( v7 != a2 ) /*0x41f903*/
  {
    if ( v7 ) /*0x41f907*/
    {
      result = (BSExtraData *)InterlockedDecrement((volatile LONG *)(v7 + 4)); /*0x41f90d*/
      if ( !result ) /*0x41f915*/
        result = (BSExtraData *)(**(int (__thiscall ***)(int, int))v7)(v7, 1); /*0x41f923*/
    }
    *(_DWORD *)&v4[1].members.type = a2; /*0x41f927*/
    if ( a2 ) /*0x41f92a*/
      return (BSExtraData *)InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x41f930*/
  }
  return result; /*0x41f936*/
}
