float **__thiscall sub_78D6A0(float **this)
{
  int v2; // ebx
  float **v7; // ecx
  float *v8; // eax
  float **v9; // ecx
  float *v10; // eax
  float *v11; // ecx
  float *v12; // eax
  float *v13; // ecx
  float *v14; // eax
  float **v15; // ecx
  float *v16; // eax
  float **v17; // ecx
  float *v18; // eax
  float *v19; // eax
  int v20; // eax
  float **v21; // ecx
  float *v22; // eax
  float **v23; // ecx
  float *v24; // eax
  float *v25; // edx
  int v27; // eax
  int v29; // ecx
  int v31; // edx
  int v33; // eax
  int v35; // ecx
  int v37; // edx
  int v41; // [esp+0h] [ebp-68h] BYREF
  float **v42; // [esp+50h] [ebp-18h] BYREF
  float **v43; // [esp+54h] [ebp-14h]
  int *v44; // [esp+58h] [ebp-10h]
  int v45; // [esp+64h] [ebp-4h]

  v44 = &v41;
  v43 = this;
  __asm { fld     dword ptr ds:0A8C430h }
  v2 = 0;
  __asm { fstp    dword ptr [esi+1Ch] }
  *((float *)v43 + 7) = _ET1;
  __asm { fld     dword ptr ds:0A41724h }
  __asm { fstp    dword ptr [esi+20h] }
  *(this + 8) = _ET1;
  __asm { fld     dword ptr ds:0A3D65Ch }
  *this = 0;
  __asm { fstp    dword ptr [esi+24h] }
  *(this + 9) = _ET1;
  *(this + 1) = 0;
  __asm { fldz }
  *(this + 2) = 0;
  __asm { fstp    dword ptr [esi+28h] }
  *(this + 0xA) = _ET1;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = (float *)1;
  *(this + 0xB) = 0;
  *(this + 0xC) = 0;
  *(this + 0xD) = 0;
  *(this + 0xF) = (float *)0xFFFFFFFF;
  *(this + 0x10) = 0;
  *((_BYTE *)this + 0x44) = 0x54;
  *((_BYTE *)this + 0x45) = 0;
  *(this + 0x12) = (float *)0xFFFFFFFF;
  *(this + 0x13) = 0;
  *(this + 0x14) = 0;
  *((_WORD *)this + 0x2A) = 0;
  *(this + 0x16) = 0;
  *(this + 0x17) = 0;
  *((_WORD *)this + 0x32) = 0;
  *(this + 0x1A) = 0;
  *((_BYTE *)this + 0x6C) = 0;
  *((_BYTE *)this + 0x6D) = 0;
  v45 = 0;
  v7 = (float **)FormHeapAlloc(0x44u);
  v42 = v7;
  LOBYTE(v45) = 1;
  if ( v7 )
    v8 = (float *)sub_793B40(v7);
  else
    v8 = 0;
  LOBYTE(v45) = 0;
  *(this + 4) = v8;
  v9 = (float **)FormHeapAlloc(0x118u);
  v42 = v9;
  LOBYTE(v45) = 2;
  if ( v9 )
    v10 = (float *)sub_795FB0(v9, (int)*(this + 4), 0);
  else
    v10 = 0;
  LOBYTE(v45) = 0;
  *(this + 1) = v10;
  v11 = (float *)FormHeapAlloc(0x110u);
  v42 = (float **)v11;
  LOBYTE(v45) = 3;
  if ( v11 )
    v12 = sub_7A3700(v11, (int)*(this + 1));
  else
    v12 = 0;
  LOBYTE(v45) = 0;
  *this = v12;
  v13 = (float *)FormHeapAlloc(0xB0u);
  v42 = (float **)v13;
  LOBYTE(v45) = 4;
  if ( v13 )
    v14 = sub_793CF0(v13);
  else
    v14 = 0;
  LOBYTE(v45) = 0;
  *(this + 3) = v14;
  v15 = (float **)FormHeapAlloc(0x30u);
  v42 = v15;
  LOBYTE(v45) = 5;
  if ( v15 )
    v16 = (float *)sub_798290(v15, (int)*(this + 4));
  else
    v16 = 0;
  LOBYTE(v45) = 0;
  *(this + 2) = v16;
  v17 = (float **)FormHeapAlloc(0x34u);
  v42 = v17;
  LOBYTE(v45) = 6;
  if ( v17 )
    v18 = (float *)sub_7A66F0(v17);
  else
    v18 = 0;
  LOBYTE(v45) = 0;
  *(this + 5) = v18;
  *(this + 0x10) = (float *)FormHeapAlloc(0x1Cu);
  v19 = (float *)FormHeapAlloc(4u);
  *(this + 0xC) = v19;
  *(_DWORD *)v19 = 1;
  v20 = FormHeapAlloc(0x10u);
  if ( v20 )
  {
    *(_DWORD *)(v20 + 4) = 0;
    *(_DWORD *)(v20 + 8) = 0;
    *(_DWORD *)(v20 + 0xC) = 0;
  }
  else
  {
    v20 = 0;
  }
  LOBYTE(v45) = 0;
  *(this + 0xE) = (float *)v20;
  v21 = (float **)FormHeapAlloc(0x6Cu);
  v42 = v21;
  LOBYTE(v45) = 8;
  if ( v21 )
    v22 = (float *)sub_7A13B0(v21);
  else
    v22 = 0;
  LOBYTE(v45) = 0;
  *(this + 0x17) = v22;
  v23 = (float **)FormHeapAlloc(0x118u);
  v42 = v23;
  LOBYTE(v45) = 9;
  if ( v23 )
    v24 = (float *)sub_795FB0(v23, (int)*(this + 4), 1);
  else
    v24 = 0;
  *(this + 0x18) = v24;
  LOBYTE(v45) = 0;
  v42 = this;
  sub_791770(&dword_B42984, &v42);
  __asm { fldz }
  ++dword_B42980;
  dword_B429BC = (int)*(this + 3);
  v25 = *(this + 0x10);
  __asm { fst     dword ptr [edx] }
  *v25 = _ET1;
  v27 = (int)*(this + 0x10);
  __asm { fst     dword ptr [eax+4] }
  *(float *)(v27 + 4) = _ET1;
  v29 = (int)*(this + 0x10);
  __asm { fst     dword ptr [ecx+8] }
  *(float *)(v29 + 8) = _ET1;
  v31 = (int)*(this + 0x10);
  __asm
  {
    fld1
    fst     dword ptr [edx+0Ch]
  }
  *(float *)(v31 + 0xC) = _ET1;
  v33 = (int)*(this + 0x10);
  __asm { fst     dword ptr [eax+10h] }
  *(float *)(v33 + 0x10) = _ET1;
  v35 = (int)*(this + 0x10);
  __asm { fst     dword ptr [ecx+14h] }
  *(float *)(v35 + 0x14) = _ET1;
  v37 = (int)*(this + 0x10);
  __asm { fstp    dword ptr [edx+18h] }
  *(float *)(v37 + 0x18) = _ET1;
  while ( v2 < 0xC )
  {
    __asm { fst     dword ptr [esi+ebx*4+70h] }
    *(this + v2++ + 0x1C) = _ET1;
  }
  __asm { fstp    st }
  return this;
}
