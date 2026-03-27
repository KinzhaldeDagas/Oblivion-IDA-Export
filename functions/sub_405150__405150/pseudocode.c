int __cdecl sub_405150(char *a1, int a2)
{
  PlayerCharacter *v2; // esi
  const char *v3; // eax
  unsigned int v4; // eax
  char *v5; // edi
  const char *v8; // [esp-8h] [ebp-114h]
  char v9; // [esp+7h] [ebp-105h] BYREF
  char Format[256]; // [esp+8h] [ebp-104h] BYREF

  if ( !a2 )
    return PrintError(a1);
  v2 = sub_4DC270(a2);
  if ( !v2 || !v2->vtbl->super.super.super.super.GetEditorName((TESForm *)v2) )
    return PrintError(a1);
  if ( strlen(a1) + strlen(v2->vtbl->super.super.super.super.GetEditorName((TESForm *)v2)) + 5 >= 0xFF )
    nullsub_return0_0arg();
  v3 = (const char *)((int (__thiscall *)(PlayerCharacter *, char *))v2->vtbl->super.super.super.super.GetEditorName)(
                       v2,
                       a1);
  _sprintf(Format, "%s :: %s", v3, v8);
  v4 = strlen(a1) + 1;
  v5 = &v9;
  while ( *++v5 )
    ;
  qmemcpy(v5, a1, v4);
  return PrintError(Format);
}
