BSTreeNode *__thiscall sub_5610C0(int this, float a2)
{
  int v3; // esi
  bool v4; // zf
  double v6; // st7
  bhkRefObject *v7; // eax
  BSTreeNode *v8; // eax
  BSTreeNode *v9; // ebp
  void *v10; // ecx
  NiNode *v11; // eax
  int i; // ebx
  NiAVObject *v13; // eax
  NiAVObject *v14; // ebp
  BSShaderProperty *v15; // eax
  BSShaderProperty *v16; // ecx
  int v17; // ecx
  NiAVObject *v18; // eax
  int v19; // ebp
  int v20; // ebx
  NiNode *v21; // eax
  UInt32 v22; // esi
  Ni2DBuffer *NiPropertyByID; // eax
  int v24; // ebx
  void *v25; // ecx
  int v26; // ebp
  NiGeometry *v27; // eax
  NiAVObject *v28; // esi
  NiObjectNET *v29; // eax
  BSShaderProperty *v30; // ecx
  int v31; // edx
  void (__thiscall ***v32)(_DWORD, int); // esi
  float v33; // [esp+3Ch] [ebp-38h]
  unsigned __int16 v34; // [esp+54h] [ebp-20h]
  unsigned __int16 v35; // [esp+54h] [ebp-20h]
  BSTreeNode *v36; // [esp+58h] [ebp-1Ch]
  float v37; // [esp+5Ch] [ebp-18h]
  float v38; // [esp+5Ch] [ebp-18h]
  ShaderDefinition *ShaderDefinition; // [esp+5Ch] [ebp-18h]
  ShaderDefinition *v40; // [esp+5Ch] [ebp-18h]
  UInt32 v41; // [esp+60h] [ebp-14h] BYREF
  void *v42; // [esp+64h] [ebp-10h]
  unsigned int v43; // [esp+70h] [ebp-4h]

  v3 = 0;
  v41 = 0;
  v4 = *(_DWORD *)(this + 0xC) == 0;
  v43 = 0;
  if ( v4 )
    return 0;
  v6 = a2;
  if ( flt_A56670 < (double)*(float *)(this + 0x50) )
  {
    if ( 1.0 == v6 )
    {
      NiSmartPointer_Set__((Ni2DBuffer **)&v41, *(Ni2DBuffer **)(this + 0x40));
    }
    else
    {
      v37 = *(float *)(this + 0x54) * v6 * dbl_A2FAA0;
      v33 = v37;
      v38 = v6 * *(float *)(this + 0x50);
      v7 = sub_8AFDC0(v38, v33);
      NiSmartPointer_Set__((Ni2DBuffer **)&v41, (Ni2DBuffer *)v7);
    }
  }
  v8 = (BSTreeNode *)FormHeapAlloc(0xF0u);
  LOBYTE(v43) = 1;
  if ( v8 )
  {
    v9 = BSTreeNode::BSTreeNode(v8, (NiNode *)this, v41);
    v36 = v9;
  }
  else
  {
    v36 = 0;
    v9 = 0;
  }
  v4 = *(_DWORD *)(this + 0x14) == 0;
  LOBYTE(v43) = 0;
  if ( !v4 )
  {
    if ( *(_DWORD *)(this + 0x24) )
    {
      if ( *(_DWORD *)(this + 0x2C) )
      {
        v10 = *(void **)(this + 0xC);
        if ( v10 )
          v34 = sub_7871F0(v10);
        else
          v34 = 0;
        ShaderDefinition = GetShaderDefinition(4u);
        v11 = (NiNode *)(*(int (__thiscall **)(BSTreeNode *))(*(_DWORD *)v9 + 0xA0))(v9);
        if ( v11 )
        {
          if ( *(_DWORD *)(this + 0x34) )
            sub_405680(v11, *(BSShaderProperty **)(this + 0x34));
        }
        for ( i = 0; (unsigned __int16)i < v34; v3 += 4 )
        {
          if ( *(_DWORD *)(v3 + *(_DWORD *)(this + 0x14)) )
          {
            v13 = (NiAVObject *)FormHeapAlloc(0xC0u);
            v42 = v13;
            LOBYTE(v43) = 2;
            if ( v13 )
              v14 = sub_719A20(v13, *(_DWORD *)(v3 + *(_DWORD *)(this + 0x14)));
            else
              v14 = 0;
            LOBYTE(v43) = 0;
            v15 = (BSShaderProperty *)sub_561030();
            if ( v15 )
            {
              v15->member.super.flags &= ~0x200u;
              sub_405680((NiNode *)v14, v15);
            }
            v16 = *(BSShaderProperty **)(v3 + *(_DWORD *)(this + 0x24));
            if ( v16 )
            {
              sub_7E24C0(v16);
              sub_405680((NiNode *)v14, *(BSShaderProperty **)(v3 + *(_DWORD *)(this + 0x24)));
            }
            if ( *(_DWORD *)(this + 8) == 2 )
            {
              v17 = *(_DWORD *)(this + 0x2C);
              if ( *(_DWORD *)(v3 + v17) )
                sub_405680((NiNode *)v14, *(BSShaderProperty **)(v3 + v17));
              sub_4EC910((NiGeometry *)v14, ShaderDefinition->shader);
            }
            (*(void (__thiscall **)(BSTreeNode *, int, NiAVObject *))(*(_DWORD *)v36 + 0xB8))(v36, i, v14);
            v9 = v36;
          }
          ++i;
        }
        if ( *(_DWORD *)(this + 8) != 2 )
        {
          v18 = (NiAVObject *)(*(int (__thiscall **)(BSTreeNode *))(*(_DWORD *)v9 + 0xA0))(v9);
          sub_7B8940(v18, 4, 1, 1);
          v19 = 0;
          if ( v34 )
          {
            v20 = 0;
            do
            {
              v21 = (NiNode *)(*(int (__thiscall **)(BSTreeNode *, int))(*(_DWORD *)v36 + 0xAC))(v36, v19);
              v22 = (UInt32)v21;
              if ( v21 )
              {
                NiPropertyByID = (Ni2DBuffer *)NiNode_GetNiPropertyByID(v21, 3);
                NiSmartPointer_Set__((Ni2DBuffer **)(v20 + *(_DWORD *)(this + 0x2C)), NiPropertyByID);
                g_Renderer->__vftable->super.NiRenderer::PrecacheGeometryData((NiRenderer *)g_Renderer, v22, 0, 0, 0);
              }
              ++v19;
              v20 += 4;
            }
            while ( (unsigned __int16)v19 < v34 );
          }
          v9 = v36;
        }
      }
    }
  }
  v24 = 0;
  if ( *(_DWORD *)(this + 0x18) )
  {
    if ( *(_DWORD *)(this + 0x28) )
    {
      if ( *(_DWORD *)(this + 0x30) )
      {
        v25 = *(void **)(this + 0xC);
        if ( v25 )
          v35 = sub_787200(v25);
        else
          v35 = 0;
        v40 = GetShaderDefinition(6u);
        if ( v35 )
        {
          v26 = 0;
          do
          {
            if ( *(_DWORD *)(*(_DWORD *)(this + 0x18) + v26) )
            {
              v27 = (NiGeometry *)FormHeapAlloc(0xC0u);
              v42 = v27;
              LOBYTE(v43) = 3;
              if ( v27 )
                v28 = NiTriShape_NiTriShape(v27, *(NiScreenElementsData **)(*(_DWORD *)(this + 0x18) + v26));
              else
                v28 = 0;
              LOBYTE(v43) = 0;
              v29 = sub_561030();
              if ( v29 )
                sub_405680((NiNode *)v28, (BSShaderProperty *)v29);
              v30 = *(BSShaderProperty **)(*(_DWORD *)(this + 0x28) + v26);
              if ( v30 )
              {
                sub_7E24C0(v30);
                sub_405680((NiNode *)v28, *(BSShaderProperty **)(*(_DWORD *)(this + 0x28) + v26));
              }
              v31 = *(_DWORD *)(this + 0x30);
              if ( *(_DWORD *)(v31 + v26) )
                sub_405680((NiNode *)v28, *(BSShaderProperty **)(v31 + v26));
              (*(void (__thiscall **)(BSTreeNode *, int, NiAVObject *))(*(_DWORD *)v36 + 0xBC))(v36, v24, v28);
              sub_4EC910((NiGeometry *)v28, v40->shader);
              v40->shader->__vftable->super.super.super.UpdateInternalVars((NiShader *)v40->shader, v28);
              g_Renderer->__vftable->super.NiRenderer::PrecacheGeometryData(
                (NiRenderer *)g_Renderer,
                (UInt32)v28,
                0,
                0,
                0);
            }
            ++v24;
            v26 += 4;
          }
          while ( (unsigned __int16)v24 < v35 );
          v9 = v36;
        }
      }
    }
  }
  (*(void (__thiscall **)(BSTreeNode *))(*(_DWORD *)v9 + 0xA8))(v9);
  if ( *(_DWORD *)(this + 0x1C) )
    (*(void (__thiscall **)(BSTreeNode *, _DWORD))(*(_DWORD *)v9 + 0xC0))(v9, *(_DWORD *)(this + 0x1C));
  NiAVObject_InitializePropertyState((NiAVObject *)v9);
  NiNode_UpdateDynamicEffectState((NiNode *)v9);
  sub_7073A0((_DWORD **)v9, 0.0);
  MAkeTreetopsCollisions_(v9, *(_DWORD **)(this + 0xC), a2);
  v32 = (void (__thiscall ***)(_DWORD, int))v41;
  v43 = 0xFFFFFFFF;
  if ( v41 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v41 + 4)) )
      (**v32)(v32, 1);
  }
  return v9;
}
