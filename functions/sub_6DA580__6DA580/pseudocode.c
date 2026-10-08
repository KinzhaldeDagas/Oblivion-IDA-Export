char __thiscall sub_6DA580(int this, float a2, int a3, _DWORD *a4)
{
  double v5; // st7
  int v7; // eax
  int v8; // ecx
  char v9; // dl
  int v10; // edi
  int v11; // eax
  _DWORD *v12; // eax
  int v13[3]; // [esp+24h] [ebp-Ch] BYREF

  v5 = a2; /*0x6da593*/
  if ( a2 == *(float *)(this + 8) ) /*0x6da598*/
  {
    *a4 = *(_DWORD *)(this + 0xC); /*0x6da5a3*/
    a4[1] = *(_DWORD *)(this + 0x10); /*0x6da5a8*/
    a4[2] = *(_DWORD *)(this + 0x14); /*0x6da5ae*/
    if ( *(float *)&dword_B24FC8 == *(float *)(this + 0xC) /*0x6da5ed*/
      && *(float *)&dword_B24FCC == *(float *)(this + 0x10)
      && *(float *)&dword_B24FD0 == *(float *)(this + 0x14) )
    {
      return 0; /*0x6da5f9*/
    }
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x18); /*0x6da5fc*/
    if ( v7 ) /*0x6da601*/
    {
      v8 = *(_DWORD *)(v7 + 8); /*0x6da603*/
      v9 = *(_BYTE *)(v7 + 0x14); /*0x6da608*/
      v10 = *(_DWORD *)(v7 + 0x10); /*0x6da60c*/
      v11 = *(_DWORD *)(v7 + 0xC); /*0x6da60f*/
      if ( v8 ) /*0x6da616*/
      {
        v12 = NiPosKey_EvaluateTrack(v13, a2, v11, v10, v8, (int *)(this + 0x1C), v9); /*0x6da62d*/
        v5 = a2; /*0x6da632*/
        *(_DWORD *)(this + 0xC) = *v12; /*0x6da638*/
        *(_DWORD *)(this + 0x10) = v12[1]; /*0x6da63e*/
        *(_DWORD *)(this + 0x14) = v12[2]; /*0x6da647*/
      }
    }
    if ( *(float *)&dword_B24FC8 == *(float *)(this + 0xC) /*0x6da67f*/
      && *(float *)&dword_B24FCC == *(float *)(this + 0x10)
      && *(float *)&dword_B24FD0 == *(float *)(this + 0x14) )
    {
      return 0; /*0x6da689*/
    }
    *a4 = *(_DWORD *)(this + 0xC); /*0x6da693*/
    a4[1] = *(_DWORD *)(this + 0x10); /*0x6da698*/
    a4[2] = *(_DWORD *)(this + 0x14); /*0x6da69e*/
    *(float *)(this + 8) = v5; /*0x6da6a1*/
  }
  return 1; /*0x6da5f5*/
}
