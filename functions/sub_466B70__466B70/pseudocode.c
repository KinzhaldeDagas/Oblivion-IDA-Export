void __usercall sub_466B70(
        int a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>)
{
  UInt32 mainThreadID; // edi
  int v11; // eax

  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x466b77*/
  if ( ((int (__usercall *)@<eax>(double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))GetCurrentThreadId)( /*0x466b84*/
         a9,
         a8,
         a7,
         a6,
         a5,
         a4,
         a3) == mainThreadID )
    LOBYTE(v11) = *(_BYTE *)(a1 + 0x18); /*0x466b86*/
  else
    v11 = *(_DWORD *)(a1 + 0x18) >> 0x12; /*0x466b8e*/
  if ( (v11 & 1) == 0 && !sub_65D140(reference) ) /*0x466b9d*/
  {
    *(_BYTE *)(a1 + 0xAA) = 0; /*0x466bac*/
    GameUI_QueueMessage((const char *)stru_B387B8, 0, 1u, 1.0); /*0x466bbd*/
    TESSaveLoadGame_SaveGame_( /*0x466bd0*/
      (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)a1,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      1.0,
      0,
      "autosave",
      0);
  }
}
