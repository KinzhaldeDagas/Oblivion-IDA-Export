// positive sp value has been detected, the output may be wrong!
void __userpurge def_47AD87(const char *a1@<ebx>, int ***a2@<edi>, void *slot)
{
  TESNPC *v6; // esi
  const char *m_data; // ebx
  const char *v8; // edi
  int IsFemale; // eax
  NiTexturingProperty *v10; // esi
  NiProperty *NiPropertyByID; // ebp
  BOOL v12; // esi
  _DWORD *v13; // esi
  NiObject *v14; // eax
  const char *vftable; // ecx
  void (__thiscall **v16)(_DWORD *, int, int); // edi
  int v17; // eax
  NiTexturingProperty *v18; // eax
  LONG (__stdcall *v19)(volatile LONG *); // edi
  Ni2DBuffer *v20; // esi
  void (__thiscall ***v21)(_DWORD, int); // esi
  void *v22; // [esp-1A8h] [ebp-1A8h] BYREF
  NiSourceTexture *v23; // [esp-1A0h] [ebp-1A0h] BYREF
  NiObject *v24; // [esp-19Ch] [ebp-19Ch]
  int v25; // [esp-198h] [ebp-198h]
  NiTexture *v26; // [esp-194h] [ebp-194h] BYREF
  NiObject *v27; // [esp-190h] [ebp-190h] BYREF
  Ni2DBuffer *v28; // [esp-18Ch] [ebp-18Ch] BYREF
  TESNPC *v29; // [esp-188h] [ebp-188h]
  char v30; // [esp-174h] [ebp-174h] BYREF
  FaceGenHeadParameters v31[3]; // [esp-16Ch] [ebp-16Ch] BYREF
  char v32; // [esp-Ch] [ebp-Ch]
  unsigned int v33; // [esp-4h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  PrintError("Bad skin name '%s' on '%s'.", a1, (const char *)a2[7][2]); /*0x47adcd*/
  v6 = v29; /*0x47add5*/
  if ( v29 ) /*0x47addb*/
  {
    TESNPC_BuildAbsoluteFaceGenParameters(v29, v31); /*0x47ade4*/
    if ( !sub_52D2C0((int)v29->member.form.race, (Ni2DBuffer **)&v26, &v28, v29, v25) ) /*0x47adff*/
    {
      m_data = v6->member.form.race->name.name.m_data; /*0x47ae13*/
      if ( !m_data ) /*0x47ae15*/
        m_data = EmptyString; /*0x47ae17*/
      v8 = *(const char **)(4 * v25 + 0xB06588); /*0x47ae1c*/
      IsFemale = TESActorBase_IsFemale(v6); /*0x47ae25*/
      PrintError( /*0x47ae39*/
        "Missing '%s' race texture for '%s' in race '%s'.",
        *(const char **)(4 * IsFemale + 0xB10BC4),
        v8,
        m_data);
      goto LABEL_26; /*0x47ae41*/
    }
  }
  if ( v27 ) /*0x47ae4c*/
  {
    v10 = (NiTexturingProperty *)NiObject_CloneWithPointerMap(v27); /*0x47ae57*/
    OB_NiTexturingProperty_SetBaseTexture_010201A0(v10, v26); /*0x47ae5c*/
    sub_708560(a2, (volatile LONG **)&v27, 6); /*0x47ae6a*/
    NiPointerSlot_Release((void **)&v27); /*0x47ae73*/
LABEL_25:
    sub_405680((NiNode *)a2, (BSShaderProperty *)v10); /*0x47afca*/
    goto LABEL_26; /*0x47afcd*/
  }
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a2, 4); /*0x47ae86*/
  v12 = NiPropertyByID /*0x47aeaa*/
     && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
     && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
  v13 = v12 ? (_DWORD *)NiPropertyByID : 0;
  if ( !v13 ) /*0x47aeb9*/
  {
    v18 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x47af91*/
    v27 = (NiObject *)v18; /*0x47af99*/
    if ( v18 ) /*0x47afa7*/
      v10 = NiTexturingProperty::NiTexturingProperty(v18); /*0x47afb0*/
    else
      v10 = 0; /*0x47afb4*/
    OB_NiTexturingProperty_SetBaseTexture_010201A0(v10, v26); /*0x47afc5*/
    goto LABEL_25; /*0x47afc5*/
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD, NiTexture *))(*v13 + 0x80))(v13, 0, v26); /*0x47aed0*/
  v14 = NiRTTI_Cast((BSStringT *)&stru_B3F95C, v24); /*0x47aedc*/
  vftable = 0; /*0x47aee4*/
  if ( v14 ) /*0x47aee8*/
    vftable = (const char *)v14[7].__vftable; /*0x47aeea*/
  BuildTextureVariantPath((char *)&v31[0].matrices[3].end, vftable, "_n"); /*0x47aefb*/
  if ( LOBYTE(v31[0].matrices[3].end) ) /*0x47af0b*/
  {
    NiSourceTexture_LoadChecked(&v23, (const char *)&v31[0].matrices[3].end, 1, 1); /*0x47af1e*/
    LOBYTE(v33) = 3; /*0x47af2c*/
    if ( v23 ) /*0x47af34*/
      (*(void (__thiscall **)(_DWORD *, _DWORD, NiSourceTexture *))(*v13 + 0x84))(v13, 0, v23); /*0x47af43*/
    v32 = 2; /*0x47af49*/
    NiPointerSlot_Release(&v22); /*0x47af51*/
  }
  (*(void (__thiscall **)(_DWORD *, int, NiObject *))(*v13 + 0x80))(v13, 1, v24); /*0x47af67*/
  v16 = (void (__thiscall **)(_DWORD *, int, int))(*v13 + 0x84); /*0x47af6b*/
  v17 = sub_4783A0(); /*0x47af71*/
  (*v16)(v13, 1, v17); /*0x47af7d*/
  v13[7] |= 0x400u; /*0x47af7f*/
  v13[9] = 0; /*0x47af86*/
LABEL_26:
  v19 = InterlockedDecrement; /*0x47afd2*/
  if ( v28 ) /*0x47afe6*/
  {
    v20 = v28; /*0x47afe8*/
    if ( !v19((volatile LONG *)&v28->members) ) /*0x47afee*/
      (*(void (__thiscall **)(Ni2DBuffer *, int))v20->__vftable)(v20, 1); /*0x47b000*/
  }
  v21 = (void (__thiscall ***)(_DWORD, int))v25; /*0x47b002*/
  LOBYTE(retaddr) = 0; /*0x47b008*/
  if ( v25 ) /*0x47b010*/
  {
    if ( !v19((volatile LONG *)(v25 + 4)) ) /*0x47b016*/
    {
      if ( v21 ) /*0x47b01e*/
        (**v21)(v21, 1); /*0x47b028*/
    }
  }
  v33 = 0xFFFFFFFF; /*0x47b038*/
  _LN21(&v30, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x47b043*/
}
