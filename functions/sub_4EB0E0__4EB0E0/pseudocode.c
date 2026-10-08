void __cdecl sub_4EB0E0(char a1)
{
  TESWorldSpace *v1; // eax
  NiTMap_TESCELL *v2; // eax
  unsigned int *gridDistantArray; // esi
  TESWorldSpace *CurrentWorldspace; // eax
  float *v5; // eax

  if ( unk_B3608F != a1 ) /*0x4eb0eb*/
  {
    unk_B3608F = a1; /*0x4eb0f3*/
    if ( a1 ) /*0x4eb0f8*/
    {
      unk_B3608F = a1; /*0x4eb135*/
      if ( *(_DWORD *)&MEMORY[0xB33E90][0x594] ) /*0x4eb13a*/
        *(_WORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x594] + 0x18) &= ~1u; /*0x4eb143*/
      gridDistantArray = (unsigned int *)MEMORY[0xB333A0]->gridDistantArray; /*0x4eb14f*/
      CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x4eb152*/
      sub_483D60(gridDistantArray, CurrentWorldspace); /*0x4eb15a*/
      sub_49E280(); /*0x4eb168*/
      v5 = reference->vtbl->super.super.super.GetPos(reference); /*0x4eb17b*/
      sub_4EA6E0(*(_DWORD *)v5, v5[1], *((_DWORD *)v5 + 2), 0); /*0x4eb194*/
    }
    else
    {
      v1 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x4eb102*/
      v2 = (NiTMap_TESCELL *)sub_4EF7E0((int)v1); /*0x4eb109*/
      sub_4EA080(v2, 0); /*0x4eb110*/
      if ( *(_DWORD *)&MEMORY[0xB33E90][0x594] ) /*0x4eb115*/
        *(_WORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x594] + 0x18) |= 1u; /*0x4eb11e*/
      if ( MEMORY[0xB333A0]->waterManager ) /*0x4eb128*/
        sub_499E20(); /*0x4eb130*/
    }
  }
}
