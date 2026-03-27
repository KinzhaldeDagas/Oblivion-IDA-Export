void __usercall sub_443300(TES *a1@<ecx>, double a2@<st2>, double a3@<st1>)
{
  double v4; // st7
  UInt32 v5; // edi
  _DWORD *sound; // ecx

  sub_440F20(a1);
  a1->unk48 = 0x7FFFFFFF;
  a1->unk4C = 0x7FFFFFFF;
  flt_B33A30 = 0.0;
  v4 = nullsub_returnTrue_0arg();
  if ( a1->unk7C )
  {
    do
    {
      v5 = *(_DWORD *)(a1->unk7C + 4);
      FormHeapFree(a1->unk7C);
      a1->unk7C = v5;
    }
    while ( v5 );
  }
  a1->unk78 = 0;
  if ( a1->currentInteriorCell )
    sub_4425D0(a1);
  sound = OSGlobals->sound;
  if ( sound )
    sub_6AC210(sound);
  sub_43FFF0(a1, a2, a3, v4, 1, 0);
  sub_43FE30(a1, a2, a3, v4, 1);
  a1->unkA8 = 1;
  sub_43FC20(a1, 0);
  nullsub_returnTrue_0arg();
}
