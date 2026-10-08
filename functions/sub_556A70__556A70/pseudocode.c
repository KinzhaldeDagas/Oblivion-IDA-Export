// Clone the loaded FaceGen model geometry, geometry data, controller, and required FaceGen extra data into an independently deformable NiGeometry.
bool __thiscall BSFaceGenModel_CloneGeometry(void *this, NiGeometry **outGeometry)
{
  Ni2DBuffer **v3; // esi
  NiGeometry *v4; // edi
  bool v5; // zf
  int v6; // eax
  NiObject *v7; // ecx
  Ni2DBuffer *v8; // eax
  NiGeometry **v9; // edi
  int v10; // ebx
  NiNode *m_uiRefCount; // edi
  NiInterpController *m_controller; // ecx
  _DWORD *v13; // eax
  unsigned int *v14; // eax
  void (__thiscall ***v15)(_DWORD, int); // esi
  Ni2DBuffer *v17; // [esp-4h] [ebp-30h]
  Ni2DBuffer *v18; // [esp-4h] [ebp-30h]
  UInt32 v19; // [esp+14h] [ebp-18h] BYREF
  UInt32 v20[2]; // [esp+18h] [ebp-14h] BYREF
  unsigned int v21; // [esp+28h] [ebp-4h]

  v20[0] = 0; /*0x556a9b*/
  v21 = 0; /*0x556a9f*/
  v19 = 0; /*0x556aa3*/
  v3 = (Ni2DBuffer **)outGeometry; /*0x556aa7*/
  v4 = *outGeometry; /*0x556aab*/
  v5 = *outGeometry == 0; /*0x556aad*/
  LOBYTE(v21) = 1; /*0x556aaf*/
  if ( !v5 ) /*0x556ab4*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v4->member) ) /*0x556aba*/
    {
      if ( v4 ) /*0x556ac6*/
        v4->__vftable->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x556ad0*/
    }
    *v3 = 0; /*0x556ad2*/
  }
  v6 = *((_DWORD *)this + 2); /*0x556ad4*/
  if ( !v6 ) /*0x556ad9*/
    return 0; /*0x556ad9*/
  v7 = *(NiObject **)(v6 + 0x10); /*0x556adf*/
  if ( !v7 || !v7[0x16].members.m_uiRefCount ) /*0x556aea*/
    return 0; /*0x556c50*/
  v8 = (Ni2DBuffer *)NiObject_CloneWithPointerMap(v7); /*0x556af6*/
  NiSmartPointer_Set__(v3, v8); /*0x556afe*/
  v17 = (Ni2DBuffer *)*sub_700790(*(void **)(*(_DWORD *)(*((_DWORD *)this + 2) + 0x10) + 0xB4), (int *)&outGeometry); /*0x556b1d*/
  LOBYTE(v21) = 2; /*0x556b22*/
  NiSmartPointer_Set__((Ni2DBuffer **)v20, v17); /*0x556b27*/
  LOBYTE(v21) = 1; /*0x556b32*/
  if ( outGeometry ) /*0x556b37*/
  {
    v9 = outGeometry; /*0x556b39*/
    if ( !InterlockedDecrement((volatile LONG *)outGeometry + 1) ) /*0x556b3f*/
      ((void (__thiscall *)(NiGeometry **, int))(*v9)->__vftable)(v9, 1); /*0x556b55*/
  }
  v10 = v20[0]; /*0x556b5b*/
  (*((void (__thiscall **)(Ni2DBuffer *, UInt32))(*v3)->__vftable + 0x23))(*v3, v20[0]); /*0x556b66*/
  m_uiRefCount = (NiNode *)(*v3)[9].members.super.m_uiRefCount; /*0x556b6a*/
  if ( m_uiRefCount ) /*0x556b72*/
  {
    m_controller = m_uiRefCount->members.super.super.m_controller; /*0x556b74*/
    if ( m_controller ) /*0x556b79*/
    {
      v18 = (Ni2DBuffer *)*sub_700790(m_controller, (int *)&outGeometry); /*0x556b87*/
      LOBYTE(v21) = 3; /*0x556b8c*/
      NiSmartPointer_Set__((Ni2DBuffer **)&v19, v18); /*0x556b91*/
      LOBYTE(v21) = 1; /*0x556b9a*/
      NiPointerSlot_Release((NiD3DVertexShader *)&outGeometry); /*0x556b9f*/
      sub_478300(m_uiRefCount, (NiTimeController *)v19); /*0x556bab*/
    }
  }
  v13 = (_DWORD *)FormHeapAlloc(0x18u); /*0x556bb2*/
  v20[1] = (UInt32)v13; /*0x556bba*/
  LOBYTE(v21) = 4; /*0x556bc0*/
  if ( v13 ) /*0x556bc5*/
    v14 = sub_55C6E0(v13, (int)*v3, *(void **)(*((_DWORD *)this + 2) + 0x14), *(_DWORD *)(*((_DWORD *)this + 2) + 0x18)); /*0x556bd7*/
  else
    v14 = 0; /*0x556bde*/
  LOBYTE(v21) = 1; /*0x556be2*/
  if ( v14 ) /*0x556be7*/
    NiObjectNET_AddExtraData((const void **)&(*v3)->__vftable, v10, v14); /*0x556bec*/
  if ( *(_DWORD *)(*((_DWORD *)this + 2) + 0x20) ) /*0x556bf4*/
    NiObjectNET_AddExtraData((const void **)&(*v3)->__vftable, v10, *(unsigned int **)(*((_DWORD *)this + 2) + 0x20)); /*0x556bfe*/
  v15 = (void (__thiscall ***)(_DWORD, int))v19; /*0x556c03*/
  LOBYTE(v21) = 0; /*0x556c09*/
  if ( v19 ) /*0x556c0e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x556c14*/
      (**v15)(v15, 1); /*0x556c26*/
  }
  v21 = 0xFFFFFFFF; /*0x556c2a*/
  if ( v10 ) /*0x556c32*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x556c38*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x556c4a*/
  }
  return 1; /*0x556c52*/
}
