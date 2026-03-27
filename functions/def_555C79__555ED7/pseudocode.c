// positive sp value has been detected, the output may be wrong!
char __usercall def_555C79@<al>(
        Ni2DBuffer *a1@<ebx>,
        Ni2DBuffer *a2@<ebp>,
        int a3@<edi>,
        int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        NiNode *a8,
        _DWORD *a9,
        int a10,
        char a11)
{
  char *m_data; // esi
  const char *v12; // eax
  int *v13; // eax
  NiRenderedTexture *v14; // edi
  NiTexturingProperty *v15; // eax
  NiTexturingProperty *v16; // esi
  NiNode *v17; // esi
  BSShaderProperty *v18; // eax
  NiObjectNET *NiPropertyByID; // eax
  NiMaterialProperty *v20; // eax
  NiObjectNET *v21; // esi
  NiObjectNET *v22; // eax
  Ni2DBuffer *v23; // esi
  NiObjectNET *v24; // esi
  Ni2DBuffer *v26; // [esp-6Ch] [ebp-80h] BYREF
  Ni2DBuffer *v27; // [esp-68h] [ebp-7Ch]
  NiObjectNET *v28; // [esp-64h] [ebp-78h] BYREF
  Ni2DBuffer *v29; // [esp-60h] [ebp-74h] BYREF
  char *v30; // [esp-5Ch] [ebp-70h]
  int v31[3]; // [esp-58h] [ebp-6Ch] BYREF
  UInt32 v32; // [esp-4Ch] [ebp-60h] BYREF
  volatile LONG *v33; // [esp-48h] [ebp-5Ch] BYREF
  volatile LONG *v34; // [esp-44h] [ebp-58h] BYREF
  void *v35; // [esp-40h] [ebp-54h]
  BSStringT v36; // [esp-3Ch] [ebp-50h] BYREF
  unsigned int v37; // [esp-34h] [ebp-48h]
  unsigned int v38; // [esp-2Ch] [ebp-40h]
  unsigned int v39; // [esp-24h] [ebp-38h]
  _BYTE v40[32]; // [esp-Ch] [ebp-20h] BYREF
  unsigned int retaddr; // [esp+14h] [ebp+0h]

  m_data = v36.m_data;
  if ( v30 != (char *)a1 && sub_559870(v30, a3, (int *)&v28) && v28 != (NiObjectNET *)a1 )
  {
    NiObjectNET_SetName(v28, *(char **)(*(_DWORD *)(a3 + 0x98) + 4 * (_DWORD)a2));
    if ( a2 == a1 )
    {
      v31[1] = (int)v28;
    }
    else if ( a2 == (Ni2DBuffer *)1 || a2 == (Ni2DBuffer *)2 )
    {
      v31[2] = (int)v28;
    }
    v12 = *(const char **)(*(_DWORD *)(*(_DWORD *)(a3 + 0x88) + 4 * (_DWORD)a2) + 4);
    if ( v12 == (const char *)a1 )
      v12 = EmptyString;
    BSStringT_Static_Format(&v36, "Textures\\%s", v12);
    m_data = v36.m_data;
    v13 = (int *)sub_442890(&v32, v36.m_data, (char)a1, (char)a1);
    sub_55E2A0(v31, v13);
    LOBYTE(a6) = 7;
    sub_7016A0((NiD3DVertexShader *)&v32);
    v14 = (NiRenderedTexture *)v31[0];
    if ( (Ni2DBuffer *)v31[0] != a1 )
    {
      v15 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
      v35 = v15;
      if ( v15 == (NiTexturingProperty *)a1 )
        v16 = 0;
      else
        v16 = NiTexturingProperty::NiTexturingProperty(v15);
      LOBYTE(a6) = 7;
      NiTexturingProperty::SetUnk08(v16, v14);
      if ( NiNode_GetNiPropertyByID((NiNode *)v28, 6) )
      {
        sub_708560(v28, &v33, 6);
        sub_7016A0((NiD3DVertexShader *)&v33);
      }
      sub_405680((NiNode *)v28, (BSShaderProperty *)v16);
      m_data = v36.m_data;
      a2 = v29;
    }
    if ( a2 == (Ni2DBuffer *)5 || a2 == (Ni2DBuffer *)4 )
    {
      if ( NiNode_GetNiPropertyByID((NiNode *)v28, (signed int)a1) )
      {
        sub_708560(v28, &v34, (signed int)a1);
        sub_7016A0((NiD3DVertexShader *)&v34);
      }
      v17 = (NiNode *)v28;
      v18 = (BSShaderProperty *)sub_550550();
      sub_405680(v17, v18);
      m_data = v36.m_data;
      a2 = v29;
    }
    if ( a2 == a1 || a2 == (Ni2DBuffer *)1 || a2 == (Ni2DBuffer *)2 )
    {
      NiPropertyByID = (NiObjectNET *)NiNode_GetNiPropertyByID((NiNode *)v28, 2);
      if ( NiPropertyByID == (NiObjectNET *)a1 )
      {
        v20 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
        v35 = v20;
        if ( v20 == (NiMaterialProperty *)a1 )
          v21 = 0;
        else
          v21 = (NiObjectNET *)NiMaterialProperty::NiMaterialProperty(v20);
        LOBYTE(a6) = 7;
        NiObjectNET_SetName(v21, "skin");
        sub_405680((NiNode *)v28, (BSShaderProperty *)v21);
        m_data = v36.m_data;
        a2 = v29;
      }
      else
      {
        NiObjectNET_SetName(NiPropertyByID, "skin");
      }
    }
    if ( (Ni2DBuffer *)v28[7].members.m_extraDataList == a1 )
    {
      qmemcpy(&v28[2], v40, 0x24u);
      (*((void (__thiscall **)(NiNodeVtbl *, NiObjectNET *))a8->vtbl->super.super.super.Destructor + 0x21))(
        a8->vtbl,
        v28);
    }
    else
    {
      if ( a11 == (_BYTE)a1 )
      {
        (*(void (__thiscall **)(_DWORD, NiObjectNET *))(*(_DWORD *)*a9 + 0x84))(*a9, v28);
LABEL_38:
        v28 = (NiObjectNET *)a1;
        NiSmartPointer_Set__(&v29, a1);
        NiSmartPointer_Set__(&v26, a1);
        goto LABEL_39;
      }
      sub_478350(v28, (int)a1);
      v22 = v28;
      *(float *)&v28[3].members.m_controller = Vector3_InitValue_;
      v22 = (NiObjectNET *)((char *)v22 + 0x54);
      v22->members.super.m_uiRefCount = *(UInt32 *)(&Vector3_InitValue_ + 1);
      *(float *)&v22->members.m_pcName = dword_B3F9B0;
      qmemcpy(&v28[2], v40, 0x24u);
      (*((void (__thiscall **)(NiNodeVtbl *, NiObjectNET *, Ni2DBuffer *))a8->vtbl->super.super.super.Destructor + 0x21))(
        a8->vtbl,
        v28,
        a1);
    }
    m_data = (char *)v34;
    a2 = v27;
    goto LABEL_38;
  }
LABEL_39:
  v27 = (Ni2DBuffer *)((char *)&a2->__vftable + 1);
  if ( (unsigned int)&a2->__vftable + 1 < 9 )
    JUMPOUT(0x555B40);
  if ( bFixFaceNormals != (_BYTE)a1 && v30 != (char *)a1 && (Ni2DBuffer *)v31[0] != a1 )
    NiTMap<unsigned int,VertexDist>::NiTMap<unsigned int,VertexDist>((int)v30, v31[0], flt_A2FAAC, (int)a1, (char)a1);
  if ( (Ni2DBuffer *)LODWORD(a8->members.super.m_localTransform.scale) != a1 )
    sub_554260(a6, a7, (NiTexturingProperty *)a8, (char)a9);
  if ( *(Ni2DBuffer **)&a8->members.children.numObjs != a1 && (Ni2DBuffer *)a8->members.effects.vtlb != a1 )
    sub_5547F0(a6, a7, (NiTexturingProperty *)a8, (char)a9);
  FormHeapFree(v38);
  FormHeapFree((unsigned int)a1);
  FormHeapFree(v39);
  FormHeapFree((unsigned int)v36.m_data);
  FormHeapFree(v37);
  FormHeapFree((unsigned int)m_data);
  if ( v26 != a1 )
  {
    v23 = v26;
    if ( !InterlockedDecrement((volatile LONG *)&v26->members) && v23 != a1 )
      (*(void (__thiscall **)(Ni2DBuffer *, int))v23->__vftable)(v23, 1);
  }
  v24 = v28;
  retaddr = 0xFFFFFFFF;
  if ( v28 != (NiObjectNET *)a1 && !InterlockedDecrement((volatile LONG *)&v28->members) )
    (*(void (__cdecl **)(int))v24->vtbl)(1);
  return 1;
}
