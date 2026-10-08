NiAVObject *__stdcall sub_571900(char *a2, float arg4, float a3, int a4, int a5)
{
  int GlobalScriptStateObj; // eax
  int v11; // ebp
  NiNode *v12; // eax
  NiAVObject *v13; // esi
  __int16 v14; // ax
  int v15; // edx
  int v16; // edi
  int v17; // edi
  _DWORD *Singleton; // eax
  float *v19; // eax
  InterfaceManager *v20; // eax
  float v21; // [esp+0h] [ebp-70h]
  int v22; // [esp+4h] [ebp-6Ch]
  float v23; // [esp+8h] [ebp-68h]
  double v24; // [esp+Ch] [ebp-64h]
  float v25; // [esp+18h] [ebp-58h]
  int v30; // [esp+3Ch] [ebp-34h]
  int v31; // [esp+3Ch] [ebp-34h]
  int v32; // [esp+3Ch] [ebp-34h]
  float v34; // [esp+3Ch] [ebp-34h]
  float v35; // [esp+3Ch] [ebp-34h]
  float v36; // [esp+40h] [ebp-30h]
  float v37; // [esp+40h] [ebp-30h]
  float v38; // [esp+44h] [ebp-2Ch]
  float v39; // [esp+44h] [ebp-2Ch]
  int v40; // [esp+48h] [ebp-28h] BYREF
  BSStringT v41; // [esp+4Ch] [ebp-24h] BYREF
  int v42[4]; // [esp+54h] [ebp-1Ch] BYREF
  int v43; // [esp+6Ch] [ebp-4h]
  int v46; // [esp+80h] [ebp+10h]

  if ( !*a2 ) /*0x57192d*/
    return 0; /*0x57192d*/
  GlobalScriptStateObj = GetGlobalScriptStateObj__(1); /*0x57193a*/
  if ( (!GlobalScriptStateObj || *(char *)(GlobalScriptStateObj + 0x31) <= 0) /*0x571956*/
    && !InterfaceManager_GetSingleton(0, 1)->debugTextOn )
  {
    return 0; /*0x571931*/
  }
  __asm /*0x57195b*/
  {
    fild    dword ptr ds:0B06C50h
    fidiv   dword ptr ds:0B06C4Ch
    fdivr   qword ptr ds:0A31C70h
    fstp    [esp+50h+var_3C]
    fld     [esp+50h+arg_4]
    fsub    qword ptr ds:0A687B0h
    fmul    [esp+50h+var_3C]
    fstp    [esp+50h+arg_4]
  }
  UI_GetVirtualScreenHeight(); /*0x571983*/
  __asm /*0x571988*/
  {
    fsub    [esp+50h+arg_8]
    fstp    [esp+50h+var_34]
  }
  UI_GetVirtualScreenHeight(); /*0x571990*/
  __asm { fmul    qword ptr ds:0A2FAA0h } /*0x571995*/
  v11 = 1; /*0x5719a2*/
  __asm /*0x5719a7*/
  {
    fsubr   [esp+50h+var_34]
    fstp    [esp+50h+arg_8]
  }
  if ( a4 == 3 ) /*0x5719af*/
  {
    v11 = 4; /*0x5719b1*/
  }
  else if ( a4 == 2 ) /*0x5719bb*/
  {
    v11 = 2; /*0x5719bd*/
  }
  v40 = 0; /*0x5719c4*/
  v12 = (NiNode *)FormHeapAlloc(0xDCu); /*0x5719c8*/
  v43 = 0; /*0x5719d6*/
  if ( v12 ) /*0x5719da*/
    v13 = (NiAVObject *)NiNode::NiNode(v12, 0); /*0x5719e4*/
  else
    v13 = 0; /*0x5719e8*/
  v14 = word_B12DAE; /*0x5719ea*/
  v15 = *(_DWORD *)&rDebugTextColor_Menu; /*0x5719f0*/
  v16 = (unsigned __int8)BYTE1(*(_DWORD *)&rDebugTextColor_Menu); /*0x5719fb*/
  v46 = (unsigned __int8)HIBYTE(word_B12DAE); /*0x5719fe*/
  v43 = 0xFFFFFFFF; /*0x571a02*/
  __asm { fild    [esp+50h+arg_C] } /*0x571a0a*/
  __asm
  {
    fld     qword ptr ds:0A3DDD8h
    fdiv    st(1), st
  }
  v30 = (unsigned __int8)v14; /*0x571a26*/
  __asm /*0x571a2a*/
  {
    fxch    st(1)
    fstp    [esp+50h+arg_C]
    fild    dword ptr [esp+50h+var_34]
  }
  __asm { fdiv    st, st(1) }
  v31 = v16; /*0x571a40*/
  __asm /*0x571a44*/
  {
    fstp    [esp+50h+var_3C]
    fild    dword ptr [esp+50h+var_34]
  }
  __asm { fdiv    st, st(1) }
  v32 = (unsigned __int8)v15; /*0x571a58*/
  __asm /*0x571a5c*/
  {
    fstp    [esp+50h+var_38]
    fild    dword ptr [esp+50h+var_34]
  }
  __asm { fdivrp  st(1), st }
  v41.m_data = 0; /*0x571a78*/
  v41.m_dataLen = 0; /*0x571a7c*/
  v41.m_bufLen = 0; /*0x571a81*/
  __asm /*0x571a86*/
  {
    fstp    dword ptr [esp+58h+var_34]
    fld     [esp+58h+arg_C]
    fstp    [esp+58h+var_1C]
    fld     [esp+58h+var_3C]
    fstp    [esp+58h+var_18]
    fld     [esp+58h+var_38]
    fstp    [esp+58h+var_14]
    fld     dword ptr [esp+58h+var_34]
    fstp    [esp+58h+var_10]
  }
  BSStringT_Set(&v41, a2, 0); /*0x571aaa*/
  v17 = a5; /*0x571aaf*/
  v43 = 1; /*0x571ab5*/
  if ( !a5 ) /*0x571abd*/
    v17 = dword_B12DB4; /*0x571abf*/
  Singleton = FontManager_GetSingleton(); /*0x571ac5*/
  __asm { fldz } /*0x571aca*/
  HIDWORD(v24) = &v40; /*0x571adc*/
  LODWORD(v24) = &v41; /*0x571ae1*/
  __asm { fst     [esp+70h+var_68]; float } /*0x571ae5*/
  __asm
  {
    fst     [esp+70h+var_6C]; float
    fstp    [esp+70h+var_70]; float
  }
  v19 = (float *)sub_575870((float **)Singleton[v17 - 1], v21, v22, v23, v24, COERCE_DOUBLE(__PAIR64__(v42, v11)), 1); /*0x571af2*/
  __asm { fldz } /*0x571af7*/
  __asm { fst     dword ptr [esp+54h+var_34] }
  __asm { fst     dword ptr [esp+58h+var_34+4] }
  __asm { fstp    [esp+58h+var_2C] }
  v19[0x15] = v34; /*0x571b10*/
  v19[0x16] = v36; /*0x571b17*/
  v19[0x17] = v38; /*0x571b1a*/
  ((void (__thiscall *)(NiAVObject *, float *, int))v13->vtbl[1].super.super.Destructor)(v13, v19, 1); /*0x571b27*/
  v13->members.m_flags &= ~1u; /*0x571b29*/
  if ( InterfaceManager_GetSingleton(0, 1)->unk070 ) /*0x571b3a*/
  {
    v20 = InterfaceManager_GetSingleton(0, 1); /*0x571b42*/
    ((void (__thiscall *)(NiNode *, NiAVObject *, int))v20->unk070->vtbl->AddObject)(v20->unk070, v13, 1); /*0x571b58*/
  }
  __asm /*0x571b5a*/
  {
    fld     [esp+50h+arg_4]
    fstp    dword ptr [esp+50h+var_34]
  }
  __asm { fld     dword ptr ds:0A5A5F8h }
  v13->members.m_localTransform.pos.x = v35; /*0x571b6c*/
  __asm { fstp    dword ptr [esp+50h+var_34+4] } /*0x571b6f*/
  __asm { fld     [esp+50h+arg_8] }
  v13->members.m_localTransform.pos.y = v37; /*0x571b7b*/
  __asm { fstp    [esp+50h+var_2C] } /*0x571b7e*/
  v13->members.m_localTransform.pos.z = v39; /*0x571b88*/
  NiAVObject_InitializePropertyState(v13); /*0x571b8b*/
  NiNode_UpdateDynamicEffectState((NiNode *)v13); /*0x571b92*/
  __asm { fldz } /*0x571b97*/
  __asm { fstp    [esp+58h+var_5C+4]; a2 }
  NiAVObject_UpdateNiAVObject(v13, v25, 1); /*0x571ba1*/
  FormHeapFree((unsigned int)v41.m_data); /*0x571bab*/
  return v13; /*0x571bb5*/
}
