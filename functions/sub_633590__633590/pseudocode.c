char __thiscall sub_633590(Actor *this, TESObjectREFR *a2, float a3, int a4)
{
  int v5; // ebp
  TESObjectREFR *v6; // eax
  char result; // al
  int v8; // eax
  float *v9; // eax
  TESObjectCELL *ParentCell; // ebp
  TESWorldSpace *WorldSpace; // eax
  TESWorldSpace *v12; // ebx
  char v13; // [esp+8h] [ebp-30h]
  float v14; // [esp+20h] [ebp-18h] BYREF
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h]
  int v17[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(float *)&a2 == 0.0
    || !((int (__thiscall *)(TESObjectREFR *))a2->vtbl[1].IsMobileObject)(a2)
    || !((int (__thiscall *)(TESObjectREFR *))a2->vtbl[1].IsActor)(a2) )
  {
    return 0;
  }
  v5 = ((int (__thiscall *)(TESObjectREFR *))a2->vtbl[1].IsMobileObject)(a2);
  v6 = (TESObjectREFR *)sub_6135F0(v5);
  if ( a3 <= TesObjectREF_GetDistance(a2, v6, 0) )
    return 1;
  v14 = *(float *)(v5 + 0x120);
  v15 = *(_DWORD *)(v5 + 0x124);
  v16 = *(_DWORD *)(v5 + 0x128);
  if ( sub_8AA350(&v14, &Vector3_InitValue_) || sub_64ADA0(this) )
  {
    v13 = sub_64ADA0(this);
    v8 = sub_6135F0(v5);
    v9 = (float *)sub_628790((int)v17, a2, a3, v8, v13);
    v14 = *v9;
    v15 = *((_DWORD *)v9 + 1);
    v16 = *((_DWORD *)v9 + 2);
    sub_6127E0((float *)v5, *v9, v9[1], v9[2]);
  }
  if ( sub_4D7E30((float *)a2, &v14) <= dbl_A3AA50 )
  {
    if ( !LOBYTE(this->members.templateForm) )
      ((void (__thiscall *)(Actor *, TESObjectREFR *))this->vtbl->super.super.ChangeCell)(this, a2);
    sub_6127E0((float *)v5, Vector3_InitValue_, *(&Vector3_InitValue_ + 1), dword_B3F9B0);
    return 1;
  }
  ParentCell = TESObjectREFR_GetParentCell(a2);
  WorldSpace = TESObjectREFR_GetWorldSpace(a2);
  v12 = WorldSpace;
  if ( !LOBYTE(this->members.templateForm)
    || (result = ((int (__thiscall *)(Actor *, TESObjectREFR *, _DWORD, int, int, TESObjectCELL *, TESWorldSpace *))this->vtbl[1].super.super.super.Unk_08)(
                   this,
                   a2,
                   LODWORD(v14),
                   v15,
                   v16,
                   ParentCell,
                   WorldSpace)) != 0 )
  {
    ((void (__thiscall *)(Actor *, TESObjectREFR *, int))this->vtbl->Unk_8E)(this, a2, a4);
    ((void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->vtbl[1].super.super.super.Unk_16)(
      this,
      a2,
      &v14,
      ParentCell,
      v12,
      flt_A30634);
    return 0;
  }
  return result;
}
