void __thiscall sub_495E30(HWND *this, LPARAM a2, NiObject *a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  NiRTTI *(__thiscall *GetType)(NiObject *); // edx
  const char **v6; // eax
  HWND v7; // ecx
  LRESULT (__stdcall *v8)(HWND, UINT, WPARAM, LPARAM); // ebp
  LRESULT v9; // eax
  void (__thiscall *DumpAttributes)(NiObject *, void *); // edx
  void (__thiscall ***v11)(_DWORD, int); // ecx
  unsigned int v12; // edi
  int i; // eax
  int v14; // edx
  NiRTTI *v15; // eax
  char v16; // al
  NiObject *v17; // eax
  NiObjectVtbl *vftable; // eax
  UInt32 (__thiscall **p_Unk_05)(NiObject *); // eax
  UInt32 (__thiscall *v20)(NiObject *); // eax
  NiObject *v21; // eax
  NiRTTI *v22; // eax
  char v23; // al
  int *v24; // eax
  int *v25; // esi
  LONG (__stdcall *v26)(volatile LONG *); // ebp
  NodeVoid *j; // edi
  bool v28; // bl
  void (__thiscall ***v29)(void *, int); // esi
  void (__thiscall ***v30)(void *, int); // esi
  NiRTTI *v31; // eax
  char v32; // al
  NiObject *v33; // eax
  NiObject *v34; // edi
  NiObject *v35; // eax
  NiObjectVtbl *v36; // eax
  UInt32 (__thiscall *Unk_03)(NiObject *); // eax
  NiObject *v38; // eax
  NiObject *v39; // eax
  NiObject *v40; // ebp
  NiObjectVtbl *v41; // ecx
  unsigned int v42; // edi
  unsigned int k; // esi
  NiObjectVtbl *v44; // eax
  int v45; // eax
  NiObject *v46; // eax
  NiObject *v47; // eax
  NiObject *v48; // eax
  int v49; // eax
  HWND v50; // [esp-10h] [ebp-C0h]
  size_t v51; // [esp-4h] [ebp-B4h]
  NiObject *v52; // [esp-4h] [ebp-B4h]
  NiObject *v53; // [esp-4h] [ebp-B4h]
  void (__thiscall ***v55)(_DWORD, int); // [esp+18h] [ebp-98h]
  LPARAM v56; // [esp+1Ch] [ebp-94h]
  int v57; // [esp+20h] [ebp-90h]
  void *v58; // [esp+24h] [ebp-8Ch] BYREF
  void *outData; // [esp+28h] [ebp-88h] BYREF
  LPARAM lParam[6]; // [esp+2Ch] [ebp-84h] BYREF
  char *v61; // [esp+44h] [ebp-6Ch]
  int v62; // [esp+4Ch] [ebp-64h]
  int v63; // [esp+50h] [ebp-60h]
  NiObject *v64; // [esp+58h] [ebp-58h]
  char Dest[64]; // [esp+60h] [ebp-50h] BYREF
  int v66; // [esp+ACh] [ebp-4h]

  v57 = 0; /*0x495e81*/
  if ( a3 )
  {
    v3 = (_DWORD *)FormHeapAlloc(0x10u); /*0x495e8d*/
    v4 = v3; /*0x495e92*/
    v58 = v3; /*0x495e97*/
    v66 = 0; /*0x495e9d*/
    if ( v3 ) /*0x495ea4*/
    {
      *((_WORD *)v3 + 4) = 0x80; /*0x495ead*/
      *((_WORD *)v3 + 7) = 0x80; /*0x495eb1*/
      *v3 = &NiTArray<char *>::`vftable'; /*0x495ebf*/
      *((_WORD *)v3 + 5) = 0; /*0x495ec5*/
      *((_WORD *)v3 + 6) = 0; /*0x495ec9*/
      v3[1] = FormHeapAlloc(0x200u); /*0x495eda*/
      v55 = (void (__thiscall ***)(_DWORD, int))v4; /*0x495edd*/
    }
    else
    {
      v55 = 0; /*0x495ee3*/
    }
    GetType = a3->__vftable->GetType; /*0x495ee9*/
    v66 = 0xFFFFFFFF; /*0x495eee*/
    lParam[1] = 0xFFFF0002; /*0x495ef9*/
    lParam[2] = 0x27; /*0x495f01*/
    v64 = a3; /*0x495f09*/
    v6 = (const char **)GetType(a3); /*0x495f0d*/
    LODWORD(v51) = 0x3F; /*0x495f11*/
    strncpy(Dest, *v6, v51); /*0x495f19*/
    v61 = Dest; /*0x495f2f*/
    v7 = *(this + 3); /*0x495f33*/
    lParam[0] = a2; /*0x495f3b*/
    v8 = SendMessageA; /*0x495f3f*/
    Dest[0x3F] = 0; /*0x495f46*/
    v62 = 0; /*0x495f4e*/
    v63 = 0; /*0x495f52*/
    v9 = v8(v7, 0x1100u, 0, (LPARAM)lParam); /*0x495f56*/
    DumpAttributes = a3->__vftable->DumpAttributes; /*0x495f5a*/
    lParam[0] = v9; /*0x495f5d*/
    v56 = v9; /*0x495f61*/
    DumpAttributes(a3, v55); /*0x495f6c*/
    v11 = v55; /*0x495f6e*/
    v12 = 0; /*0x495f72*/
    if ( *((_WORD *)v55 + 5) ) /*0x495f74*/
    {
      do /*0x495fb9*/
      {
        v61 = (char *)v55[1][v12]; /*0x495f95*/
        v50 = *(this + 3); /*0x495fa1*/
        v62 = 6; /*0x495fa2*/
        v63 = 6; /*0x495fa6*/
        v8(v50, 0x1100u, 0, (LPARAM)lParam); /*0x495faa*/
        ++v12; /*0x495fb4*/
      }
      while ( v12 < *((unsigned __int16 *)v55 + 5) ); /*0x495fb9*/
      v11 = v55; /*0x495fbd*/
    }
    for ( i = 0; (unsigned __int16)i < *((_WORD *)v11 + 5); v11[1][v14] = 0 ) /*0x495fc1*/
      v14 = (unsigned __int16)i++; /*0x495fca*/
    *((_WORD *)v11 + 5) = 0; /*0x495fd9*/
    *((_WORD *)v11 + 6) = 0; /*0x495fdd*/
    v15 = a3->__vftable->GetType(a3); /*0x495fe8*/
    if ( v15 ) /*0x495fec*/
    {
      while ( v15 != &stru_BA7D38 ) /*0x495ff5*/
      {
        v15 = v15->parent; /*0x495ff7*/
        if ( !v15 ) /*0x495ffc*/
          goto LABEL_13; /*0x495ffc*/
      }
      v16 = 1; /*0x496025*/
    }
    else
    {
LABEL_13:
      v16 = 0; /*0x495ffe*/
    }
    v17 = v16 != 0 ? a3 : 0;
    if ( v17 )
    {
      vftable = v17[1].__vftable; /*0x49600c*/
      if ( vftable && (p_Unk_05 = &vftable->Unk_05) != 0 && (v20 = *p_Unk_05) != 0 ) /*0x49601e*/
        v21 = *((NiObject **)v20 + 2); /*0x496020*/
      else
        v21 = 0; /*0x496029*/
      sub_495E30(this, v56, v21); /*0x496035*/
      v22 = a3->__vftable->GetType(a3); /*0x496041*/
      if ( v22 ) /*0x496045*/
      {
        while ( v22 != &stru_BA7D84 ) /*0x49604c*/
        {
          v22 = v22->parent; /*0x49604e*/
          if ( !v22 ) /*0x496053*/
            goto LABEL_24; /*0x496053*/
        }
        v23 = 1; /*0x49609d*/
      }
      else
      {
LABEL_24:
        v23 = 0; /*0x496055*/
      }
      v24 = v23 != 0 ? (int *)a3 : 0;
      v25 = v24; /*0x49605d*/
      if ( v24 ) /*0x49605f*/
      {
        if ( sub_8A4740(v24) ) /*0x496067*/
        {
          v26 = InterlockedDecrement; /*0x496074*/
          for ( j = (NodeVoid *)(v25 + 4); ; j = j->next ) /*0x49607a*/
          {
            v28 = 0; /*0x496099*/
            if ( j ) /*0x496082*/
            {
              v57 |= 1u; /*0x496090*/
              if ( *NodeVoid_GetDataAddRef(j, &outData) ) /*0x496095*/
                v28 = 1; /*0x496082*/
            }
            if ( (v57 & 1) != 0 ) /*0x4960a8*/
            {
              v29 = (void (__thiscall ***)(void *, int))outData; /*0x4960aa*/
              v57 &= ~1u; /*0x4960ae*/
              if ( outData ) /*0x4960b5*/
              {
                if ( !v26((volatile LONG *)outData + 1) ) /*0x4960bb*/
                {
                  if ( v29 ) /*0x4960c3*/
                    (**v29)(v29, 1); /*0x4960cd*/
                }
              }
            }
            if ( !v28 ) /*0x4960d1*/
              break; /*0x4960d1*/
            v52 = (NiObject *)*NodeVoid_GetDataAddRef(j, &v58); /*0x4960e9*/
            v66 = 1; /*0x4960ef*/
            sub_495E30(this, v56, v52); /*0x4960fa*/
            v66 = 0xFFFFFFFF; /*0x496105*/
            if ( v58 ) /*0x496110*/
            {
              v30 = (void (__thiscall ***)(void *, int))v58; /*0x496112*/
              if ( !v26((volatile LONG *)v58 + 1) ) /*0x496118*/
                (**v30)(v30, 1); /*0x49612a*/
            }
          }
        }
      }
      goto LABEL_70; /*0x4960d1*/
    }
    v31 = a3->__vftable->GetType(a3); /*0x49613d*/
    if ( v31 ) /*0x496141*/
    {
      while ( v31 != &stru_BA7D78 ) /*0x496148*/
      {
        v31 = v31->parent; /*0x49614a*/
        if ( !v31 ) /*0x49614f*/
          goto LABEL_46; /*0x49614f*/
      }
      v32 = 1; /*0x496191*/
    }
    else
    {
LABEL_46:
      v32 = 0; /*0x496151*/
    }
    v33 = v32 != 0 ? a3 : 0;
    v34 = v33; /*0x496159*/
    if ( v33 ) /*0x49615b*/
    {
      v35 = NiRTTI_Cast((BSStringT *)&stru_BA7D68, v33); /*0x496167*/
      if ( !v35 ) /*0x496171*/
      {
        v39 = NiRTTI_Cast((BSStringT *)&stru_BA7D5C, v34); /*0x49619b*/
        v40 = v39; /*0x4961a0*/
        if ( v39 ) /*0x4961a7*/
        {
          v41 = v39[1].__vftable; /*0x4961ad*/
          if ( v41 ) /*0x4961b2*/
          {
            v42 = (*((int (__thiscall **)(NiObjectVtbl *))v41->super.Destructor + 7))(v41); /*0x4961bf*/
            if ( v42 ) /*0x4961c3*/
            {
              for ( k = 0; k < v42; ++k ) /*0x4961c9*/
              {
                v44 = v40[1].__vftable; /*0x4961d3*/
                if ( v44 && (v45 = *((_DWORD *)v44->Unk_04 + 2 * k)) != 0 ) /*0x4961e2*/
                  v46 = *(NiObject **)(v45 + 8); /*0x4961e4*/
                else
                  v46 = 0; /*0x4961e9*/
                sub_495E30(this, v56, v46); /*0x4961f5*/
              }
            }
          }
        }
        goto LABEL_70; /*0x4961ff*/
      }
      v36 = v35[1].__vftable; /*0x496173*/
      if ( v36 ) /*0x496178*/
      {
        Unk_03 = v36->Unk_03; /*0x49617e*/
        if ( Unk_03 ) /*0x496183*/
        {
          v38 = *((NiObject **)Unk_03 + 2); /*0x496189*/
LABEL_69:
          sub_495E30(this, v56, v38); /*0x49624f*/
          goto LABEL_70; /*0x496259*/
        }
      }
      goto LABEL_68; /*0x496183*/
    }
    v47 = NiRTTI_Cast((BSStringT *)&stru_BA7D44, a3); /*0x496209*/
    if ( v47 ) /*0x496213*/
    {
      v53 = (NiObject *)sub_89FE90(v47, 0x42); /*0x49621e*/
      sub_495E30(this, v56, v53); /*0x496224*/
    }
    else
    {
      v48 = NiRTTI_Cast((BSStringT *)&MEMORY[0xBA7D50], a3); /*0x49622c*/
      if ( v48 ) /*0x496236*/
      {
        v49 = ((int (__thiscall *)(NiObject *))v48->__vftable[1].Unk_10)(v48); /*0x496242*/
        if ( v49 ) /*0x496246*/
        {
          v38 = *(NiObject **)(v49 + 0xC); /*0x496248*/
          goto LABEL_69; /*0x49624b*/
        }
LABEL_68:
        v38 = 0; /*0x49624d*/
        goto LABEL_69; /*0x49624d*/
      }
    }
LABEL_70:
    (**v55)(v55, 1); /*0x49625e*/
  }
}
