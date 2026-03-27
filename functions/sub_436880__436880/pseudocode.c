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

  v4 = a3;
  v5 = this;
  v38 = this;
  *(_DWORD *)ArgList = a2;
  v42 = a3;
  *((_DWORD *)this + 1) = 0;
  v6 = FormHeapAlloc(strlen(a2) + 1);
  *v5 = v6;
  v7 = a2;
  v8 = (_BYTE *)v6;
  do
  {
    LOBYTE(v9) = *v7;
    *v8++ = *v7++;
  }
  while ( (_BYTE)v9 );
  if ( !*((_DWORD *)a3 + 0x84) )
  {
    PrintError("Model Load Error: %s in %s.\r\nWill use the default object Marker_Error.NIF.\r\n", a3 + 0x384, a2);
    sub_6F9E60(a3);
    LOBYTE(v9) = (*(int (__thiscall **)(char *, const char *, _DWORD))(*(_DWORD *)a3 + 0x54))(
                   a3,
                   "Meshes\\Marker_Error.NIF",
                   0);
    if ( !(_BYTE)v9 )
    {
      *v5 = 0;
      return v9;
    }
  }
  v10 = *((Ni2DBuffer ***)a3 + 0x82);
  v11 = *v10;
  v12 = 0;
  if ( *v10 )
  {
    v9 = (*((int (__thiscall **)(Ni2DBuffer *))v11->__vftable + 2))(*v10);
    if ( v9 )
    {
      width = (char *)v11->members.width;
      if ( !width || !sub_6FA6F0(width, "Bip[0-9][0-9]") )
      {
        NiSmartPointer_Set__((Ni2DBuffer **)v5 + 2, v11);
LABEL_33:
        sub_4809A0(*((_WORD **)v5 + 2));
        strcpy(Src, "BASE ");
        v25 = *(const char **)ArgList;
        v26 = strlen(*(const char **)ArgList) + 1;
        v27 = (char *)&v43 + 3;
        while ( *++v27 )
          ;
        qmemcpy(v27, *(const void **)ArgList, 4 * (v26 >> 2));
        qmemcpy(&v27[4 * (v26 >> 2)], &v25[4 * (v26 >> 2)], v26 & 3);
        v29 = v38;
        NiObjectNET_SetName(*((NiObjectNET **)v38 + 2), Src);
        v30 = bDisableWarning_MESSAGES;
        bDisableWarning_MESSAGES = 1;
        v37 = v30;
        v31 = 0;
        NiPropertyByID = NiNode_GetNiPropertyByID(*((NiNode **)v38 + 2), 9);
        if ( NiPropertyByID )
        {
          if ( LOWORD(NiPropertyByID[1].vtbl) == *(_WORD *)(dword_B3F998 + 0x18) )
          {
            sub_708560(*((_DWORD **)v38 + 2), &v39, 9);
            if ( v39 )
            {
              v33 = v39;
              if ( !InterlockedDecrement(v39 + 1) )
                (**(void (__thiscall ***)(volatile LONG *, int))v33)(v33, 1);
            }
            v31 = 1;
          }
        }
        v34 = NiNode_GetNiPropertyByID(*((NiNode **)v38 + 2), 7);
        if ( v34 && LOWORD(v34[1].vtbl) == *(_WORD *)(dword_B3F980 + 0x18) )
        {
          sub_708560(*((_DWORD **)v38 + 2), &v38, 7);
          if ( v38 )
          {
            v35 = v38;
            if ( !InterlockedDecrement(v38 + 1) )
              (**(void (__thiscall ***)(volatile LONG *, int))v35)(v35, 1);
          }
        }
        else if ( !v31 )
        {
LABEL_50:
          LOBYTE(v9) = v37;
          bDisableWarning_MESSAGES = v37;
          if ( a4 )
            LOBYTE(v9) = sub_7B8940(*((NiAVObject **)v29 + 2), 1, 0, 1);
          return v9;
        }
        if ( v42[8] )
          PrintError(
            "%s: Reexport '%s' to get rid of the ZBuffer and/or VertextColor property.",
            v42 + 8,
            *(const char **)ArgList);
        else
          PrintError("Reexport '%s' to get rid of the ZBuffer and/or VertextColor property.", *(const char **)ArgList);
        goto LABEL_50;
      }
      v14 = (volatile LONG *)FormHeapAlloc(0xDCu);
      v39 = v14;
      v45 = 0;
      if ( v14 )
        v15 = NiNode::NiNode((NiNode *)v14, 0);
      else
        v15 = 0;
      v45 = 0xFFFFFFFF;
      NiSmartPointer_Set__((Ni2DBuffer **)v5 + 2, (Ni2DBuffer *)v15);
      (*(void (__thiscall **)(_DWORD, int *, _DWORD, Ni2DBuffer *))(**((_DWORD **)v5 + 2) + 0x90))(
        *((_DWORD *)v5 + 2),
        &v40,
        0,
        v11);
      sub_7016A0((NiD3DVertexShader *)&v40);
LABEL_32:
      v5 = v38;
      goto LABEL_33;
    }
  }
  v16 = 0;
  v17 = 0;
  v18 = *((_DWORD *)a3 + 0x84) == 0;
  v40 = 0;
  if ( !v18 )
  {
    while ( 1 )
    {
      v19 = *(_DWORD *)(*((_DWORD *)v4 + 0x82) + 4 * v16);
      if ( v19 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19)
          || (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0xC))(v19) )
        {
          v20 = (Ni2DBuffer **)(v38 + 2);
          if ( !*((_DWORD *)v38 + 2) )
          {
            v21 = (NiNode *)FormHeapAlloc(0xDCu);
            v43 = v21;
            v45 = 1;
            if ( v21 )
              v22 = NiNode::NiNode(v21, 0);
            else
              v22 = 0;
            v45 = 0xFFFFFFFF;
            NiSmartPointer_Set__(v20, (Ni2DBuffer *)v22);
          }
          (*((void (__thiscall **)(Ni2DBuffer *, volatile LONG **, int, int))(*v20)->__vftable + 0x24))(
            *v20,
            &v39,
            v17++,
            v19);
          if ( v39 )
          {
            v23 = v39;
            if ( !InterlockedDecrement(v39 + 1) )
              (**(void (__thiscall ***)(volatile LONG *, int))v23)(v23, 1);
          }
          v16 = v40;
          v12 = 1;
        }
      }
      LOBYTE(v9) = (_BYTE)v42;
      v24 = (unsigned int)++v16 < *((_DWORD *)v42 + 0x84);
      v40 = v16;
      if ( !v24 )
        break;
      v4 = v42;
    }
    if ( v12 )
      goto LABEL_32;
  }
  return v9;
}
