void __thiscall sub_56CFF0(int *this, int arg0, __int16 a3, unsigned __int16 a4, int a5, int a6, int a7, int a8)
{
  NiAVObject *v9; // ecx
  NiAVObject *v10; // ebp
  char *v11; // esi
  BSShader *shader; // esi
  BSShader *m_extraDataList; // edi
  NiProperty *NiPropertyByID; // edi
  int v15; // esi
  NiProperty *v16; // ebx
  NiProperty **v17; // esi
  _DWORD *v18; // edi
  int v19; // esi
  NiSkinData *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // ebx
  int v23; // ecx
  NiObject *v24; // esi
  NiObject *v25; // ebx
  NiSkinPartition *v26; // eax
  NiSkinPartition *v27; // edi
  volatile LONG *m_uiRefCount; // esi
  NiInterpController *m_controller; // edi
  NiObjectNET *v30; // eax
  BSShaderProperty *v31; // esi
  BSShaderProperty *v32; // eax
  _DWORD *v33; // eax
  double v34; // st7
  NiAVObject *v35; // esi
  NiSkinData *v37; // [esp+58h] [ebp+Ch]
  float v38; // [esp+58h] [ebp+Ch]
  float a2; // [esp+58h] [ebp+Ch]
  int v40; // [esp+5Ch] [ebp+10h]
  NiObjectVtbl *v41; // [esp+5Ch] [ebp+10h]

  v9 = (NiAVObject *)FormHeapAlloc(0xC0u);
  v10 = 0;
  if ( v9 )
    v10 = sub_7174B0(v9, a3, a5, a6, 0, 0, 0, 0, a4 / 3, a7);
  v11 = (char *)FormHeapAlloc(strlen(*(const char **)(*(this + 0xB) + 8)) + 7);
  _sprintf(v11, "%s:%s", "Decal", *(const char **)(*(this + 0xB) + 8));
  NiObjectNET_SetName((NiObjectNET *)v10, v11);
  FormHeapFree((unsigned int)v11);
  shader = GetShaderDefinition(0x10u)->shader;
  m_extraDataList = (BSShader *)v10[1].members.super.m_extraDataList;
  if ( m_extraDataList != shader )
  {
    if ( m_extraDataList )
    {
      if ( !InterlockedDecrement((volatile LONG *)&m_extraDataList->member) )
        m_extraDataList->__vftable->super.super.super.super.Destructor((NiRefObject *)m_extraDataList, 1);
    }
    v10[1].members.super.m_extraDataList = (NiExtraData **)shader;
    if ( shader )
      InterlockedIncrement((volatile LONG *)&shader->member);
  }
  shader->__vftable->super.super.super.UpdateInternalVars((NiShader *)shader, v10);
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v10, 4);
  sub_7EE3E0(NiPropertyByID, *(this + 6));
  v15 = *(this + 6);
  v16 = *(NiProperty **)(v15 + 0x48);
  v17 = (NiProperty **)(v15 + 0x48);
  if ( v16 != NiPropertyByID )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v16->members) )
        (*(void (__thiscall **)(NiProperty *, int))v16->vtbl)(v16, 1);
    }
    *v17 = NiPropertyByID;
    if ( NiPropertyByID )
      InterlockedIncrement((volatile LONG *)&NiPropertyByID->members);
  }
  v18 = *(_DWORD **)(arg0 + 0xB8);
  v19 = *(_DWORD *)(v18[2] + 0x40);
  v20 = (NiSkinData *)FormHeapAlloc(0x48u);
  if ( v20 )
    v37 = NiSkinData::NiSkinData(v20, v19, a8, (const void *)(v18[2] + 0xC), a5);
  else
    v37 = 0;
  v40 = v18[5];
  v21 = (_DWORD *)FormHeapAlloc((unsigned __int64)(unsigned int)v19 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v19);
  v22 = v21;
  if ( v19 > 0 )
  {
    v23 = v40 - (_DWORD)v21;
    do
    {
      *v21 = *(_DWORD *)((char *)v21 + v23);
      ++v21;
      --v19;
    }
    while ( v19 );
  }
  v24 = (NiObject *)FormHeapAlloc(0x2Cu);
  if ( v24 )
  {
    v41 = (NiObjectVtbl *)v18[4];
    NiObject_constr(v24);
    v24->__vftable = (NiObjectVtbl *)&NiSkinInstance::`vftable';
    v24[1].__vftable = (NiObjectVtbl *)v37;
    if ( v37 )
      InterlockedIncrement((volatile LONG *)v37 + 1);
    v24[1].members.m_uiRefCount = 0;
    v24[2].members.m_uiRefCount = (UInt32)v22;
    v24[2].__vftable = v41;
    v24[3].__vftable = (NiObjectVtbl *)0xFFFFFFFF;
    v24[3].members.m_uiRefCount = 0;
    v24[4].__vftable = 0;
    v24[4].members.m_uiRefCount = 0;
    v24[5].__vftable = 0;
    v25 = v24;
  }
  else
  {
    v25 = 0;
  }
  v26 = (NiSkinPartition *)FormHeapAlloc(0x10u);
  if ( v26 )
    v27 = NiSkinPartition::NiSkinPartition(v26);
  else
    v27 = 0;
  if ( sub_72ED50(v27, (unsigned __int16 *)v10[1].members.super.m_pcName, (int)v37, 0x12u, 4u, 1) )
  {
    m_uiRefCount = (volatile LONG *)v25[1].members.m_uiRefCount;
    if ( m_uiRefCount != (volatile LONG *)v27 )
    {
      if ( m_uiRefCount )
      {
        if ( !InterlockedDecrement(m_uiRefCount + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))m_uiRefCount)(m_uiRefCount, 1);
      }
      v25[1].members.m_uiRefCount = (UInt32)v27;
      if ( v27 )
        InterlockedIncrement((volatile LONG *)v27 + 1);
    }
    m_controller = v10[1].members.super.m_controller;
    if ( m_controller != (NiInterpController *)v25 )
    {
      if ( m_controller )
      {
        if ( !InterlockedDecrement((volatile LONG *)&m_controller->member) )
          m_controller->vtbl->super.super.super.Destructor((NiRefObject *)m_controller, 1);
      }
      v10[1].members.super.m_controller = (NiInterpController *)v25;
      if ( v25 )
        InterlockedIncrement((volatile LONG *)&v25->members);
    }
  }
  else
  {
    if ( v27 )
      (**(void (__thiscall ***)(NiSkinPartition *, int))v27)(v27, 1);
    if ( v25 )
      v25->__vftable->super.Destructor((NiRefObject *)v25, 1);
  }
  v30 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v31 = (BSShaderProperty *)v30;
  if ( v30 )
  {
    NiObjectNET::NiObjectNET(v30);
    v31->vtbl = &NiWireframeProperty::`vftable';
    v31->member.super.flags = 0;
    v32 = v31;
  }
  else
  {
    v32 = 0;
  }
  v32->member.super.flags &= ~1u;
  sub_405680((NiNode *)v10, v32);
  v33 = (_DWORD *)*(this + 0xB);
  v10->members.m_localTransform.pos.x = (float)v33[0x15];
  v10->members.m_localTransform.pos.y = (float)v33[0x16];
  v10->members.m_localTransform.pos.z = (float)v33[0x17];
  qmemcpy(&v10->members.m_localTransform, (const void *)(*(this + 0xB) + 0x30), 0x24u);
  v38 = fabs(*(float *)(*(this + 0xB) + 0x60));
  v10->members.m_localTransform.scale = v38;
  (*(void (__thiscall **)(_DWORD, NiAVObject *, int))(*(_DWORD *)*(this + 0xC) + 0x84))(*(this + 0xC), v10, 1);
  v34 = (double)(int)Seed;
  if ( (int)Seed < 0 )
    v34 = v34 + flt_A2FC78;
  a2 = v34 / dbl_A2FC70;
  NiAVObject_UpdateNiAVObject(v10, a2, 0);
  NiAVObject_InitializePropertyState(v10);
  v35 = (NiAVObject *)*(this + 7);
  if ( v35 == v10 )
  {
    *(this + 8) = *(this + 0xB);
  }
  else
  {
    if ( v35 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v35->members) )
        v35->vtbl->super.super.Destructor((NiRefObject *)v35, 1);
    }
    *(this + 7) = (int)v10;
    InterlockedIncrement((volatile LONG *)&v10->members);
    *(this + 8) = *(this + 0xB);
  }
}
