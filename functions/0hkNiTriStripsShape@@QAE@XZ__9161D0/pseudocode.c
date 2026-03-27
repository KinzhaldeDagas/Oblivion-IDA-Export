hkNiTriStripsShape *__thiscall hkNiTriStripsShape::hkNiTriStripsShape(hkNiTriStripsShape *this, int a2)
{
  char *v3; // esi
  int i; // ebx
  unsigned int v5; // eax
  unsigned int v8; // [esp+1Ch] [ebp-38h]
  int *v9; // [esp+20h] [ebp-34h]
  float v10[7]; // [esp+24h] [ebp-30h]

  sub_9156C0(this);
  v3 = (char *)this + 0x24;
  *(_DWORD *)this = &hkNiTriStripsShape::`vftable';
  *((_DWORD *)this + 9) = &NiTLargeArray<hkNiTriStripsData>::`vftable';
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xE) = 1;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((float *)this + 8) = *(float *)(a2 + 4);
  v10[0] = *(float *)(a2 + 0x20);
  v10[1] = *(float *)(a2 + 0x24);
  v10[2] = *(float *)(a2 + 0x28);
  v10[3] = *(float *)(a2 + 0x2C);
  *((_OWORD *)this + 1) = *(_OWORD *)v10;
  for ( i = 0; i < *(_DWORD *)(a2 + 0x14); ++i )
  {
    v5 = *((_DWORD *)v3 + 3);
    v9 = (int *)(*(_DWORD *)(a2 + 0xC) + 8 * i);
    v8 = v5;
    if ( v5 >= *((_DWORD *)v3 + 2) )
    {
      sub_8C69C0((int **)v3, v5 + *((_DWORD *)v3 + 5));
      v5 = v8;
    }
    sub_8C68D0(v3, v5, v9);
  }
  return this;
}
