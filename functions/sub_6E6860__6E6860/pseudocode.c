char __thiscall sub_6E6860(int this, float a2, int a3, _DWORD *a4)
{
  double v5; // st7
  float v7; // [esp+18h] [ebp-24h]
  float v8; // [esp+20h] [ebp-1Ch]
  float v9; // [esp+24h] [ebp-18h]
  float v10; // [esp+28h] [ebp-14h]
  int v11[4]; // [esp+2Ch] [ebp-10h] BYREF

  v5 = a2; /*0x6e6873*/
  if ( a2 == *(float *)(this + 8) ) /*0x6e6878*/
  {
    *a4 = *(_DWORD *)(this + 0x1C); /*0x6e6883*/
    a4[1] = *(_DWORD *)(this + 0x20); /*0x6e6888*/
    a4[2] = *(_DWORD *)(this + 0x24); /*0x6e688e*/
    a4[3] = *(_DWORD *)(this + 0x28); /*0x6e6894*/
    return 1; /*0x6e6897*/
  }
  else
  {
    if ( *(_DWORD *)(this + 0x2C) != 0xFFFF ) /*0x6e68a8*/
    {
      v7 = (v5 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC)); /*0x6e68c5*/
      sub_6E72F0(*(_DWORD **)(this + 0x14), v7, (int)v11, 4, *(char **)(this + 0x18), *(_DWORD *)(this + 0x2C)); /*0x6e68d0*/
      v8 = *(float *)&v11[1]; /*0x6e68e5*/
      *(_DWORD *)(this + 0x1C) = v11[0]; /*0x6e68e9*/
      v9 = *(float *)&v11[2]; /*0x6e68f4*/
      *(float *)(this + 0x20) = v8; /*0x6e68f8*/
      v10 = *(float *)&v11[3]; /*0x6e6903*/
      *(float *)(this + 0x24) = v9; /*0x6e6907*/
      v5 = a2; /*0x6e690e*/
      *(float *)(this + 0x28) = v10; /*0x6e6912*/
    }
    *a4 = *(_DWORD *)(this + 0x1C); /*0x6e691c*/
    a4[1] = *(_DWORD *)(this + 0x20); /*0x6e6921*/
    a4[2] = *(_DWORD *)(this + 0x24); /*0x6e6927*/
    a4[3] = *(_DWORD *)(this + 0x28); /*0x6e692d*/
    *(float *)(this + 8) = v5; /*0x6e6930*/
    return 1; /*0x6e6933*/
  }
}
