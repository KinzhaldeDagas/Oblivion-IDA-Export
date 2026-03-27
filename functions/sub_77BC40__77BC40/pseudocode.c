char sub_77BC40()
{
  _DWORD *v0; // eax

  v0 = (_DWORD *)FormHeapAlloc(8u);
  if ( v0 )
  {
    *v0 = &NiD3DShaderProgramCreatorHLSL::`vftable';
    v0[1] = 0;
    dword_B428C8 = (int)v0;
    return sub_77F720("hlsl", (int)v0);
  }
  else
  {
    dword_B428C8 = 0;
    return sub_77F720("hlsl", 0);
  }
}
