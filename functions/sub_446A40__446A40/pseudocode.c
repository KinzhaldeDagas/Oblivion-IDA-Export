void __stdcall sub_446A40(
        TESObjectREFR *a1,
        float a2,
        float *a3,
        float a4,
        unsigned __int8 (__cdecl *a5)(TESObjectREFR *, int),
        int a6)
{
  TESObjectCELL *ParentCell; // eax
  int v7; // esi
  int WorldSpace; // eax
  _DWORD *v9; // ebx
  int v10; // eax
  float *v11; // eax

  if ( a1 )
  {
    ParentCell = TESObjectREFR_GetParentCell(a1);
    v7 = (int)ParentCell;
    if ( ParentCell )
    {
      if ( !TESObjectCELL_IsInterior(ParentCell) )
        v7 = 0;
    }
    WorldSpace = TESObjectREFR_GetWorldSpace(a1);
    v9 = (_DWORD *)WorldSpace;
    if ( v7 )
    {
      v10 = (int)a1->vtbl->GetPos(a1);
      sub_4D5E30(v7, v10, a2, (int)a3, a4, (int)a5, a6);
    }
    else if ( WorldSpace )
    {
      v11 = a1->vtbl->GetPos(a1);
      sub_4F0750(v9, v11, a2, a3, a4, a5, a6);
    }
  }
}
