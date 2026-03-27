int __cdecl BSFaceGen_DoSomethingWithFaceGenNode(int a1, _DWORD **a2)
{
  double v2; // st7
  NiAVObject *v3; // eax
  int v4; // eax
  char *v5; // ebp
  NiProperty *NiPropertyByID; // eax
  NiProperty *v7; // esi
  int v8; // eax
  int v9; // eax
  char *v10; // eax
  char *v11; // ebp
  Ni2DBuffer *v13; // [esp+0h] [ebp-A0h]
  int v14; // [esp+1Ch] [ebp-84h]
  int v15; // [esp+24h] [ebp-7Ch] BYREF
  BSStringT v16; // [esp+28h] [ebp-78h] BYREF
  __int16 v17; // [esp+30h] [ebp-70h]
  __int16 v18; // [esp+32h] [ebp-6Eh]
  UInt32 v19[2]; // [esp+34h] [ebp-6Ch] BYREF
  int v20; // [esp+3Ch] [ebp-64h]
  int v21; // [esp+40h] [ebp-60h]
  float v22; // [esp+44h] [ebp-5Ch]
  char ArgList[4]; // [esp+58h] [ebp-48h] BYREF
  BSStringT v24; // [esp+5Ch] [ebp-44h] BYREF
  int v25; // [esp+64h] [ebp-3Ch]
  int v26[5]; // [esp+68h] [ebp-38h] BYREF
  __int16 v27; // [esp+7Ch] [ebp-24h]
  __int16 v28; // [esp+7Eh] [ebp-22h]
  int v29; // [esp+80h] [ebp-20h]
  __int16 v30; // [esp+84h] [ebp-1Ch]
  __int16 v31; // [esp+86h] [ebp-1Ah]
  int v32; // [esp+88h] [ebp-18h]
  __int16 v33; // [esp+8Ch] [ebp-14h]
  __int16 v34; // [esp+8Eh] [ebp-12h]
  char v35; // [esp+98h] [ebp-8h]
  int v36; // [esp+9Ch] [ebp-4h]

  v19[0] = 0;
  v25 = a1;
  v26[4] = 0;
  v27 = 0;
  v28 = 0;
  v36 = 7;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v24.m_data = 0;
  v24.m_dataLen = 0;
  v24.m_bufLen = 0;
  *(_DWORD *)&v16.m_dataLen = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v16.m_data = 0;
  v19[1] = 0;
  v15 = 0;
  if ( !a1 || !a2 )
    JUMPOUT(0x5559A7);
  if ( !dword_B39B80 )
    sub_553550();
  v22 = sub_6EDD30((_BYTE *)(dword_B39B80 + 0xC8), 0, 0, 0, (int)a2);
  v2 = floor(v22);
  LOBYTE(v26[0]) = Double_To_SInt32(v2);
  v21 = 0;
  BSStringT_Set(&v24, EmptyString, 0);
  v15 = 0xE;
  if ( !*a2[0x1E] )
    goto LABEL_45;
  if ( !*a2[0x22] )
    goto LABEL_45;
  v3 = (NiAVObject *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v25 + 0x58))(v25, *a2[0x26]);
  v22 = *(float *)&v3;
  if ( !v3
    || (v4 = v3->vtbl->super.Unk_04((NiObject *)v3)) == 0
    || (v5 = (char *)sub_5507E0(v4)) == 0
    || ((sub_7B8940((NiAVObject *)LODWORD(v22), (signed int)a2, 1, 1),
         NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)LODWORD(v22), 4),
         (v7 = NiPropertyByID) == 0)
     || (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) < 5
     || (*((int (__thiscall **)(NiProperty *))v7->vtbl + 0x15))(v7) > 0xA
      ? (v8 = 0)
      : (v8 = 1),
        (v8 != 0 ? (unsigned int)v7 : 0) == 0) )
  {
LABEL_45:
    JUMPOUT(0x5556DE);
  }
  v9 = v14;
  if ( *(_WORD *)(v14 + 0xAE) )
  {
    if ( *(_BYTE *)(v14 + 0xB4) )
    {
      sub_55E2A0(&v15, *(int **)(v14 + 0xA8));
      v9 = v14;
    }
  }
  if ( !v20 && (char)v25 >= 0 )
  {
    v10 = *(char **)(**(_DWORD **)(v9 + 0x88) + 4);
    if ( !v10 )
      v10 = EmptyString;
    if ( sub_551A00((BSStringT *)ArgList, *(_DWORD *)(v14 + 0x70), v25, v10) )
    {
      if ( !*(_WORD *)(v14 + 0xAE) || !**(_DWORD **)(v14 + 0xA8) )
      {
        sub_43F2E0(&stru_B39C00);
        sub_557E60(v5, v14, &v15, 0);
        sub_43F300(&stru_B39C00);
      }
      v11 = *(char **)ArgList;
      v13 = (Ni2DBuffer *)*sub_442890((UInt32 *)v26, *(char **)ArgList, 0, 0);
      v35 = 8;
      NiSmartPointer_Set__((Ni2DBuffer **)v19, v13);
      v35 = 7;
      sub_7016A0((NiD3DVertexShader *)v26);
      sub_46FF20(&v16, v11);
      goto LABEL_33;
    }
    v9 = v14;
  }
  if ( !*(_WORD *)(v9 + 0xAE) || !**(_DWORD **)(v9 + 0xA8) )
  {
    sub_43F2E0(&stru_B39C00);
    sub_557E60(v5, v14, &v15, 0);
    sub_43F300(&stru_B39C00);
  }
  (*(void (__thiscall **)(_DWORD, BSStringT *))(***(_DWORD ***)(v14 + 0x88) + 0x10))(**(_DWORD **)(v14 + 0x88), &v16);
LABEL_33:
  if ( !v16.m_data )
    JUMPOUT(0x555586);
  return sub_555555(TES);
}
