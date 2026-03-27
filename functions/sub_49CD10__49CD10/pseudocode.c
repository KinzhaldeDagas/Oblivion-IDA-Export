double __thiscall sub_49CD10(float *this)
{
  double result; // st7
  int v3; // edi
  bool v4; // zf
  int v5; // edi
  NiNode *v6; // eax
  NiNode *v7; // edi
  NiObjectNET *v8; // ecx
  void (__thiscall ***v9)(_DWORD, int); // ebp
  double v10; // st6
  int v11; // [esp+14h] [ebp-24h]
  int v12; // [esp+1Ch] [ebp-1Ch]
  int v13; // [esp+1Ch] [ebp-1Ch]
  int v14; // [esp+20h] [ebp-18h]
  int v15; // [esp+20h] [ebp-18h]
  int v16; // [esp+24h] [ebp-14h]
  int v17; // [esp+24h] [ebp-14h]

  *this = 0.0;
  *(this + 1) = 0.0;
  *(this + 2) = 0.0;
  *(this + 3) = 0.0;
  *(this + 4) = 0.0;
  *(this + 5) = 0.0;
  *(this + 0xF) = 0.0;
  *(this + 0xD) = 0.0;
  *(this + 0xE) = 0.0;
  *((_DWORD *)this + 0xC) = &NiTPointerList<WadingWaterData *>::`vftable';
  *(this + 0x12) = 0.0;
  result = 0.0;
  v3 = *(_DWORD *)this;
  *(this + 6) = 0.0;
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    result = 0.0;
    *this = 0.0;
  }
  *(this + 0x10) = 0.0;
  v4 = useWaterDepth == 0;
  byte_B45DB9 = useWaterDepth;
  if ( !v4 )
    dword_B45DBC = 0x20 * dword_B070E0;
  v5 = *((_DWORD *)this + 0x12);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    result = 0.0;
    *(this + 0x12) = 0.0;
  }
  v4 = value == 0;
  byte_B3521D = 1;
  if ( v4 )
  {
    v6 = (NiNode *)FormHeapAlloc(0xDCu);
    if ( v6 )
      v7 = NiNode::NiNode(v6, 0);
    else
      v7 = 0;
    v8 = (NiObjectNET *)value;
    if ( (NiNode *)value != v7 )
    {
      if ( v8 )
      {
        v9 = (void (__thiscall ***)(_DWORD, int))value;
        if ( !InterlockedDecrement((volatile LONG *)&v8->members) )
          (**v9)(v9, 1);
      }
      v8 = (NiObjectNET *)v7;
      value = (int)v7;
      if ( v7 )
      {
        InterlockedIncrement((volatile LONG *)&v7->members);
        v8 = (NiObjectNET *)value;
      }
    }
    NiObjectNET_SetName(v8, "WaterRoot");
    ((void (__thiscall *)(NiNode *, int, _DWORD))TES->ObjectLODRoot->vtbl->AddObject)(TES->ObjectLODRoot, value, 0);
    result = 0.0;
  }
  *(float *)&v12 = result;
  v10 = flt_A3D65C;
  dword_B45E14 = v12;
  *(float *)&v14 = v10;
  *(float *)&v16 = v10;
  dword_B45E18 = v14;
  dword_B45E1C = v16;
  *(float *)&v13 = result;
  *(float *)&dword_B45E20 = 1.0;
  *(float *)&v15 = result;
  *(float *)&v17 = flt_A2FAAC;
  dword_B45E24 = v13;
  dword_B45E28 = v15;
  dword_B45E2C = v17;
  *(float *)&dword_B45E30 = 1.0;
  *(float *)&dword_B45E34 = 1.0;
  *(float *)&dword_B45E38 = 1.0;
  *(float *)&dword_B45E3C = 1.0;
  *(float *)&dword_B45E40 = 1.0;
  v11 = Double_To_SInt32(result);
  LocalWaterHiRes = bUseWaterHiRes;
  flt_B45EA4 = (float)v11;
  dword_B35220 = 0;
  *(this + 8) = 0.0;
  *(this + 0xB) = result;
  *(this + 9) = 0.0;
  *(this + 0x11) = result;
  *((_BYTE *)this + 0x28) = 0;
  *((_BYTE *)this + 0x29) = 1;
  return result;
}
