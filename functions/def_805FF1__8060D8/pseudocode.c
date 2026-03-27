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

  if ( dword_B42E8C )
    dword_B42E8C("Invalid sub texture in decal", 0);
  v11 = 0xA;
  flt_B4615C = 1.0;
  v18 = *(float *)(a3 + 0x40);
  a9 = 1.0;
  while ( 1 )
  {
    v12 = v18;
    if ( (v11 & 1) != 0 )
      a9 = a9 * v12;
    v11 >>= 1;
    if ( !v11 )
      break;
    v18 = v12 * v12;
  }
  v13 = Texture == 0;
  v14 = (Ni2DBuffer **)(a4 + 0x24);
  flt_B46218 = 1.0 - a9;
  if ( v13 )
    NiSmartPointer_Set__(v14, (Ni2DBuffer *)dword_B47604);
  else
    NiSmartPointer_Set__(v14, (Ni2DBuffer *)dword_B47608);
  v15 = *sub_7EE1D0(a1);
  m_uiRefCount = a2->Stages.data->Texture->members.super.super.m_uiRefCount;
  Texture = a2->Stages.data->Texture;
  if ( m_uiRefCount != v15 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    *(_DWORD *)a6->Name = v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  ++a2->RefCount;
  a6 = a2;
  sub_76CE40((NiTArray_NiD3DPass *)(a4 + 0x40), *(NiD3DPass **)(a4 + 0x38), &a6);
  v13 = a2->RefCount-- == 1;
  if ( v13 )
    sub_7604D0(a2);
  ++*(_DWORD *)(a4 + 0x38);
  return 0;
}
