char __thiscall sub_6E5DB0(int this, float a2, int a3, _DWORD *a4)
{
  double v5; // st7
  int v7; // eax
  float v8; // [esp+20h] [ebp-20h]
  float v9; // [esp+28h] [ebp-18h]
  float v10; // [esp+2Ch] [ebp-14h]
  int v11[4]; // [esp+30h] [ebp-10h] BYREF

  v5 = a2; /*0x6e5dc3*/
  if ( a2 == *(float *)(this + 8) ) /*0x6e5dc8*/
  {
    *a4 = *(_DWORD *)(this + 0x1C); /*0x6e5dd3*/
    a4[1] = *(_DWORD *)(this + 0x20); /*0x6e5dd8*/
    a4[2] = *(_DWORD *)(this + 0x24); /*0x6e5dde*/
    return 1; /*0x6e5de1*/
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x28); /*0x6e5dea*/
    if ( v7 != 0xFFFF ) /*0x6e5df2*/
    {
      v8 = (v5 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC)); /*0x6e5e1f*/
      sub_6E7470( /*0x6e5e2a*/
        *(_DWORD **)(this + 0x14),
        v8,
        (int)v11,
        3,
        *(_DWORD *)(this + 0x18),
        v7,
        *(float *)(this + 0x2C),
        *(float *)(this + 0x30));
      v9 = *(float *)&v11[1]; /*0x6e5e3f*/
      *(_DWORD *)(this + 0x1C) = v11[0]; /*0x6e5e43*/
      v10 = *(float *)&v11[2]; /*0x6e5e4e*/
      *(float *)(this + 0x20) = v9; /*0x6e5e52*/
      v5 = a2; /*0x6e5e59*/
      *(float *)(this + 0x24) = v10; /*0x6e5e5d*/
    }
    *a4 = *(_DWORD *)(this + 0x1C); /*0x6e5e67*/
    a4[1] = *(_DWORD *)(this + 0x20); /*0x6e5e6c*/
    a4[2] = *(_DWORD *)(this + 0x24); /*0x6e5e72*/
    *(float *)(this + 8) = v5; /*0x6e5e75*/
    return 1; /*0x6e5e78*/
  }
}
