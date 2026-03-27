void __thiscall sub_65FD20(_DWORD *this, TESObjectREFR *a2)
{
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v4; // eax
  BSSimpleList_VoidPtr *v5; // edi

  if ( a2 )
  {
    if ( a2->vtbl->GetBaseForm(a2) == (TESForm *)TESDataHandler_g_PrisonMarker )
    {
      if ( GetTeleportExtraData(a2) )
      {
        if ( !TESObjectREFR_GetParentCell(a2)
          || (ParentCell = TESObjectREFR_GetParentCell(a2), !TESObjectCELL_IsInterior(ParentCell))
          || (v4 = TESObjectREFR_GetParentCell(a2), sub_4C9820(v4)) )
        {
          v5 = (BSSimpleList_VoidPtr *)(this + 0x1C1);
          if ( !sub_446C30(v5, a2) )
            BSSimpleList_PushFront(v5, (int)a2);
        }
      }
    }
  }
}
