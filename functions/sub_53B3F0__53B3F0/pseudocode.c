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

  a2 = a3;
  sub_543D30((Sky *)this, arg0);
  NiObjectNET_SetName((NiObjectNET *)*(this + 1), "Atmosphere Root");
  if ( !UseHDR )
  {
    v4 = (int *)sub_7BD0D0((int)&Src);
    v5 = (NiObjectNET **)(this + 5);
    v26 = 0;
    sub_55E2A0((int *)this + 5, v4);
    v26 = 0xFFFFFFFF;
    if ( Src )
    {
      v6 = Src;
      if ( !InterlockedDecrement((volatile LONG *)&Src->nodeSkyRoot) )
        (*(void (__thiscall **)(Sky *, int))v6->vtbl)(v6, 1);
    }
    NiObjectNET_SetName(*v5, "Atmosphere Quad");
    LOWORD((*v5)[1].vtbl) |= 2u;
    if ( g_worldScenegraph->super.children.end )
      vtbl = g_worldScenegraph->super.children.data->vtbl;
    else
      vtbl = 0;
    ApplyTransform = vtbl->ApplyTransform;
    p_ApplyTransform = &vtbl->ApplyTransform;
    p_m_controller = &(*v5)[3].members.m_controller;
    *p_m_controller = (NiInterpController *)ApplyTransform;
    p_m_controller[1] = (NiInterpController *)p_ApplyTransform[1];
    p_m_controller[2] = (NiInterpController *)p_ApplyTransform[2];
    v11 = (Sky *)FormHeapAlloc(0xDCu);
    Src = v11;
    v26 = 1;
    if ( v11 )
      v12 = NiNode::NiNode((NiNode *)v11, 0);
    else
      v12 = 0;
    v13 = this + 4;
    v26 = 0xFFFFFFFF;
    NiSmartPointer_Set__((Ni2DBuffer **)this + 4, (Ni2DBuffer *)v12);
    NiObjectNET_SetName((NiObjectNET *)*(this + 4), "Atmosphere Quad Node");
    *((_WORD *)*v13 + 0xC) |= 2u;
    (*(void (__thiscall **)(unsigned int *, NiObjectNET *, _DWORD))(**v13 + 0x84))(*v13, *v5, 0);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(this + 1) + 0x84))(*(this + 1), *(this + 4), 0);
  }
  NiStream::NiStream((NiStream *)v21);
  *(_DWORD *)v21 = &BSStream::`vftable';
  v25 = 0;
  v24 = 0;
  v26 = 3;
  Src = 0;
  v18 = 0;
  v19 = 0;
  BSStringT_Static_Format((BSStringT *)&Src, "Meshes\\Sky\\Atmosphere.nif");
  v14 = Src;
  if ( !sub_6F9980(v21, (char *)Src, 0) )
    goto LABEL_20;
  if ( v23 != 1 )
    goto LABEL_20;
  v15 = *v22;
  if ( !*v22 )
    goto LABEL_20;
  if ( v15->__vftable->Unk_02(*v22) )
  {
    v16 = (Ni2DBuffer *)sub_405790((int)v15, 0);
  }
  else
  {
    if ( !NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3FCD4, v15) )
    {
LABEL_20:
      PrintError("Cannot load the atmosphere model.");
      FormHeapFree((unsigned int)v14);
      v26 = 0xFFFFFFFF;
      BSStream::~BSStream((BSStream *)v21);
      return;
    }
    v16 = (Ni2DBuffer *)v15;
  }
  if ( !v16 )
    goto LABEL_20;
  NiSmartPointer_Set__((Ni2DBuffer **)this + 2, v16);
  NiObjectNET_SetName((NiObjectNET *)*(this + 2), "Atmosphere Mesh");
  *((_WORD *)*(this + 2) + 0xC) |= 2u;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(this + 1) + 0x84))(*(this + 1), *(this + 2), 0);
  FormHeapFree((unsigned int)v14);
  v26 = 0xFFFFFFFF;
  BSStream::~BSStream((BSStream *)v21);
  NiSmartPointer_Set__((Ni2DBuffer **)this + 3, a2);
}
