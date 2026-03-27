// positive sp value has been detected, the output may be wrong!
void __userpurge MobileObject_LoadModifiedForm_::def_659CD5(
        TESObjectREFR *a1@<esi>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  TESObjectCELL *ParentCell; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  char v11; // [esp-1h] [ebp-1h]

  if ( a1->vtbl->GetNiNode(a1) )
  {
    ParentCell = TESObjectREFR_GetParentCell(a1);
    if ( !TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) || v11 )
      a4 = ((double (__thiscall *)(TESObjectREFR *, _DWORD))a1->vtbl->Set3D)(a1, 0);
  }
  TESObjectREFR_LoadModifiedForm((TESChildCELL *)a1, a2, a3, a4, a8, a9);
  vtbl = a1[1].vtbl;
  if ( vtbl )
    (*((void (__cdecl **)(int))vtbl->super.super.InitializeComponent + 0xFE))(a8);
}
