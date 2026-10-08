void __thiscall SoundManager_SetMusicVolume(int this, float a2, char a3)
{
  double v3; // st7
  int *v4; // esi
  int v5; // edi
  int v6; // eax
  float v7; // [esp+4h] [ebp+4h]
  float v8; // [esp+4h] [ebp+4h]
  float v9; // [esp+8h] [ebp+8h]

  if ( a2 >= 0.0 ) /*0x6aa1ad*/
  {
    v3 = a2; /*0x6aa1bb*/
    if ( a2 > 1.0 ) /*0x6aa1c6*/
      v3 = (float)1.0; /*0x6aa1ce*/
  }
  else
  {
    v3 = (float)0.0; /*0x6aa1b5*/
  }
  if ( a3 ) /*0x6aa1db*/
  {
    *(float *)(this + 0x2F8) = v3; /*0x6aa1dd*/
    *(float *)(this + 0x2F0) = v3; /*0x6aa1e3*/
  }
  if ( MEMORY[0xB3C0EC] ) /*0x6aa1e9*/
    v3 = flt_B16188; /*0x6aa1fe*/
  v7 = v3 * *(float *)(this + 0xB8); /*0x6aa20f*/
  v8 = v7 * v7; /*0x6aa219*/
  if ( (*(_BYTE *)(this + 0xDC) & 1) != 0 ) /*0x6aa21d*/
  {
    if ( v8 >= (double)flt_A34BA0 ) /*0x6aa232*/
    {
      v4 = *(int **)(this + 0x74); /*0x6aa24d*/
      v5 = *v4; /*0x6aa251*/
      v9 = log10(v8); /*0x6aa258*/
      v6 = Double_To_SInt32(v9 * dbl_A77098); /*0x6aa266*/
      (*(void (__stdcall **)(int *, int))(v5 + 0x1C))(v4, v6); /*0x6aa270*/
    }
    else
    {
      (*(void (__stdcall **)(_DWORD, unsigned int))(**(_DWORD **)(this + 0x74) + 0x1C))( /*0x6aa24a*/
        *(_DWORD *)(this + 0x74),
        0xFFFFD8F0);
    }
  }
}
