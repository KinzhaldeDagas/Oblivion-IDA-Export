LONG __thiscall sub_5411D0(Sky *this, Ni2DBuffer *a2, int a3)
{
  NiNode *nodeSkyRoot; // eax
  Ni2DBuffer **p_nodeSkyRoot; // edi
  void (__thiscall ***v6)(_DWORD, int); // ebx
  Ni2DBuffer *v7; // ebx
  NiNode *v8; // eax
  NiNode *v9; // eax
  float *v10; // eax
  Atmosphere *atmosphere; // ecx
  Atmosphere *v12; // eax
  Atmosphere *v13; // eax
  Ni2DBuffer *v14; // ecx
  Atmosphere *v15; // ecx
  void (__thiscall *Initialize)(SkyObject *, UInt32); // eax
  Stars *stars; // ecx
  Stars *v18; // eax
  Stars *v19; // eax
  Ni2DBuffer *v20; // ecx
  Stars *v21; // ecx
  void (__thiscall *v22)(Stars *, Ni2DBuffer *); // eax
  Sun *sun; // ecx
  Sun *v24; // eax
  Sun *v25; // eax
  Ni2DBuffer *v26; // ecx
  Sun *v27; // ecx
  void (__thiscall *func_03)(SkyObject *, UInt32, UInt32); // eax
  NiNode *v29; // eax
  NiNode *v30; // ebx
  NiNode *nodeMoonsRoot; // ebp
  Precipitation *precipitation; // ecx
  Precipitation *v33; // eax
  Precipitation *v34; // eax
  Clouds *clouds; // ecx
  Clouds *v36; // eax
  Clouds *v37; // eax
  Ni2DBuffer *v38; // ecx
  Clouds *v39; // ecx
  void (__thiscall *v40)(SkyObject *, UInt32, UInt32); // eax
  NiObjectNET *v41; // eax
  BSShaderProperty *v42; // esi
  Ni2DBuffer *v43; // ecx
  LONG (__stdcall *v44)(volatile LONG *); // ebx
  NiObjectNET *v45; // eax
  BSShaderProperty *v46; // esi
  Ni2DBuffer *v47; // edi
  LONG result; // eax
  Ni2DBuffer *v49; // [esp+2Ch] [ebp-2Ch]
  Ni2DBuffer *v50; // [esp+30h] [ebp-28h]
  Ni2DBuffer *v51; // [esp+30h] [ebp-28h]
  Ni2DBuffer *v52; // [esp+30h] [ebp-28h]
  int v53; // [esp+48h] [ebp-10h] BYREF
  int v54; // [esp+54h] [ebp-4h]

  nodeSkyRoot = this->nodeSkyRoot;
  p_nodeSkyRoot = (Ni2DBuffer **)&this->nodeSkyRoot;
  if ( nodeSkyRoot )
  {
    if ( nodeSkyRoot->members.super.m_parent )
    {
      nodeSkyRoot->members.super.m_parent->vtbl->RemoveObject(
        nodeSkyRoot->members.super.m_parent,
        (NiAVObject **)&v53,
        (NiAVObject *)nodeSkyRoot);
      if ( v53 )
      {
        v6 = (void (__thiscall ***)(_DWORD, int))v53;
        if ( !InterlockedDecrement((volatile LONG *)(v53 + 4)) )
          (**v6)(v6, 1);
      }
    }
    v7 = *p_nodeSkyRoot;
    if ( *p_nodeSkyRoot )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->members) )
      {
        if ( v7 )
          (*(void (__thiscall **)(Ni2DBuffer *, int))v7->__vftable)(v7, 1);
      }
      *p_nodeSkyRoot = 0;
    }
  }
  if ( a2 )
  {
    NiSmartPointer_Set__(p_nodeSkyRoot, a2);
  }
  else
  {
    v8 = (NiNode *)FormHeapAlloc(0xDCu);
    v54 = 0;
    if ( v8 )
      v9 = NiNode::NiNode(v8, 0);
    else
      v9 = 0;
    v54 = 0xFFFFFFFF;
    NiSmartPointer_Set__(p_nodeSkyRoot, (Ni2DBuffer *)v9);
    NiObjectNET_SetName((NiObjectNET *)*p_nodeSkyRoot, "Sky Root");
    LOWORD((*p_nodeSkyRoot)[1].members.super.m_uiRefCount) |= 2u;
  }
  v10 = (float *)*p_nodeSkyRoot;
  v10[0x15] = Vector3_InitValue_;
  v10[0x16] = *(&Vector3_InitValue_ + 1);
  v10[0x17] = dword_B3F9B0;
  atmosphere = this->atmosphere;
  if ( atmosphere )
    ((void (__thiscall *)(Atmosphere *, int))atmosphere->__vftbl->GetObjectNode)(atmosphere, 1);
  v12 = (Atmosphere *)FormHeapAlloc(0x1Cu);
  v54 = 1;
  if ( v12 )
    v13 = Atmosphere::Atmosphere(v12);
  else
    v13 = 0;
  v14 = *p_nodeSkyRoot;
  this->atmosphere = v13;
  v49 = v14;
  v15 = v13;
  Initialize = v13->__vftbl[1].Initialize;
  v54 = 0xFFFFFFFF;
  ((void (__thiscall *)(Atmosphere *, Ni2DBuffer *, int))Initialize)(v15, v49, a3);
  stars = this->stars;
  if ( stars )
    (**(void (__thiscall ***)(Stars *, int))stars)(stars, 1);
  v18 = (Stars *)FormHeapAlloc(0x10u);
  v54 = 2;
  if ( v18 )
    v19 = Stars::Stars(v18);
  else
    v19 = 0;
  v20 = *p_nodeSkyRoot;
  this->stars = v19;
  v50 = v20;
  v21 = v19;
  v22 = *(void (__thiscall **)(Stars *, Ni2DBuffer *))(*(_DWORD *)v19 + 8);
  v54 = 0xFFFFFFFF;
  v22(v21, v50);
  sun = this->sun;
  if ( sun )
    ((void (__thiscall *)(Sun *, int))sun->vtbl->GetObjectNode)(sun, 1);
  v24 = (Sun *)FormHeapAlloc(0x28u);
  v54 = 3;
  if ( v24 )
    v25 = Sun::Sun(v24);
  else
    v25 = 0;
  v26 = *p_nodeSkyRoot;
  this->sun = v25;
  v51 = v26;
  v27 = v25;
  func_03 = v25->vtbl->func_03;
  v54 = 0xFFFFFFFF;
  ((void (__thiscall *)(Sun *, Ni2DBuffer *))func_03)(v27, v51);
  v29 = (NiNode *)FormHeapAlloc(0xDCu);
  v54 = 4;
  if ( v29 )
    v30 = NiNode::NiNode(v29, 0);
  else
    v30 = 0;
  v54 = 0xFFFFFFFF;
  nodeMoonsRoot = this->nodeMoonsRoot;
  if ( nodeMoonsRoot != v30 )
  {
    if ( nodeMoonsRoot )
    {
      if ( !InterlockedDecrement((volatile LONG *)&nodeMoonsRoot->members) )
        nodeMoonsRoot->vtbl->super.super.super.Destructor((NiRefObject *)nodeMoonsRoot, 1);
    }
    this->nodeMoonsRoot = v30;
    if ( v30 )
      InterlockedIncrement((volatile LONG *)&v30->members);
  }
  (*((void (__thiscall **)(Ni2DBuffer *, NiNode *, _DWORD))(*p_nodeSkyRoot)->__vftable + 0x21))(
    *p_nodeSkyRoot,
    this->nodeMoonsRoot,
    0);
  NiObjectNET_SetName((NiObjectNET *)this->nodeMoonsRoot, "Moons Root");
  precipitation = this->precipitation;
  if ( precipitation )
    (**(void (__thiscall ***)(Precipitation *, int))precipitation)(precipitation, 1);
  if ( byte_B11DE4 )
  {
    v33 = (Precipitation *)FormHeapAlloc(0x18u);
    v54 = 5;
    if ( v33 )
      v34 = Precipitation::Precipitation(v33);
    else
      v34 = 0;
    v54 = 0xFFFFFFFF;
    this->precipitation = v34;
    sub_53D8F0(v34);
  }
  else
  {
    this->precipitation = 0;
  }
  clouds = this->clouds;
  if ( clouds )
    ((void (__thiscall *)(Clouds *, int))clouds->__vftbl->GetObjectNode)(clouds, 1);
  v36 = (Clouds *)FormHeapAlloc(0x18u);
  v54 = 6;
  if ( v36 )
    v37 = Clouds::Clouds(v36);
  else
    v37 = 0;
  v38 = *p_nodeSkyRoot;
  this->clouds = v37;
  v52 = v38;
  v39 = v37;
  v40 = v37->__vftbl->func_03;
  v54 = 0xFFFFFFFF;
  ((void (__thiscall *)(Clouds *, Ni2DBuffer *))v40)(v39, v52);
  v41 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v42 = (BSShaderProperty *)v41;
  v54 = 7;
  if ( v41 )
  {
    NiObjectNET::NiObjectNET(v41);
    v42->vtbl = &NiAlphaProperty::`vftable';
    v42->member.super.flags = 0xEC;
    v42->member.super.pad01A[0] = 0;
  }
  else
  {
    v42 = 0;
  }
  if ( v42 )
    InterlockedIncrement((volatile LONG *)&v42->member);
  v42->member.super.flags = v42->member.super.flags & 0xFE01 | 0xEC;
  v42->member.super.flags |= 0x2001u;
  v43 = *p_nodeSkyRoot;
  v54 = 8;
  sub_405680((NiNode *)v43, v42);
  v44 = InterlockedDecrement;
  if ( !InterlockedDecrement((volatile LONG *)&v42->member) )
    (*(void (__thiscall **)(BSShaderProperty *, int))v42->vtbl)(v42, 1);
  v54 = 0xFFFFFFFF;
  v45 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v46 = (BSShaderProperty *)v45;
  v54 = 9;
  if ( v45 )
  {
    NiObjectNET::NiObjectNET(v45);
    v46->vtbl = &NiVertexColorProperty::`vftable';
    v46->member.super.flags = 8;
  }
  else
  {
    v46 = 0;
  }
  if ( v46 )
    InterlockedIncrement((volatile LONG *)&v46->member);
  v46->member.super.flags = v46->member.super.flags & 0xFFCF | 0x20;
  v47 = *p_nodeSkyRoot;
  v54 = 0xA;
  sub_405680((NiNode *)v47, v46);
  result = v44((volatile LONG *)&v46->member);
  if ( !result )
    result = (*(int (__thiscall **)(BSShaderProperty *, int))v46->vtbl)(v46, 1);
  if ( UseHDR )
  {
    flt_B2C73C = 1.0;
    flt_B2C740 = 1.0;
  }
  return result;
}
