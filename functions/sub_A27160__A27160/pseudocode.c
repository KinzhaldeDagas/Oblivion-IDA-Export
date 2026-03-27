void __cdecl sub_A27160()
{
  NiDX9Renderer *v0; // esi

  v0 = dword_B43104;
  if ( dword_B43104 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B43104->member) )
    {
      if ( v0 )
        ((void (__thiscall *)(NiDX9Renderer *, int))v0->__vftable->super.gap0[0])(v0, 1);
    }
  }
}
