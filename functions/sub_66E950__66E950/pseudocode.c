void __userpurge sub_66E950(TESObjectREFR *this@<ecx>, int a2@<ebx>, float a3)
{
  NiObjectNET *NiNode; // eax
  const void **p_vtbl; // esi
  NiObject *ExtraData; // eax
  NiObject *v7; // eax
  NiObject *v8; // eax
  unsigned int *v9; // eax
  int v10; // esi
  NiRTTI *v11; // eax
  char v12; // al
  NiNode *v13; // eax
  NiNode *v14; // esi
  NiProperty *NiPropertyByID; // eax
  NiAlphaProperty *v16; // eax
  BSShaderProperty *v17; // eax

  NiNode = (NiObjectNET *)TESObjectREFR::GetNiNode(this); /*0x66e975*/
  p_vtbl = (const void **)&NiNode->vtbl; /*0x66e97a*/
  if ( NiNode ) /*0x66e97e*/
  {
    if ( a3 < 1.0 ) /*0x66e992*/
    {
      ExtraData = (NiObject *)NiObjectNET_GetExtraData(NiNode, off_A3FA90); /*0x66e99b*/
      v7 = NiRTTI_Cast((BSStringT *)&MEMORY[0xB33E90][0x1404], ExtraData); /*0x66e9a6*/
      if ( v7 ) /*0x66e9b0*/
      {
        *(float *)&v7[1].members.m_uiRefCount = a3; /*0x66e9b6*/
      }
      else
      {
        v8 = (NiObject *)FormHeapAlloc(0x10u); /*0x66e9bd*/
        if ( v8 ) /*0x66e9d3*/
          v9 = (unsigned int *)sub_5E1570(v8, a3); /*0x66e9df*/
        else
          v9 = 0; /*0x66e9e6*/
        NiObjectNET_AddExtraData(p_vtbl, a2, v9); /*0x66e9f3*/
      }
    }
    else
    {
      sub_6FFAC0(NiNode, off_A3FA90); /*0x66e994*/
    }
  }
  v10 = *((_DWORD *)this + 0x174); /*0x66e9f8*/
  if ( v10 )
  {
    v11 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10 + 4))(*((_DWORD *)this + 0x174)); /*0x66ea0d*/
    if ( v11 ) /*0x66ea11*/
    {
      while ( v11 != &parent ) /*0x66ea18*/
      {
        v11 = v11->parent; /*0x66ea1a*/
        if ( !v11 ) /*0x66ea1f*/
          goto LABEL_14; /*0x66ea1f*/
      }
      v12 = 1; /*0x66ea51*/
    }
    else
    {
LABEL_14:
      v12 = 0; /*0x66ea21*/
    }
    v13 = v12 != 0 ? (NiNode *)v10 : 0;
    v14 = v13; /*0x66ea29*/
    if ( v13 ) /*0x66ea2b*/
    {
      if ( a3 < 1.0 ) /*0x66ea40*/
      {
        if ( NiNode_GetNiPropertyByID(v13, 0) ) /*0x66ea55*/
        {
LABEL_25:
          sub_4A2A90((int)v14, a3); /*0x66ea9f*/
          return; /*0x66eaa8*/
        }
        v16 = (NiAlphaProperty *)FormHeapAlloc(0x1Cu); /*0x66ea60*/
        if ( v16 ) /*0x66ea76*/
          v17 = (BSShaderProperty *)NiAlphaProperty_ctor(v16); /*0x66ea7a*/
        else
          v17 = 0; /*0x66ea81*/
        v17->member.super.flags |= 1u; /*0x66ea83*/
        sub_405680(v14, v17); /*0x66ea93*/
      }
      else
      {
        NiPropertyByID = NiNode_GetNiPropertyByID(v13, 0); /*0x66ea42*/
        sub_4A1220((int ***)v14, (int)NiPropertyByID); /*0x66ea4a*/
      }
      NiAVObject_InitializePropertyState((NiAVObject *)v14); /*0x66ea9a*/
      goto LABEL_25; /*0x66ea9a*/
    }
  }
}
