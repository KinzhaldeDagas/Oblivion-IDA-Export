int __thiscall sub_810950(int *this)
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
  int *v13; // ebx
  int v14; // eax

  v2 = (Ni2DBuffer **)(this + 0xC);
  if ( !*(this + 0xC) )
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v3 )
      v4 = NiD3DShaderCostantMapVertex::Construct(v3, *(this + 5));
    else
      v4 = 0;
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4);
  }
  v5 = this + 0xB;
  if ( !*(this + 0xB) )
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v6 )
      v7 = NiD3DShaderCostantMapPixel::Construct(v6, *(this + 5));
    else
      v7 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v7);
  }
  v8 = *(this + 0x25);
  v9 = InterlockedDecrement;
  if ( v8 != *v5 )
  {
    if ( v8 )
    {
      if ( !v9((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    v10 = *v5;
    v11 = *v5 == 0;
    *(this + 0x25) = *v5;
    if ( !v11 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  v12 = *(this + 0x26);
  v13 = this + 0xC;
  if ( v12 != *(this + 0xC) )
  {
    if ( v12 )
    {
      if ( !v9((volatile LONG *)(v12 + 4)) )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    }
    v14 = *v13;
    v11 = *v13 == 0;
    *(this + 0x26) = *v13;
    if ( !v11 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  return sub_7F16F0(*v13, 0x25);
}
