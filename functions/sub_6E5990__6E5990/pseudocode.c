bool __thiscall sub_6E5990(int this, float a2, int a3, void *a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  float v9; // [esp+28h] [ebp-24h]
  float v10[4]; // [esp+2Ch] [ebp-20h] BYREF
  int v11; // [esp+3Ch] [ebp-10h] BYREF
  float v12; // [esp+40h] [ebp-Ch]
  float v13; // [esp+44h] [ebp-8h]
  float v14; // [esp+48h] [ebp-4h]

  if ( a2 == *(float *)(this + 8) ) /*0x6e59aa*/
  {
    qmemcpy(a4, (const void *)(this + 0x1C), 0x20u); /*0x6e59bc*/
    return !NiTransform_IsInvalid((float *)(this + 0x1C)); /*0x6e59c9*/
  }
  else
  {
    v6 = *(_DWORD *)(this + 0x3C); /*0x6e59d6*/
    v9 = (a2 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC)); /*0x6e59e6*/
    if ( v6 != 0xFFFF ) /*0x6e59ea*/
    {
      sub_6E7470( /*0x6e5a13*/
        *(_DWORD **)(this + 0x14),
        v9,
        (int)&v11,
        3u,
        *(_DWORD *)(this + 0x18),
        v6,
        *(float *)(this + 0x48),
        *(float *)(this + 0x4C));
      v10[0] = *(float *)&v11; /*0x6e5a1c*/
      v10[1] = v12; /*0x6e5a29*/
      v10[2] = v13; /*0x6e5a34*/
      sub_471390((_DWORD *)(this + 0x1C), v10); /*0x6e5a38*/
    }
    v7 = *(_DWORD *)(this + 0x40); /*0x6e5a3d*/
    if ( v7 != 0xFFFF ) /*0x6e5a45*/
    {
      sub_6E7470( /*0x6e5a6e*/
        *(_DWORD **)(this + 0x14),
        v9,
        (int)&v11,
        4u,
        *(_DWORD *)(this + 0x18),
        v7,
        *(float *)(this + 0x50),
        *(float *)(this + 0x54));
      sub_714C40(v10, *(float *)&v11, v12, v13, v14); /*0x6e5a99*/
      sub_72FAC0(v10); /*0x6e5aa2*/
      sub_471430((_DWORD *)(this + 0x1C), v10); /*0x6e5aaf*/
    }
    v8 = *(_DWORD *)(this + 0x44); /*0x6e5ab4*/
    if ( v8 != 0xFFFF ) /*0x6e5abc*/
    {
      sub_6E7470( /*0x6e5ae5*/
        *(_DWORD **)(this + 0x14),
        v9,
        (int)&v11,
        1u,
        *(_DWORD *)(this + 0x18),
        v8,
        *(float *)(this + 0x58),
        *(float *)(this + 0x5C));
      sub_471560((float *)(this + 0x1C), *(float *)&v11); /*0x6e5af5*/
    }
    qmemcpy(a4, (const void *)(this + 0x1C), 0x20u); /*0x6e5b08*/
    if ( NiTransform_IsInvalid((float *)(this + 0x1C)) ) /*0x6e5b0c*/
    {
      return 0; /*0x6e5b17*/
    }
    else
    {
      *(float *)(this + 8) = a2; /*0x6e5b26*/
      return 1; /*0x6e5b29*/
    }
  }
}
