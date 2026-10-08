void __userpurge sub_45C470(
        TESSaveLoadGame_SerializationView *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5)
{
  int i; // esi

  for ( i = a5; i; i = *(_DWORD *)(i + 4) ) /*0x45c47a*/
  {
    if ( *(_DWORD *)i ) /*0x45c480*/
      TESSaveLoadGame_ResetObject(a1, a2, a3, a4, *(TESForm **)i, 1u, 0); /*0x45c48d*/
  }
}
