char __thiscall sub_5EB370(TESObjectREFR *this)
{
  TESObjectCELL *ParentCell; // eax
  float *v3; // eax
  TESObjectCELL *v4; // edi
  float *v5; // eax
  int v7[3]; // [esp+8h] [ebp-Ch] BYREF

  LOBYTE(ParentCell) = IsWeaponReady(this);
  if ( (_BYTE)ParentCell )
  {
    v3 = this->vtbl->GetPos(this);
    LOBYTE(ParentCell) = sub_5EB150(this, v3, 1);
    if ( (_BYTE)ParentCell )
    {
      ParentCell = TESObjectREFR_GetParentCell(this);
      v4 = ParentCell;
      if ( ParentCell )
      {
        v5 = this->vtbl->GetPos(this);
        sub_5E2E20(this, v7, *(_DWORD *)v5, *((_DWORD *)v5 + 1), v5[2], v4, 0.0, 0, 0);
        LOBYTE(ParentCell) = ((char (__thiscall *)(TESObjectREFR *, int *))this->vtbl[1].super.Unk_09)(this, v7);
      }
    }
  }
  return (char)ParentCell;
}
