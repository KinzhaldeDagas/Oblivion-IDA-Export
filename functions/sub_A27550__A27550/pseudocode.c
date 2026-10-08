void __cdecl sub_A27550()
{
  BSRenderedTexture *v0; // esi

  v0 = unk_B43328; /*0xa27551*/
  if ( unk_B43328 ) /*0xa27559*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk_B43328->members) ) /*0xa2755f*/
    {
      if ( v0 ) /*0xa2756b*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v0->vtbl)(v0, 1); /*0xa27575*/
    }
  }
}
