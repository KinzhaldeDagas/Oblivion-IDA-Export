void __thiscall sub_85C250(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  float v7; // ecx
  float v8; // edx
  NiD3DPass *v9; // esi
  float v10; // eax
  UInt32 Stage; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // ebp
  UInt32 v16; // [esp+2Ch] [ebp+Ch]

  v7 = flt_B464A0[0x27]; /*0x85c27b*/
  v8 = flt_B464A0[0x28]; /*0x85c281*/
  v9 = (NiD3DPass *)unk_B4779C; /*0x85c287*/
  flt_B464A0[0x22] = flt_B464A0[0x26]; /*0x85c28d*/
  v10 = flt_B464A0[0x29]; /*0x85c292*/
  flt_B464A0[0x23] = v7; /*0x85c297*/
  flt_B464A0[0x24] = v8; /*0x85c2a1*/
  flt_B464A0[0x25] = v10; /*0x85c2a7*/
  sub_848E50(*(float **)(a4 + 0xC)); /*0x85c2b2*/
  Stage = v9->Stages.data->Stage; /*0x85c2be*/
  v16 = Stage; /*0x85c2c5*/
  v12 = sub_848FD0(a5, 0); /*0x85c2c9*/
  v13 = *(_DWORD *)(Stage + 4); /*0x85c2ce*/
  v14 = v12; /*0x85c2d1*/
  if ( v13 != v12 ) /*0x85c2d5*/
  {
    if ( v13 ) /*0x85c2d9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x85c2df*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x85c2f5*/
    }
    *(_DWORD *)(v16 + 4) = v14; /*0x85c2fd*/
    if ( v14 ) /*0x85c300*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x85c306*/
  }
  if ( !(_BYTE)value ) /*0x85c311*/
  {
    ++v9->RefCount; /*0x85c318*/
    value = v9; /*0x85c31b*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85c333*/
    if ( v9->RefCount-- == 1 ) /*0x85c33b*/
      NiD3DPass_ReleaseToPool(v9); /*0x85c346*/
    ++*((_DWORD *)this + 0xE); /*0x85c34b*/
  }
}
