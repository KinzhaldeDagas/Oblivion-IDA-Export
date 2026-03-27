void __userpurge TESObjectREF_RemoveItemByType(
        TESObjectREFR *this@<ecx>,
        double st6_0@<st1>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6)
{
  double v7; // st5
  int v8; // esi
  ExtraContainerChanges_Data *v9; // ebx
  int v10; // eax
  signed int v11; // edi
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax
  ExtraContainerChanges_Data *i; // [esp+0h] [ebp-4h] BYREF

  if ( TESObjectREFR_GetContainer(this) )
  {
    ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this);
    i = ContainerExtraDataForRef;
    v7 = flt_A30634;
    v8 = a6;
    v9 = ContainerExtraDataForRef;
    ContainerExtraDataForRef->totalWeight = flt_A30634;
    for ( i = 0; v8 > 0; v8 -= v11 )
    {
      v10 = sub_486240(v9, a4, (int *)&i);
      v11 = (signed int)i;
      if ( (int)i > v8 )
      {
        v11 = v8;
        i = (ExtraContainerChanges_Data *)v8;
      }
      ContainerExtraData_RemoveForm((int ***)v9, v7, a3, st6_0, 0, v10, a5, v11, 0, 0, 0, 0, 0, 1, 0);
    }
  }
}
