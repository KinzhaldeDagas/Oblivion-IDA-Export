char *__thiscall sub_8A9F50(char *this, int a2)
{
  bool v3; // zf
  int v4; // eax
  float *v5; // eax
  _WORD *v6; // eax
  _WORD *v7; // ebx
  char v8; // al
  char v9; // al
  float *v11; // [esp+0h] [ebp-20h]
  __m128 v12; // [esp+10h] [ebp-10h] BYREF

  sub_8A6850(this, *(_DWORD *)(a2 + 4));
  *(_DWORD *)this = &off_A97A98;
  *(this + 0x58) = *(_BYTE *)(a2 + 8);
  *((_WORD *)this + 0x47) = *(_WORD *)(a2 + 0xA);
  *((_DWORD *)this + 0xC) = *(_DWORD *)a2;
  v3 = *(_BYTE *)(a2 + 0xB0) != 7;
  *(this + 0x91) = *(_BYTE *)(a2 + 0xB0) == 7;
  if ( v3 )
  {
    sub_8A9630(
      *(char *)(a2 + 0xB0),
      a2 + 0x10,
      a2 + 0x20,
      *(_DWORD *)(a2 + 0x90),
      (float *)(a2 + 0x50),
      a2 + 0x80,
      *(_DWORD *)(a2 + 0xA4),
      *(_OWORD **)(a2 + 0xA8),
      v11);
    v7 = v6;
    sub_89DB80(v6, *(char *)(a2 + 0xB2));
    *((_DWORD *)this + 0x14) = v7;
    sub_8A6410((int)this);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x14) + 0x54))(*((_DWORD *)this + 0x14), a2 + 0x30);
    sub_8A6410((int)this);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x14) + 0x58))(*((_DWORD *)this + 0x14), a2 + 0x40);
    *((_DWORD *)this + 7) = *((_DWORD *)this + 0x14) + 0x10;
    sub_8A9C90(this, *(char *)(a2 + 0xB1));
    *((_DWORD *)this + 0xD) = *(_DWORD *)(a2 + 0xAC);
  }
  else
  {
    v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x100, 0x2B);
    *(_WORD *)(v4 + 4) = 0x100;
    v5 = sub_8EA030((float *)v4, (_OWORD *)(a2 + 0x10), (float *)(a2 + 0x20));
    *((_DWORD *)this + 0x14) = v5;
    v5[0x2D] = *(float *)(a2 + 0xA4);
    v5[0x2E] = *(float *)(a2 + 0xA8);
    sub_89DB80(v5, 1);
    *((_DWORD *)this + 7) = *((_DWORD *)this + 0x14) + 0x10;
    if ( *(float *)(a2 + 0xAC) > (double)*(float *)&SrcStr )
      *((_DWORD *)this + 0xD) = *(_DWORD *)(a2 + 0xAC);
    else
      *((_DWORD *)this + 0xD) = 0x7F7FFFFF;
  }
  *(_DWORD *)(*((_DWORD *)this + 0x14) + 0xC8) = *(_DWORD *)(a2 + 0x94);
  *(_DWORD *)(*((_DWORD *)this + 0x14) + 0xCC) = *(_DWORD *)(a2 + 0x98);
  if ( *((_DWORD *)this + 5) )
  {
    sub_8A9970((int)this, &v12);
    if ( *((float *)this + 0xD) <= (double)*(float *)&SrcStr )
      sub_8A9A60(v12.m128_f32, (int)(this + 0x14));
  }
  v8 = *(_BYTE *)(a2 + 0xB3);
  if ( v8 )
  {
    *((_WORD *)this + 0x17) = v8;
  }
  else if ( *(this + 0x91) )
  {
    *((_WORD *)this + 0x17) = 1;
  }
  else
  {
    *((_WORD *)this + 0x17) = (*(_BYTE *)(a2 + 0xB0) != 6) + 2;
  }
  *(this + 0x90) = *(_BYTE *)(a2 + 0xB4);
  *((_DWORD *)this + 0x17) = *(_DWORD *)(a2 + 0x9C);
  v9 = *(this + 0x91);
  *((_DWORD *)this + 0x18) = *(_DWORD *)(a2 + 0xA0);
  if ( v9 || (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x14) + 8))(*((_DWORD *)this + 0x14)) == 6 )
  {
    *(this + 0x92) = 1;
    return this;
  }
  else
  {
    *(this + 0x92) = 0;
    return this;
  }
}
