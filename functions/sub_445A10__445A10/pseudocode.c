char __userpurge sub_445A10@<al>(
        unsigned int a1@<ecx>,
        int edi0@<edi>,
        double st4_0@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        double a7@<st7>,
        double a8@<st4>,
        double a9@<st6>,
        double a10@<st5>,
        float *a2)
{
  BSShaderAccumulator *inited; // eax
  TESObjectCELL *v13; // edi
  _DWORD *v14; // ecx
  _DWORD *ShadowSceneNode; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  bool v21; // bl
  bool v22; // zf
  double v23; // st6
  double v24; // rt0
  double v25; // st5
  double v26; // st6
  double v27; // st7
  TESForm *CellFromCoords; // eax
  int v29; // ecx
  _DWORD *v30; // ecx
  _DWORD *sound; // ecx
  char result; // al
  float v33; // [esp-Ch] [ebp-2Ch]
  int v34; // [esp-8h] [ebp-28h]
  int v35; // [esp-4h] [ebp-24h]
  NiNode *PlayerNode; // [esp+0h] [ebp-20h]
  int v37; // [esp+14h] [ebp-Ch]
  float v38; // [esp+14h] [ebp-Ch]
  int v39; // [esp+18h] [ebp-8h]
  int v40; // [esp+18h] [ebp-8h]
  int a3; // [esp+1Ch] [ebp-4h] BYREF

  byte_B43384 = 1;
  if ( !*(_BYTE *)(a1 + 0x51) && !*(_BYTE *)(a1 + 0x52) )
    sub_40D160((NiDX9Renderer *)OSGlobals, edi0, a1);
  byte_B43074 = 0;
  inited = InitBSShaderAccumulator();
  sub_7AB6F0(inited);
  sub_7B2130(0);
  *(_BYTE *)(bhkWorldM + 0x19) = 1;
  v13 = *(TESObjectCELL **)(a1 + 0x34);
  if ( v13 )
  {
    sub_4D6450((int)v13, a4, a5, a6);
    v14 = *(_DWORD **)(a1 + 0x58);
    if ( v14 )
      sub_499FF0(v14);
    nullsub_returnTrue_0arg();
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
    sub_7C7E50(ShadowSceneNode);
    a6 = nullsub_returnTrue_0arg();
    PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
    v16 = (_DWORD *)GetShadowSceneNode(0);
    ShadowSceneNodeAddShadowCaster(v16, (volatile LONG *)PlayerNode);
    if ( TES::IsInteriorCellPreloaded((TES *)a1, v13) )
      sub_4CB010(v13, a4, a5, a6, 1);
    else
      sub_447BA0(a4, a5, a6, v13);
    *(_DWORD *)(a1 + 0x34) = 0;
    if ( (SaveLoad_CurrentSavegame->flags & 0x800) == 0 )
    {
      v17 = *(_DWORD *)(a1 + 0x48);
      if ( v17 == 0x7FFFFFFF )
      {
        if ( !sub_440880((TES *)a1, a2) )
        {
          *(_DWORD *)(a1 + 0x20) = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 0x24) = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 0x28) = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 0x2C) = 0x7FFFFFFF;
        }
      }
      else
      {
        if ( **(_DWORD **)(a1 + 0x3C) )
        {
          v18 = *(_DWORD *)(a1 + 0x4C);
          *(_DWORD *)(a1 + 0x20) = v17;
          *(_DWORD *)(a1 + 0x24) = v18;
          sub_440270((_DWORD **)a1, a4, a5, a6);
          sub_441D50(a1, a6, a4, st4_0, a5, a10, a9, a8, a7, 0, (int)a2);
        }
        else
        {
          *(_DWORD *)(a1 + 0x20) = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 0x24) = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 0x28) = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 0x2C) = 0x7FFFFFFF;
        }
        *(_DWORD *)(a1 + 0x48) = 0x7FFFFFFF;
        *(_DWORD *)(a1 + 0x4C) = 0x7FFFFFFF;
      }
    }
  }
  v19 = *(_DWORD *)(a1 + 0x10);
  if ( v19 )
  {
    v20 = *(_DWORD *)(v19 + 0x1C);
    if ( v20 )
      *(_WORD *)(v20 + 0x18) &= ~1u;
  }
  sub_88B680((int *)bhkWorldM, havokDebug);
  v21 = sub_45A500(SaveLoad_CurrentSavegame);
  sub_444FB0(a1, (TESObjectREFR *)a2, a6, a7, a5, a4, st4_0, a8, a9, a10, a2, !v21);
  v22 = dword_B42D78 == 0;
  v23 = dbl_A2FAA0;
  v24 = dbl_A37650;
  v25 = ((double)*(int *)(a1 + 0x20) + v23) * v24;
  *(float *)&v37 = v25;
  v26 = v23 + (double)*(int *)(a1 + 0x24);
  dword_B4312C = v37;
  dword_B43134 = v37;
  v27 = v24 * v26;
  *(float *)&v39 = v24 * v26;
  dword_B43130 = v39;
  dword_B43138 = v39;
  if ( v22 )
    v27 = 0.0;
  else
    ((void (__cdecl *)(_DWORD, _DWORD))dword_B42D78)(0, 0);
  flt_B43078 = v27;
  sub_440270((_DWORD **)a1, v25, v26, v27);
  CellFromCoords = TES_GetCellFromCoords((TES *)a1, *(_DWORD *)(a1 + 0x20), *(_DWORD *)(a1 + 0x24));
  if ( sub_43E000(ModelLoaderPtr, (TESObjectCELL *)CellFromCoords) )
    sub_440AF0(a1, v25, v26, (char)a2, 1, 0, 0);
  if ( !v21 )
  {
    if ( bhkWorldM )
      sub_889E00((_DWORD *)bhkWorldM);
    sub_434020(ioManager, v25, v26, v27, 4);
    sub_482310(*(_DWORD *)(a1 + 8), *(float *)&a2);
    if ( bhkWorldM )
      sub_88D1D0(0);
    v38 = *a2;
    v40 = *((int *)a2 + 1);
    *(float *)&a3 = 0.0;
    GetTerrainHeight((TES *)a1, a2, (float *)&a3);
    v27 = 1.0;
    v33 = *(float *)&dword_B258DC;
    v34 = qword_B258E0;
    v35 = HIDWORD(qword_B258E0);
    v29 = a3;
    byte_B2CBC0 = 0;
    DrawGrassPass_(SLODWORD(v38), v40, v29, v33, v34, v35, 1.0);
    byte_B2CBC0 = 1;
  }
  if ( *(_BYTE *)(a1 + 0x51) || *(_BYTE *)(a1 + 0x52) )
  {
    if ( v21 )
      goto LABEL_38;
  }
  else
  {
    if ( v21 )
      goto LABEL_38;
    v27 = flt_B33A48;
    sub_5732D0((NiAVObject **)dword_B3A6B0, v25, v26, v27, 2, flt_B33A48);
  }
  sub_677360((int)&ActorProcessManager_ptr);
  sub_441610((_DWORD *)a1);
  sub_678750(&ActorProcessManager_ptr);
  sub_675F40((int)&ActorProcessManager_ptr);
  sub_675FC0((int)&ActorProcessManager_ptr, v27);
LABEL_38:
  if ( v13 )
  {
    if ( !sub_4C9820(v13) )
    {
      sub_5403D0(*(Sky **)(a1 + 0x5C), v25, v26, *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 0x10));
      sub_5403D0(*(Sky **)(a1 + 0x5C), v25, v26, *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 0x14));
    }
  }
  sub_43FB40((_DWORD **)a1);
  v30 = *(_DWORD **)(a1 + 0x5C);
  if ( v30[0x37] )
    sub_543BB0(v30, 3);
  NiAVObject_InitializePropertyState(*(NiAVObject **)(a1 + 0xC));
  NiNode_UpdateDynamicEffectState(*(NiNode **)(a1 + 0xC));
  Player_UpdateHUDHealthBarTarget_(0);
  if ( *(_BYTE *)(a1 + 0x51) || *(_BYTE *)(a1 + 0x52) )
  {
    sub_578E30(v25, v26, (char)a2);
    sub_5A9010((char)a2, v25, v26);
    sound = OSGlobals->sound;
    if ( sound )
      sub_6A9AA0(sound);
  }
  result = sub_43FC20((TES *)a1, 0);
  byte_B3522C = 1;
  byte_B43384 = 0;
  return result;
}
