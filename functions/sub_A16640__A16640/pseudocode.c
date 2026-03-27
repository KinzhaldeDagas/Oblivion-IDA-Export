void __cdecl sub_A16640()
{
  BSShaderProperty *v0; // esi

  v0 = dword_B333E4;
  if ( dword_B333E4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B333E4->member) )
    {
      if ( v0 )
        (*(void (__thiscall **)(BSShaderProperty *, int))v0->vtbl)(v0, 1);
    }
  }
}
