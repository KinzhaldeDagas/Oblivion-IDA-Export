// Generated power-attack list loader. Loads each candidate KF from the temporary file list and only adds TESAnimGroup power-attack sequences; non-power KFs are released.
void __thiscall sub_4761C0(AnimSequenceSingle *this, unsigned int a2)
{
  const char *v3; // ebx
  int v4; // edi
  _DWORD *v5; // eax

  if ( a2 ) /*0x4761ca*/
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)a2) ) /*0x4761d2*/
    {
      v3 = *(const char **)a2; /*0x4761e0*/
      v4 = ModelLoader_LoadKFModelNow(MEMORY[0xB33A1C], *(const char **)a2); /*0x4761ee*/
      if ( TESAnimGroup_IsPowerAttack(*(unsigned __int8 **)(v4 + 8)) ) /*0x4761f3*/
        ActorAnimData_InstallKFModel(this, v4, 0); /*0x476201*/
      else
        InterlockedDecrement((volatile LONG *)(v4 + 0xC)); /*0x47620c*/
      FormHeapFree((unsigned int)v3); /*0x476213*/
      v5 = *(_DWORD **)(a2 + 4); /*0x476218*/
      if ( v5 ) /*0x476220*/
      {
        *(_DWORD *)(a2 + 4) = v5[1]; /*0x476225*/
        *(_DWORD *)a2 = *v5; /*0x47622b*/
        FormHeapFree((unsigned int)v5); /*0x47622d*/
      }
      else
      {
        *(_DWORD *)a2 = 0; /*0x476237*/
      }
    }
    FormHeapFree(a2); /*0x47624b*/
  }
}
