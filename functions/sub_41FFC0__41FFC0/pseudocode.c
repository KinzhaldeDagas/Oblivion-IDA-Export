// Ensures ExtraRunOncePacks exists, then adds or updates a package record with the supplied package and state byte.
void __thiscall ExtraDataList_SetRunOnceExtraPackage(ExtraDataList *this, int a2, char a3)
{
  int **ExtraData; // esi
  ExtraRunOncePacks *v5; // eax
  BSExtraData *v6; // eax

  ExtraData = (int **)BaseExtraList_GetExtraData(this, kExtraData_RunOncePacks); /*0x41ffec*/
  if ( !ExtraData ) /*0x41fff0*/
  {
    v5 = (ExtraRunOncePacks *)FormHeapAlloc(0x10u); /*0x41fff4*/
    if ( v5 ) /*0x420006*/
      v6 = (BSExtraData *)ExtraRunOncePacks::ExtraRunOncePacks(v5); /*0x42000a*/
    else
      v6 = 0; /*0x420011*/
    ExtraData = (int **)v6; /*0x42001e*/
    BaseExtraList_AddExtra(this, v6); /*0x420020*/
  }
  sub_42A440(ExtraData, a2, a3); /*0x420031*/
}
