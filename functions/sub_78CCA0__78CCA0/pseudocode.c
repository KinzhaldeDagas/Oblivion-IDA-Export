char __userpurge sub_78CCA0@<al>(_BYTE *this@<ecx>, int a2@<edi>, const void *a3, int a4, float a5)
{
  bool v6; // zf
  _DWORD *v7; // esi
  int v8; // eax
  int i; // esi
  int *v10; // eax
  float j; // esi
  int v12; // eax
  signed int v13; // eax
  unsigned int *v14; // ecx
  _DWORD *v15; // ecx
  float *v16; // eax
  rsize_t v23; // [esp+0h] [ebp-80h] BYREF
  float v24[17]; // [esp+30h] [ebp-50h] BYREF
  int v25; // [esp+7Ch] [ebp-4h]
  float v26[5]; // [esp+88h] [ebp+8h] BYREF
  _DWORD v27[7]; // [esp+A0h] [ebp+20h] BYREF
  int v36; // [esp+C8h] [ebp+48h]
  int v37; // [esp+C8h] [ebp+48h]
  int v39; // [esp+C8h] [ebp+48h]
  int v41; // [esp+C8h] [ebp+48h]
  int v42; // [esp+C8h] [ebp+48h]
  int v44; // [esp+C8h] [ebp+48h]
  int v46; // [esp+C8h] [ebp+48h]
  int v47; // [esp+C8h] [ebp+48h]
  int v49; // [esp+C8h] [ebp+48h]
  int v51; // [esp+CCh] [ebp+4Ch]
  int v52; // [esp+CCh] [ebp+4Ch]

  LODWORD(v24[0x10]) = (char *)&v23 + 4;
  _EBX = this;
  v27[6] = this;
  v6 = *(this + 0x45) == 0;
  v25 = 0;
  if ( v6 )
  {
    dword_B429C4 = *((_DWORD *)this + 0x17);
    sub_7A24F0(*(_DWORD **)this, a4);
    __asm { fld     dword ptr [ebx+24h] }
    __asm { fstp    dword ptr [esp+0BCh+var_BC]; float }
    sub_7A45F0(*(_BYTE **)_EBX, *(float *)&v23);
    sub_7A1CD0(*((_DWORD **)_EBX + 0x17), *((_DWORD *)_EBX + 0x18), *((_DWORD *)_EBX + 3));
    v7 = *(_DWORD **)_EBX;
    *((_WORD *)_EBX + 0x32) = *(_WORD *)(*((_DWORD *)_EBX + 0x18) + 0x20);
    v8 = v7[0x26];
    if ( v8 )
      v8 = (v7[0x27] - v8) / 0x54;
    sub_7A5740(v7 + 0x21, v8);
    if ( *(_DWORD *)(*((_DWORD *)_EBX + 3) + 0x38) == 1 )
      sub_78C370((int *)_EBX);
    sub_793C00(*((float **)_EBX + 4), (float *)(*(_DWORD *)_EBX + 0xF4));
    sub_799320(
      *((_DWORD *)_EBX + 2),
      *(_DWORD *)(*(_DWORD *)_EBX + 0xC0),
      *(_DWORD *)(*(_DWORD *)_EBX + 0xD4),
      *(_DWORD *)_EBX + 0x84);
    if ( *((_DWORD *)_EBX + 0x13) )
    {
      for ( i = 0; ; ++i )
      {
        v10 = *((int **)_EBX + 0x13);
        if ( i >= *v10 )
          break;
        sub_798550(*((_DWORD **)_EBX + 2), i, (float *)(v10[1] + 0x20 * i));
      }
      for ( j = 0.0; ; ++LODWORD(j) )
      {
        v12 = *((_DWORD *)_EBX + 0x13);
        if ( SLODWORD(j) >= *(_DWORD *)(v12 + 0x10) )
          break;
        sub_79A810(*((_DWORD *)_EBX + 0x18), j, *(_DWORD *)(v12 + 0x14) + 0x20 * LODWORD(j), byte_B4297D);
      }
    }
    if ( LOBYTE(a5) )
    {
      sub_7977D0(*((_DWORD **)_EBX + 1), 0);
      sub_7977D0(*((_DWORD **)_EBX + 0x18), 0);
    }
    if ( a3 )
    {
      sub_7A66B0(v24);
      qmemcpy(v24, a3, 0x40u);
      v13 = sub_7948C0(*((_DWORD **)_EBX + 1), v24);
      sub_798360(v13, *((_DWORD *)_EBX + 2), v24);
      sub_7948C0(*((_DWORD **)_EBX + 0x18), v24);
      v14 = *((unsigned int **)_EBX + 0x16);
      if ( v14 )
        sub_788BE0(v14, v24);
    }
    sub_7A6BB0(v26);
    LODWORD(v23) = v26;
    v15 = *((_DWORD **)_EBX + 1);
    LOBYTE(v25) = 1;
    sub_7947A0(v15, v26);
    sub_7997F0(*((_DWORD *)_EBX + 2), v26);
    sub_7947A0(*((_DWORD **)_EBX + 0x18), v26);
    v16 = *((float **)_EBX + 0x10);
    *v16 = v26[0];
    v16[1] = v26[1];
    v16[2] = v26[2];
    _EAX = *((_DWORD **)_EBX + 0x10);
    _EAX[3] = v27[0];
    _EAX += 3;
    _EAX[1] = v27[1];
    _EAX[2] = v27[2];
    _ECX = *((_DWORD *)_EBX + 0x10);
    __asm
    {
      fld     dword ptr [ecx]
      fstp    [ebp+3Ch+arg_8]
      fld     dword ptr [ecx+4]
      fstp    [ebp+3Ch+arg_4]
      fld     [ebp+3Ch+arg_8]
      fldz
      fsub    st(1), st
      fld     [ebp+3Ch+arg_4]
      fsub    st, st(1)
      fld     st(1)
      fsub    st, st(2)
      fmul    st, st
      fld     st(1)
      fmulp   st(2), st
      fld     st(3)
      fmulp   st(4), st
      fxch    st(1)
      faddp   st(3), st
      fadd    st(2), st
      fxch    st(2)
      fstp    [ebp+3Ch+arg_8]
      fld     dword ptr [ecx]
    }
    __asm { fstp    [ebp+3Ch+arg_4] }
    __asm { fld     dword ptr [ecx+10h] }
    __asm { fstp    [ebp+3Ch+arg_0] }
    v52 = (v51 >> 1) + 0x1FC00000;
    __asm
    {
      fld     [ebp+3Ch+arg_4]
      fsub    st, st(1)
      fld     [ebp+3Ch+arg_0]
      fsub    st, st(2)
      fmul    st, st
      fld     st(1)
      fmulp   st(2), st
      faddp   st(1), st
      fadd    st, st(2)
      fstp    [ebp+3Ch+arg_4]
    }
    __asm { fld     [ebp+3Ch+arg_8] }
    v37 = (v36 >> 1) + 0x1FC00000;
    __asm
    {
      fld     [ebp+3Ch+arg_4]
      fcompp
      fnstsw  ax
    }
    if ( __SETP__(BYTE1(_EAX) & 5, 0) )
    {
      __asm
      {
        fld     dword ptr [ecx]
        fstp    [ebp+3Ch+arg_4]
        fld     dword ptr [ecx+10h]
        fstp    [ebp+3Ch+arg_0]
        fld     [ebp+3Ch+arg_4]
        fsub    st, st(1)
        fld     [ebp+3Ch+arg_0]
        fsub    st, st(2)
        fld     st(1)
        fmulp   st(2), st
        fmul    st, st
        faddp   st(1), st
        fadd    st, st(2)
        fstp    [ebp+3Ch+arg_4]
      }
      v52 = (v39 >> 1) + 0x1FC00000;
    }
    __asm
    {
      fld     dword ptr [ecx+0Ch]
      fstp    [ebp+3Ch+arg_4]
      fld     dword ptr [ecx+4]
      fstp    [ebp+3Ch+arg_0]
      fld     [ebp+3Ch+arg_4]
      fsub    st, st(1)
      fld     [ebp+3Ch+arg_0]
      fsub    st, st(2)
      fmul    st, st
      fld     st(1)
      fmulp   st(2), st
      faddp   st(1), st
      fadd    st, st(2)
      fstp    [ebp+3Ch+arg_4]
    }
    __asm { fld     [ebp+3Ch+arg_8] }
    v42 = (v41 >> 1) + 0x1FC00000;
    __asm
    {
      fld     [ebp+3Ch+arg_4]
      fcompp
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm
      {
        fld     dword ptr [ecx+0Ch]
        fstp    [ebp+3Ch+arg_0]
        fld     dword ptr [ecx+4]
        fstp    [ebp+3Ch+arg_4]
        fld     [ebp+3Ch+arg_4]
        fsub    st, st(1)
        fld     [ebp+3Ch+arg_0]
        fsub    st, st(2)
        fmul    st, st
        fld     st(1)
        fmulp   st(2), st
        faddp   st(1), st
        fadd    st, st(2)
        fstp    [ebp+3Ch+arg_4]
      }
      v52 = (v44 >> 1) + 0x1FC00000;
    }
    __asm
    {
      fld     dword ptr [ecx+0Ch]
      fstp    [ebp+3Ch+arg_0]
      fld     dword ptr [ecx+10h]
      fstp    [ebp+3Ch+arg_4]
      fld     [ebp+3Ch+arg_4]
      fsub    st, st(1)
      fld     [ebp+3Ch+arg_0]
      fsub    st, st(2)
      fmul    st, st
      fld     st(1)
      fmulp   st(2), st
      faddp   st(1), st
      fadd    st, st(2)
      fstp    [ebp+3Ch+arg_4]
    }
    __asm { fld     [ebp+3Ch+arg_8] }
    v47 = (v46 >> 1) + 0x1FC00000;
    __asm
    {
      fld     [ebp+3Ch+arg_4]
      fcompp
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm
      {
        fld     dword ptr [ecx+0Ch]
        fstp    [ebp+3Ch+arg_0]
        fld     dword ptr [ecx+10h]
        fstp    [ebp+3Ch+arg_4]
        fld     [ebp+3Ch+arg_4]
        fsub    st, st(1)
        fld     [ebp+3Ch+arg_0]
        fsubrp  st(2), st
        fld     st(1)
        fmulp   st(2), st
        fmul    st, st
        faddp   st(1), st
        faddp   st(1), st
        fstp    [ebp+3Ch+arg_4]
      }
      v52 = (v49 >> 1) + 0x1FC00000;
    }
    else
    {
      __asm
      {
        fstp    st
        fstp    st
      }
    }
    __asm
    {
      fld     [ebp+3Ch+arg_8]
      fadd    st, st
      fstp    dword ptr [ecx+18h]
    }
    *(float *)(_ECX + 0x18) = _ET1;
    if ( *((_DWORD *)_EBX + 0x14) )
      sub_787480((int *)_EBX);
    sub_7875D0((int)_EBX);
    _EBX[0x45] = 1;
    LOBYTE(v25) = 2;
    TESTexture::ClearComponentReferences(v27);
    LOBYTE(v25) = 0;
    TESTexture::ClearComponentReferences(v26);
  }
  else
  {
    LODWORD(v23) = 0x3F;
    sub_414500(&dword_B2B614, a2, "Compute() called more than once for single tree model (ignored)", v23);
  }
  return _EBX[0x45];
}
