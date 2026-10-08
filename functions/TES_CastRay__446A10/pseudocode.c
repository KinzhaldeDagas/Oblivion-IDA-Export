// TES4 authoritative: TES::CastRay. Uses current interior cell's bhkWorld or exterior bhkWorldM; calls bhkWorld raycast vfunc +0x88 with bhkWorldRayCastData. Reusable for climbing wall/ledge probes.
NiAVObject *__thiscall TES::CastRay(TES *this, bhkWorldRayCastData *a2)
{
  TESObjectCELL *currentInteriorCell; // eax
  TESObjectCELL *v4; // edi
  BSExtraDataVtbl *v5; // eax
  int HitInfoIfTyped; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  currentInteriorCell = this->currentInteriorCell; /*0x446a10*/
  if ( !currentInteriorCell ) /*0x446a15*/
  {
    currentInteriorCell = GetGridEntry( /*0x446a28*/
                            this->gridCellArray,
                            (unsigned int)uGridsToLoad >> 1,
                            (unsigned int)uGridsToLoad >> 1)->cell;
    if ( !currentInteriorCell ) /*0x446a2c*/
      return 0; /*0x446a35*/
  }
  v4 = currentInteriorCell;                     // Shared CastRay cell-world body. Calls bhkWorld raycast vfunc +0x88 with bhkWorldRayCastData; if hit collidable maps to terrain layer 0x11, returns cell NiNode, otherwise returns hit object via bhkWorldRayCastData helper 0x889CB0. /*0x4d4e32*/
  if ( (currentInteriorCell->members.flags0 & 1) != 0 ) /*0x4d4e38*/
    v5 = sub_424180(&currentInteriorCell->members.extraData); /*0x4d4e3d*/
  else
    v5 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4d4e44*/
  if ( !v5 /*0x4d4e5c*/
    || !(*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v5->Destructor + 0x22))(v5, a2) )
  {
    return 0; /*0x4d4ea7*/
  }
  HitInfoIfTyped = bhkWorldRayCastData_GetHitInfoIfTyped(a2); /*0x4d4e64*/
  if ( HitInfoIfTyped ) /*0x4d4e6b*/
    v7 = *(_DWORD *)(HitInfoIfTyped + 0xC); /*0x4d4e6d*/
  else
    v7 = 0; /*0x4d4e72*/
  if ( v7
    && ((v8 = *(_DWORD *)(v7 + 8)) == 0 || (v9 = v8 + 0x14) == 0 ? (LOBYTE(v10) = 0) : (v10 = *(_DWORD *)(v9 + 0x1C)),
        (v10 & 0x3F) == 0x11) )
  {
    return (NiAVObject *)v4->members.niNode; /*0x4d4e92*/
  }
  else
  {
    return bhkWorldRayCastData_GetHitNiObject((int *)a2); /*0x4d4e9c*/
  }
}
