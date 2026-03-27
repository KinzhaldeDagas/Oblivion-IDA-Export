double __thiscall HighProcess_GetLightLevel_(HighProcess *this, TESObjectREFR *a2, int a3)
{
  double v4; // st7
  NiObject *unk184; // ecx
  _DWORD *v7; // esi
  BSExtraDataVtbl *v8; // eax
  NiNode *PlayerNode; // eax
  int ShadowSceneNode; // eax
  int v11; // edx
  TESObjectREFRVtbl *vtbl; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  int *v14; // eax
  int v15; // ebp
  int v16; // ebx
  void (__thiscall *Unk_57)(UInt32); // edx
  double v18; // st7
  TESObjectREFRVtbl *v19; // eax
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  TESObjectCELL *ParentCell; // eax
  double v24; // st7
  float v26; // [esp+14h] [ebp-58h]
  float v27; // [esp+14h] [ebp-58h]
  int Destructor; // [esp+18h] [ebp-54h]
  float v29; // [esp+1Ch] [ebp-50h] BYREF
  float v30; // [esp+20h] [ebp-4Ch] BYREF
  int v31; // [esp+24h] [ebp-48h]
  HighProcess *v32; // [esp+28h] [ebp-44h]
  int v33; // [esp+2Ch] [ebp-40h]
  int v34; // [esp+30h] [ebp-3Ch]
  double v35; // [esp+34h] [ebp-38h]
  int v36; // [esp+44h] [ebp-28h]
  char v37[12]; // [esp+48h] [ebp-24h] BYREF
  char v38[12]; // [esp+54h] [ebp-18h] BYREF
  int v39; // [esp+68h] [ebp-4h]
  float v40; // [esp+70h] [ebp+4h]
  float v41; // [esp+70h] [ebp+4h]

  v32 = this;
  v4 = 0.0;
  unk184 = this->unk184;
  v26 = 0.0;
  if ( unk184 )
  {
    v34 = 0;
    v27 = 0.0;
    v29 = 0.0;
    v39 = 0;
    v30 = 0.0;
    v7 = sub_7ED160(unk184);
    Destructor = 0;
    if ( (_BYTE)a3 )
    {
      v8 = sub_4D7FC0(a2);
      if ( v8 )
        Destructor = (int)v8->Destructor;
    }
    if ( !v7 && a2 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
      sub_7C7050((int)PlayerNode, 0);
      v7 = sub_7ED160(&this->unk184->MiddleHighProcess::__vftable);
    }
    ShadowSceneNode = GetShadowSceneNode(this->unk184[3].members.m_uiRefCount >> 0x1C);
    v31 = ShadowSceneNode;
    if ( !ShadowSceneNode )
    {
      sub_5EA1A0((int)a2, 0, (_DWORD *)a2->member.niNode);
      v4 = 0.0;
      v26 = 0.0;
      goto LABEL_21;
    }
    v11 = *(_DWORD *)(ShadowSceneNode + 0x118);
    vtbl = a2->vtbl;
    v33 = v11;
    GetPos = vtbl->GetPos;
    a3 = 0;
    v14 = (int *)GetPos(a2);
    v15 = *v14;
    v16 = v14[1];
    Unk_57 = a2->vtbl->Unk_57;
    v36 = v14[2];
    v18 = *(float *)(((int (__thiscall *)(TESObjectREFR *, char *))Unk_57)(a2, v37) + 8);
    v19 = a2->vtbl;
    v35 = v18;
    v20 = ((int (__thiscall *)(TESObjectREFR *, char *))v19->Unk_56)(a2, v38);
    v21 = a2 == (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    v40 = v18 - *(float *)(v20 + 8) - dbl_A2F928;
    v41 = v40 * dbl_A2FAA0;
    *(float *)&v36 = *(float *)&v36 + v41;
    if ( v21 )
    {
      v27 = sub_7C6570(v31, v15, v16, v36, (int)&a3, COERCE_FLOAT(&v29), COERCE_FLOAT(&v30), Destructor);
    }
    else if ( v7 )
    {
      do
      {
        v27 = sub_7D31B0((int)v7, *(float *)&v15, *(float *)&v16, *(float *)&v36, Destructor) + v27;
        v22 = sub_7ED180(&v32->unk184->MiddleHighProcess::__vftable);
        ++a3;
        v7 = (_DWORD *)v22;
      }
      while ( v22 );
    }
    if ( TESObjectREFR_GetParentCell(a2)
      && (ParentCell = TESObjectREFR_GetParentCell(a2), TESObjectCELL_IsInterior(ParentCell)) )
    {
      v24 = v29;
    }
    else
    {
      if ( !v33 )
      {
LABEL_20:
        v26 = v27 * fCostant_100;
        v4 = 0.0;
        goto LABEL_21;
      }
      v24 = sub_7D31B0(v33, *(float *)&v15, *(float *)&v16, *(float *)&v36, 0);
    }
    v27 = v24 + v27;
    goto LABEL_20;
  }
LABEL_21:
  if ( v26 > fCostant_100 )
    return flt_A2FE7C;
  if ( v26 < v4 )
    return (float)v4;
  return v26;
}
