void __thiscall sub_69DC90(TESObjectREFR **this, int a2)
{
  TESObjectREFR *v3; // ecx
  TESObjectCELL *ParentCell; // eax
  int v5; // eax
  NiNode *v6; // ebx
  signed int v7; // eax
  int v8; // eax

  v3 = *(this + 7);
  if ( v3 )
  {
    ParentCell = TESObjectREFR_GetParentCell(v3);
    *(this + 3) = (TESObjectREFR *)ParentCell;
    if ( a2 )
    {
      if ( ParentCell )
      {
        if ( TESObjectCELL_GetNiNode_(ParentCell) )
        {
          v5 = *(_DWORD *)(a2 + 0x1C);
          if ( !v5 || (v6 = *(NiNode **)(v5 + 0x1C), TESObjectCELL_GetNiNode_((TESObjectCELL *)*(this + 3)) != v6) )
          {
            v7 = sub_4C9C80(*(this + 3), (float *)(a2 + 0x88));
            v8 = sub_441800((TESObjectCELL *)*(this + 3), v7, 3u);
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 0x84))(v8, a2, 1);
          }
        }
      }
    }
  }
}
