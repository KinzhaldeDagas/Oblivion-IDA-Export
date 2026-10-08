char sub_77BC40()
{
  int v0; // eax

  v0 = FormHeapAlloc(8u); /*0x77bc42*/
  if ( v0 ) /*0x77bc4c*/
  {
    *(_DWORD *)v0 = &NiD3DShaderProgramCreatorHLSL::`vftable'; /*0x77bc4f*/
    *(_DWORD *)(v0 + 4) = 0; /*0x77bc55*/
    unk_B428C8 = v0; /*0x77bc61*/
    return sub_77F720("hlsl", (TESForm *)v0); /*0x77bc66*/
  }
  else
  {
    unk_B428C8 = 0; /*0x77bc77*/
    return sub_77F720("hlsl", 0); /*0x77bc7c*/
  }
}
