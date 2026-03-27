void __cdecl sub_553BB0(int arg0, int a2)
{
  int v2; // ecx
  unsigned int v3; // edx
  bool v4; // zf
  int v5; // eax
  NiObject *v6; // eax
  int v7; // esi
  char **v8; // eax
  char *v9; // esi
  char *m_data; // esi
  char *v11; // eax
  Ni2DBuffer *v12; // eax
  Ni2DBuffer *v13; // edi
  NiNode *v14; // ebp
  NiObject *v15; // edx
  NiProperty *NiPropertyByID; // esi
  NiProperty *v17; // edi
  BSShaderProperty *v18; // edi
  unsigned __int16 v19; // si
  int v20; // ecx
  NiProperty *v21; // eax
  double v22; // st7
  unsigned int v23; // eax
  LONG (__stdcall *v24)(volatile LONG *); // ebp
  NiNode *v25; // esi
  LONG v26; // eax
  char *v27; // [esp+0h] [ebp-100h]
  char *v28; // [esp+4h] [ebp-FCh]
  NiNode *v29; // [esp+24h] [ebp-DCh] BYREF
  BSStringT v30; // [esp+28h] [ebp-D8h] BYREF
  BSStringT v31; // [esp+30h] [ebp-D0h] BYREF
  int v32; // [esp+38h] [ebp-C8h]
  float v33; // [esp+3Ch] [ebp-C4h]
  BSStringT v34; // [esp+40h] [ebp-C0h] BYREF
  BSStringT v35; // [esp+48h] [ebp-B8h] BYREF
  BSStringT v36; // [esp+50h] [ebp-B0h] BYREF
  unsigned int v37; // [esp+58h] [ebp-A8h]
  NiObject *v38; // [esp+5Ch] [ebp-A4h]
  unsigned int v39; // [esp+60h] [ebp-A0h] BYREF
  int v40; // [esp+64h] [ebp-9Ch]
  int v41; // [esp+68h] [ebp-98h]
  __int16 v42; // [esp+6Ch] [ebp-94h]
  __int16 v43; // [esp+6Eh] [ebp-92h]
  Ni2DBuffer *v44; // [esp+70h] [ebp-90h] BYREF
  float *v45[2]; // [esp+74h] [ebp-8Ch] BYREF
  char v46; // [esp+7Ch] [ebp-84h]
  char v47[4]; // [esp+80h] [ebp-80h] BYREF
  int (__stdcall ***v48[4])(signed int); // [esp+84h] [ebp-7Ch] BYREF
  _BYTE a1[96]; // [esp+94h] [ebp-6Ch] BYREF
  int v50; // [esp+FCh] [ebp-4h]

  v2 = arg0;
  v3 = 0;
  v4 = *(_WORD *)(arg0 + 0xB6) == 0;
  v32 = 0;
  v37 = 0;
  if ( v4 )
    return;
  while ( 1 )
  {
    if ( *(unsigned __int16 *)(v2 + 0xB6) <= v3 )
      goto LABEL_39;
    v38 = *(NiObject **)(*(_DWORD *)(v2 + 0xB0) + 4 * v3);
    if ( !v38 )
      goto LABEL_39;
    if ( !strcmp((const char *)v38[1].__vftable, "FaceGenFace") )
      break;
    v2 = arg0;
LABEL_39:
    v23 = *(unsigned __int16 *)(v2 + 0xB6);
    v37 = ++v3;
    if ( v3 >= v23 )
      return;
  }
  v5 = v38->__vftable->Unk_04(v38);
  v6 = sub_550790(v5);
  if ( v6 )
    v7 = (int)v6->__vftable[1].Unk_02(v6);
  else
    v7 = 0;
  v29 = 0;
  v50 = 6;
  v31.m_data = 0;
  *(_DWORD *)&v31.m_dataLen = 0;
  v30.m_data = 0;
  *(_DWORD *)&v30.m_dataLen = 0;
  v35.m_data = 0;
  *(_DWORD *)&v35.m_dataLen = 0;
  v36.m_data = 0;
  v36.m_dataLen = 0;
  v36.m_bufLen = 0;
  v34.m_data = 0;
  *(_DWORD *)&v34.m_dataLen = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  v4 = dword_B39B80 == 0;
  LOBYTE(v50) = 7;
  if ( v4 )
    sub_553550();
  sub_5528F0((int *)(dword_B39B80 + 8), (int)a1);
  v8 = *(char ***)(v7 + 8);
  if ( !v8 )
  {
    FormHeapFree(0);
    v32 |= 1u;
    v39 = 0;
    v40 = 0;
    v8 = (char **)&v39;
  }
  v9 = *v8;
  if ( (v32 & 1) != 0 )
  {
    v32 &= ~1u;
    FormHeapFree(v39);
    v39 = 0;
    v40 = 0;
  }
  sub_54FF60(&v31, v9);
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_46;
    sub_550170(&v30, v31.m_data);
  }
  else
  {
    sub_551B40(&v30, v31.m_data);
  }
  if ( !v30.m_data
    || !OBSE_g_FileFinder
    || !OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, v30.m_data, 0, 0, 0xFFFFFFFF) )
  {
LABEL_46:
    LOBYTE(v50) = 6;
    _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
    FormHeapFree(0);
    FormHeapFree(0);
    FormHeapFree(0);
    FormHeapFree(0);
    FormHeapFree((unsigned int)v30.m_data);
    FormHeapFree((unsigned int)v31.m_data);
    v50 = 0xFFFFFFFF;
    if ( !v29 )
      return;
    v25 = v29;
    v26 = InterlockedDecrement((volatile LONG *)&v29->members);
    goto LABEL_48;
  }
  m_data = v30.m_data;
  v28 = sub_5500C0(&v34, v30.m_data);
  v27 = sub_550010(&v36, m_data);
  v11 = sub_54FEB0(&v35, m_data);
  v12 = sub_553620((int)v11, (int)m_data, (int)v27, (int)v28, 1, 0);
  v13 = v12;
  v44 = v12;
  if ( v12 )
    InterlockedIncrement((volatile LONG *)&v12->members);
  LOBYTE(v50) = 8;
  if ( sub_559870((char *)v13, (int)a1, (int *)&v29) && v29 )
  {
    NiObjectNET_SetName((NiObjectNET *)v29, "FaceGenFace");
    v14 = v29;
    v15 = v38;
    v29->members.super.m_localTransform.pos = *(NiPoint3 *)&v38[0xA].members.m_uiRefCount;
    qmemcpy(&v14->members.super.m_localTransform, &v15[6], 0x24u);
    v33 = *(float *)&v15[0xC].__vftable;
    v33 = fabs(v33);
    v14->members.super.m_localTransform.scale = v33;
    if ( UsePS3Shaders )
      sub_7B8940((NiAVObject *)v14, 0x1A, 1, 1);
    else
      sub_7B8940((NiAVObject *)v14, 0xE, 1, 1);
    NiPropertyByID = NiNode_GetNiPropertyByID(v14, 4);
    v17 = NiNode_GetNiPropertyByID((NiNode *)v38, 4);
    sub_478B90((NiTPointerMap<NiObject *,NiObject *> **)v48);
    LOBYTE(v50) = 9;
    v18 = (BSShaderProperty *)sub_700610(v17, (int)v48);
    sub_550430(v18, *(_DWORD *)&NiPropertyByID[8].members.m_extraDataListLen);
    sub_4A1220((int **)v14, (int)NiPropertyByID);
    sub_405680(v14, v18);
    sub_4EC910((NiGeometry *)v14, (BSShader *)v38[0x17].members.m_uiRefCount);
    v19 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&v14->members.children.capacity + 0x50))(*(_DWORD *)&v14->members.children.capacity);
    if ( sub_728AB0(*(_DWORD *)&v14->members.children.capacity, 1) )
    {
      v20 = *(_DWORD *)&v14->members.children.capacity;
      v45[0] = 0;
      v45[1] = 0;
      v46 = 0;
      sub_728B60(v20, (int)v45);
      if ( v45[0] )
        sub_550A30((float *)(*(_DWORD *)&v14->members.children.capacity + 0xC), v45, v19);
    }
    v21 = NiNode_GetNiPropertyByID(v14, 2);
    if ( v21 )
    {
      v33 = *(float *)&v21[3].members.super.m_uiRefCount;
      if ( v33 < 1.0 )
      {
        v22 = flt_A46B10;
        ++v21[3].members.m_controller;
        *(float *)&v21[3].members.super.m_uiRefCount = v22;
      }
    }
    (*(void (__thiscall **)(int, char *, unsigned int, NiNode *))(*(_DWORD *)arg0 + 0x90))(arg0, v47, v37, v14);
    sub_7016A0((NiD3DVertexShader *)v47);
    NiAVObject_InitializePropertyState((NiAVObject *)v14);
    NiNode_UpdateDynamicEffectState(v14);
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)arg0 + 0xC4))(arg0, *(_DWORD *)(arg0 + 0x1C), 0);
    if ( a2 )
      *(_BYTE *)(arg0 + 0x110) = 0;
    else
      *(_BYTE *)(arg0 + 0x110) = 1;
    LOBYTE(v50) = 8;
    sub_4781A0(v48);
    LOBYTE(v50) = 7;
    sub_7016A0((NiD3DVertexShader *)&v44);
    LOBYTE(v50) = 6;
    _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
    FormHeapFree(0);
    v41 = 0;
    v43 = 0;
    v42 = 0;
    FormHeapFree((unsigned int)v34.m_data);
    v34.m_data = 0;
    *(_DWORD *)&v34.m_dataLen = 0;
    FormHeapFree((unsigned int)v36.m_data);
    v36.m_data = 0;
    v36.m_bufLen = 0;
    v36.m_dataLen = 0;
    FormHeapFree((unsigned int)v35.m_data);
    v35.m_data = 0;
    *(_DWORD *)&v35.m_dataLen = 0;
    FormHeapFree((unsigned int)v30.m_data);
    v30.m_data = 0;
    *(_DWORD *)&v30.m_dataLen = 0;
    FormHeapFree((unsigned int)v31.m_data);
    v31.m_data = 0;
    *(_DWORD *)&v31.m_dataLen = 0;
    v50 = 0xFFFFFFFF;
    sub_7016A0((NiD3DVertexShader *)&v29);
    v3 = v37;
    v2 = arg0;
    goto LABEL_39;
  }
  v24 = InterlockedDecrement;
  LOBYTE(v50) = 7;
  if ( v13 )
  {
    if ( !v24((volatile LONG *)&v13->members) )
      (*(void (__thiscall **)(Ni2DBuffer *, int))v13->__vftable)(v13, 1);
  }
  LOBYTE(v50) = 6;
  _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  FormHeapFree(0);
  FormHeapFree((unsigned int)v34.m_data);
  FormHeapFree((unsigned int)v36.m_data);
  FormHeapFree((unsigned int)v35.m_data);
  FormHeapFree((unsigned int)m_data);
  FormHeapFree((unsigned int)v31.m_data);
  v50 = 0xFFFFFFFF;
  if ( v29 )
  {
    v25 = v29;
    v26 = v24((volatile LONG *)&v29->members);
LABEL_48:
    if ( !v26 )
      v25->vtbl->super.super.super.Destructor((NiRefObject *)v25, 1);
  }
}
