void __userpurge TESDataHandler_PlaceObjectRef(
        double a1@<st2>,
        double st6_0@<st1>,
        int a2,
        int arg4,
        int a5,
        TESObjectCELL *a6,
        int a7,
        TESObjectREFR *a8)
{
  TESObjectCELL *v8; // ebx
  int v9; // edi
  TESObjectCELL *ParentCell; // eax

  v8 = a6;
  if ( a6 )
  {
    if ( TESObjectCELL_IsInterior(a6) )
    {
      v9 = 0;
      goto LABEL_5;
    }
    v8 = 0;
  }
  v9 = a7;
LABEL_5:
  if ( !a2 || !v8 && !v9 )
    JUMPOUT(0x44ABBF);
  if ( a8 )
  {
    TESObjectREFR_IsPersistent_(a8);
    TESObjectREFR_SetPersistance(a8, a1, st6_0, 0);
    ParentCell = TESObjectREFR_GetParentCell(a8);
    if ( ParentCell )
      sub_4CECD0(ParentCell, a8);
    if ( !a8->vtbl->GetBaseForm(a8) )
      TESObjectREFR_SetBaseForm(a8, a2);
    sub_4DB3C0(a8);
    JUMPOUT(0x44A96D);
  }
  TESDataHandler_PlaceObjectRef_::SwitchRefType(a2, a2, arg4, a5, (int)a6, a7, 0);
}
