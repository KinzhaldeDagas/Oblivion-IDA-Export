// positive sp value has been detected, the output may be wrong!
int __userpurge def_805FF1@<eax>(
        _DWORD *a1@<ebx>,
        NiD3DPass *a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        NiD3DPass *a6,
        NiTexture *Texture,
        int a8,
        float a9,
        int a10,
        int a11)
{
  unsigned int v11; // eax
  double v12; // st7
  bool v13; // zf
  Ni2DBuffer **v14; // ecx
  int v15; // ebx
  UInt32 m_uiRefCount; // edi
  float v18; // [esp-1Ch] [ebp-1Ch]

  if ( unk_B42E8C ) /*0x8060d8*/
    unk_B42E8C("Invalid sub texture in decal", 0); /*0x8060e8*/
  v11 = 0xA; /*0x8060ef*/
  unk_B4615C = 1.0; /*0x8060f4*/
  v18 = *(float *)(a3 + 0x40); /*0x8060fd*/
  a9 = 1.0; /*0x806101*/
  while ( 1 ) /*0x806107*/
  {
    v12 = v18; /*0x806107*/
    if ( (v11 & 1) != 0 ) /*0x80610b*/
      a9 = a9 * v12; /*0x806113*/
    v11 >>= 1; /*0x806117*/
    if ( !v11 ) /*0x806119*/
      break; /*0x806119*/
    v18 = v12 * v12; /*0x80611d*/
  }
  v13 = Texture == 0; /*0x806123*/
  v14 = (Ni2DBuffer **)(a4 + 0x24); /*0x80612e*/
  unk_B46218 = 1.0 - a9; /*0x80613d*/
  if ( v13 ) /*0x806143*/
    NiSmartPointer_Set__(v14, (Ni2DBuffer *)unk_B47604); /*0x806154*/
  else
    NiSmartPointer_Set__(v14, (Ni2DBuffer *)unk_B47608); /*0x80614c*/
  v15 = *sub_7EE1D0(a1); /*0x806160*/
  m_uiRefCount = a2->Stages.data->Texture->members.super.super.m_uiRefCount; /*0x806168*/
  Texture = a2->Stages.data->Texture; /*0x80616d*/
  if ( m_uiRefCount != v15 ) /*0x806171*/
  {
    if ( m_uiRefCount ) /*0x806175*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x80617b*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x806191*/
    }
    *(_DWORD *)a6->Name = v15; /*0x806199*/
    if ( v15 ) /*0x80619c*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8061a2*/
  }
  ++a2->RefCount; /*0x8061ad*/
  a6 = a2; /*0x8061b0*/
  NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)(a4 + 0x40), *(_DWORD *)(a4 + 0x38), &a6); /*0x8061c8*/
  v13 = a2->RefCount-- == 1; /*0x8061d0*/
  if ( v13 ) /*0x8061d7*/
    NiD3DPass_ReleaseToPool(a2); /*0x8061db*/
  ++*(_DWORD *)(a4 + 0x38); /*0x8061e0*/
  return 0; /*0x8061f8*/
}
