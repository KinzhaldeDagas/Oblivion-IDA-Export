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

  sub_8A6850(this, *(_DWORD *)(a2 + 4)); /*0x8a9f65*/
  *(_DWORD *)this = &off_A97A98; /*0x8a9f6a*/
  *(this + 0x58) = *(_BYTE *)(a2 + 8); /*0x8a9f73*/
  *((_WORD *)this + 0x47) = *(_WORD *)(a2 + 0xA); /*0x8a9f7a*/
  *((_DWORD *)this + 0xC) = *(_DWORD *)a2; /*0x8a9f83*/
  v3 = *(_BYTE *)(a2 + 0xB0) != 7; /*0x8a9f90*/
  *(this + 0x91) = *(_BYTE *)(a2 + 0xB0) == 7; /*0x8a9f92*/
  if ( v3 ) /*0x8a9f98*/
  {
    sub_8A9630( /*0x8aa04f*/
      *(char *)(a2 + 0xB0),
      a2 + 0x10,
      a2 + 0x20,
      *(_DWORD *)(a2 + 0x90),
      (float *)(a2 + 0x50),
      a2 + 0x80,
      *(_DWORD *)(a2 + 0xA4),
      *(_OWORD **)(a2 + 0xA8),
      v11);
    v7 = v6; /*0x8aa05e*/
    sub_89DB80(v6, *(char *)(a2 + 0xB2)); /*0x8aa063*/
    *((_DWORD *)this + 0x14) = v7; /*0x8aa06a*/
    sub_8A6410((int)this); /*0x8aa06d*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x14) + 0x54))(*((_DWORD *)this + 0x14), a2 + 0x30); /*0x8aa07b*/
    sub_8A6410((int)this); /*0x8aa080*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x14) + 0x58))(*((_DWORD *)this + 0x14), a2 + 0x40); /*0x8aa08e*/
    *((_DWORD *)this + 7) = *((_DWORD *)this + 0x14) + 0x10; /*0x8aa097*/
    sub_8A9C90(this, *(char *)(a2 + 0xB1)); /*0x8aa0a4*/
    *((_DWORD *)this + 0xD) = *(_DWORD *)(a2 + 0xAC); /*0x8aa0af*/
  }
  else
  {
    v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x100, 0x2B); /*0x8a9fad*/
    *(_WORD *)(v4 + 4) = 0x100; /*0x8a9fba*/
    v5 = sub_8EA030((float *)v4, (_OWORD *)(a2 + 0x10), (float *)(a2 + 0x20)); /*0x8a9fc0*/
    *((_DWORD *)this + 0x14) = v5; /*0x8a9fc5*/
    v5[0x2D] = *(float *)(a2 + 0xA4); /*0x8a9fce*/
    v5[0x2E] = *(float *)(a2 + 0xA8); /*0x8a9fde*/
    sub_89DB80(v5, 1); /*0x8a9fe4*/
    *((_DWORD *)this + 7) = *((_DWORD *)this + 0x14) + 0x10; /*0x8a9fef*/
    if ( *(float *)(a2 + 0xAC) > (double)*(float *)&SrcStr ) /*0x8aa003*/
      *((_DWORD *)this + 0xD) = *(_DWORD *)(a2 + 0xAC); /*0x8aa017*/
    else
      *((_DWORD *)this + 0xD) = 0x7F7FFFFF; /*0x8aa005*/
  }
  *(_DWORD *)(*((_DWORD *)this + 0x14) + 0xC8) = *(_DWORD *)(a2 + 0x94); /*0x8aa0bb*/
  *(_DWORD *)(*((_DWORD *)this + 0x14) + 0xCC) = *(_DWORD *)(a2 + 0x98); /*0x8aa0cd*/
  if ( *((_DWORD *)this + 5) ) /*0x8aa0d3*/
  {
    sub_8A9970((int)this, &v12); /*0x8aa0df*/
    if ( *((float *)this + 0xD) <= (double)*(float *)&SrcStr ) /*0x8aa0f5*/
      sub_8A9A60(v12.m128_f32, (int)(this + 0x14)); /*0x8aa0fd*/
  }
  v8 = *(_BYTE *)(a2 + 0xB3); /*0x8aa102*/
  if ( v8 ) /*0x8aa10a*/
  {
    *((_WORD *)this + 0x17) = v8; /*0x8aa110*/
  }
  else if ( *(this + 0x91) ) /*0x8aa116*/
  {
    *((_WORD *)this + 0x17) = 1; /*0x8aa120*/
  }
  else
  {
    *((_WORD *)this + 0x17) = (*(_BYTE *)(a2 + 0xB0) != 6) + 2; /*0x8aa139*/
  }
  *(this + 0x90) = *(_BYTE *)(a2 + 0xB4); /*0x8aa143*/
  *((_DWORD *)this + 0x17) = *(_DWORD *)(a2 + 0x9C); /*0x8aa14f*/
  v9 = *(this + 0x91); /*0x8aa152*/
  *((_DWORD *)this + 0x18) = *(_DWORD *)(a2 + 0xA0); /*0x8aa160*/
  if ( v9 || (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x14) + 8))(*((_DWORD *)this + 0x14)) == 6 ) /*0x8aa170*/
  {
    *(this + 0x92) = 1; /*0x8aa187*/
    return this; /*0x8aa18e*/
  }
  else
  {
    *(this + 0x92) = 0; /*0x8aa174*/
    return this; /*0x8aa17a*/
  }
}
