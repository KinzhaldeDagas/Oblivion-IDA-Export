void sub_7B8400()
{
  NiD3DShaderDeclaration **v0; // eax
  volatile LONG *v1; // esi

  v0 = (NiD3DShaderDeclaration **)dword_B42EE4;
  if ( dword_B42EE4 || (v0 = DebugShader(), (dword_B42EE4 = (int)v0) != 0) )
  {
    v1 = (volatile LONG *)v0[1];
    if ( !v1 )
      nullsub_return0_0arg();
    sub_7F9D10(v1, 0);
  }
}
