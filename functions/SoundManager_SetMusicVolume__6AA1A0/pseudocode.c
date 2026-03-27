void __thiscall SoundManager_SetMusicVolume(int this, float a2, char a3)
{
  double v3; // st7
  int *v4; // esi
  int v5; // edi
  int v6; // eax
  float v7; // [esp+4h] [ebp+4h]
  float v8; // [esp+4h] [ebp+4h]
  float v9; // [esp+8h] [ebp+8h]

  if ( a2 >= 0.0 )
  {
    v3 = a2;
    if ( a2 > 1.0 )
      v3 = (float)1.0;
  }
  else
  {
    v3 = (float)0.0;
  }
  if ( a3 )
  {
    *(float *)(this + 0x2F8) = v3;
    *(float *)(this + 0x2F0) = v3;
  }
  if ( IsAtMainMenu )
    v3 = flt_B16188;
  v7 = v3 * *(float *)(this + 0xB8);
  v8 = v7 * v7;
  if ( (*(_BYTE *)(this + 0xDC) & 1) != 0 )
  {
    if ( v8 >= (double)flt_A34BA0 )
    {
      v4 = *(int **)(this + 0x74);
      v5 = *v4;
      v9 = log10(v8);
      v6 = Double_To_SInt32(v9 * dbl_A77098);
      (*(void (__stdcall **)(int *, int))(v5 + 0x1C))(v4, v6);
    }
    else
    {
      (*(void (__stdcall **)(_DWORD, unsigned int))(**(_DWORD **)(this + 0x74) + 0x1C))(
        *(_DWORD *)(this + 0x74),
        0xFFFFD8F0);
    }
  }
}
