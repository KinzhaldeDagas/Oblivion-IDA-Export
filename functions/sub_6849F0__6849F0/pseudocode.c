char __thiscall sub_6849F0(float *this, float *a2, TESObjectREFR *a3)
{
  _DWORD *v4; // ebx
  TESObjectCELL *ParentCell; // ebp
  TESWorldSpace *WorldSpace; // edi
  TESObjectCELL *v8; // eax
  TESObjectCELL *v9; // eax
  TESChildCELL *v10; // esi
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  char *v13; // edi
  char *v14; // eax
  int v15; // esi
  char *v16; // eax
  char **v17; // eax
  char v19; // [esp+Bh] [ebp-5h]
  TESChildCELL *v21; // [esp+18h] [ebp+8h]

  v4 = 0;
  v19 = 0;
  if ( a3 && *(this + 0xF) != dbl_A3A5B0 )
  {
    v21 = 0;
    ParentCell = TESObjectREFR_GetParentCell(a3);
    WorldSpace = TESObjectREFR_GetWorldSpace(a3);
    if ( ParentCell && TESObjectCELL_IsInterior(ParentCell) )
    {
      v8 = TESObjectREFR_GetParentCell(a3);
      v4 = (_DWORD *)sub_4AF170(v8);
      v9 = TESObjectREFR_GetParentCell(a3);
      v10 = (TESChildCELL *)sub_4AF170(v9);
    }
    else
    {
      if ( !WorldSpace )
        return v19;
      TESWorldSpace::GetCellAtPos(WorldSpace, this + 0xF);
      if ( v11 )
        v4 = (_DWORD *)sub_4AF170(v11);
      TESWorldSpace::GetCellAtPos(WorldSpace, a2);
      if ( v12 )
        v21 = (TESChildCELL *)sub_4AF170(v12);
      v10 = v21;
    }
    if ( v4 )
    {
      if ( v10 )
      {
        v13 = sub_4E6D60(v4, this + 0xF);
        if ( v13 )
        {
          v14 = sub_4E6D60(v10, a2);
          v15 = (int)v14;
          if ( v14 )
          {
            v16 = sub_4E7DE0(v14);
            if ( sub_446C30((BSSimpleList_VoidPtr *)v16, v13) )
            {
              if ( !sub_683C70(this, (int)v13, v15) )
              {
                v17 = (char **)FormHeapAlloc(8u);
                *v17 = v13;
                v17[1] = (char *)v15;
                BSSimpleList_PushFront((_DWORD *)this + 0xD, (int)v17);
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return v19;
}
