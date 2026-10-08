int __thiscall TESObjectREFR_GetDebugDesc(TESChildCELL *this, BSStringT *a2)
{
  TESForm *(__thiscall *v3)(TESChildCELL *); // edx
  TESForm *v4; // eax
  const char *v5; // edi
  const char *v6; // eax
  TESObjectCELL *v7; // eax
  TESWorldSpace *WorldSpace; // eax
  const char *v9; // eax
  TESObjectCELL *v10; // edi
  const char *v11; // eax
  UInt32 refID; // ebx
  int XCoordinate; // eax
  const char *v14; // eax
  int v16; // [esp-Ch] [ebp-32Ch]
  int v17; // [esp-8h] [ebp-328h]
  int v18; // [esp-4h] [ebp-324h]
  int v19; // [esp-4h] [ebp-324h]
  int v20; // [esp-4h] [ebp-324h]
  int YCoordinate; // [esp-4h] [ebp-324h]
  int v22; // [esp-4h] [ebp-324h]
  char v23[260]; // [esp+10h] [ebp-310h] BYREF
  char v24[260]; // [esp+114h] [ebp-20Ch] BYREF
  char v25[260]; // [esp+218h] [ebp-108h] BYREF

  v3 = *((TESForm *(__thiscall **)(TESChildCELL *))this->vtbl + 0x5C); /*0x4df6c2*/
  v25[0] = 0; /*0x4df6cb*/
  v4 = v3(this); /*0x4df6d2*/
  if ( v4 ) /*0x4df6d6*/
  {
    v5 = *(const char **)(0xC * (unsigned __int8)v4->member.type + 0xB05E04); /*0x4df6e2*/
    v6 = (const char *)((int (__thiscall *)(TESForm *, UInt32))v4->vtbl->GetEditorName)(v4, v4->member.refID); /*0x4df6f4*/
    _sprintf(v25, " to %s form '%s' (%08X)", v5, v6, v18); /*0x4df705*/
  }
  v7 = *((TESObjectCELL **)this + 0x10); /*0x4df70d*/
  v24[0] = 0; /*0x4df712*/
  if ( v7 || (v7 = (TESObjectCELL *)(**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6)) != 0 ) /*0x4df727*/
  {
    WorldSpace = TESObjectCELL_GetWorldSpace(v7); /*0x4df72b*/
    if ( WorldSpace ) /*0x4df732*/
    {
      v9 = (const char *)((int (__thiscall *)(TESWorldSpace *, UInt32))WorldSpace->vtbl->GetEditorName)( /*0x4df742*/
                           WorldSpace,
                           WorldSpace->super.refID);
      _sprintf(v24, " in WorldSpace '%s' (%08X)", v9, v19); /*0x4df752*/
    }
  }
  v10 = *((TESObjectCELL **)this + 0x10); /*0x4df75a*/
  v23[0] = 0; /*0x4df75f*/
  if ( v10 ) /*0x4df763*/
  {
    if ( TESObjectCELL_IsInterior(v10) ) /*0x4df767*/
    {
      v11 = (const char *)((int (__thiscall *)(TESObjectCELL *, UInt32))v10->vtbl->GetEditorName)( /*0x4df77e*/
                            v10,
                            v10->members.super.refID);
      _sprintf(v23, " in Cell '%s' (%08X)", v11, v20); /*0x4df78b*/
    }
    else
    {
      refID = v10->members.super.refID; /*0x4df795*/
      YCoordinate = TESObjectCELL_GetYCoordinate(v10); /*0x4df79d*/
      XCoordinate = TESObjectCELL_GetXCoordinate(v10); /*0x4df7a0*/
      v14 = (const char *)((int (__thiscall *)(TESObjectCELL *, UInt32, int, int))v10->vtbl->GetEditorName)( /*0x4df7b1*/
                            v10,
                            refID,
                            XCoordinate,
                            YCoordinate);
      _sprintf(v23, " in Cell '%s' (%08X) (%i, %i)", v14, v16, v17, v22); /*0x4df7be*/
    }
  }
  return BSStringT_Static_Format( /*0x4df808*/
           a2,
           "%s Form '%s' (%08X)%s%s%s",
           *(const char **)(0xC * *((unsigned __int8 *)this + 4) + 0xB05E04),
           EmptyString,
           *((_DWORD *)this + 3),
           v25,
           v23,
           v24);
}
