void __stdcall sub_848FA0(_DWORD **a1, int a2)
{
  int v2; // eax

  if ( a1 ) /*0x848fa7*/
  {
    if ( a2 ) /*0x848faf*/
    {
      if ( unk_B42CDD ) /*0x848fb1*/
      {
        v2 = (*(int (**)(void))(*(_DWORD *)a2 + 0x78))(); /*0x848fbf*/
        NiD3DTextureStage_ApplyAddressModePreset(a1, v2); /*0x848fc4*/
      }
    }
  }
}
