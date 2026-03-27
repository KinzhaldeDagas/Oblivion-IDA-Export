NiNode *__thiscall sub_4A12E0(NiNode *this, volatile LONG *a2)
{
  volatile LONG *v3; // esi
  volatile LONG **v4; // ebx
  volatile LONG *v5; // edi
  int v6; // eax
  NiObjectNET *v7; // esi
  NiNode *v8; // eax
  NiNode *v9; // eax
  NiNode *v10; // eax
  volatile LONG *v11; // eax
  unsigned int i; // esi
  int v13; // eax
  BSShaderProperty *v14; // esi
  int v15; // esi
  DWORD CurrentThreadId; // eax
  volatile LONG *v18; // esi
  volatile LONG **v20; // [esp-8h] [ebp-38h]
  NiObjectNET *v21; // [esp+14h] [ebp-1Ch]
  float v22; // [esp+14h] [ebp-1Ch]

  v3 = 0;
  NiNode::NiNode(this, 0);
  v4 = (volatile LONG **)a2;
  v5 = a2;
  this->vtbl = (NiNodeVtbl *)&BSFadeNode::`vftable';
  a2 = 0;
  NiObjectNET_SetName((NiObjectNET *)this, *((char **)v5 + 2));
  if ( !v4[3] )
  {
    v6 = (*((int (__thiscall **)(volatile LONG **))*v4 + 1))(v4);
    if ( !v6 )
    {
LABEL_5:
      if ( sub_70FF20((float *)v4 + 0xC, (float *)&stru_B26AF0[0xA].unk2C) )
      {
        sub_435CE0((NiAVObject *)this, v4[0x2A]);
        sub_435CE0((NiAVObject *)v4, 0);
      }
      else
      {
        v7 = (NiObjectNET *)v4;
        v8 = (NiNode *)FormHeapAlloc(0xDCu);
        if ( v8 )
          v9 = NiNode::NiNode(v8, 0);
        else
          v9 = 0;
        NiSmartPointer_Set__((Ni2DBuffer **)&a2, (Ni2DBuffer *)v9);
        v20 = v4;
        v4 = (volatile LONG **)a2;
        (*(void (__stdcall **)(volatile LONG **, _DWORD))(*a2 + 0x84))(v20, 0);
        NiObjectNET_SetName(v7, "FadeNode Rot");
      }
      goto LABEL_17;
    }
    while ( (char *)v6 != dword_B3FD4C )
    {
      v6 = *(_DWORD *)(v6 + 4);
      if ( !v6 )
        goto LABEL_5;
    }
  }
  v21 = (NiObjectNET *)v4;
  v10 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v10 )
    v11 = (volatile LONG *)NiNode::NiNode(v10, 0);
  else
    v11 = 0;
  if ( v11 )
  {
    a2 = v11;
    InterlockedIncrement(v11 + 1);
    v3 = a2;
  }
  v4 = (volatile LONG **)v3;
  (*(void (__thiscall **)(volatile LONG *, NiObjectNET *, _DWORD))(*v3 + 0x84))(v3, v21, 0);
  NiObjectNET_SetName(v21, "FadeNode Anim");
LABEL_17:
  for ( i = 0; *((unsigned __int16 *)v4 + 0x5B) > i; ++i )
  {
    v13 = v4[0x2C][i];
    if ( v13 )
      NiNode::AddObject((unsigned __int16 *)this, v13, 1);
  }
  sub_4A0760((int)this, (int)this);
  while ( *((_DWORD *)v5 + 0x29) )
  {
    v14 = *(BSShaderProperty **)(*((_DWORD *)v5 + 0x27) + 8);
    sub_405680(this, v14);
    sub_4A1220((int **)v5, (int)v14);
  }
  while ( *((_DWORD *)v5 + 0x32) )
  {
    v15 = *(_DWORD *)(*((_DWORD *)v5 + 0x30) + 8);
    sub_708E40(this, v15);
    sub_70B930(v5, v15);
  }
  LODWORD(this->members.super.m_localTransform.pos.x) = v4[0x15];
  LODWORD(this->members.super.m_localTransform.pos.y) = v4[0x16];
  LODWORD(this->members.super.m_localTransform.pos.z) = v4[0x17];
  qmemcpy(&this->members.super.m_localTransform, v4 + 0xC, 0x24u);
  v22 = fabs(*((float *)v4 + 0x18));
  this->members.super.m_localTransform.scale = v22;
  EnterCriticalSection(&stru_B3F600);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3F67C;
  dword_B3F678 = CurrentThreadId;
  sub_6FF760((unsigned __int16 *)this, *((_WORD *)v5 + 0xA));
  while ( *((_WORD *)v5 + 0xA) )
  {
    NiNode_AddNiExtraData((const void **)&this->vtbl, (int)v4, **((unsigned int ***)v5 + 4));
    sub_6FFBE0(v5, 0);
  }
  if ( dword_B3F67C-- == 1 )
    dword_B3F678 = 0;
  LeaveCriticalSection(&stru_B3F600);
  sub_4A07E0((float *)this);
  sub_70A360(this);
  sub_70A9C0(this);
  v18 = a2;
  if ( a2 )
  {
    if ( !InterlockedDecrement(a2 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v18)(v18, 1);
  }
  return this;
}
