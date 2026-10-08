char __thiscall sub_52D2C0(int this, Ni2DBuffer **a2, Ni2DBuffer **a3, TESNPC *a4, int a5)
{
  Ni2DBuffer *v8; // esi
  bool v9; // zf
  Ni2DBuffer *v10; // eax
  Ni2DBuffer *v11; // esi
  Ni2DBuffer *v12; // edi
  unsigned int v13; // esi
  int IsFemale; // eax
  int v15; // esi
  int v16; // edx
  unsigned __int16 v17; // cx
  unsigned int v18; // eax
  const char *v19; // eax
  char *m_data; // esi
  void (__thiscall ***v21)(_DWORD, int); // edi
  char v22; // cl
  TESModel *v23; // ecx
  TESModel *v24; // esi
  Ni2DBuffer *v25; // eax
  Ni2DBuffer **v26; // edi
  const char *v27; // eax
  char *v28; // eax
  char *v29; // edi
  int v30; // esi
  Ni2DBuffer **v31; // esi
  const char *v33; // [esp+0h] [ebp-1B8h]
  Ni2DBuffer *v34; // [esp+4h] [ebp-1B4h]
  unsigned int v35; // [esp+4h] [ebp-1B4h]
  BSStringT v36; // [esp+1Ch] [ebp-19Ch] BYREF
  int v37; // [esp+24h] [ebp-194h] BYREF
  int v38; // [esp+28h] [ebp-190h] BYREF
  int v39; // [esp+2Ch] [ebp-18Ch] BYREF
  unsigned int v40; // [esp+30h] [ebp-188h]
  BSStringT ArgList; // [esp+34h] [ebp-184h] BYREF
  TESNPC *v42; // [esp+3Ch] [ebp-17Ch]
  Ni2DBuffer **v43; // [esp+40h] [ebp-178h]
  int v44; // [esp+44h] [ebp-174h] BYREF
  FaceGenHeadParameters a1; // [esp+48h] [ebp-170h] BYREF
  char v46[256]; // [esp+A8h] [ebp-110h] BYREF
  int v47; // [esp+1B4h] [ebp-4h]

  v44 = this; /*0x52d309*/
  v42 = a4; /*0x52d314*/
  v43 = a3; /*0x52d324*/
  if ( a5 == 0xF ) /*0x52d32b*/
  {
    v40 = 4; /*0x52d332*/
  }
  else if ( (unsigned int)(a5 - 2) > 4 ) /*0x52d33a*/
  {
    v40 = 0xFFFFFFFF; /*0x52d347*/
  }
  else
  {
    v40 = a5 - 2; /*0x52d341*/
  }
  v38 = 0; /*0x52d34f*/
  v47 = 2; /*0x52d353*/
  v37 = 0; /*0x52d35a*/
  v39 = 0; /*0x52d35e*/
  ArrayConstructor( /*0x52d37d*/
    (char *)&a1,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  ArgList.m_data = 0; /*0x52d382*/
  *(_DWORD *)&ArgList.m_dataLen = 0; /*0x52d386*/
  v36.m_data = 0; /*0x52d390*/
  *(_DWORD *)&v36.m_dataLen = 0; /*0x52d394*/
  v8 = *a2; /*0x52d39e*/
  v9 = *a2 == 0; /*0x52d3a1*/
  LOBYTE(v47) = 5; /*0x52d3a3*/
  if ( !v9 ) /*0x52d3ab*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v8->members) ) /*0x52d3b1*/
    {
      if ( v8 ) /*0x52d3bd*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v8->__vftable)(v8, 1); /*0x52d3c7*/
    }
    *a2 = 0; /*0x52d3c9*/
  }
  v10 = (Ni2DBuffer *)sub_523D80(); /*0x52d3cc*/
  v11 = *v43; /*0x52d3d5*/
  v12 = v10; /*0x52d3d7*/
  if ( *v43 != v10 ) /*0x52d3db*/
  {
    if ( v11 ) /*0x52d3df*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v11->members) ) /*0x52d3e5*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v11->__vftable)(v11, 1); /*0x52d3fb*/
    }
    *v43 = v12; /*0x52d403*/
    if ( v12 ) /*0x52d405*/
      InterlockedIncrement((volatile LONG *)&v12->members); /*0x52d40b*/
  }
  v13 = v40; /*0x52d411*/
  if ( v40 > 4
    || (!v42 ? (v40 = 0, IsFemale = 0) : (IsFemale = TESActorBase_IsFemale(v42), v40 = IsFemale),
        (v15 = IsFemale + v13 + 4 * IsFemale, v16 = 3 * v15 + 0x8A, v17 = *(_WORD *)(v44 + 4 * v16 + 4), v17 != 0xFFFF)
      ? (v18 = v17)
      : (v18 = strlen(*(const char **)(v44 + 4 * v16))),
        !v18) )
  {
    FormHeapFree((unsigned int)v36.m_data); /*0x52d797*/
    v36.m_data = 0; /*0x52d79d*/
    *(_DWORD *)&v36.m_dataLen = 0; /*0x52d7a6*/
    FormHeapFree(0); /*0x52d7ab*/
    LOBYTE(v47) = 2; /*0x52d7c1*/
    _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x52d7c9*/
    return 0; /*0x52d7c9*/
  }
  v19 = *(const char **)(v44 + 0xC * v15 + 0x228); /*0x52d4b2*/
  if ( !v19 ) /*0x52d4b7*/
    v19 = EmptyString; /*0x52d4b9*/
  BSStringT_Static_Format(&ArgList, "Textures\\%s", v19); /*0x52d4c9*/
  m_data = ArgList.m_data; /*0x52d4ce*/
  v34 = (Ni2DBuffer *)*OB_TES_LoadOrFindSourceTexture_010201A0((UInt32 *)&v44, ArgList.m_data, 0, 0); /*0x52d4ea*/
  LOBYTE(v47) = 6; /*0x52d4ed*/
  NiSmartPointer_Set__(a2, v34); /*0x52d4f5*/
  LOBYTE(v47) = 5; /*0x52d500*/
  if ( v44 ) /*0x52d508*/
  {
    v21 = (void (__thiscall ***)(_DWORD, int))v44; /*0x52d50a*/
    if ( !InterlockedDecrement((volatile LONG *)(v44 + 4)) ) /*0x52d510*/
      (**v21)(v21, 1); /*0x52d526*/
  }
  if ( *a2 )
  {
    if ( byte_B10D3C )
    {
      v22 = unk_B3630C; /*0x52d5ba*/
      if ( a5 == 2 )
      {
        if ( v40 == 1 )
        {
          v33 = "%08XModUpperBodyFemale"; /*0x52d5e5*/
          v23 = v22 != 0 ? &unk_B364B8 : 0;
        }
        else
        {
          v33 = "%08XModUpperBodyMale"; /*0x52d5f6*/
          v23 = v22 != 0 ? &unk_B364A0 : 0;
        }
      }
      else
      {
        v33 = "%08XModBody"; /*0x52d5cd*/
        v23 = v22 != 0 ? &unk_B364D0 : 0;
      }
      v24 = v23; /*0x52d60b*/
      _sprintf(v46, v33, v42->member.super.super.super.refID); /*0x52d60d*/
      if ( !v24 ) /*0x52d617*/
        goto LABEL_40; /*0x52d617*/
      v25 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, char *, _DWORD))(*(_DWORD *)unk_B35300 + 4))( /*0x52d662*/
                            unk_B35300,
                            v46,
                            0);
      v26 = v43; /*0x52d664*/
      NiSmartPointer_Set__(v43, v25); /*0x52d66b*/
      if ( !*v26 )
      {
        v27 = v24->vtbl->GetModelPath(v24); /*0x52d67f*/
        BSStringT_Static_Format(&ArgList, "Meshes\\%s", v27); /*0x52d68c*/
        v28 = sub_5500C0(&v36, ArgList.m_data); /*0x52d6a1*/
        v29 = (char *)sub_553620(0, 0, 0, v28, 1, 0); /*0x52d6b2*/
        if ( !v29 ) /*0x52d6b9*/
          goto LABEL_40; /*0x52d6b9*/
        TESNPC_BuildAbsoluteFaceGenParameters(v42, &a1); /*0x52d6c8*/
        v30 = 0; /*0x52d6cd*/
        if ( GetOpenedMenuCode() == 0x40C )
          v30 = a5 != 2 ? 5 : 0xA;
        v35 = v30; /*0x52d6ea*/
        v31 = v43; /*0x52d6eb*/
        BSFaceGenModel_GenerateMorphTexture(v29, (int)&a1, (int *)v43, v35);// Generate a body-part EGT morph texture. Character creation deliberately requests only 5 or 10 bases here; other body paths use the 30-basis zero default. /*0x52d6f7*/
        if ( !*v31 ) /*0x52d6fc*/
        {
LABEL_40:
          LOBYTE(v47) = 4; /*0x52d619*/
          BSStringT_Clear((unsigned int *)&v36); /*0x52d625*/
          LOBYTE(v47) = 3; /*0x52d62e*/
          BSStringT_Clear((unsigned int *)&ArgList); /*0x52d636*/
          goto LABEL_32; /*0x52d649*/
        }
        (*(void (__thiscall **)(UInt32, char *, Ni2DBuffer *))(*(_DWORD *)unk_B35300 + 8))(unk_B35300, v46, *v31); /*0x52d71a*/
      }
    }
    LOBYTE(v47) = 4; /*0x52d720*/
    BSStringT_Clear((unsigned int *)&v36); /*0x52d728*/
    LOBYTE(v47) = 3; /*0x52d731*/
    BSStringT_Clear((unsigned int *)&ArgList); /*0x52d739*/
    LOBYTE(v47) = 2; /*0x52d74c*/
    _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x52d754*/
    LOBYTE(v47) = 1; /*0x52d75d*/
    NiPointerSlot_Release((NiD3DVertexShader *)&v39); /*0x52d765*/
    LOBYTE(v47) = 0; /*0x52d76e*/
    NiPointerSlot_Release((NiD3DVertexShader *)&v37); /*0x52d775*/
    v47 = 0xFFFFFFFF; /*0x52d77e*/
    NiPointerSlot_Release((NiD3DVertexShader *)&v38); /*0x52d789*/
    return 1; /*0x52d790*/
  }
  FormHeapFree((unsigned int)v36.m_data); /*0x52d532*/
  v36.m_data = 0; /*0x52d538*/
  *(_DWORD *)&v36.m_dataLen = 0; /*0x52d541*/
  FormHeapFree((unsigned int)m_data); /*0x52d546*/
LABEL_32:
  LOBYTE(v47) = 2; /*0x52d55c*/
  _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x52d564*/
  LOBYTE(v47) = 1; /*0x52d56d*/
  NiPointerSlot_Release((NiD3DVertexShader *)&v39); /*0x52d575*/
  LOBYTE(v47) = 0; /*0x52d57e*/
  NiPointerSlot_Release((NiD3DVertexShader *)&v37); /*0x52d585*/
  v47 = 0xFFFFFFFF; /*0x52d58e*/
  NiPointerSlot_Release((NiD3DVertexShader *)&v38); /*0x52d599*/
  return 0; /*0x52d7d0*/
}
