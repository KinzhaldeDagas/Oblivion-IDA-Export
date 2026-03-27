void __cdecl sub_A166A0()
{
  NiScreenElements *v0; // esi

  v0 = ScreenElementsRoot_;
  if ( ScreenElementsRoot_ )
  {
    if ( !InterlockedDecrement((volatile LONG *)ScreenElementsRoot_ + 1) )
    {
      if ( v0 )
        (**(void (__thiscall ***)(NiScreenElements *, int))v0)(v0, 1);
    }
  }
}
