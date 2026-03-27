void __cdecl sub_A26DC0()
{
  NiD3DPass *v0; // eax

  v0 = (NiD3DPass *)dword_B42574;
  if ( dword_B42574 )
  {
    --*(_DWORD *)(dword_B42574 + 0x60);
    if ( !v0->RefCount )
      sub_7604D0(v0);
  }
}
