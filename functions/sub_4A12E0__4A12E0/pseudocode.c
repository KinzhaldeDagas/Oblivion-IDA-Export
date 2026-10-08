NiNode *__thiscall BSFadeNode_ConstructByTransferringRoot(NiNode *this, volatile LONG *a2)
{
  volatile LONG *v3; // esi
  volatile LONG **v4; // ebx
  volatile LONG *v5; // edi
  NiRTTI *v6; // eax
  NiObjectNET *v7; // esi
  NiNode *v8; // eax
  NiNode *v9; // eax
  NiNode *v10; // eax
  volatile LONG *v11; // eax
  unsigned int i; // esi
  NiAVObject *v13; // eax
  BSShaderProperty *v14; // esi
  _DWORD *v15; // esi
  DWORD CurrentThreadId; // eax
  volatile LONG *v18; // esi
  volatile LONG **v20; // [esp-8h] [ebp-38h]
  NiObjectNET *v21; // [esp+14h] [ebp-1Ch]
  float v22; // [esp+14h] [ebp-1Ch]

  v3 = 0; /*0x4a130d*/
  NiNode::NiNode(this, 0); /*0x4a1310*/
  v4 = (volatile LONG **)a2; /*0x4a1315*/
  v5 = a2; /*0x4a1319*/
  this->vtbl = (NiNodeVtbl *)&BSFadeNode::`vftable'; /*0x4a131f*/
  a2 = 0; /*0x4a132a*/
  NiObjectNET_SetName((NiObjectNET *)this, *((char **)v5 + 2)); /*0x4a1339*/
  if ( !v4[3] ) /*0x4a133e*/
  {
    v6 = (NiRTTI *)(*((int (__thiscall **)(volatile LONG **))*v4 + 1))(v4); /*0x4a134e*/
    if ( !v6 ) /*0x4a1352*/
    {
LABEL_5:
      if ( sub_70FF20((float *)v4 + 0xC, (float *)&stru_B26AF0[0xA].unk2C) ) /*0x4a136e*/
      {
        sub_435CE0((NiAVObject *)this, v4[0x2A]); /*0x4a13d4*/
        sub_435CE0((NiAVObject *)v4, 0); /*0x4a13dd*/
      }
      else
      {
        v7 = (NiObjectNET *)v4; /*0x4a137c*/
        v8 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4a137e*/
        if ( v8 ) /*0x4a1391*/
          v9 = NiNode::NiNode(v8, 0); /*0x4a1397*/
        else
          v9 = 0; /*0x4a139e*/
        NiSmartPointer_Set__((Ni2DBuffer **)&a2, (Ni2DBuffer *)v9); /*0x4a13aa*/
        v20 = v4; /*0x4a13bd*/
        v4 = (volatile LONG **)a2; /*0x4a13be*/
        (*(void (__stdcall **)(volatile LONG **, _DWORD))(*a2 + 0x84))(v20, 0); /*0x4a13c0*/
        NiObjectNET_SetName(v7, "FadeNode Rot"); /*0x4a13c9*/
      }
      goto LABEL_17; /*0x4a13c9*/
    }
    while ( v6 != &stru_B3FD4C ) /*0x4a1359*/
    {
      v6 = v6->parent; /*0x4a135f*/
      if ( !v6 ) /*0x4a1364*/
        goto LABEL_5; /*0x4a1364*/
    }
  }
  v21 = (NiObjectNET *)v4; /*0x4a13e9*/
  v10 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4a13ed*/
  if ( v10 ) /*0x4a1400*/
    v11 = (volatile LONG *)NiNode::NiNode(v10, 0); /*0x4a1406*/
  else
    v11 = 0; /*0x4a140d*/
  if ( v11 ) /*0x4a1416*/
  {
    a2 = v11; /*0x4a1418*/
    InterlockedIncrement(v11 + 1); /*0x4a1420*/
    v3 = a2; /*0x4a1426*/
  }
  v4 = (volatile LONG **)v3; /*0x4a143b*/
  (*(void (__thiscall **)(volatile LONG *, NiObjectNET *, _DWORD))(*v3 + 0x84))(v3, v21, 0); /*0x4a143d*/
  NiObjectNET_SetName(v21, "FadeNode Anim"); /*0x4a1448*/
LABEL_17:
  for ( i = 0; *((unsigned __int16 *)v4 + 0x5B) > i; ++i ) /*0x4a144d*/
  {
    v13 = (NiAVObject *)v4[0x2C][i]; /*0x4a1464*/
    if ( v13 ) /*0x4a1469*/
      NiNode::AddObject(this, v13, 1); /*0x4a1470*/
  }
  sub_4A0760((int)this, (int)this); /*0x4a1485*/
  while ( *((_DWORD *)v5 + 0x29) ) /*0x4a148d*/
  {
    v14 = *(BSShaderProperty **)(*((_DWORD *)v5 + 0x27) + 8); /*0x4a149c*/
    sub_405680(this, v14); /*0x4a14a2*/
    sub_4A1220((int ***)v5, (int)v14); /*0x4a14aa*/
  }
  while ( *((_DWORD *)v5 + 0x32) ) /*0x4a14b8*/
  {
    v15 = *(_DWORD **)(*((_DWORD *)v5 + 0x30) + 8); /*0x4a14c7*/
    sub_708E40(this, v15); /*0x4a14cd*/
    sub_70B930(v5, v15); /*0x4a14d5*/
  }
  LODWORD(this->members.super.m_localTransform.pos.x) = v4[0x15]; /*0x4a14e6*/
  LODWORD(this->members.super.m_localTransform.pos.y) = v4[0x16]; /*0x4a14ec*/
  LODWORD(this->members.super.m_localTransform.pos.z) = v4[0x17]; /*0x4a14f2*/
  qmemcpy(&this->members.super.m_localTransform, v4 + 0xC, 0x24u); /*0x4a1500*/
  v22 = fabs(*((float *)v4 + 0x18)); /*0x4a150f*/
  this->members.super.m_localTransform.scale = v22; /*0x4a1517*/
  EnterCriticalSection(&unk_B3F600); /*0x4a151f*/
  CurrentThreadId = GetCurrentThreadId(); /*0x4a1525*/
  ++unk_B3F67C; /*0x4a1534*/
  unk_B3F678 = CurrentThreadId; /*0x4a153a*/
  sub_6FF760((unsigned __int16 *)this, *((_WORD *)v5 + 0xA)); /*0x4a1546*/
  while ( *((_WORD *)v5 + 0xA) ) /*0x4a154b*/
  {
    NiObjectNET_AddExtraData((const void **)&this->vtbl, (int)v4, **((unsigned int ***)v5 + 4)); /*0x4a155c*/
    sub_6FFBE0(v5, 0); /*0x4a1565*/
  }
  if ( unk_B3F67C-- == 1 ) /*0x4a1573*/
    unk_B3F678 = 0; /*0x4a157b*/
  LeaveCriticalSection(&unk_B3F600); /*0x4a158a*/
  sub_4A07E0((float *)this); /*0x4a1592*/
  sub_70A360(this); /*0x4a1599*/
  sub_70A9C0(this); /*0x4a15a0*/
  v18 = a2; /*0x4a15a5*/
  if ( a2 ) /*0x4a15b0*/
  {
    if ( !InterlockedDecrement(a2 + 1) ) /*0x4a15b6*/
      (**(void (__thiscall ***)(volatile LONG *, int))v18)(v18, 1); /*0x4a15c7*/
  }
  return this; /*0x4a15cb*/
}
