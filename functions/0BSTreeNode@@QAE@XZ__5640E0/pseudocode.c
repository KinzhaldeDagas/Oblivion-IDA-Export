BSTreeNode *__thiscall BSTreeNode::BSTreeNode(BSTreeNode *this, NiNode *a2, int a3)
{
  NiNode *v4; // edi
  NiNode *v5; // ebx
  NiNode *v6; // eax
  NiObjectNET *v7; // edi
  LONG (__stdcall *v8)(volatile LONG *); // ebx
  NiNode *v9; // edi
  NiNode *v10; // eax
  NiObjectNET *v11; // edi
  int v12; // eax
  NiNode *v13; // edi
  NiNode *v14; // eax
  NiNode *v15; // edi
  NiNode *v16; // edi
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // bx
  NiNode *v19; // edi
  unsigned int v20; // ecx
  NiNode *v21; // eax
  NiNodeMembr *p_members; // ebp
  int v23; // ebx
  int v24; // edi
  int v25; // ebp
  _DWORD *v26; // edi
  unsigned __int16 v27; // ax
  int v28; // ebx
  NiNode *v29; // edi
  unsigned int v30; // ecx
  NiNode *v31; // eax
  NiNodeMembr *v32; // ebp
  NiNodeMembr *v33; // eax
  int v34; // edi
  int v35; // ebp
  _DWORD *v36; // edi
  int v37; // edi
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  NiNode *v41; // eax
  NiNode *v42; // edi
  int v43; // eax

  NiNode::NiNode((NiNode *)this, 0);
  *(_DWORD *)this = &BSTreeNode::`vftable';
  *((_DWORD *)this + 0x37) = 0;
  *((_DWORD *)this + 0x3A) = 0;
  v4 = *((NiNode **)this + 0x37);
  v5 = a2;
  if ( v4 != a2 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) )
        v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1);
    }
    *((_DWORD *)this + 0x37) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)&v5->members);
  }
  *((_WORD *)this + 0xC) |= 2u;
  v6 = (NiNode *)FormHeapAlloc(0xDCu);
  a2 = v6;
  if ( v6 )
    v7 = (NiObjectNET *)NiNode::NiNode(v6, 0);
  else
    v7 = 0;
  NiObjectNET_SetName(v7, "Branches");
  NiNode::SetObjectAt((NiNode *)this, &a2, 0, v7);
  v8 = InterlockedDecrement;
  if ( a2 )
  {
    v9 = a2;
    if ( !v8((volatile LONG *)&a2->members) )
      v9->vtbl->super.super.super.Destructor((NiRefObject *)v9, 1);
  }
  v10 = (NiNode *)FormHeapAlloc(0xDCu);
  a2 = v10;
  if ( v10 )
    v11 = (NiObjectNET *)NiNode::NiNode(v10, 0);
  else
    v11 = 0;
  NiObjectNET_SetName(v11, "Leaves");
  if ( *(_DWORD *)(sub_55F7E0(1) + 8) )
  {
    v12 = sub_55F7E0(1);
    sub_405680((NiNode *)v11, *(BSShaderProperty **)(v12 + 8));
  }
  NiNode::SetObjectAt((NiNode *)this, &a2, 1u, v11);
  if ( a2 )
  {
    v13 = a2;
    if ( !v8((volatile LONG *)&a2->members) )
      v13->vtbl->super.super.super.Destructor((NiRefObject *)v13, 1);
  }
  v14 = (NiNode *)FormHeapAlloc(0xE4u);
  v15 = v14;
  a2 = v14;
  if ( v14 )
  {
    NiNode::NiNode(v14, 0);
    *(float *)&v15[1].members.super.super.super.m_uiRefCount = 0.0;
    v15->vtbl = (NiNodeVtbl *)&NiBillboardNode::`vftable';
    LOWORD(v15[1].vtbl) = 9;
  }
  else
  {
    v15 = 0;
  }
  NiObjectNET_SetName((NiObjectNET *)v15, "Billboard");
  LOWORD(v15[1].vtbl) = (int)v15[1].vtbl & 0xFFF8 | 1;
  sub_70FE20((float *)&v15->members.super.m_localTransform, flt_A3721C, 1.0, 0.0, 0.0);
  NiNode::SetObjectAt((NiNode *)this, &a2, 2u, v15);
  if ( a2 )
  {
    v16 = a2;
    if ( !v8((volatile LONG *)&a2->members) )
      v16->vtbl->super.super.super.Destructor((NiRefObject *)v16, 1);
  }
  v17 = sub_5601E0(*((_DWORD **)this + 0x37));
  v18 = v17;
  if ( v17 )
  {
    v19 = (NiNode *)v17;
    v20 = (unsigned __int64)v17 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v17;
    v21 = (NiNode *)FormHeapAlloc(__CFADD__(v20, 4) ? 0xFFFFFFFF : v20 + 4);
    a2 = v21;
    if ( v21 )
    {
      p_members = &v21->members;
      v21->vtbl = (NiNodeVtbl *)v18;
      ArrayConstructor(
        &v21->members,
        4u,
        v18,
        (int)Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_7016A0);
    }
    else
    {
      p_members = 0;
    }
    *((_DWORD *)this + 0x38) = p_members;
    if ( v18 )
    {
      v23 = 0;
      a2 = v19;
      do
      {
        v24 = *((_DWORD *)this + 0x38);
        v25 = *(_DWORD *)(v24 + v23);
        v26 = (_DWORD *)(v23 + v24);
        if ( v25 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) )
            (**(void (__thiscall ***)(int, int))v25)(v25, 1);
          *v26 = 0;
        }
        v23 += 4;
        a2 = (NiNode *)((char *)a2 + 0xFFFFFFFF);
      }
      while ( a2 );
    }
  }
  else
  {
    *((_DWORD *)this + 0x38) = 0;
  }
  v27 = sub_560200(*((_DWORD **)this + 0x37));
  v28 = v27;
  if ( v27 )
  {
    v29 = (NiNode *)v27;
    v30 = (unsigned __int64)v27 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v27;
    v31 = (NiNode *)FormHeapAlloc(__CFADD__(v30, 4) ? 0xFFFFFFFF : v30 + 4);
    a2 = v31;
    if ( v31 )
    {
      v32 = &v31->members;
      v31->vtbl = (NiNodeVtbl *)(unsigned __int16)v28;
      ArrayConstructor(
        &v31->members,
        4u,
        (unsigned __int16)v28,
        (int)Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_7016A0);
      v33 = v32;
    }
    else
    {
      v33 = 0;
    }
    *((_DWORD *)this + 0x39) = v33;
    if ( (_WORD)v28 )
    {
      v28 = 0;
      a2 = v29;
      do
      {
        v34 = *((_DWORD *)this + 0x39);
        v35 = *(_DWORD *)(v34 + v28);
        v36 = (_DWORD *)(v28 + v34);
        if ( v35 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v35 + 4)) )
            (**(void (__thiscall ***)(int, int))v35)(v35, 1);
          *v36 = 0;
        }
        v28 += 4;
        a2 = (NiNode *)((char *)a2 + 0xFFFFFFFF);
      }
      while ( a2 );
    }
  }
  else
  {
    *((_DWORD *)this + 0x39) = 0;
  }
  v37 = *((_DWORD *)this + 0x3A);
  if ( v37 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v37 + 4)) )
      (**(void (__thiscall ***)(int, int))v37)(v37, 1);
    *((_DWORD *)this + 0x3A) = 0;
  }
  v38 = sub_55F7E0(1);
  NiNode_AddNiExtraData((const void **)this, v28, *(unsigned int **)(v38 + 0x18));
  v39 = a3;
  if ( a3 )
    v40 = a3;
  else
    v40 = *(_DWORD *)(*((_DWORD *)this + 0x37) + 0x40);
  if ( v40 )
  {
    v41 = (NiNode *)FormHeapAlloc(0x14u);
    v42 = v41;
    a2 = v41;
    if ( v41 )
    {
      sub_897600(v41);
      v42->vtbl = (NiNodeVtbl *)&bhkCollisionObject::`vftable';
    }
    else
    {
      v42 = 0;
    }
    if ( v39 )
      v43 = v39;
    else
      v43 = *(_DWORD *)(*((_DWORD *)this + 0x37) + 0x40);
    sub_897670(v42, v43);
    ((void (__thiscall *)(NiNode *, BSTreeNode *))v42->vtbl->super.UpdateControllers)(v42, this);
  }
  *((float *)this + 0x3B) = 0.0;
  return this;
}
