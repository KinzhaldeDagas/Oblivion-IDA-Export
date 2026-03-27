void __userpurge sub_66E950(TESObjectREFR *this@<ecx>, int a2@<ebx>, float a3)
{
  NiObjectNET *NiNode; // eax
  const void **p_vtbl; // esi
  NiObject *ExtraData; // eax
  NiObject *v7; // eax
  float *v8; // eax
  float *v9; // eax
  int v10; // esi
  int v11; // eax
  char v12; // al
  NiNode *v13; // eax
  NiNode *v14; // esi
  NiProperty *NiPropertyByID; // eax
  NiObjectNET *v16; // eax
  BSShaderProperty *v17; // eax

  NiNode = (NiObjectNET *)TESObjectREFR::GetNiNode(this);
  p_vtbl = (const void **)&NiNode->vtbl;
  if ( NiNode )
  {
    if ( a3 < 1.0 )
    {
      ExtraData = (NiObject *)NiObjectNET_GetExtraData(NiNode, off_A3FA90);
      v7 = NiRTTI_Cast((BSStringT *)dword_B35294, ExtraData);
      if ( v7 )
      {
        *(float *)&v7[1].members.m_uiRefCount = a3;
      }
      else
      {
        v8 = (float *)FormHeapAlloc(0x10u);
        if ( v8 )
          v9 = sub_5E1570(v8, a3);
        else
          v9 = 0;
        NiNode_AddNiExtraData(p_vtbl, a2, (unsigned int *)v9);
      }
    }
    else
    {
      sub_6FFAC0(NiNode, off_A3FA90);
    }
  }
  v10 = *((_DWORD *)this + 0x174);
  if ( v10 )
  {
    v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10 + 4))(*((_DWORD *)this + 0x174));
    if ( v11 )
    {
      while ( (char *)v11 != dword_B3FAB0 )
      {
        v11 = *(_DWORD *)(v11 + 4);
        if ( !v11 )
          goto LABEL_14;
      }
      v12 = 1;
    }
    else
    {
LABEL_14:
      v12 = 0;
    }
    v13 = v12 != 0 ? (NiNode *)v10 : 0;
    v14 = v13;
    if ( v13 )
    {
      if ( a3 < 1.0 )
      {
        if ( NiNode_GetNiPropertyByID(v13, 0) )
        {
LABEL_25:
          sub_4A2A90((int)v14, a3);
          return;
        }
        v16 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
        if ( v16 )
          v17 = (BSShaderProperty *)sub_47F920(v16);
        else
          v17 = 0;
        v17->member.super.flags |= 1u;
        sub_405680(v14, v17);
      }
      else
      {
        NiPropertyByID = NiNode_GetNiPropertyByID(v13, 0);
        sub_4A1220((int **)v14, (int)NiPropertyByID);
      }
      NiAVObject_InitializePropertyState((NiAVObject *)v14);
      goto LABEL_25;
    }
  }
}
