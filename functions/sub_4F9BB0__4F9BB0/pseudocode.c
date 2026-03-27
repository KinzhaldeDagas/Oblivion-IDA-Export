char __thiscall sub_4F9BB0(_DWORD *this, TESChildCELL *a2)
{
  _DWORD *v2; // ebx
  UInt32 vtbl; // edi
  UInt32 refID; // ebp
  int v6; // eax
  TESWorldSpace *WorldSpace; // eax
  __int16 XCoordinate; // ax
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v10; // edi
  TESWorldSpace *v11; // eax
  float *v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v14; // edx
  _DWORD *v15; // ecx
  bool v16; // zf
  unsigned __int16 YCoordinate; // [esp-10h] [ebp-18h]

  v2 = this + 0xB;
  if ( !*(this + 0xC) && !*v2 )
    return 1;
  if ( !a2 )
LABEL_27:
    JUMPOUT(0x4F9CC3);
  switch ( LOBYTE(a2[1].vtbl) )
  {
    case '0':
      if ( TESObjectCELL_IsInterior((TESObjectCELL *)a2) )
        goto LABEL_7;
      WorldSpace = TESObjectCELL_GetWorldSpace((TESObjectCELL *)a2);
      if ( !WorldSpace )
        return def_4F9BF2(a2);
      refID = WorldSpace->super.refID;
      vtbl = 0;
      YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)a2);
      XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)a2);
      v6 = sub_4EF1D0(XCoordinate, YCoordinate);
      goto LABEL_15;
    case '1':
    case '2':
    case '3':
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a2);
      v10 = ParentCell;
      if ( ParentCell && TESObjectCELL_IsInterior(ParentCell) )
      {
        vtbl = v10->members.super.refID;
        refID = 0;
        v6 = 0;
      }
      else
      {
        v11 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2);
        if ( !v11 )
          return def_4F9BF2(a2);
        refID = v11->super.refID;
        vtbl = 0;
        v12 = (float *)(*((int (__thiscall **)(TESChildCELL *))a2->vtbl + 0x5D))(a2);
        v6 = sub_4EFE40(v12);
      }
LABEL_15:
      v13 = v2;
      if ( !v2 )
        return def_4F9BF2(a2);
      break;
    case '4':
      return def_4F9BF2(a2);
    case '5':
LABEL_7:
      vtbl = (UInt32)a2[3].vtbl;
      refID = 0;
      v6 = 0;
      goto LABEL_15;
    default:
      goto LABEL_27;
  }
  while ( 1 )
  {
    v14 = (_DWORD *)v13[1];
    if ( !v14 && !*v13 )
      return def_4F9BF2(a2);
    v15 = (_DWORD *)*v13;
    if ( vtbl )
    {
      v16 = *v15 == vtbl;
    }
    else
    {
      if ( !refID || v15[1] != refID )
        goto LABEL_24;
      v16 = v15[2] == v6;
    }
    if ( v16 )
      return def_4F9BF2(a2);
LABEL_24:
    v13 = v14;
    if ( !v14 )
      return 0;
  }
}
