void __userpurge sub_4431F0(
        TES *a1@<ecx>,
        double a2@<st2>,
        char bp0@<bpl>,
        double a4@<st1>,
        double a5@<st0>,
        TESWorldSpace *a6)
{
  int v7; // edi
  char v8; // al
  int *v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // eax

  if ( a6 )
  {
    if ( a1->currentWorldSpace != a6 )
    {
      nullsub_returnTrue_0arg();
      if ( bPreemptivelyUnloadCells )
      {
        if ( a1->currentInteriorCell )
          sub_4425D0(a1);
        v7 = sub_43FFF0(a1, a2, a4, a5, 1, a1->currentWorldSpace);
        if ( !a1->currentInteriorCell )
          v7 += sub_43FE30(a1, a2, a4, a5, 1);
        v8 = sub_4C9300();
        if ( v7 || v8 )
          sub_43FC20(a1, 0);
      }
      OSGlobals->unk18 = 0;
      a1->currentWorldSpace = a6;
      sub_4425D0(a1);
      a1->extXCoord = 0x7FFFFFFF;
      a1->extYCoord = 0x7FFFFFFF;
      a1->unk28 = 0x7FFFFFFF;
      a1->unk2C = 0x7FFFFFFF;
      a1->unk48 = 0x7FFFFFFF;
      a1->unk4C = 0x7FFFFFFF;
      v9 = (int *)(TESDataHandler + 0xC);
      if ( TESDataHandler != 0xFFFFFFF4 )
      {
        do
        {
          if ( sub_4EF7E0(*v9) && (TESWorldSpace *)*v9 == a6 )
          {
            v10 = (_DWORD *)sub_4EF7E0(*v9);
            sub_4EBC00(v10);
          }
          else if ( sub_4EF7E0(*v9) )
          {
            if ( (TESWorldSpace *)*v9 != a6 )
            {
              v11 = (_DWORD *)sub_4EF7E0(*v9);
              sub_4EA570(v11);
            }
          }
          v9 = (int *)v9[1];
        }
        while ( v9 );
      }
      sub_57A0D0(a2, bp0, a4, a5);
      nullsub_returnTrue_0arg();
    }
  }
}
