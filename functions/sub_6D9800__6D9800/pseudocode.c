bool __thiscall sub_6D9800(int this, float a2, int a3, _DWORD *a4)
{
  int v6; // eax
  int v7; // ecx
  char v8; // dl
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // eax
  int v12[4]; // [esp+24h] [ebp-10h] BYREF

  if ( a2 == *(float *)(this + 8) ) /*0x6d9818*/
  {
    *a4 = *(_DWORD *)(this + 0xC); /*0x6d9826*/
    a4[1] = *(_DWORD *)(this + 0x10); /*0x6d982b*/
    a4[2] = *(_DWORD *)(this + 0x14); /*0x6d9831*/
    a4[3] = *(_DWORD *)(this + 0x18); /*0x6d983c*/
    return !sub_73B770((float *)(this + 0xC), flt_B3EBA0); /*0x6d9846*/
  }
  else
  {
    v6 = *(_DWORD *)(this + 0x1C); /*0x6d9850*/
    if ( v6 ) /*0x6d9856*/
    {
      v7 = *(_DWORD *)(v6 + 8); /*0x6d9858*/
      v8 = *(_BYTE *)(v6 + 0x14); /*0x6d985d*/
      v9 = *(_DWORD *)(v6 + 0x10); /*0x6d9860*/
      v10 = *(_DWORD *)(v6 + 0xC); /*0x6d9863*/
      if ( v7 ) /*0x6d986a*/
      {
        v11 = NiRotKey_EvaluateTrack(v12, a2, v10, v9, v7, (int *)(this + 0x20), v8); /*0x6d9881*/
        *(_DWORD *)(this + 0xC) = *v11; /*0x6d9888*/
        *(_DWORD *)(this + 0x10) = v11[1]; /*0x6d988e*/
        *(_DWORD *)(this + 0x14) = v11[2]; /*0x6d9894*/
        *(_DWORD *)(this + 0x18) = v11[3]; /*0x6d989d*/
      }
    }
    if ( sub_73B770((float *)(this + 0xC), flt_B3EBA0) ) /*0x6d98ae*/
    {
      return 0; /*0x6d98b8*/
    }
    else
    {
      *a4 = *(_DWORD *)(this + 0xC); /*0x6d98cb*/
      a4[1] = *(_DWORD *)(this + 0x10); /*0x6d98d0*/
      a4[2] = *(_DWORD *)(this + 0x14); /*0x6d98d6*/
      a4[3] = *(_DWORD *)(this + 0x18); /*0x6d98dc*/
      *(float *)(this + 8) = a2; /*0x6d98df*/
      return 1; /*0x6d98e3*/
    }
  }
}
