// SpeedTreeBranchShader constant-map setup: ensures vertex/pixel constant maps, mirrors them into object slots +0x98/+0x94, then installs shared tree/wind registers via 0x7F16F0(register 0x25).
int __thiscall OB_SpeedTreeBranchShader_BuildConstantMap_010201A0(int *this)
{
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  int *v5; // ebx
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax
  int v8; // esi
  LONG (__stdcall *v9)(volatile LONG *); // ebp
  int v10; // eax
  bool v11; // zf
  int v12; // esi
  void **v13; // ebx
  volatile LONG *v14; // eax

  v2 = (Ni2DBuffer **)(this + 0xC); /*0x810977*/
  if ( !*(this + 0xC) ) /*0x81097d*/
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x810984*/
    if ( v3 ) /*0x81099a*/
      v4 = NiD3DShaderCostantMapVertex::Construct(v3, *(this + 5)); /*0x8109a2*/
    else
      v4 = 0; /*0x8109a9*/
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4); /*0x8109b2*/
  }
  v5 = this + 0xB; /*0x8109bb*/
  if ( !*(this + 0xB) ) /*0x8109b7*/
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x8109c2*/
    if ( v6 ) /*0x8109d8*/
      v7 = NiD3DShaderCostantMapPixel::Construct(v6, *(this + 5)); /*0x8109e0*/
    else
      v7 = 0; /*0x8109e7*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v7); /*0x8109f0*/
  }
  v8 = *(this + 0x25); /*0x8109f5*/
  v9 = InterlockedDecrement; /*0x8109fd*/
  if ( v8 != *v5 ) /*0x810a03*/
  {
    if ( v8 ) /*0x810a07*/
    {
      if ( !v9((volatile LONG *)(v8 + 4)) ) /*0x810a0d*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x810a1f*/
    }
    v10 = *v5; /*0x810a21*/
    v11 = *v5 == 0; /*0x810a23*/
    *(this + 0x25) = *v5; /*0x810a25*/
    if ( !v11 ) /*0x810a2b*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x810a31*/
  }
  v12 = *(this + 0x26); /*0x810a37*/
  v13 = (void **)(this + 0xC); /*0x810a40*/
  if ( v12 != *(this + 0xC) ) /*0x810a43*/
  {
    if ( v12 ) /*0x810a47*/
    {
      if ( !v9((volatile LONG *)(v12 + 4)) ) /*0x810a4d*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x810a5f*/
    }
    v14 = (volatile LONG *)*v13; /*0x810a61*/
    v11 = *v13 == 0; /*0x810a63*/
    *(this + 0x26) = (int)*v13; /*0x810a65*/
    if ( !v11 ) /*0x810a6b*/
      InterlockedIncrement(v14 + 1); /*0x810a71*/
  }
  return OB_SpeedTreeShader_RegisterTreeAndWindConstants_010201A0(*v13, 0x25); /*0x810a84*/
}
