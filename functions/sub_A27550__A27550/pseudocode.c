void __cdecl sub_A27550()
{
  BSRenderedTexture *v0; // esi

  v0 = dword_B43328;
  if ( dword_B43328 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B43328->members) )
    {
      if ( v0 )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v0->vtbl)(v0, 1);
    }
  }
}
