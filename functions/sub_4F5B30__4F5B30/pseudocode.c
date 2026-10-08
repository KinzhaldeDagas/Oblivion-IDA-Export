char __cdecl sub_4F5B30(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESObjectREFR *v4; // esi
  char v5; // al
  char *Name; // eax
  char *v8; // eax

  v4 = 0; /*0x4f5b36*/
  if ( a1 ) /*0x4f5b3a*/
  {
    if ( a1->vtbl->IsActor(a1) ) /*0x4f5b46*/
      v4 = a1; /*0x4f5b4c*/
  }
  *a4 = 0.0; /*0x4f5b56*/
  if ( v4 ) /*0x4f5b58*/
  {
    sub_4DB760(v4); /*0x4f5b5c*/
    if ( v5 ) /*0x4f5b63*/
      *a4 = 1.0; /*0x4f5b67*/
    if ( MEMORY[0xB361AC] ) /*0x4f5b69*/
    {
      if ( 0.0 != *a4 ) /*0x4f5b7d*/
      {
        Name = TESObjectREFR_GetName(v4); /*0x4f5b7f*/
        Interface_ConsolePrint("%s  is evil ", Name); /*0x4f5b8a*/
        return 1; /*0x4f5b96*/
      }
      v8 = TESObjectREFR_GetName(v4); /*0x4f5b97*/
      Interface_ConsolePrint("%s  is not evil ", v8); /*0x4f5ba2*/
    }
  }
  return 1; /*0x4f5b92*/
}
