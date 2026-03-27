void __thiscall sub_62A350(Actor *this, float *a2)
{
  int v3; // eax
  int v4; // ebp
  TESObjectCELL *ParentCell; // eax
  TESObjectREFR ****v7; // ecx
  TESForm *v8; // ebx
  double v9; // st7
  double v10; // st6
  char v11; // al
  TESWorldSpace *v12; // eax
  TESWorldSpace *v13; // eax
  float *v14; // eax
  ActorVtbl *vtbl; // ebp
  TESWorldSpace *WorldSpace; // eax
  float v17; // [esp+20h] [ebp-54h]
  int v18; // [esp+24h] [ebp-50h]
  float v19; // [esp+34h] [ebp-40h]
  float v20; // [esp+38h] [ebp-3Ch]
  float v21; // [esp+40h] [ebp-34h]
  float v22[3]; // [esp+44h] [ebp-30h] BYREF
  float v23[3]; // [esp+50h] [ebp-24h] BYREF
  _DWORD v24[3]; // [esp+5Ch] [ebp-18h] BYREF
  _DWORD v25[3]; // [esp+68h] [ebp-Ch] BYREF
  char v26; // [esp+78h] [ebp+4h]
  TESChildCELL *v27; // [esp+78h] [ebp+4h]

  v3 = ((int (__thiscall *)(Actor *))this->vtbl->super.super.Unk_61)(this);
  v4 = v3;
  if ( v3 && *(_BYTE *)(v3 + 0x20) == 0x13 )
  {
    sub_67C830(v3, v22);
    v19 = sub_4D7E30(a2, v22);
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a2);
    v7 = *(TESObjectREFR *****)(v4 + 0x3C);
    v8 = (TESForm *)ParentCell;
    v26 = 0;
    if ( !v7 || !sub_67CC60(v7) )
    {
      sub_67BFD0(&dword_B3BDB0, (int)this, *(int **)(v4 + 0x3C));
      sub_5EAE70((Actor *)a2, (int)v8, (int)this, v18);
      return;
    }
    if ( v8 && TESObjectCELL_IsInterior((TESObjectCELL *)v8) )
    {
      v20 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36B20);
      v21 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36B18);
      v9 = v19;
      v10 = v20;
    }
    else
    {
      v20 = flt_B36B10;
      v21 = flt_B36B08;
      v9 = v19;
      v10 = v21;
    }
    if ( v10 > v9 )
      v26 = 1;
    if ( !LOBYTE(this->members.templateForm) )
      goto LABEL_18;
    if ( !v26 )
    {
LABEL_17:
      if ( LOBYTE(this->members.templateForm) )
      {
        if ( Actor_IsNPC((Actor *)a2) )
        {
          sub_67C7F0((_DWORD *)v4, (int)a2, 1);
          sub_67C6E0((float *)v4, (int)a2, 1);
        }
        goto LABEL_33;
      }
LABEL_18:
      v14 = (float *)sub_67C660((float *)v4, v25, (TESObjectREFR *)a2);
      v23[0] = *v14;
      v23[1] = v14[1];
      v23[2] = v14[2];
      sub_4D7E30(a2, v23);
      if ( v20 * dbl_A432F0 >= v19 && ((unsigned __int16 (__thiscall *)(Actor *))this->vtbl->Unk_B0)(this) == 0x201
        || ((unsigned __int16 (__thiscall *)(Actor *))this->vtbl->Unk_B0)(this) == 0x101 )
      {
        ((void (__thiscall *)(Actor *, float *, int))this->vtbl->Unk_8E)(this, a2, 0x101);
      }
      else
      {
        if ( Actor_IsNPC((Actor *)a2) )
        {
          if ( v8 )
          {
            if ( !TESObjectCELL_IsInterior((TESObjectCELL *)v8)
              && (((unsigned __int16 (__thiscall *)(Actor *))this->vtbl->Unk_B0)(this) == 0x102 || !sub_5E05B0(a2))
              && !sub_64ADA0(this) )
            {
              sub_4D7E30(a2, v22);
            }
          }
        }
        ((void (__thiscall *)(Actor *, float *, int))this->vtbl->Unk_8E)(this, a2, 0x201);
      }
      vtbl = this->vtbl;
      v17 = flt_A30634;
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2);
      ((void (__thiscall *)(Actor *, float *, float *, TESForm *, TESWorldSpace *, _DWORD))vtbl[1].super.super.super.Unk_16)(
        this,
        a2,
        v23,
        v8,
        WorldSpace,
        LODWORD(v17));
LABEL_33:
      if ( v21 + v21 <= v19 )
        sub_5EAE70((Actor *)a2, (int)v8, (int)this, v18);
      return;
    }
    v11 = sub_64ADA0(this);
    sub_67C4A0((_DWORD *)v4, (int)v24, (TESObjectREFR *)a2, v11);
    if ( !TESObjectCELL_IsInterior((TESObjectCELL *)v8) )
    {
      v12 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2);
      v8 = sub_44A270((TESWorldSpace **)TESDataHandler, v22[0], v22[1], v12, 0);
    }
    v27 = (TESChildCELL *)this->vtbl;
    v13 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2);
    if ( ((unsigned __int8 (__thiscall *)(Actor *, float *, _DWORD, _DWORD, _DWORD, TESForm *, TESWorldSpace *))v27[0xF7].vtbl)(
           this,
           a2,
           v24[0],
           v24[1],
           v24[2],
           v8,
           v13) )
    {
      sub_67C7F0((_DWORD *)v4, (int)a2, 0);
      sub_67C6E0((float *)v4, (int)a2, 0);
      goto LABEL_17;
    }
  }
}
