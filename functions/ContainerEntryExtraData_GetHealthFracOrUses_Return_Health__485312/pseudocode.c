// positive sp value has been detected, the output may be wrong!
double __userpurge ContainerEntryExtraData_GetHealthFracOrUses_::Return_Health@<st0>(
        int a1@<edi>,
        void **a2@<esi>,
        int a3,
        int a4,
        double a5)
{
  double v5; // st7
  double Health; // [esp-8h] [ebp-8h]
  int v9; // [esp+4h] [ebp+4h]

  Health = ContainerEntryExtraData_GetHealth(a2, 0); /*0x48531b*/
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x10))(a1); /*0x48532a*/
  v5 = (double)v9; /*0x48532e*/
  if ( v9 < 0 ) /*0x485332*/
    v5 = v5 + flt_A2FC78; /*0x485334*/
  return (float)(Health / v5 * fCostant_100); /*0x485350*/
}
