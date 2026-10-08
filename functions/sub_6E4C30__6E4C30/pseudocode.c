bool __thiscall sub_6E4C30(int this, float a2, int a3, void *a4)
{
  int v6; // eax
  float v7; // [esp+20h] [ebp-24h]
  float v8[4]; // [esp+24h] [ebp-20h] BYREF
  int v9; // [esp+34h] [ebp-10h] BYREF
  float v10; // [esp+38h] [ebp-Ch]
  float v11; // [esp+3Ch] [ebp-8h]
  float v12; // [esp+40h] [ebp-4h]

  if ( a2 == *(float *)(this + 8) ) /*0x6e4c4a*/
  {
    qmemcpy(a4, (const void *)(this + 0x1C), 0x20u); /*0x6e4c5c*/
    return !NiTransform_IsInvalid((float *)(this + 0x1C)); /*0x6e4c69*/
  }
  else
  {
    v6 = *(_DWORD *)(this + 0x3C); /*0x6e4c76*/
    v7 = (a2 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC)); /*0x6e4c86*/
    if ( v6 != 0xFFFF ) /*0x6e4c8a*/
    {
      sub_6E72F0(*(_DWORD **)(this + 0x14), v7, (int)&v9, 3, *(char **)(this + 0x18), v6); /*0x6e4ca3*/
      v8[0] = *(float *)&v9; /*0x6e4cac*/
      v8[1] = v10; /*0x6e4cb9*/
      v8[2] = v11; /*0x6e4cc4*/
      sub_471390((_DWORD *)(this + 0x1C), v8); /*0x6e4cc8*/
    }
    if ( *(_DWORD *)(this + 0x40) != 0xFFFF ) /*0x6e4cd5*/
    {
      sub_6E72F0(*(_DWORD **)(this + 0x14), v7, (int)&v9, 4, *(char **)(this + 0x18), *(_DWORD *)(this + 0x40)); /*0x6e4cee*/
      sub_714C40(v8, *(float *)&v9, v10, v11, v12); /*0x6e4d19*/
      sub_72FAC0(v8); /*0x6e4d22*/
      sub_471430((_DWORD *)(this + 0x1C), v8); /*0x6e4d2f*/
    }
    if ( *(_DWORD *)(this + 0x44) != 0xFFFF ) /*0x6e4d3c*/
    {
      sub_6E72F0(*(_DWORD **)(this + 0x14), v7, (int)&v9, 1, *(char **)(this + 0x18), *(_DWORD *)(this + 0x44)); /*0x6e4d55*/
      sub_471560((float *)(this + 0x1C), *(float *)&v9); /*0x6e4d65*/
    }
    qmemcpy(a4, (const void *)(this + 0x1C), 0x20u); /*0x6e4d78*/
    if ( NiTransform_IsInvalid((float *)(this + 0x1C)) ) /*0x6e4d7c*/
    {
      return 0; /*0x6e4d87*/
    }
    else
    {
      *(float *)(this + 8) = a2; /*0x6e4d96*/
      return 1; /*0x6e4d99*/
    }
  }
}
