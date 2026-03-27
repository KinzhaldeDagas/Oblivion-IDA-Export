bool __thiscall sub_453970(_DWORD *this, TESObjectCELL *a2, TESObjectREFR *a3, int a4)
{
  TESObjectREFR *v5; // esi
  _DWORD *v6; // ecx
  TESObjectREFRVtbl *vtbl; // eax
  TESObjectCELL *ParentCell; // eax
  _DWORD *v9; // eax
  int refID; // [esp-Ch] [ebp-10h]

  if ( (*(this + 6) & 0x800) != 0 )
  {
    v5 = a3;
    if ( a3 )
    {
      if ( TESObjectREFR_GetParentCell(a3) )
      {
        if ( TESObjectREFR_GetParentCell(v5) != a2 )
        {
          v6 = (_DWORD *)*this;
          refID = v5->member.super.refID;
          a3 = 0;
          NiTMap_GetAt(v6, refID, &a3);
          if ( a3 )
            vtbl = a3->vtbl;
          else
            LOBYTE(vtbl) = 0;
          if ( ((unsigned __int8)vtbl & 0xC) != 0 )
          {
            ParentCell = TESObjectREFR_GetParentCell(v5);
            sub_4CECD0(ParentCell, v5);
          }
        }
      }
    }
  }
  v9 = this + 8;
  if ( this != (_DWORD *)0xFFFFFFE0 )
  {
    do
    {
      if ( *v9 == a4 )
        break;
      v9 = (_DWORD *)v9[1];
    }
    while ( v9 );
  }
  return v9 != 0;
}
