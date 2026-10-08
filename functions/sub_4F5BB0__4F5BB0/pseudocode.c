char __cdecl sub_4F5BB0(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESObjectREFR *v4; // esi
  int v5; // eax
  char *Name; // eax
  char *v8; // eax

  v4 = 0; /*0x4f5bb6*/
  if ( a1 ) /*0x4f5bba*/
  {
    if ( a1->vtbl->IsActor(a1) ) /*0x4f5bc6*/
      v4 = a1; /*0x4f5bcc*/
  }
  *a4 = 0.0; /*0x4f5bd6*/
  if ( v4 ) /*0x4f5bd8*/
  {
    if ( Actor_IsNPC((Actor *)v4) ) /*0x4f5bdc*/
    {
      v5 = (int)v4->vtbl->GetBaseForm(v4); /*0x4f5bef*/
      if ( v5 ) /*0x4f5bf3*/
      {
        if ( v5 == unk_B361C4 ) /*0x4f5bfb*/
          *a4 = 1.0; /*0x4f5bff*/
      }
      if ( MEMORY[0xB361AC] ) /*0x4f5c01*/
      {
        if ( 0.0 != *a4 ) /*0x4f5c15*/
        {
          Name = TESObjectREFR_GetName(v4); /*0x4f5c17*/
          Interface_ConsolePrint("%s  crime victim ", Name); /*0x4f5c22*/
          return 1; /*0x4f5c2e*/
        }
        v8 = TESObjectREFR_GetName(v4); /*0x4f5c2f*/
        Interface_ConsolePrint("%s  is not a crime victim ", v8); /*0x4f5c3a*/
      }
    }
  }
  return 1; /*0x4f5c2a*/
}
