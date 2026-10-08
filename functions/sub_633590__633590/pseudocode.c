char __thiscall sub_633590(Actor *this, TESObjectREFR *a2, float a3, int a4)
{
  int v5; // ebp
  TESObjectREFR *CurrentTarget; // eax
  char result; // al
  int v8; // eax
  NiPoint3 *v9; // eax
  UInt32 DwordAtOffset40; // ebp
  TESWorldSpace *WorldSpace; // eax
  TESWorldSpace *v12; // ebx
  char v13; // [esp+8h] [ebp-30h]
  NiPoint3 pointXYZ; // [esp+20h] [ebp-18h] BYREF
  int v15[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( !a2 /*0x6335c8*/
    || !((int (__thiscall *)(TESObjectREFR *))a2->vtbl[1].IsMobileObject)(a2)
    || !((int (__thiscall *)(TESObjectREFR *))a2->vtbl[1].IsActor)(a2) )
  {
    return 0; /*0x6335cc*/
  }
  v5 = ((int (__thiscall *)(TESObjectREFR *))a2->vtbl[1].IsMobileObject)(a2); /*0x6335de*/
  CurrentTarget = (TESObjectREFR *)CombatController_GetCurrentTarget(v5); /*0x6335e4*/
  if ( a3 <= TesObjectREF_GetDistance(a2, CurrentTarget, 0) ) /*0x6335fc*/
    return 1; /*0x633607*/
  pointXYZ = *(NiPoint3 *)(v5 + 0x120); /*0x633610*/
  if ( sub_8AA350(&pointXYZ.x, &g_zeroNiPoint3.x) || sub_64ADA0(this) ) /*0x63363c*/
  {
    v13 = sub_64ADA0(this); /*0x63364e*/
    v8 = CombatController_GetCurrentTarget(v5); /*0x63364f*/
    v9 = sub_628790((NiPoint3 *)v15, a2, a3, v8, v13); /*0x633663*/
    pointXYZ = *v9; /*0x63366a*/
    sub_6127E0((float *)v5, v9->x, v9->y, v9->z); /*0x633693*/
  }
  if ( TESObjectREFR::GetDistanceToPoint(a2, &pointXYZ.x) <= dbl_A3AA50 ) /*0x6336af*/
  {
    if ( !LOBYTE(this->members.templateForm) ) /*0x6336b1*/
      ((void (__thiscall *)(Actor *, TESObjectREFR *))this->vtbl->super.super.ChangeCell)(this, a2); /*0x6336c5*/
    sub_6127E0((float *)v5, g_zeroNiPoint3.x, g_zeroNiPoint3.y, g_zeroNiPoint3.z); /*0x6336ed*/
    return 1; /*0x6336fd*/
  }
  DwordAtOffset40 = Shared_GetDwordAtOffset40(a2); /*0x633709*/
  WorldSpace = TESObjectREFR_GetWorldSpace(a2); /*0x63370b*/
  v12 = WorldSpace; /*0x633717*/
  if ( !LOBYTE(this->members.templateForm) /*0x633745*/
    || (result = ((int (__thiscall *)(Actor *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))this->vtbl[1].super.super.super.Unk_08)(
                   this,
                   a2,
                   LODWORD(pointXYZ.x),
                   LODWORD(pointXYZ.y),
                   LODWORD(pointXYZ.z),
                   DwordAtOffset40,
                   WorldSpace)) != 0 )
  {
    ((void (__thiscall *)(Actor *, TESObjectREFR *, int))this->vtbl->Unk_8E)(this, a2, a4); /*0x633761*/
    ((void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->vtbl[1].super.super.super.Unk_16)( /*0x63377f*/
      this,
      a2,
      &pointXYZ,
      DwordAtOffset40,
      v12,
      kTerrainLODQuadRayDirectionZ);
    return 0; /*0x633781*/
  }
  return result; /*0x633600*/
}
