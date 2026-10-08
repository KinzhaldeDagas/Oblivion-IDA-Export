// Pass231/241: Sky setup constructs Atmosphere and calls Atmosphere::Initialize with sky root and B333E4 fog property.
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

  nodeSkyRoot = this->nodeSkyRoot; /*0x5411f7*/
  p_nodeSkyRoot = (Ni2DBuffer **)&this->nodeSkyRoot; /*0x5411fc*/
  if ( nodeSkyRoot ) /*0x5411ff*/
  {
    if ( nodeSkyRoot->members.super.m_parent ) /*0x541201*/
    {
      nodeSkyRoot->members.super.m_parent->vtbl->RemoveObject( /*0x541218*/
        nodeSkyRoot->members.super.m_parent,
        (NiAVObject **)&v53,
        (NiAVObject *)nodeSkyRoot);
      if ( v53 ) /*0x541220*/
      {
        v6 = (void (__thiscall ***)(_DWORD, int))v53; /*0x541222*/
        if ( !InterlockedDecrement((volatile LONG *)(v53 + 4)) ) /*0x541228*/
          (**v6)(v6, 1); /*0x54123e*/
      }
    }
    v7 = *p_nodeSkyRoot; /*0x541240*/
    if ( *p_nodeSkyRoot ) /*0x541240*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->members) ) /*0x54124a*/
      {
        if ( v7 ) /*0x541256*/
          (*(void (__thiscall **)(Ni2DBuffer *, int))v7->__vftable)(v7, 1); /*0x541260*/
      }
      *p_nodeSkyRoot = 0; /*0x541262*/
    }
  }
  if ( a2 ) /*0x54126e*/
  {
    NiSmartPointer_Set__(p_nodeSkyRoot, a2); /*0x541273*/
  }
  else
  {
    v8 = (NiNode *)FormHeapAlloc(0xDCu); /*0x541282*/
    v54 = 0; /*0x541290*/
    if ( v8 ) /*0x541298*/
      v9 = NiNode::NiNode(v8, 0); /*0x54129e*/
    else
      v9 = 0; /*0x5412a5*/
    v54 = 0xFFFFFFFF; /*0x5412ad*/
    NiSmartPointer_Set__(p_nodeSkyRoot, (Ni2DBuffer *)v9); /*0x5412b1*/
    NiObjectNET_SetName((NiObjectNET *)*p_nodeSkyRoot, "Sky Root"); /*0x5412bd*/
    LOWORD((*p_nodeSkyRoot)[1].members.super.m_uiRefCount) |= 2u; /*0x5412c4*/
  }
  v10 = (float *)*p_nodeSkyRoot; /*0x5412cf*/
  v10[0x15] = g_zeroNiPoint3; /*0x5412d1*/
  v10[0x16] = MEMORY[0xB3F9AC]; /*0x5412da*/
  v10[0x17] = MEMORY[0xB3F9B0][0]; /*0x5412e3*/
  atmosphere = this->atmosphere; /*0x5412e6*/
  if ( atmosphere ) /*0x5412eb*/
    ((void (__thiscall *)(Atmosphere *, int))atmosphere->__vftbl->GetObjectNode)(atmosphere, 1); /*0x5412f3*/
  v12 = (Atmosphere *)FormHeapAlloc(0x1Cu); /*0x5412f7*/
  v54 = 1; /*0x541305*/
  if ( v12 ) /*0x54130d*/
    v13 = Atmosphere::Atmosphere(v12); /*0x541311*/
  else
    v13 = 0; /*0x541318*/
  v14 = *p_nodeSkyRoot; /*0x54131a*/
  this->atmosphere = v13; /*0x541320*/
  v49 = v14; /*0x541326*/
  v15 = v13; /*0x541327*/
  Initialize = v13->__vftbl[1].Initialize; /*0x541329*/
  v54 = 0xFFFFFFFF; /*0x54132c*/
  ((void (__thiscall *)(Atmosphere *, Ni2DBuffer *, int))Initialize)(v15, v49, a3);// Fog property decode: Sky setup calls Atmosphere::Initialize(skyRoot, B333E4), binding the active global fog property to the Atmosphere object. /*0x541330*/
  stars = this->stars; /*0x541332*/
  if ( stars ) /*0x541337*/
    (**(void (__thiscall ***)(Stars *, int))stars)(stars, 1); /*0x54133f*/
  v18 = (Stars *)FormHeapAlloc(0x10u); /*0x541343*/
  v54 = 2; /*0x541351*/
  if ( v18 ) /*0x541359*/
    v19 = Stars::Stars(v18); /*0x54135d*/
  else
    v19 = 0; /*0x541364*/
  v20 = *p_nodeSkyRoot; /*0x541366*/
  this->stars = v19; /*0x541368*/
  v50 = v20; /*0x54136d*/
  v21 = v19; /*0x54136e*/
  v22 = *(void (__thiscall **)(Stars *, Ni2DBuffer *))(*(_DWORD *)v19 + 8); /*0x541370*/
  v54 = 0xFFFFFFFF; /*0x541373*/
  v22(v21, v50); /*0x541377*/
  sun = this->sun; /*0x541379*/
  if ( sun ) /*0x54137e*/
    ((void (__thiscall *)(Sun *, int))sun->vtbl->GetObjectNode)(sun, 1); /*0x541386*/
  v24 = (Sun *)FormHeapAlloc(0x28u); /*0x54138a*/
  v54 = 3; /*0x541398*/
  if ( v24 ) /*0x5413a0*/
    v25 = Sun::Sun(v24); /*0x5413a4*/
  else
    v25 = 0; /*0x5413ab*/
  v26 = *p_nodeSkyRoot; /*0x5413ad*/
  this->sun = v25; /*0x5413af*/
  v51 = v26; /*0x5413b4*/
  v27 = v25; /*0x5413b5*/
  func_03 = v25->vtbl->func_03; /*0x5413b7*/
  v54 = 0xFFFFFFFF; /*0x5413ba*/
  ((void (__thiscall *)(Sun *, Ni2DBuffer *))func_03)(v27, v51); /*0x5413be*/
  v29 = (NiNode *)FormHeapAlloc(0xDCu); /*0x5413c5*/
  v54 = 4; /*0x5413d3*/
  if ( v29 ) /*0x5413db*/
    v30 = NiNode::NiNode(v29, 0); /*0x5413e6*/
  else
    v30 = 0; /*0x5413ea*/
  v54 = 0xFFFFFFFF; /*0x5413ec*/
  nodeMoonsRoot = this->nodeMoonsRoot; /*0x5413f0*/
  if ( nodeMoonsRoot != v30 ) /*0x5413f5*/
  {
    if ( nodeMoonsRoot ) /*0x5413f9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&nodeMoonsRoot->members) ) /*0x5413ff*/
        nodeMoonsRoot->vtbl->super.super.super.Destructor((NiRefObject *)nodeMoonsRoot, 1); /*0x541416*/
    }
    this->nodeMoonsRoot = v30; /*0x54141a*/
    if ( v30 ) /*0x54141d*/
      InterlockedIncrement((volatile LONG *)&v30->members); /*0x541423*/
  }
  (*((void (__thiscall **)(Ni2DBuffer *, NiNode *, _DWORD))(*p_nodeSkyRoot)->__vftable + 0x21))( /*0x541439*/
    *p_nodeSkyRoot,
    this->nodeMoonsRoot,
    0);
  NiObjectNET_SetName((NiObjectNET *)this->nodeMoonsRoot, "Moons Root"); /*0x541443*/
  precipitation = this->precipitation; /*0x541448*/
  if ( precipitation ) /*0x54144d*/
    (**(void (__thiscall ***)(Precipitation *, int))precipitation)(precipitation, 1); /*0x541455*/
  if ( byte_B11DE4 ) /*0x541457*/
  {
    v33 = (Precipitation *)FormHeapAlloc(0x18u); /*0x541462*/
    v54 = 5; /*0x541470*/
    if ( v33 ) /*0x541478*/
      v34 = Precipitation::Precipitation(v33); /*0x54147c*/
    else
      v34 = 0; /*0x541483*/
    v54 = 0xFFFFFFFF; /*0x541487*/
    this->precipitation = v34; /*0x54148f*/
    sub_53D8F0(v34); /*0x541492*/
  }
  else
  {
    this->precipitation = 0; /*0x541499*/
  }
  clouds = this->clouds; /*0x5414a0*/
  if ( clouds ) /*0x5414a5*/
    ((void (__thiscall *)(Clouds *, int))clouds->__vftbl->GetObjectNode)(clouds, 1); /*0x5414ad*/
  v36 = (Clouds *)FormHeapAlloc(0x18u); /*0x5414b1*/
  v54 = 6; /*0x5414bf*/
  if ( v36 ) /*0x5414c7*/
    v37 = Clouds::Clouds(v36); /*0x5414cb*/
  else
    v37 = 0; /*0x5414d2*/
  v38 = *p_nodeSkyRoot; /*0x5414d4*/
  this->clouds = v37; /*0x5414d6*/
  v52 = v38; /*0x5414db*/
  v39 = v37; /*0x5414dc*/
  v40 = v37->__vftbl->func_03; /*0x5414de*/
  v54 = 0xFFFFFFFF; /*0x5414e1*/
  ((void (__thiscall *)(Clouds *, Ni2DBuffer *))v40)(v39, v52); /*0x5414e9*/
  v41 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x5414ed*/
  v42 = (BSShaderProperty *)v41; /*0x5414f2*/
  v54 = 7; /*0x5414fd*/
  if ( v41 ) /*0x541505*/
  {
    NiObjectNET::NiObjectNET(v41); /*0x541509*/
    v42->vtbl = &NiAlphaProperty::`vftable'; /*0x54150e*/
    v42->member.super.flags = 0xEC; /*0x541514*/
    v42->member.super.pad01A[0] = 0; /*0x54151a*/
  }
  else
  {
    v42 = 0; /*0x541520*/
  }
  if ( v42 ) /*0x541528*/
    InterlockedIncrement((volatile LONG *)&v42->member); /*0x54152e*/
  v42->member.super.flags = v42->member.super.flags & 0xFE01 | 0xEC; /*0x54154c*/
  v42->member.super.flags |= 0x2001u; /*0x541550*/
  v43 = *p_nodeSkyRoot; /*0x541556*/
  v54 = 8; /*0x54155e*/
  sub_405680((NiNode *)v43, v42); /*0x541562*/
  v44 = InterlockedDecrement; /*0x541567*/
  if ( !InterlockedDecrement((volatile LONG *)&v42->member) ) /*0x541571*/
    (*(void (__thiscall **)(BSShaderProperty *, int))v42->vtbl)(v42, 1); /*0x54157f*/
  v54 = 0xFFFFFFFF; /*0x541583*/
  v45 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x54158b*/
  v46 = (BSShaderProperty *)v45; /*0x541590*/
  v54 = 9; /*0x54159b*/
  if ( v45 ) /*0x5415a3*/
  {
    NiObjectNET::NiObjectNET(v45); /*0x5415a7*/
    v46->vtbl = &NiVertexColorProperty::`vftable'; /*0x5415ac*/
    v46->member.super.flags = 8; /*0x5415b2*/
  }
  else
  {
    v46 = 0; /*0x5415b8*/
  }
  if ( v46 ) /*0x5415c0*/
    InterlockedIncrement((volatile LONG *)&v46->member); /*0x5415c6*/
  v46->member.super.flags = v46->member.super.flags & 0xFFCF | 0x20; /*0x5415d9*/
  v47 = *p_nodeSkyRoot; /*0x5415dd*/
  v54 = 0xA; /*0x5415e2*/
  sub_405680((NiNode *)v47, v46); /*0x5415ea*/
  result = v44((volatile LONG *)&v46->member); /*0x5415f3*/
  if ( !result ) /*0x5415f7*/
    result = (*(int (__thiscall **)(BSShaderProperty *, int))v46->vtbl)(v46, 1); /*0x541601*/
  if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x541603*/
  {
    flt_B2C73C = 1.0; /*0x54160e*/
    flt_B2C740 = 1.0; /*0x541614*/
  }
  return result; /*0x54161a*/
}
