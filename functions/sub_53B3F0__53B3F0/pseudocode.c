// Pass231/241: Atmosphere initializer stores third argument at Atmosphere+0x0C as active fogProperty.
void __thiscall sub_53B3F0(unsigned int **this, int arg0, Ni2DBuffer *a3)
{
  int *v4; // eax
  NiObjectNET **v5; // ebp
  Sky *v6; // esi
  NiAVObjectVtbl *vtbl; // eax
  void (__thiscall *ApplyTransform)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool); // edx
  void (__thiscall **p_ApplyTransform)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool); // eax
  NiInterpController **p_m_controller; // ecx
  Sky *v11; // eax
  NiNode *v12; // eax
  unsigned int **v13; // esi
  Sky *v14; // ebp
  NiObject *v15; // esi
  Ni2DBuffer *v16; // eax
  Sky *Src; // [esp+14h] [ebp-4ACh] BYREF
  __int16 v18; // [esp+18h] [ebp-4A8h]
  __int16 v19; // [esp+1Ah] [ebp-4A6h]
  Ni2DBuffer *a2; // [esp+1Ch] [ebp-4A4h]
  char v21[520]; // [esp+20h] [ebp-4A0h] BYREF
  NiObject **v22; // [esp+228h] [ebp-298h]
  int v23; // [esp+230h] [ebp-290h]
  int v24; // [esp+4A8h] [ebp-18h]
  int v25; // [esp+4ACh] [ebp-14h]
  int v26; // [esp+4BCh] [ebp-4h]

  a2 = a3; /*0x53b43b*/
  SkyObject__CreateRootNodeAndAttach((Sky *)this, arg0); /*0x53b442*/
  NiObjectNET_SetName((NiObjectNET *)*(this + 1), "Atmosphere Root"); /*0x53b44f*/
  if ( !OB_RendererGlobalState_010201A0[0x1D7] ) /*0x53b456*/
  {
    v4 = (int *)sub_7BD0D0((int)&Src); /*0x53b467*/
    v5 = (NiObjectNET **)(this + 5); /*0x53b46f*/
    v26 = 0; /*0x53b475*/
    OB_NiSmartPointer_Assign_010201A0((int *)this + 5, v4); /*0x53b47c*/
    v26 = 0xFFFFFFFF; /*0x53b487*/
    if ( Src ) /*0x53b492*/
    {
      v6 = Src; /*0x53b494*/
      if ( !InterlockedDecrement((volatile LONG *)&Src->nodeSkyRoot) ) /*0x53b49a*/
        (*(void (__thiscall **)(Sky *, int))v6->vtbl)(v6, 1); /*0x53b4b0*/
    }
    NiObjectNET_SetName(*v5, "Atmosphere Quad"); /*0x53b4ba*/
    LOWORD((*v5)[1].vtbl) |= 2u; /*0x53b4c2*/
    if ( g_WorldSceneReceiverRoot->super.children.end ) /*0x53b4cc*/
      vtbl = g_WorldSceneReceiverRoot->super.children.data->vtbl; /*0x53b4df*/
    else
      vtbl = 0; /*0x53b4d5*/
    ApplyTransform = vtbl->ApplyTransform; /*0x53b4e4*/
    p_ApplyTransform = &vtbl->ApplyTransform; /*0x53b4e7*/
    p_m_controller = &(*v5)[3].members.m_controller; /*0x53b4ea*/
    *p_m_controller = (NiInterpController *)ApplyTransform; /*0x53b4ed*/
    p_m_controller[1] = (NiInterpController *)p_ApplyTransform[1]; /*0x53b4f2*/
    p_m_controller[2] = (NiInterpController *)p_ApplyTransform[2]; /*0x53b4fd*/
    v11 = (Sky *)FormHeapAlloc(0xDCu); /*0x53b500*/
    Src = v11; /*0x53b508*/
    v26 = 1; /*0x53b50e*/
    if ( v11 ) /*0x53b519*/
      v12 = NiNode::NiNode((NiNode *)v11, 0); /*0x53b51e*/
    else
      v12 = 0; /*0x53b525*/
    v13 = this + 4; /*0x53b527*/
    v26 = 0xFFFFFFFF; /*0x53b52d*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 4, (Ni2DBuffer *)v12); /*0x53b538*/
    NiObjectNET_SetName((NiObjectNET *)*(this + 4), "Atmosphere Quad Node"); /*0x53b544*/
    *((_WORD *)*v13 + 0xC) |= 2u; /*0x53b54b*/
    (*(void (__thiscall **)(unsigned int *, NiObjectNET *, _DWORD))(**v13 + 0x84))(*v13, *v5, 0); /*0x53b55f*/
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(this + 1) + 0x84))(*(this + 1), *(this + 4), 0); /*0x53b570*/
  }
  NiStream::NiStream((NiStream *)v21); /*0x53b576*/
  *(_DWORD *)v21 = &BSStream::`vftable'; /*0x53b57b*/
  v25 = 0; /*0x53b583*/
  v24 = 0; /*0x53b58a*/
  v26 = 3; /*0x53b591*/
  Src = 0; /*0x53b59c*/
  v18 = 0; /*0x53b5a0*/
  v19 = 0; /*0x53b5a5*/
  BSStringT_Static_Format((BSStringT *)&Src, "Meshes\\Sky\\Atmosphere.nif"); /*0x53b5bc*/
  v14 = Src; /*0x53b5c1*/
  if ( !sub_6F9980(v21, (char *)Src, 0) ) /*0x53b5ce*/
    goto LABEL_20; /*0x53b5ce*/
  if ( v23 != 1 ) /*0x53b5df*/
    goto LABEL_20; /*0x53b5df*/
  v15 = *v22; /*0x53b5e8*/
  if ( !*v22 ) /*0x53b5e8*/
    goto LABEL_20; /*0x53b5ec*/
  if ( v15->__vftable->Unk_02(*v22) ) /*0x53b5f5*/
  {
    v16 = (Ni2DBuffer *)NiNode_GetChildAtIndex((int)v15, 0); /*0x53b5fe*/
  }
  else
  {
    if ( !NiRTTI::IsObjectOfRTTIType((NiRTTI *)&MEMORY[0xB3F9B0][0xC9], v15) ) /*0x53b615*/
    {
LABEL_20:
      PrintError("Cannot load the atmosphere model."); /*0x53b61d*/
      FormHeapFree((unsigned int)v14); /*0x53b628*/
      v26 = 0xFFFFFFFF; /*0x53b634*/
      BSStream::~BSStream((BSStream *)v21); /*0x53b63f*/
      return; /*0x53b644*/
    }
    v16 = (Ni2DBuffer *)v15; /*0x53b617*/
  }
  if ( !v16 ) /*0x53b61b*/
    goto LABEL_20; /*0x53b61b*/
  NiSmartPointer_Set__((Ni2DBuffer **)this + 2, v16); /*0x53b64c*/
  NiObjectNET_SetName((NiObjectNET *)*(this + 2), "Atmosphere Mesh"); /*0x53b658*/
  *((_WORD *)*(this + 2) + 0xC) |= 2u; /*0x53b65f*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(this + 1) + 0x84))(*(this + 1), *(this + 2), 0); /*0x53b673*/
  FormHeapFree((unsigned int)v14); /*0x53b676*/
  v26 = 0xFFFFFFFF; /*0x53b682*/
  BSStream::~BSStream((BSStream *)v21); /*0x53b68d*/
  NiSmartPointer_Set__((Ni2DBuffer **)this + 3, a2);// Fog property decode: Atmosphere::Initialize stores active B333E4 BSFogProperty into Atmosphere+0x0C. /*0x53b69a*/
}
