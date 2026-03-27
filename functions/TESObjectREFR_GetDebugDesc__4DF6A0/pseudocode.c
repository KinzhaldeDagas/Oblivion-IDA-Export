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

  v3 = *((TESForm *(__thiscall **)(TESChildCELL *))this->vtbl + 0x5C);
  v25[0] = 0;
  v4 = v3(this);
  if ( v4 )
  {
    v5 = *(const char **)(0xC * (unsigned __int8)v4->member.type + 0xB05E04);
    v6 = (const char *)((int (__thiscall *)(TESForm *, UInt32))v4->vtbl->GetEditorName)(v4, v4->member.refID);
    _sprintf(v25, " to %s form '%s' (%08X)", v5, v6, v18);
  }
  v7 = *((TESObjectCELL **)this + 0x10);
  v24[0] = 0;
  if ( v7 || (v7 = (TESObjectCELL *)(**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6)) != 0 )
  {
    WorldSpace = TESObjectCELL_GetWorldSpace(v7);
    if ( WorldSpace )
    {
      v9 = (const char *)((int (__thiscall *)(TESWorldSpace *, UInt32))WorldSpace->vtbl->GetEditorName)(
                           WorldSpace,
                           WorldSpace->super.refID);
      _sprintf(v24, " in WorldSpace '%s' (%08X)", v9, v19);
    }
  }
  v10 = *((TESObjectCELL **)this + 0x10);
  v23[0] = 0;
  if ( v10 )
  {
    if ( TESObjectCELL_IsInterior(v10) )
    {
      v11 = (const char *)((int (__thiscall *)(TESObjectCELL *, UInt32))v10->vtbl->GetEditorName)(
                            v10,
                            v10->members.super.refID);
      _sprintf(v23, " in Cell '%s' (%08X)", v11, v20);
    }
    else
    {
      refID = v10->members.super.refID;
      YCoordinate = TESObjectCELL_GetYCoordinate(v10);
      XCoordinate = TESObjectCELL_GetXCoordinate(v10);
      v14 = (const char *)((int (__thiscall *)(TESObjectCELL *, UInt32, int, int))v10->vtbl->GetEditorName)(
                            v10,
                            refID,
                            XCoordinate,
                            YCoordinate);
      _sprintf(v23, " in Cell '%s' (%08X) (%i, %i)", v14, v16, v17, v22);
    }
  }
  return BSStringT_Static_Format(
           a2,
           "%s Form '%s' (%08X)%s%s%s",
           *(const char **)(0xC * *((unsigned __int8 *)this + 4) + 0xB05E04),
           EmptyString,
           *((_DWORD *)this + 3),
           v25,
           v23,
           v24);
}
