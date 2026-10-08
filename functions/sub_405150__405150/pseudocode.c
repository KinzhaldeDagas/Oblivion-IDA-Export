int __cdecl sub_405150(char *a1, int a2)
{
  PlayerCharacter *v2; // esi
  const char *v3; // eax
  unsigned int v4; // eax
  char *v5; // edi
  const char *v8; // [esp-8h] [ebp-114h]
  char v9; // [esp+7h] [ebp-105h] BYREF
  char Format[256]; // [esp+8h] [ebp-104h] BYREF

  if ( !a2 ) /*0x405176*/
    return PrintError(a1); /*0x405176*/
  v2 = sub_4DC270(a2); /*0x405182*/
  if ( !v2 || !v2->vtbl->super.super.super.super.GetEditorName((TESForm *)v2) ) /*0x405199*/
    return PrintError(a1); /*0x405268*/
  if ( strlen(a1) + strlen(v2->vtbl->super.super.super.super.GetEditorName((TESForm *)v2)) + 5 >= 0xFF ) /*0x4051d9*/
    nullsub_return0_0arg(); /*0x4051ea*/
  v3 = (const char *)((int (__thiscall *)(PlayerCharacter *, char *))v2->vtbl->super.super.super.super.GetEditorName)( /*0x4051fd*/
                       v2,
                       a1);
  _sprintf(Format, "%s :: %s", v3, v8);
  v4 = strlen(a1) + 1; /*0x40521d*/
  v5 = &v9; /*0x405225*/
  while ( *++v5 ) /*0x405230*/
    ; /*0x405228*/
  qmemcpy(v5, a1, v4); /*0x405239*/
  return PrintError(Format); /*0x405250*/
}
