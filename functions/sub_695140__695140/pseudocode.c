void __userpurge sub_695140(
        MobileObject *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float a5,
        int a6,
        int a7,
        float a8)
{
  float y; // eax
  int v10; // eax
  NiNode *v11; // eax
  NiObject *v12; // eax
  NiObject *v13; // edi
  float v14; // esi
  int v15; // ecx
  bhkCharacterProxy *CharProxy; // eax
  MobileObjectVtbl *vtbl; // edx
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  MobileObjectVtbl *v19; // edi
  float *v20; // eax
  float *(__thiscall *v21)(TESObjectREFR *); // edx
  float *v22; // eax
  float v23; // ecx
  int v24; // edx
  void (__thiscall *Move)(MobileObject *, float, float *, UInt32); // edx
  float *v26; // eax
  float v27; // edi
  float v28; // ebx
  float v29; // ebp
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // edx
  NiPoint3 *p_pos; // eax
  double v32; // st7
  float v34; // [esp+40h] [ebp-34h] BYREF
  float v35; // [esp+44h] [ebp-30h]
  float v36; // [esp+48h] [ebp-2Ch]
  float v37; // [esp+4Ch] [ebp-28h]
  float v38; // [esp+50h] [ebp-24h]
  float v39; // [esp+54h] [ebp-20h]
  float v40; // [esp+58h] [ebp-1Ch]
  float v41; // [esp+5Ch] [ebp-18h]
  int v42; // [esp+60h] [ebp-14h]
  int v43; // [esp+64h] [ebp-10h]
  float v44; // [esp+68h] [ebp-Ch] BYREF
  float v45; // [esp+6Ch] [ebp-8h]
  float v46; // [esp+70h] [ebp-4h]

  if ( a5 >= dbl_A2FCC8 ) /*0x695158*/
    ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1); /*0x695164*/
  if ( a5 < 0.0 ) /*0x695171*/
    return; /*0x695171*/
  y = a1[1].super.rot.y; /*0x695177*/
  if ( y == 0.0 ) /*0x695180*/
  {
    LODWORD(a1[1].super.rot.y) = 1; /*0x695249*/
    goto LABEL_20; /*0x695249*/
  }
  v10 = LODWORD(y) - 1; /*0x695186*/
  if ( !v10 ) /*0x695189*/
  {
LABEL_20:
    if ( (a1->super.super.flags & 0x20) == 0 ) /*0x69525c*/
    {
      CharProxy = MobileObject_GetCharProxy(a1); /*0x695264*/
      vtbl = a1->vtbl; /*0x69526f*/
      v34 = *((float *)CharProxy + 0xC6); /*0x695271*/
      GetPos = vtbl->super.GetPos; /*0x695279*/
      v34 = v34 * dbl_A372E0; /*0x695287*/
      if ( v37 >= (double)*(float *)(((int (__thiscall *)(MobileObject *, int, int, int))GetPos)(a1, a3, a4, a2) + 8) ) /*0x6952a3*/
      {
        v19 = a1->vtbl; /*0x6952a5*/
        v20 = a1->vtbl->super.GetPos(a1); /*0x6952af*/
        ((void (__thiscall *)(MobileObject *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))v19[1].super.super.super.ClearComponentReferences)( /*0x6952d4*/
          a1,
          *(_DWORD *)v20,
          *((_DWORD *)v20 + 1),
          *((_DWORD *)v20 + 2),
          0,
          0,
          1);
      }
      v21 = a1->vtbl->super.GetPos; /*0x6952da*/
      v44 = 0.0; /*0x6952e0*/
      v45 = *(float *)&a1[1].vtbl * a8; /*0x6952ed*/
      v46 = 0.0; /*0x6952f1*/
      v22 = v21((TESObjectREFR *)a1); /*0x6952f5*/
      v23 = *v22; /*0x6952f7*/
      v24 = *((_DWORD *)v22 + 1); /*0x6952fd*/
      v43 = *((_DWORD *)v22 + 2); /*0x695303*/
      v42 = v24; /*0x69530d*/
      Move = a1->vtbl->Move; /*0x695313*/
      v41 = v23; /*0x69531b*/
      ((void (__thiscall *)(MobileObject *, _DWORD, float *, int))Move)(a1, LODWORD(a8), &v44, 0xF); /*0x695324*/
      if ( ((unsigned __int8 (__thiscall *)(MobileObject *))a1->vtbl[1].super.super.super.CompareTo)(a1) ) /*0x695330*/
      {
        v26 = a1->vtbl->super.GetPos(a1); /*0x695344*/
        v27 = *v26; /*0x695346*/
        v28 = v26[1]; /*0x695348*/
        v29 = v26[2]; /*0x69534b*/
        GetNiNode = a1->vtbl->super.GetNiNode; /*0x695350*/
        v35 = *v26; /*0x695358*/
        v36 = v28; /*0x69535c*/
        v37 = v29; /*0x695360*/
        if ( GetNiNode((TESObjectREFR *)a1) ) /*0x695364*/
        {
          p_pos = &a1->vtbl->super.GetNiNode(a1)->members.super.m_localTransform.pos; /*0x695376*/
          p_pos->x = v27; /*0x695379*/
          p_pos->y = v28; /*0x69537b*/
          p_pos->z = v29; /*0x69537e*/
        }
        v44 = v35 - v38; /*0x69538d*/
        v45 = v36 - v39; /*0x695399*/
        v46 = v37 - v40; /*0x6953a5*/
        v34 = NiPoint3_Length(&v44) + *(float *)&a1[1].super.super.type; /*0x6953b1*/
        v32 = v34; /*0x6953b5*/
        *(float *)&a1[1].super.super.type = v34; /*0x6953b9*/
        if ( unk_B37E88 < v32 ) /*0x6953c9*/
          ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1); /*0x6953d7*/
        v15 = LODWORD(a1[1].super.pos[1]); /*0x6953d9*/
        if ( v15 ) /*0x6953e1*/
          goto LABEL_29; /*0x6953e1*/
      }
    }
    return; /*0x6953e1*/
  }
  if ( v10 == 1 )
  {
    v11 = a1->vtbl->super.GetNiNode(a1); /*0x6951a2*/
    v12 = v11 ? (NiObject *)v11->members.super.super.m_controller : 0;
    v13 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, v12); /*0x6951ba*/
    if ( v13 ) /*0x6951c1*/
    {
      if ( !NiTMap_GetAt(&v13[0xB].__vftable, (int)"SpecialIdle_AreaEffect", &v34) /*0x6951f0*/
        || v34 == 0.0
        || *(float *)(LODWORD(v34) + 0x30) < (double)*(float *)(LODWORD(v34) + 0x34)
        || !*(_DWORD *)(LODWORD(v34) + 0x44) )
      {
        NiControllerManager_DeactivateAllSequences((NiControllerManager *)v13, 0.0); /*0x6951fe*/
        TESForm_SetDisabledFlag((TESForm *)a1, 1); /*0x695207*/
        ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1); /*0x695218*/
      }
    }
    else
    {
      ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1); /*0x695228*/
      TESForm_SetDisabledFlag((TESForm *)a1, 1); /*0x69522e*/
    }
    v14 = a1[1].super.pos[1]; /*0x695233*/
    if ( v14 != 0.0 ) /*0x69523b*/
    {
      v15 = LODWORD(v14); /*0x695242*/
LABEL_29:
      MagicCaster_CastingVFX_UpdateTimes_(v15, a5); /*0x6953e4*/
    }
  }
}
