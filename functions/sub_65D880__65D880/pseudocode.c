double __userpurge sub_65D880@<st0>(_DWORD *this@<ecx>, double result@<st0>, int *a3, TESObjectREFR *a4)
{
  float *v5; // eax
  TESObjectCELL *ParentCell; // [esp-Ch] [ebp-14h]
  TESWorldSpace *WorldSpace; // [esp-8h] [ebp-10h]

  if ( a3 )
  {
    if ( a4 )
    {
      sub_689A00(a3);
      WorldSpace = TESObjectREFR_GetWorldSpace(a4);
      ParentCell = TESObjectREFR_GetParentCell(a4);
      v5 = a4->vtbl->GetPos(a4);
      return sub_68B030(a3, result, this, v5, ParentCell, WorldSpace);
    }
  }
  return result;
}
