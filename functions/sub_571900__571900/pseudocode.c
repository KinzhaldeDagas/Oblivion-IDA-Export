NiAVObject *__userpurge sub_571900@<eax>(
        char bp0@<bpl>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        char *a2,
        float a6,
        float a7,
        int a8,
        int a9)
{
  int GlobalScriptStateObj; // eax
  double v11; // st7
  int v12; // ebp
  NiNode *v13; // eax
  NiAVObject *v14; // esi
  __int16 v15; // ax
  int v16; // edx
  int v17; // edi
  int v18; // edi
  int Singleton; // eax
  float *v20; // eax
  InterfaceManager *v21; // eax
  float v22; // [esp+0h] [ebp-70h]
  float v23; // [esp+4h] [ebp-6Ch]
  float v24; // [esp+8h] [ebp-68h]
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

  if ( !*a2 )
    return 0;
  GlobalScriptStateObj = GetGlobalScriptStateObj__(1);
  if ( (!GlobalScriptStateObj || *(char *)(GlobalScriptStateObj + 0x31) <= 0)
    && !InterfaceManager_GetSingleton(0, 1)->debugTextOn )
  {
    return 0;
  }
  __asm
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
  sub_57D7F0();
  __asm
  {
    fsub    [esp+50h+arg_8]
    fstp    [esp+50h+var_34]
  }
  v11 = sub_57D7F0();
  __asm { fmul    qword ptr ds:0A2FAA0h }
  v12 = 1;
  __asm
  {
    fsubr   [esp+50h+var_34]
    fstp    [esp+50h+arg_8]
  }
  if ( a8 == 3 )
  {
    v12 = 4;
  }
  else if ( a8 == 2 )
  {
    v12 = 2;
  }
  v40 = 0;
  v13 = (NiNode *)FormHeapAlloc(0xDCu);
  v43 = 0;
  if ( v13 )
    v14 = (NiAVObject *)NiNode::NiNode(v13, 0);
  else
    v14 = 0;
  v15 = word_B12DAE;
  v16 = *(_DWORD *)&rDebugTextColor_Menu;
  v17 = (unsigned __int8)BYTE1(*(_DWORD *)&rDebugTextColor_Menu);
  v46 = (unsigned __int8)HIBYTE(word_B12DAE);
  v43 = 0xFFFFFFFF;
  __asm { fild    [esp+50h+arg_C] }
  __asm
  {
    fld     qword ptr ds:0A3DDD8h
    fdiv    st(1), st
  }
  v30 = (unsigned __int8)v15;
  __asm
  {
    fxch    st(1)
    fstp    [esp+50h+arg_C]
    fild    dword ptr [esp+50h+var_34]
  }
  __asm { fdiv    st, st(1) }
  v31 = v17;
  __asm
  {
    fstp    [esp+50h+var_3C]
    fild    dword ptr [esp+50h+var_34]
  }
  __asm { fdiv    st, st(1) }
  v32 = (unsigned __int8)v16;
  __asm
  {
    fstp    [esp+50h+var_38]
    fild    dword ptr [esp+50h+var_34]
  }
  __asm { fdivrp  st(1), st }
  v41.m_data = 0;
  v41.m_dataLen = 0;
  v41.m_bufLen = 0;
  __asm
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
  BSStringT_Set(&v41, a2, 0);
  v18 = a9;
  v43 = 1;
  if ( !a9 )
    v18 = dword_B12DB4;
  Singleton = FontManager_GetSingleton(v11, st6_0, st5_0);
  __asm { fldz }
  __asm { fst     [esp+70h+var_68]; float }
  __asm
  {
    fst     [esp+70h+var_6C]; float
    fstp    [esp+70h+var_70]; float
  }
  v20 = (float *)sub_575870(
                   *(_DWORD **)(Singleton + 4 * v18 - 4),
                   v22,
                   v23,
                   v24,
                   (int)&v41,
                   (int)&v40,
                   v12,
                   (int)v42,
                   1);
  __asm { fldz }
  __asm { fst     dword ptr [esp+54h+var_34] }
  __asm { fst     dword ptr [esp+58h+var_34+4] }
  __asm { fstp    [esp+58h+var_2C] }
  v20[0x15] = v34;
  v20[0x16] = v36;
  v20[0x17] = v38;
  ((void (__thiscall *)(NiAVObject *, float *, int))v14->vtbl[1].super.super.Destructor)(v14, v20, 1);
  v14->members.m_flags &= ~1u;
  if ( InterfaceManager_GetSingleton(0, 1)->unk070 )
  {
    v21 = InterfaceManager_GetSingleton(0, 1);
    ((void (__thiscall *)(NiNode *, NiAVObject *, int))v21->unk070->vtbl->AddObject)(v21->unk070, v14, 1);
  }
  __asm
  {
    fld     [esp+50h+arg_4]
    fstp    dword ptr [esp+50h+var_34]
  }
  __asm { fld     dword ptr ds:0A5A5F8h }
  v14->members.m_localTransform.pos.x = v35;
  __asm { fstp    dword ptr [esp+50h+var_34+4] }
  __asm { fld     [esp+50h+arg_8] }
  v14->members.m_localTransform.pos.y = v37;
  __asm { fstp    [esp+50h+var_2C] }
  v14->members.m_localTransform.pos.z = v39;
  NiAVObject_InitializePropertyState(v14);
  NiNode_UpdateDynamicEffectState((NiNode *)v14);
  __asm { fldz }
  __asm { fstp    [esp+58h+var_58]; a2 }
  NiAVObject_UpdateNiAVObject(v14, v25, 1);
  FormHeapFree((unsigned int)v41.m_data);
  return v14;
}
