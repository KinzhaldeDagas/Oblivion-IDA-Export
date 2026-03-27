NiNode *__thiscall TES::CastRay(TES *this, bhkWorldRayCastData *a2)
{
  TESObjectCELL *currentInteriorCell; // eax
  TESObjectCELL *v4; // edi
  BSExtraDataVtbl *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  currentInteriorCell = this->currentInteriorCell;
  if ( !currentInteriorCell )
  {
    currentInteriorCell = GetGridEntry(
                            this->gridCellArray,
                            (unsigned int)uGridsToLoad >> 1,
                            (unsigned int)uGridsToLoad >> 1)->cell;
    if ( !currentInteriorCell )
      return 0;
  }
  v4 = currentInteriorCell;
  if ( (currentInteriorCell->members.flags0 & 1) != 0 )
    v5 = sub_424180(&currentInteriorCell->members.extraData);
  else
    v5 = (BSExtraDataVtbl *)bhkWorldM;
  if ( !v5
    || !(*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v5->Destructor + 0x22))(v5, a2) )
  {
    return 0;
  }
  v6 = sub_889CD0(a2);
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 0xC);
  else
    v7 = 0;
  if ( v7
    && ((v8 = *(_DWORD *)(v7 + 8)) == 0 || (v9 = v8 + 0x14) == 0 ? (LOBYTE(v10) = 0) : (v10 = *(_DWORD *)(v9 + 0x1C)),
        (v10 & 0x3F) == 0x11) )
  {
    return v4->members.niNode;
  }
  else
  {
    return (NiNode *)sub_889CB0((int *)a2);
  }
}
