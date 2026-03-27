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

  NiNode::NiNode((NiNode *)this, 0);
  p_camera = (NiObjectNET **)&this->camera;
  this->vftable = &SceneGraph::`vftable';
  v19 = 0;
  this->camera = 0;
  LOBYTE(v19) = 1;
  if ( a2 )
    width = (const char *)a2->members.width;
  else
    width = "CreateNewCamera";
  sub_40FEC0("SceneGraph '%s' Created. Camera name '%s'.", ArgList, width);
  this->IsMinFarPlaneDistance = a3;
  v7 = (NiCullingProcess *)FormHeapAlloc(0x90u);
  LOBYTE(v19) = 2;
  if ( v7 )
    v8 = NiCullingProcess_NiCullingProcess(v7, 0);
  else
    v8 = 0;
  this->cullingProcess = v8;
  this->unk0E0 = 0;
  v9 = (char *)sub_7616D0(&stru_B34448);
  _sprintf(v9, "%sRoot Node", ArgList);
  NiObjectNET_SetName((NiObjectNET *)this, v9);
  v10 = (NiNode *)FormHeapAlloc(0xDCu);
  LOBYTE(v19) = 3;
  if ( v10 )
    v11 = (NiObjectNET *)NiNode::NiNode(v10, 0);
  else
    v11 = 0;
  LOBYTE(v19) = 1;
  _sprintf(v9, "%sRoot CameraNode", ArgList);
  NiObjectNET_SetName(v11, v9);
  NiNode::AddObject((unsigned __int16 *)this, (int)v11, 1);
  if ( a2 )
  {
    NiSmartPointer_Set__((Ni2DBuffer **)&this->camera, a2);
  }
  else
  {
    v12 = (NiCamera *)FormHeapAlloc(0x124u);
    LOBYTE(v19) = 4;
    if ( v12 )
      v13 = sub_70D590(v12);
    else
      v13 = 0;
    LOBYTE(v19) = 1;
    NiSmartPointer_Set__((Ni2DBuffer **)&this->camera, (Ni2DBuffer *)v13);
    _sprintf(v9, "%sRoot Camera", ArgList);
    NiObjectNET_SetName(*p_camera, v9);
    v14 = (float *)*p_camera;
    v14[0x44] = 0.0;
    v14 += 0x44;
    v14[1] = 1.0;
    v18[0] = 0.0;
    v18[1] = 0.0;
    v14[2] = 1.0;
    v18[4] = 0.0;
    v18[5] = 0.0;
    v14[3] = 0.0;
    v15 = *p_camera;
    v18[6] = 0.0;
    v18[8] = 0.0;
    v18[2] = 1.0;
    v18[3] = 1.0;
    v18[7] = 1.0;
    qmemcpy(&v15[2], v18, 0x24u);
    *(float *)&(*p_camera)[0xB].vtbl = 1.0;
    v16 = *p_camera;
    *(float *)&v16[0xB].members.super.m_uiRefCount = GetFarPlane(this) / NearDistance;
    SetCameraFOV_0(this, g_DefaulFOV, COERCE_FLOAT(1));
  }
  sub_411100((int)this);
  return this;
}
