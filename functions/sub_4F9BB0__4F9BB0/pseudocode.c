char __thiscall sub_4F9BB0(_DWORD *this, TESChildCELL *a2)
{
  _DWORD *v2; // ebx
  UInt32 vtbl; // edi
  UInt32 refID; // ebp
  int v6; // eax
  TESWorldSpace *WorldSpace; // eax
  __int16 XCoordinate; // ax
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v10; // edi
  TESWorldSpace *v11; // eax
  float *v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v14; // edx
  _DWORD *v15; // ecx
  bool v16; // zf
  unsigned __int16 YCoordinate; // [esp-10h] [ebp-18h]

  v2 = this + 0xB; /*0x4f9bb6*/
  if ( !*(this + 0xC) && !*v2 ) /*0x4f9bc0*/
    return 1; /*0x4f9bd0*/
  if ( !a2 ) /*0x4f9bda*/
LABEL_27:
    JUMPOUT(0x4F9CC3); /*0x4f9cc3*/
  switch ( LOBYTE(a2[1].vtbl) ) /*0x4f9bf2*/
  {
    case '0': /*0x4f9bf2*/
      if ( TESObjectCELL_IsInterior((TESObjectCELL *)a2) ) /*0x4f9bfb*/
        goto LABEL_7; /*0x4f9c02*/
      WorldSpace = TESObjectCELL_GetWorldSpace((TESObjectCELL *)a2); /*0x4f9c0f*/
      if ( !WorldSpace ) /*0x4f9c16*/
        return def_4F9BF2((int)a2); /*0x4f9c16*/
      refID = WorldSpace->super.refID; /*0x4f9c1c*/
      vtbl = 0; /*0x4f9c21*/
      YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)a2); /*0x4f9c28*/
      XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)a2); /*0x4f9c2b*/
      v6 = TESObjectCELL_PackExteriorGroupLabel(XCoordinate, YCoordinate); /*0x4f9c31*/
      goto LABEL_15; /*0x4f9c39*/
    case '1': /*0x4f9bf2*/
    case '2': /*0x4f9bf2*/
    case '3': /*0x4f9bf2*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2); /*0x4f9c3d*/
      v10 = DwordAtOffset40; /*0x4f9c42*/
      if ( DwordAtOffset40 && TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x4f9c4a*/
      {
        vtbl = v10->members.super.refID; /*0x4f9c53*/
        refID = 0; /*0x4f9c56*/
        v6 = 0; /*0x4f9c58*/
      }
      else
      {
        v11 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2); /*0x4f9c5e*/
        if ( !v11 ) /*0x4f9c65*/
          return def_4F9BF2((int)a2); /*0x4f9c65*/
        refID = v11->super.refID; /*0x4f9c67*/
        vtbl = 0; /*0x4f9c74*/
        v12 = (float *)(*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x5D))(a2); /*0x4f9c76*/
        v6 = TESWorldSpace_PackCellCoordinates(v12); /*0x4f9c79*/
      }
LABEL_15:
      v13 = v2; /*0x4f9c81*/
      if ( !v2 ) /*0x4f9c85*/
        return def_4F9BF2((int)a2); /*0x4f9c85*/
      break; /*0x4f9c85*/
    case '4': /*0x4f9bf2*/
      return def_4F9BF2((int)a2);
    case '5': /*0x4f9bf2*/
LABEL_7:
      vtbl = (UInt32)a2[3].vtbl; /*0x4f9c04*/
      refID = 0; /*0x4f9c07*/
      v6 = 0; /*0x4f9c09*/
      goto LABEL_15; /*0x4f9c0b*/
    default:
      goto LABEL_27;
  }
  while ( 1 ) /*0x4f9c87*/
  {
    v14 = (_DWORD *)v13[1]; /*0x4f9c87*/
    if ( !v14 && !*v13 ) /*0x4f9c8e*/
      return def_4F9BF2((int)a2); /*0x4f9bce*/
    v15 = (_DWORD *)*v13; /*0x4f9c94*/
    if ( vtbl ) /*0x4f9c96*/
    {
      v16 = *v15 == vtbl; /*0x4f9c98*/
    }
    else
    {
      if ( !refID || v15[1] != refID ) /*0x4f9ca3*/
        goto LABEL_24; /*0x4f9ca3*/
      v16 = v15[2] == v6; /*0x4f9ca5*/
    }
    if ( v16 ) /*0x4f9ca8*/
      return def_4F9BF2((int)a2); /*0x4f9ca8*/
LABEL_24:
    v13 = v14; /*0x4f9caa*/
    if ( !v14 ) /*0x4f9cae*/
      return 0; /*0x4f9cb9*/
  }
}
