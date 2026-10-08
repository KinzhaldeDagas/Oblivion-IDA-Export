char __thiscall sub_6E63D0(int this, float a2, int a3, _DWORD *a4)
{
  double v5; // st7
  int v7; // eax
  float v8; // [esp+20h] [ebp-24h]
  float v9; // [esp+28h] [ebp-1Ch]
  float v10; // [esp+2Ch] [ebp-18h]
  float v11; // [esp+30h] [ebp-14h]
  int v12[4]; // [esp+34h] [ebp-10h] BYREF

  v5 = a2; /*0x6e63e3*/
  if ( a2 == *(float *)(this + 8) ) /*0x6e63e8*/
  {
    *a4 = *(_DWORD *)(this + 0x1C); /*0x6e63f3*/
    a4[1] = *(_DWORD *)(this + 0x20); /*0x6e63f8*/
    a4[2] = *(_DWORD *)(this + 0x24); /*0x6e63fe*/
    a4[3] = *(_DWORD *)(this + 0x28); /*0x6e6404*/
    return 1; /*0x6e6407*/
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x2C); /*0x6e6410*/
    if ( v7 != 0xFFFF ) /*0x6e6418*/
    {
      v8 = (v5 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC)); /*0x6e6445*/
      sub_6E7470( /*0x6e6450*/
        *(_DWORD **)(this + 0x14),
        v8,
        (int)v12,
        4,
        *(_DWORD *)(this + 0x18),
        v7,
        *(float *)(this + 0x34),
        *(float *)(this + 0x38));
      v9 = *(float *)&v12[1]; /*0x6e6465*/
      *(_DWORD *)(this + 0x1C) = v12[0]; /*0x6e6469*/
      v10 = *(float *)&v12[2]; /*0x6e6474*/
      *(float *)(this + 0x20) = v9; /*0x6e6478*/
      v11 = *(float *)&v12[3]; /*0x6e6483*/
      *(float *)(this + 0x24) = v10; /*0x6e6487*/
      v5 = a2; /*0x6e648e*/
      *(float *)(this + 0x28) = v11; /*0x6e6492*/
    }
    *a4 = *(_DWORD *)(this + 0x1C); /*0x6e649c*/
    a4[1] = *(_DWORD *)(this + 0x20); /*0x6e64a1*/
    a4[2] = *(_DWORD *)(this + 0x24); /*0x6e64a7*/
    a4[3] = *(_DWORD *)(this + 0x28); /*0x6e64ad*/
    *(float *)(this + 8) = v5; /*0x6e64b0*/
    return 1; /*0x6e64b3*/
  }
}
