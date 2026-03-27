void __userpurge sub_448F40(_DWORD *this@<ecx>, double a2@<st1>, double a3@<st0>, TESObjectREFR *a4)
{
  unsigned int ***v6; // ecx
  ExtraContainerChanges_Data *v7; // eax
  int ***ContainerChanges; // eax
  BSExtraDataVtbl *v9; // eax
  TESChildCELL *v10; // esi
  ExtraContainerChanges_Data *v11; // eax
  int ***v12; // ebx
  TESObjectCELL *ParentCell; // eax

  v6 = (unsigned int ***)*(this + 0x337);
  if ( v6 )
  {
    sub_48F180(v6);
  }
  else
  {
    v7 = (ExtraContainerChanges_Data *)FormHeapAlloc(0x10u);
    if ( v7 )
      *(this + 0x337) = ContainerExtraData_constr(v7, 0);
    else
      *(this + 0x337) = 0;
  }
  ContainerChanges = (int ***)ExtraDataList_GetContainerChanges(&a4->member.baseExtraList);
  sub_48E9A0(ContainerChanges, (float *)*(this + 0x337), (int)a4, 0);
  v9 = sub_420680(&a4->member.baseExtraList);
  v10 = (TESChildCELL *)v9;
  if ( v9 )
  {
    v11 = ExtraDataList_GetContainerChanges((ExtraDataList *)&v9[8].CompareTo);
    v12 = (int ***)v11;
    if ( v11 )
    {
      sub_48E740(v11, a2, a3, v10);
      sub_48E9A0(v12, (float *)*(this + 0x337), (int)v10, 0);
    }
  }
  ParentCell = TESObjectREFR_GetParentCell(a4);
  if ( ParentCell )
    sub_4CB2B0(ParentCell, (int)a4, (float *)*(this + 0x337));
}
