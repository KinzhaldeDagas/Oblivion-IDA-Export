char __usercall sub_50E600@<al>(
        double a1@<st2>,
        double a2@<st1>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        double *a9)
{
  int *v11; // edi
  int v12; // ebx
  int *v13; // esi
  char v15; // [esp+8h] [ebp-4h]

  v15 = sub_4F9FA0();
  sub_4F9F90(0);
  v11 = (int *)(TESDataHandler + 0x84);
  if ( TESDataHandler != 0xFFFFFF7C )
  {
    do
    {
      if ( !v11[1] && !*v11 )
        break;
      v12 = *v11;
      v13 = (int *)(*v11 + 0x40);
      if ( *v11 != 0xFFFFFFC0 )
      {
        do
        {
          if ( !v13[1] && !*v13 )
            break;
          sub_52B080(*v13, a1, a2, v12);
          v13 = (int *)v13[1];
        }
        while ( v13 );
      }
      v11 = (int *)v11[1];
    }
    while ( v11 );
  }
  sub_4F9F90(v15);
  if ( IsConsoleMode )
    Interface_ConsolePrint("All Quest Stages Completed.", *a9);
  return 1;
}
