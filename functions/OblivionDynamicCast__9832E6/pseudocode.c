void *__cdecl OblivionDynamicCast(
        void *a1,
        int a2,
        struct _s_RTTICompleteObjectLocator *a3,
        struct TypeDescriptor *a4,
        int a5)
{
  void *result; // eax
  char *CompleteObject; // edi
  int v7; // eax
  struct TypeDescriptor *v8; // esi
  int v9; // ecx
  const struct _s_RTTIBaseClassDescriptor *VITargetTypeInstance; // eax
  _BYTE v11[12]; // [esp+10h] [ebp-28h] BYREF
  void *v12; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  if ( !a1 ) /*0x9832f7*/
    return 0; /*0x9832f9*/
  ms_exc.registration.TryLevel = 0; /*0x983301*/
  CompleteObject = FindCompleteObject(a1); /*0x98330c*/
  v7 = *(_DWORD *)(*(_DWORD *)a1 - 4); /*0x983310*/
  v8 = (struct TypeDescriptor *)((char *)a1 - a2 - CompleteObject); /*0x983316*/
  v9 = *(_DWORD *)(*(_DWORD *)(v7 + 0x10) + 4); /*0x98331b*/
  if ( (v9 & 1) != 0 ) /*0x983324*/
  {
    if ( (v9 & 2) != 0 ) /*0x98333a*/
      VITargetTypeInstance = FindVITargetTypeInstance(v7, CompleteObject, a3, v8, (int)a4); /*0x983343*/
    else
      VITargetTypeInstance = FindMITargetTypeInstance(v7, CompleteObject, a3, v8, (int)a4); /*0x98333c*/
  }
  else
  {
    VITargetTypeInstance = FindSITargetTypeInstance(v7, a3, a4); /*0x983329*/
  }
  if ( VITargetTypeInstance ) /*0x98334d*/
  {
    result = &CompleteObject[PMDtoOffset((_DWORD *)VITargetTypeInstance + 2, CompleteObject)]; /*0x983359*/
    v12 = result; /*0x98335b*/
  }
  else
  {
    result = 0; /*0x983367*/
    v12 = 0; /*0x983369*/
    if ( a5 ) /*0x98336f*/
    {
      std::bad_cast::bad_cast((std::bad_cast *)v11, "Bad dynamic_cast!"); /*0x983379*/
      ThrowException__((DWORD)v11, &_TI2_AVbad_cast_std__); /*0x983387*/
    }
  }
  ms_exc.registration.TryLevel = 0xFFFFFFFE; /*0x98335e*/
  return result; /*0x9832fb*/
}
