_DWORD *__thiscall sub_414420(int this, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  const void *v5; // edi
  unsigned int v7; // eax
  bool v8; // zf
  _DWORD *v9; // edx
  void **v10; // ebx
  void *v11; // eax
  bool v12; // cf
  rsize_t v13; // [esp-Ch] [ebp-1Ch]
  _BYTE v14[12]; // [esp-4h] [ebp-14h]

  if ( a2[5] < a3 )
    std::_String_base::_Xran();
  v5 = (const void *)(a2[5] - a3);
  if ( a4 < (unsigned int)v5 )
    v5 = (const void *)a4;
  if ( (_DWORD *)this == a2 )
  {
    sub_4134E0((_DWORD *)this, a3, (unsigned int)v5 + a3, 0xFFFFFFFF);
    sub_4134E0((_DWORD *)this, a3, 0, a3);
    return (_DWORD *)this;
  }
  if ( v5 == (const void *)0xFFFFFFFF )
    std::_String_base::_Xlen();
  v7 = *(_DWORD *)(this + 0x18);
  if ( v7 < (unsigned int)v5 )
  {
    *(_DWORD *)v14 = *(_DWORD *)(this + 0x14);
    sub_4135C0((_DWORD *)this, (unsigned int)v5, *(rsize_t *)v14);
    v8 = v5 == 0;
LABEL_11:
    if ( !v8 )
    {
      if ( a2[6] < 0x10u )
        v9 = a2 + 1;
      else
        v9 = (_DWORD *)a2[1];
      v10 = (void **)(this + 4);
      if ( *(_DWORD *)(this + 0x18) < 0x10u )
        v11 = (void *)(this + 4);
      else
        v11 = *v10;
      HIDWORD(v13) = (char *)v9 + a3;
      LODWORD(v13) = *(_DWORD *)(this + 0x18);
      memcpy_s(v11, v13, v5, *(rsize_t *)&v14[4]);
      v12 = *(_DWORD *)(this + 0x18) < 0x10u;
      *(_DWORD *)(this + 0x14) = v5;
      if ( !v12 )
        v10 = (void **)*v10;
      *((_BYTE *)v5 + (_DWORD)v10) = 0;
    }
    return (_DWORD *)this;
  }
  v8 = v5 == 0;
  if ( v5 )
    goto LABEL_11;
  *(_DWORD *)(this + 0x14) = 0;
  if ( v7 < 0x10 )
    *(_BYTE *)(this + 4) = 0;
  else
    **(_BYTE **)(this + 4) = 0;
  return (_DWORD *)this;
}
