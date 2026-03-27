void __cdecl sub_A16670()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))menuRenderedTexture;
  if ( menuRenderedTexture )
  {
    if ( !InterlockedDecrement((volatile LONG *)(menuRenderedTexture + 4)) )
    {
      if ( v0 )
        (**v0)(v0, 1);
    }
  }
}
