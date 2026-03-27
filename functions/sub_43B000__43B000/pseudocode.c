void __thiscall sub_43B000(QueuedReference *a1)
{
  Character *refr; // ecx
  TESObjectCELL *ParentCell; // eax
  QueuedReferenceInner *unk28; // eax
  TESObjectCELL *v5; // eax
  volatile LONG *unk2C; // [esp-8h] [ebp-Ch]

  if ( a1->super.super.members.unk0C != 6 )
  {
    refr = a1->refr;
    if ( (refr->member.super.super.super.super.flags & kFormFlags_InitiallyDisabled) == 0
      && (refr->member.super.super.super.super.flags & kFormFlags_Deleted) == 0 )
    {
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)refr);
      if ( TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) )
      {
        unk28 = a1->unk28;
        if ( unk28 )
          sub_43A8F0((int *)ModelLoaderPtr, (TESObjectREFR *)a1->refr, unk28->model);
        unk2C = (volatile LONG *)a1->unk2C;
        v5 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1->refr);
        sub_441EF0((int)TES, (TESObjectREFR *)a1->refr, v5, unk2C, 0);
      }
    }
    (*(void (__thiscall **)(_DWORD, Character *))(**((_DWORD **)ModelLoaderPtr + 2) + 0x10))(
      *((_DWORD *)ModelLoaderPtr + 2),
      a1->refr);
  }
}
