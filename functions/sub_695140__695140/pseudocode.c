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
  int y_low; // eax
  int v10; // eax
  int v11; // eax
  NiObject *v12; // eax
  NiObject *v13; // edi
  int v14; // esi
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
  float *p_x; // eax
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

  if ( a5 >= dbl_A2FCC8 )
    ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1);
  if ( a5 < 0.0 )
    return;
  y_low = LODWORD(a1[1].super.rot.y);
  if ( !y_low )
  {
    LODWORD(a1[1].super.rot.y) = 1;
    goto LABEL_20;
  }
  v10 = y_low - 1;
  if ( !v10 )
  {
LABEL_20:
    if ( (a1->super.super.flags & 0x20) == 0 )
    {
      CharProxy = MobileObject_GetCharProxy(a1);
      vtbl = a1->vtbl;
      v34 = *((float *)CharProxy + 0xC6);
      GetPos = vtbl->super.GetPos;
      v34 = v34 * dbl_A372E0;
      if ( v37 >= (double)*(float *)(((int (__thiscall *)(MobileObject *, int, int, int))GetPos)(a1, a3, a4, a2) + 8) )
      {
        v19 = a1->vtbl;
        v20 = a1->vtbl->super.GetPos((TESObjectREFR *)a1);
        ((void (__thiscall *)(MobileObject *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))v19[1].super.super.super.ClearComponentReferences)(
          a1,
          *(_DWORD *)v20,
          *((_DWORD *)v20 + 1),
          *((_DWORD *)v20 + 2),
          0,
          0,
          1);
      }
      v21 = a1->vtbl->super.GetPos;
      v44 = 0.0;
      v45 = *(float *)&a1[1].vtbl * a8;
      v46 = 0.0;
      v22 = v21((TESObjectREFR *)a1);
      v23 = *v22;
      v24 = *((_DWORD *)v22 + 1);
      v43 = *((_DWORD *)v22 + 2);
      v42 = v24;
      Move = a1->vtbl->Move;
      v41 = v23;
      ((void (__thiscall *)(MobileObject *, _DWORD, float *, int))Move)(a1, LODWORD(a8), &v44, 0xF);
      if ( ((unsigned __int8 (__thiscall *)(MobileObject *))a1->vtbl[1].super.super.super.CompareTo)(a1) )
      {
        v26 = a1->vtbl->super.GetPos((TESObjectREFR *)a1);
        v27 = *v26;
        v28 = v26[1];
        v29 = v26[2];
        GetNiNode = a1->vtbl->super.GetNiNode;
        v35 = *v26;
        v36 = v28;
        v37 = v29;
        if ( GetNiNode((TESObjectREFR *)a1) )
        {
          p_x = &a1->vtbl->super.GetNiNode((TESObjectREFR *)a1)->members.super.m_localTransform.pos.x;
          *p_x = v27;
          p_x[1] = v28;
          p_x[2] = v29;
        }
        v44 = v35 - v38;
        v45 = v36 - v39;
        v46 = v37 - v40;
        v34 = sub_404C90(&v44) + *(float *)&a1[1].super.super.type;
        v32 = v34;
        *(float *)&a1[1].super.super.type = v34;
        if ( flt_B37E88 < v32 )
          ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1);
        v15 = LODWORD(a1[1].super.pos[1]);
        if ( v15 )
          goto LABEL_29;
      }
    }
    return;
  }
  if ( v10 == 1 )
  {
    v11 = (int)a1->vtbl->super.GetNiNode((TESObjectREFR *)a1);
    v12 = v11 ? *(NiObject **)(v11 + 0xC) : 0;
    v13 = NiRTTI_Cast(&stru_B3CAC0, v12);
    if ( v13 )
    {
      if ( !NiTMap_GetAt(&v13[0xB].__vftable, (int)"SpecialIdle_AreaEffect", &v34)
        || v34 == 0.0
        || *(float *)(LODWORD(v34) + 0x30) < (double)*(float *)(LODWORD(v34) + 0x34)
        || !*(_DWORD *)(LODWORD(v34) + 0x44) )
      {
        sub_4715C0(v13, 0.0);
        TESForm_SetEnabled_((TESForm *)a1, 1);
        ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1);
      }
    }
    else
    {
      ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1);
      TESForm_SetEnabled_((TESForm *)a1, 1);
    }
    v14 = LODWORD(a1[1].super.pos[1]);
    if ( v14 )
    {
      v15 = v14;
LABEL_29:
      MagicCaster_CastingVFX_UpdateTimes_(v15, a5);
    }
  }
}
