void __cdecl sub_A16610()
{
  BSShaderProperty *v0; // esi

  v0 = dword_B333E0;
  if ( dword_B333E0 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B333E0->member) )
    {
      if ( v0 )
        (*(void (__thiscall **)(BSShaderProperty *, int))v0->vtbl)(v0, 1);
    }
  }
}
