void __thiscall sub_7E4700(float *this, float a2)
{
  signed int SlotCapacity; // eax
  double v4; // st7
  double v5; // st6
  int v6; // ebp
  int v7; // ecx
  unsigned int v8; // edi
  float *v9; // edx
  int v10; // edx
  double v11; // st5
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  float *v17; // edx
  float v18; // [esp+0h] [ebp-4h]

  v18 = a2 - *(this + 0x3E); /*0x7e4711*/
  SlotCapacity = ParticleShaderProperty_GetSlotCapacity(); /*0x7e4715*/
  v4 = v18; /*0x7e471a*/
  v5 = dbl_A3A5B0; /*0x7e4720*/
  v6 = 0; /*0x7e4726*/
  if ( SlotCapacity >= 4 ) /*0x7e472b*/
  {
    v7 = 0; /*0x7e4737*/
    v8 = ((unsigned int)(SlotCapacity - 4) >> 2) + 1; /*0x7e4739*/
    v6 = 4 * v8; /*0x7e473c*/
    do /*0x7e47b4*/
    {
      v9 = (float *)(v7 + *((_DWORD *)this + 0x1B)); /*0x7e4749*/
      if ( *v9 != v5 ) /*0x7e4753*/
        v9[3] = v4 + v9[3]; /*0x7e475a*/
      v10 = *((_DWORD *)this + 0x1B); /*0x7e475d*/
      v11 = *(float *)(v10 + v7 + 0x20); /*0x7e4760*/
      v12 = v7 + v10; /*0x7e4764*/
      if ( v11 != v5 ) /*0x7e476d*/
        *(float *)(v12 + 0x2C) = v4 + *(float *)(v12 + 0x2C); /*0x7e4774*/
      v13 = *((_DWORD *)this + 0x1B); /*0x7e4777*/
      if ( *(float *)(v7 + v13 + 0x40) != v5 ) /*0x7e4785*/
        *(float *)(v7 + v13 + 0x4C) = v4 + *(float *)(v7 + v13 + 0x4C); /*0x7e478d*/
      v14 = *((_DWORD *)this + 0x1B); /*0x7e4791*/
      if ( *(float *)(v7 + v14 + 0x60) != v5 ) /*0x7e479f*/
        *(float *)(v7 + v14 + 0x6C) = v4 + *(float *)(v7 + v14 + 0x6C); /*0x7e47a7*/
      v7 += 0x80; /*0x7e47ab*/
      --v8; /*0x7e47b1*/
    }
    while ( v8 ); /*0x7e47b4*/
  }
  if ( v6 < SlotCapacity ) /*0x7e47b8*/
  {
    v15 = 0x20 * v6; /*0x7e47bc*/
    v16 = SlotCapacity - v6; /*0x7e47c1*/
    do /*0x7e47e3*/
    {
      v17 = (float *)(v15 + *((_DWORD *)this + 0x1B)); /*0x7e47c9*/
      if ( *v17 != v5 ) /*0x7e47d3*/
        v17[3] = v17[3] + v4; /*0x7e47da*/
      v15 += 0x20; /*0x7e47dd*/
      --v16; /*0x7e47e0*/
    }
    while ( v16 ); /*0x7e47e3*/
  }
  *(this + 0x3E) = a2; /*0x7e47ee*/
}
