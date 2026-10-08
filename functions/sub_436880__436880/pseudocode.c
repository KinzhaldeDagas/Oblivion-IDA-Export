char __thiscall sub_436880(volatile LONG *this, const char *a2, char *a3, char a4)
{
  char *v4; // edi
  volatile LONG *v5; // ebp
  int v6; // eax
  const char *v7; // ecx
  _BYTE *v8; // edx
  int v9; // eax
  Ni2DBuffer **v10; // ecx
  Ni2DBuffer *v11; // esi
  char v12; // bl
  char *width; // eax
  volatile LONG *v14; // eax
  NiNode *v15; // eax
  int v16; // esi
  int v17; // ebp
  bool v18; // zf
  int v19; // edi
  Ni2DBuffer **v20; // esi
  NiNode *v21; // eax
  NiNode *v22; // eax
  volatile LONG *v23; // esi
  bool v24; // cf
  const char *v25; // esi
  unsigned int v26; // eax
  char *v27; // edi
  volatile LONG *v29; // edi
  char v30; // dl
  char v31; // bl
  NiProperty *NiPropertyByID; // eax
  volatile LONG *v33; // esi
  NiProperty *v34; // eax
  volatile LONG *v35; // esi
  char v37; // [esp+17h] [ebp-12Dh]
  volatile LONG *v38; // [esp+18h] [ebp-12Ch] BYREF
  volatile LONG *v39; // [esp+1Ch] [ebp-128h] BYREF
  int v40; // [esp+20h] [ebp-124h] BYREF
  char ArgList[4]; // [esp+24h] [ebp-120h]
  char *v42; // [esp+28h] [ebp-11Ch]
  NiNode *v43; // [esp+2Ch] [ebp-118h] BYREF
  char Src[260]; // [esp+30h] [ebp-114h] BYREF
  int v45; // [esp+140h] [ebp-4h]

  v4 = a3; /*0x4368c2*/
  v5 = this; /*0x4368c9*/
  v38 = this; /*0x4368cd*/
  *(_DWORD *)ArgList = a2; /*0x4368d1*/
  v42 = a3; /*0x4368d5*/
  *((_DWORD *)this + 1) = 0; /*0x4368d9*/
  v6 = FormHeapAlloc(strlen(a2) + 1); /*0x4368f2*/
  *v5 = v6; /*0x4368fa*/
  v7 = a2; /*0x4368fd*/
  v8 = (_BYTE *)v6; /*0x4368ff*/
  do /*0x43690d*/
  {
    LOBYTE(v9) = *v7; /*0x436901*/
    *v8++ = *v7++; /*0x436903*/
  }
  while ( (_BYTE)v9 ); /*0x43690d*/
  if ( !*((_DWORD *)a3 + 0x84) )
  {
    PrintError("Model Load Error: %s in %s.\r\nWill use the default object Marker_Error.NIF.\r\n", a3 + 0x384, a2);
    sub_6F9E60(a3); /*0x43692f*/
    LOBYTE(v9) = (*(int (__thiscall **)(char *, const char *, _DWORD))(*(_DWORD *)a3 + 0x54))( /*0x436942*/
                   a3,
                   "Meshes\\Marker_Error.NIF",
                   0);
    if ( !(_BYTE)v9 ) /*0x436946*/
    {
      *v5 = 0; /*0x436948*/
      return v9; /*0x43694f*/
    }
  }
  v10 = *((Ni2DBuffer ***)a3 + 0x82); /*0x436954*/
  v11 = *v10; /*0x43695a*/
  v12 = 0; /*0x43695c*/
  if ( *v10 )
  {
    v9 = (*((int (__thiscall **)(Ni2DBuffer *))v11->__vftable + 2))(*v10); /*0x43696d*/
    if ( v9 )
    {
      width = (char *)v11->members.width; /*0x436977*/
      if ( !width || !sub_6FA6F0(width, "Bip[0-9][0-9]") )
      {
        NiSmartPointer_Set__((Ni2DBuffer **)v5 + 2, v11); /*0x4369f9*/
LABEL_33:
        sub_4809A0(*((NiObjectNET **)v5 + 2)); /*0x436b02*/
        strcpy(Src, "BASE "); /*0x436b23*/
        v25 = *(const char **)ArgList; /*0x436b27*/
        v26 = strlen(*(const char **)ArgList) + 1; /*0x436b37*/
        v27 = (char *)&v43 + 3; /*0x436b3f*/
        while ( *++v27 ) /*0x436b4a*/
          ; /*0x436b42*/
        qmemcpy(v27, *(const void **)ArgList, 4 * (v26 >> 2)); /*0x436b51*/
        qmemcpy(&v27[4 * (v26 >> 2)], &v25[4 * (v26 >> 2)], v26 & 3); /*0x436b58*/
        v29 = v38; /*0x436b5a*/
        NiObjectNET_SetName(*((NiObjectNET **)v38 + 2), Src); /*0x436b66*/
        v30 = bDisableWarning_MESSAGES; /*0x436b6b*/
        bDisableWarning_MESSAGES = 1; /*0x436b71*/
        v37 = v30; /*0x436b7d*/
        v31 = 0; /*0x436b81*/
        NiPropertyByID = NiNode_GetNiPropertyByID(*((NiNode **)v38 + 2), 9); /*0x436b83*/
        if ( NiPropertyByID ) /*0x436b8a*/
        {
          if ( LOWORD(NiPropertyByID[1].vtbl) == *(_WORD *)(unk_B3F998 + 0x18) ) /*0x436b9a*/
          {
            sub_708560(*((int ***)v38 + 2), &v39, 9); /*0x436ba6*/
            if ( v39 ) /*0x436bb1*/
            {
              v33 = v39; /*0x436bb3*/
              if ( !InterlockedDecrement(v39 + 1) ) /*0x436bb9*/
                (**(void (__thiscall ***)(volatile LONG *, int))v33)(v33, 1); /*0x436bcf*/
            }
            v31 = 1; /*0x436bd1*/
          }
        }
        v34 = NiNode_GetNiPropertyByID(*((NiNode **)v38 + 2), 7); /*0x436bd8*/
        if ( v34 && LOWORD(v34[1].vtbl) == *(_WORD *)(unk_B3F980 + 0x18) ) /*0x436bef*/
        {
          sub_708560(*((int ***)v38 + 2), &v38, 7); /*0x436bfb*/
          if ( v38 ) /*0x436c06*/
          {
            v35 = v38; /*0x436c08*/
            if ( !InterlockedDecrement(v38 + 1) ) /*0x436c0e*/
              (**(void (__thiscall ***)(volatile LONG *, int))v35)(v35, 1); /*0x436c24*/
          }
        }
        else if ( !v31 ) /*0x436c2a*/
        {
LABEL_50:
          LOBYTE(v9) = v37; /*0x436c5f*/
          bDisableWarning_MESSAGES = v37; /*0x436c6b*/
          if ( a4 ) /*0x436c70*/
            LOBYTE(v9) = BSShaderManager_AssignShadersRecursive(*((NiAVObject **)v29 + 2), 1u, 0, 1);// Generic loaded-model preparation assigns shaders recursively with shaderId=1 and normalMapBypass=0. A missing derived normal can therefore leave cloned projectile geometry shaderless. /*0x436c7c*/
          return v9; /*0x436c7c*/
        }
        if ( v42[8] )
          PrintError(
            "%s: Reexport '%s' to get rid of the ZBuffer and/or VertextColor property.",
            v42 + 8,
            *(const char **)ArgList);
        else
          PrintError("Reexport '%s' to get rid of the ZBuffer and/or VertextColor property.", *(const char **)ArgList); /*0x436c57*/
        goto LABEL_50; /*0x436c4b*/
      }
      v14 = (volatile LONG *)FormHeapAlloc(0xDCu); /*0x436995*/
      v39 = v14; /*0x43699d*/
      v45 = 0; /*0x4369a3*/
      if ( v14 ) /*0x4369ae*/
        v15 = NiNode::NiNode((NiNode *)v14, 0); /*0x4369b4*/
      else
        v15 = 0; /*0x4369bb*/
      v45 = 0xFFFFFFFF; /*0x4369c3*/
      NiSmartPointer_Set__((Ni2DBuffer **)v5 + 2, (Ni2DBuffer *)v15); /*0x4369ce*/
      (*(void (__thiscall **)(_DWORD, int *, _DWORD, Ni2DBuffer *))(**((_DWORD **)v5 + 2) + 0x90))( /*0x4369e5*/
        *((_DWORD *)v5 + 2),
        &v40,
        0,
        v11);
      NiPointerSlot_Release((NiD3DVertexShader *)&v40); /*0x4369eb*/
LABEL_32:
      v5 = v38; /*0x436afe*/
      goto LABEL_33; /*0x436afe*/
    }
  }
  v16 = 0; /*0x436a03*/
  v17 = 0; /*0x436a05*/
  v18 = *((_DWORD *)a3 + 0x84) == 0; /*0x436a07*/
  v40 = 0; /*0x436a0d*/
  if ( !v18 ) /*0x436a11*/
  {
    while ( 1 ) /*0x436a28*/
    {
      v19 = *(_DWORD *)(*((_DWORD *)v4 + 0x82) + 4 * v16); /*0x436a28*/
      if ( v19 ) /*0x436a2d*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19) /*0x436a47*/
          || (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0xC))(v19) )
        {
          v20 = (Ni2DBuffer **)(v38 + 2); /*0x436a55*/
          if ( !*((_DWORD *)v38 + 2) ) /*0x436a58*/
          {
            v21 = (NiNode *)FormHeapAlloc(0xDCu); /*0x436a62*/
            v43 = v21; /*0x436a6a*/
            v45 = 1; /*0x436a70*/
            if ( v21 ) /*0x436a7b*/
              v22 = NiNode::NiNode(v21, 0); /*0x436a81*/
            else
              v22 = 0; /*0x436a88*/
            v45 = 0xFFFFFFFF; /*0x436a8d*/
            NiSmartPointer_Set__(v20, (Ni2DBuffer *)v22); /*0x436a98*/
          }
          (*((void (__thiscall **)(Ni2DBuffer *, volatile LONG **, int, int))(*v20)->__vftable + 0x24))( /*0x436aae*/
            *v20,
            &v39,
            v17++,
            v19);
          if ( v39 ) /*0x436ab9*/
          {
            v23 = v39; /*0x436abb*/
            if ( !InterlockedDecrement(v39 + 1) ) /*0x436ac1*/
              (**(void (__thiscall ***)(volatile LONG *, int))v23)(v23, 1); /*0x436ad7*/
          }
          v16 = v40; /*0x436ad9*/
          v12 = 1; /*0x436add*/
        }
      }
      LOBYTE(v9) = (_BYTE)v42; /*0x436adf*/
      v24 = (unsigned int)++v16 < *((_DWORD *)v42 + 0x84); /*0x436ae6*/
      v40 = v16; /*0x436aec*/
      if ( !v24 ) /*0x436af0*/
        break; /*0x436af0*/
      v4 = v42; /*0x436a20*/
    }
    if ( v12 ) /*0x436af8*/
      goto LABEL_32; /*0x436af8*/
  }
  return v9; /*0x436c84*/
}
