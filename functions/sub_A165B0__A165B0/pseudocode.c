void __cdecl sub_A165B0()
{
  NiNode *v0; // esi

  v0 = root; /*0xa165b1*/
  if ( root ) /*0xa165b9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&root->members) ) /*0xa165bf*/
    {
      if ( v0 ) /*0xa165cb*/
        v0->vtbl->super.super.super.Destructor((NiRefObject *)v0, 1); /*0xa165d5*/
    }
  }
}
