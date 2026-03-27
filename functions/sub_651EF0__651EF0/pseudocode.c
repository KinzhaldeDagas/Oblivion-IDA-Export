void __thiscall sub_651EF0(_DWORD *this, TESObjectREFR *a2)
{
  _DWORD *v3; // eax
  TESObjectCELL *ParentCell; // eax
  int v5; // esi
  TESObjectCELL *i; // ebx
  TESObjectREFR *v7; // edi

  if ( a2 )
  {
    v3 = (_DWORD *)*(this + 0x5C);
    if ( v3 )
    {
      if ( v3[1] || *v3 )
      {
        ParentCell = TESObjectREFR_GetParentCell(a2);
        v5 = *(this + 0x5C);
        for ( i = ParentCell; v5; v5 = *(_DWORD *)(v5 + 4) )
        {
          if ( !*(_DWORD *)(v5 + 4) && !*(_DWORD *)v5 )
            break;
          v7 = *(TESObjectREFR **)v5;
          if ( *(_DWORD *)v5 )
          {
            if ( TESObjectREFR_GetParentCell(*(TESObjectREFR **)v5) != i )
            {
              if ( i )
              {
                sub_4D38F0(i, v7);
                sub_6748B0(&ActorProcessManager_ptr, v7);
              }
            }
          }
        }
      }
    }
  }
}
