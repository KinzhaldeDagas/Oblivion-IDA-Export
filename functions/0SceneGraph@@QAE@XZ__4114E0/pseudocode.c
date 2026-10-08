// CULLING audit 2026-09-27 (observed Oblivion behavior): Focused layout decode: constructs SceneGraph camera at +0xDC and allocates base NiCullingProcess size 0x90, passing NULL VisibleGeo at 0x411576, storing result at +0xE4. Native world frustum culling is already active; optional visible arrays must be demonstrated, not assumed.
SceneGraph *__thiscall SceneGraph::SceneGraph(SceneGraph *this, const char *ArgList, UInt8 a3, Ni2DBuffer *a2)
{
  NiObjectNET **p_camera; // ebx
  const char *width; // eax
  NiCullingProcess *v7; // eax
  NiCullingProcess *v8; // eax
  char *v9; // esi
  NiNode *v10; // eax
  NiObjectNET *v11; // edi
  NiCamera *v12; // eax
  NiCamera *v13; // eax
  float *v14; // eax
  NiObjectNET *v15; // edi
  NiObjectNET *v16; // ebx
  float v18[9]; // [esp+30h] [ebp-30h] BYREF
  int v19; // [esp+5Ch] [ebp-4h]

  NiNode::NiNode((NiNode *)this, 0); /*0x411510*/
  p_camera = (NiObjectNET **)&this->camera; /*0x411515*/
  this->vftable = &SceneGraph::`vftable'; /*0x41151b*/
  v19 = 0; /*0x411522*/
  this->camera = 0; /*0x411526*/
  LOBYTE(v19) = 1; /*0x41152e*/
  if ( a2 ) /*0x411533*/
    width = (const char *)a2->members.width; /*0x411535*/
  else
    width = "CreateNewCamera"; /*0x41153a*/
  sub_40FEC0("SceneGraph '%s' Created. Camera name '%s'.", ArgList, width); /*0x41154a*/
  this->IsMinFarPlaneDistance = a3; /*0x411558*/
  v7 = (NiCullingProcess *)FormHeapAlloc(0x90u); /*0x41155e*/
  LOBYTE(v19) = 2; /*0x41156c*/
  if ( v7 ) /*0x411571*/
    v8 = NiCullingProcess_NiCullingProcess(v7, 0); /*0x411576*/
  else
    v8 = 0; /*0x41157d*/
  this->cullingProcess = v8; /*0x411589*/
  this->unk0E0 = 0; /*0x41158f*/
  v9 = (char *)ActorList_ReturnHead((ActorList *)&MEMORY[0xB33E90][0x5B8]); /*0x41159b*/
  _sprintf(v9, "%sRoot Node", ArgList); /*0x4115a3*/
  NiObjectNET_SetName((NiObjectNET *)this, v9); /*0x4115ae*/
  v10 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4115b8*/
  LOBYTE(v19) = 3; /*0x4115c6*/
  if ( v10 ) /*0x4115cb*/
    v11 = (NiObjectNET *)NiNode::NiNode(v10, 0); /*0x4115d6*/
  else
    v11 = 0; /*0x4115da*/
  LOBYTE(v19) = 1; /*0x4115e7*/
  _sprintf(v9, "%sRoot CameraNode", ArgList); /*0x4115ec*/
  NiObjectNET_SetName(v11, v9); /*0x4115f7*/
  NiNode::AddObject((NiNode *)this, (NiAVObject *)v11, 1); /*0x411601*/
  if ( a2 ) /*0x41160c*/
  {
    NiSmartPointer_Set__((Ni2DBuffer **)&this->camera, a2); /*0x411611*/
  }
  else
  {
    v12 = (NiCamera *)FormHeapAlloc(0x124u); /*0x411620*/
    LOBYTE(v19) = 4; /*0x41162e*/
    if ( v12 ) /*0x411633*/
      v13 = sub_70D590(v12); /*0x411637*/
    else
      v13 = 0; /*0x41163e*/
    LOBYTE(v19) = 1; /*0x411643*/
    NiSmartPointer_Set__((Ni2DBuffer **)&this->camera, (Ni2DBuffer *)v13); /*0x411648*/
    _sprintf(v9, "%sRoot Camera", ArgList); /*0x411658*/
    NiObjectNET_SetName(*p_camera, v9); /*0x411663*/
    v14 = (float *)*p_camera; /*0x41166a*/
    v14[0x44] = 0.0; /*0x41167a*/
    v14 += 0x44; /*0x411684*/
    v14[1] = 1.0; /*0x411697*/
    v18[0] = 0.0; /*0x41169a*/
    v18[1] = 0.0; /*0x4116a2*/
    v14[2] = 1.0; /*0x4116a6*/
    v18[4] = 0.0; /*0x4116a9*/
    v18[5] = 0.0; /*0x4116ad*/
    v14[3] = 0.0; /*0x4116b1*/
    v15 = *p_camera; /*0x4116b4*/
    v18[6] = 0.0; /*0x4116b6*/
    v18[8] = 0.0; /*0x4116ba*/
    v18[2] = 1.0; /*0x4116ca*/
    v18[3] = 1.0; /*0x4116ce*/
    v18[7] = 1.0; /*0x4116d2*/
    qmemcpy(&v15[2], v18, 0x24u); /*0x4116d6*/
    *(float *)&(*p_camera)[0xB].vtbl = 1.0; /*0x4116dc*/
    v16 = *p_camera; /*0x4116e2*/
    *(float *)&v16[0xB].members.super.m_uiRefCount = GetFarPlane(this) / NearDistance; /*0x4116f4*/
    SetCameraFOV_0(this, g_DefaulFOV, COERCE_FLOAT(1)); /*0x411703*/
  }
  sub_411100((int)this); /*0x41170a*/
  return this; /*0x411711*/
}
