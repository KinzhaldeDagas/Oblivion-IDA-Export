int __thiscall InventoryEntryData_Cleanup(ExtraDataList ***this)
{
  int *v2; // edi
  int v3; // ebx
  ExtraDataList *v4; // esi

  v2 = (int *)*this; /*0x484665*/
  v3 = 0; /*0x484668*/
  if ( *this ) /*0x484665*/
  {
    do /*0x4846c7*/
    {
      v4 = (ExtraDataList *)*v2; /*0x484670*/
      if ( !*v2 ) /*0x484670*/
        break; /*0x484674*/
      if ( !ExtraDataList_IsExtraDefaultForContainer(v4, 0) ) /*0x48467a*/
        ++v3; /*0x484683*/
      v2 = (int *)v2[1]; /*0x484686*/
      if ( BaseExtraList_Count(v4) == 1 && ExtraDataList_GetExtraCount(v4) > 1 ) /*0x4846a0*/
      {
        sub_41F620(v4); /*0x4846a4*/
        BSSimpleList_Remove((int *)*this, (int)v4); /*0x4846ad*/
        if ( v4 ) /*0x4846b4*/
          (*(void (__thiscall **)(ExtraDataList *, int))v4->vtbl)(v4, 1); /*0x4846be*/
        v2 = (int *)*this; /*0x4846c0*/
        v3 = 0; /*0x4846c3*/
      }
    }
    while ( v2 ); /*0x4846c7*/
  }
  return v3; /*0x4846ca*/
}
