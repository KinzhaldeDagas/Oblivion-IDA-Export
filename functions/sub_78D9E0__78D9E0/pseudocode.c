// CSpeedTreeRT hidden instance initializer. Shallow-copies shared heavy pointers from source tree, increments shared refcount/list state, allocates per-instance STreeInstanceData, and records source-tree pointer in instance data.
void *__thiscall CSpeedTreeRT__InstanceInit(void *this, void *sourceTree)
{
  double v3; // st7
  unsigned int *v4; // ecx
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  double v10; // st7
  int v12; // [esp+0h] [ebp-64h] BYREF
  _DWORD v13[6]; // [esp+4Ch] [ebp-18h] BYREF
  float source; // [esp+6Ch] [ebp+8h]

  v13[2] = &v12; /*0x78da08*/
  v13[1] = this; /*0x78da0d*/
  *(_DWORD *)this = *(_DWORD *)sourceTree; /*0x78da15*/
  *((_DWORD *)this + 1) = *((_DWORD *)sourceTree + 1); /*0x78da1a*/
  *((_DWORD *)this + 2) = *((_DWORD *)sourceTree + 2); /*0x78da20*/
  *((_DWORD *)this + 3) = *((_DWORD *)sourceTree + 3); /*0x78da26*/
  *((_DWORD *)this + 4) = *((_DWORD *)sourceTree + 4); /*0x78da2c*/
  *((_DWORD *)this + 5) = *((_DWORD *)sourceTree + 5); /*0x78da32*/
  *((_DWORD *)this + 6) = *((_DWORD *)sourceTree + 6); /*0x78da38*/
  *((float *)this + 7) = *((float *)sourceTree + 7); /*0x78da3e*/
  v13[5] = 0; /*0x78da41*/
  v3 = *((float *)sourceTree + 8); /*0x78da48*/
  v13[0] = this; /*0x78da4b*/
  *((float *)this + 8) = v3; /*0x78da4e*/
  *((float *)this + 9) = *((float *)sourceTree + 9); /*0x78da54*/
  *((float *)this + 0xA) = *((float *)sourceTree + 0xA); /*0x78da5a*/
  *((_DWORD *)this + 0xB) = *((_DWORD *)sourceTree + 0xB); /*0x78da60*/
  *((_DWORD *)this + 0xC) = *((_DWORD *)sourceTree + 0xC);// InstanceInit copies source CSpeedTreeRT+0x30 unchanged into instance +0x30. Thus every base/instance in one shared family exposes the same stable refcount-allocation identity; lookup by this pointer can recover sidecars for an otherwise unlinked instance while the family is live. Guard post-final reuse with publication generation. /*0x78da66*/
  *((_DWORD *)this + 0xE) = *((_DWORD *)sourceTree + 0xE); /*0x78da6c*/
  *((_DWORD *)this + 0xF) = *((_DWORD *)sourceTree + 0xF); /*0x78da72*/
  *((_DWORD *)this + 0x10) = *((_DWORD *)sourceTree + 0x10); /*0x78da78*/
  *((_BYTE *)this + 0x44) = *((_BYTE *)sourceTree + 0x44); /*0x78da7f*/
  *((_BYTE *)this + 0x45) = *((_BYTE *)sourceTree + 0x45); /*0x78da85*/
  *((_DWORD *)this + 0x12) = *((_DWORD *)sourceTree + 0x12); /*0x78da8b*/
  *((_DWORD *)this + 0x13) = *((_DWORD *)sourceTree + 0x13); /*0x78da91*/
  *((_DWORD *)this + 0x14) = *((_DWORD *)sourceTree + 0x14); /*0x78da97*/
  *((_WORD *)this + 0x2A) = *((_WORD *)sourceTree + 0x2A);// 2026-05-21 360 gap pass: instance init copies source CSpeedTreeRT+0x54 into instance; this propagates a count only if a base path initialized it first. /*0x78da9e*/
  *((_DWORD *)this + 0x16) = *((_DWORD *)sourceTree + 0x16); /*0x78daa5*/
  *((_DWORD *)this + 0x17) = *((_DWORD *)sourceTree + 0x17); /*0x78daab*/
  *((_DWORD *)this + 0x18) = *((_DWORD *)sourceTree + 0x18); /*0x78dab1*/
  *((_WORD *)this + 0x32) = *((_WORD *)sourceTree + 0x32); /*0x78dab8*/
  *((_DWORD *)this + 0x1A) = *((_DWORD *)sourceTree + 0x1A); /*0x78dabf*/
  *((_BYTE *)this + 0x6C) = *((_BYTE *)sourceTree + 0x6C); /*0x78dac5*/
  v4 = *((unsigned int **)this + 0xE); /*0x78dad0*/
  *((_BYTE *)this + 0x6D) = *((_BYTE *)sourceTree + 0x6D); /*0x78dad3*/
  OB_stVector4_PushBack_010201A0(v4, v13); /*0x78dad6*/
  v5 = *((_DWORD **)this + 0xC); /*0x78dadb*/
  qmemcpy((char *)this + 0x70, (char *)sourceTree + 0x70, 0x30u); /*0x78dae9*/
  ++*v5;                                        // MakeInstance increments the shared count at CSpeedTreeRT+0x30 before returning the new object. The increment is a plain ++, not Interlocked; stock therefore assumes serialized lifecycle access for one shared tree. /*0x78daeb*/
  v6 = FormHeapAlloc(0x14u); /*0x78daf0*/
  if ( v6 ) /*0x78dafa*/
  {
    *(_DWORD *)v6 = 0; /*0x78dafe*/
    *(float *)(v6 + 0xC) = 0.0; /*0x78db04*/
    *(float *)(v6 + 8) = 0.0; /*0x78db07*/
    *(float *)(v6 + 4) = 0.0; /*0x78db0a*/
    *(float *)(v6 + 0x10) = 1.0; /*0x78db0f*/
  }
  else
  {
    v6 = 0; /*0x78db14*/
  }
  *((_DWORD *)this + 0xD) = v6; /*0x78db19*/
  *(_DWORD *)v6 = sourceTree;                   // Stores the immediate source CSpeedTreeRT pointer in per-instance data +0x00. Oblivion's sole BSTreeModel caller rejects source model state 2, so this game path records the base CSpeedTreeRT directly. /*0x78db1c*/
  v7 = (_DWORD *)(*(_DWORD *)sourceTree + 4); /*0x78db26*/
  v8 = (_DWORD *)(*((_DWORD *)this + 0xD) + 4); /*0x78db29*/
  *v8 = *v7; /*0x78db2c*/
  v8[1] = v7[1]; /*0x78db31*/
  v8[2] = v7[2]; /*0x78db37*/
  v9 = *((_DWORD *)sourceTree + 0xD); /*0x78db3a*/
  if ( v9 ) /*0x78db3f*/
    v10 = *(float *)(v9 + 0x10); /*0x78db41*/
  else
    v10 = *(float *)(*(_DWORD *)sourceTree + 0x14); /*0x78db48*/
  source = v10; /*0x78db4e*/
  *(float *)(*((_DWORD *)this + 0xD) + 0x10) = source; /*0x78db54*/
  ++unk_B42980; /*0x78db57*/
  return this; /*0x78dbef*/
}
