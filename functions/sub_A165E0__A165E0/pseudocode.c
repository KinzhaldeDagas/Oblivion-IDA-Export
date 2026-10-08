void __cdecl sub_A165E0()
{
  NiNode *v0; // esi

  v0 = unk_B333DC; /*0xa165e1*/
  if ( unk_B333DC ) /*0xa165e9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk_B333DC->members) ) /*0xa165ef*/
    {
      if ( v0 ) /*0xa165fb*/
        v0->vtbl->super.super.super.Destructor((NiRefObject *)v0, 1); /*0xa16605*/
    }
  }
}
