double __userpurge ContainerEntryExtraData_GetHealthFracOrUses_::Return_BaseUseCount@<st0>(
        int a1@<ebx>,
        int a2,
        int a3,
        int a4,
        int a5)
{
  double result; // st7
  float v6; // [esp+Ch] [ebp+Ch]

  result = (double)*(unsigned __int8 *)(a1 + 4); /*0x485392*/
  v6 = result; /*0x485396*/
  ContainerEntryExtraData_GetHealthFracOrUses_::Return(a2, a3, v6, a5); /*0x485397*/
  return result;
}
