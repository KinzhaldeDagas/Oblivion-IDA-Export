int __userpurge TESObjectREFR_RemoveItem@<eax>(
        TESObjectREFR *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        int a4,
        unsigned __int8 *a5,
        int a6,
        int a7,
        int a8,
        TESForm *a9,
        float *a10,
        NiPoint3 *a11,
        char a12,
        char a13)
{
  int v13; // edi
  double v16; // st7
  int ***ContainerExtraDataForRef; // eax
  int v18; // eax

  v13 = 0;
  if ( !a4 )
    return 0;
  if ( TESObjectREFR_GetContainer(this) )
  {
    v16 = Script_AddEventToExtraScript(this, a5, 4);
    ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(this);
    ContainerExtraData_RemoveForm(
      ContainerExtraDataForRef,
      st5_0,
      v16,
      st6_0,
      this,
      a4,
      a7,
      a6,
      a5,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13);
    return v18;
  }
  return v13;
}
