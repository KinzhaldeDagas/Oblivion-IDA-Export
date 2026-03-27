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

  if ( !a1 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  CompleteObject = FindCompleteObject(a1);
  v7 = *(_DWORD *)(*(_DWORD *)a1 - 4);
  v8 = (struct TypeDescriptor *)((char *)a1 - a2 - CompleteObject);
  v9 = *(_DWORD *)(*(_DWORD *)(v7 + 0x10) + 4);
  if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 2) != 0 )
      VITargetTypeInstance = FindVITargetTypeInstance(v7, CompleteObject, a3, v8, (int)a4);
    else
      VITargetTypeInstance = FindMITargetTypeInstance(v7, CompleteObject, a3, v8, (int)a4);
  }
  else
  {
    VITargetTypeInstance = FindSITargetTypeInstance(v7, a3, a4);
  }
  if ( VITargetTypeInstance )
  {
    result = &CompleteObject[PMDtoOffset((_DWORD *)VITargetTypeInstance + 2, CompleteObject)];
    v12 = result;
  }
  else
  {
    result = 0;
    v12 = 0;
    if ( a5 )
    {
      std::bad_cast::bad_cast((std::bad_cast *)v11, "Bad dynamic_cast!");
      ThrowException__((int)v11, &_TI2_AVbad_cast_std__);
    }
  }
  ms_exc.registration.TryLevel = 0xFFFFFFFE;
  return result;
}
