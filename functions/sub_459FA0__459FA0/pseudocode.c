float *__stdcall sub_459FA0(void *a1)
{
  _DWORD *v1; // eax
  void *v2; // eax
  float *result; // eax
  float v4; // [esp+8h] [ebp+4h]

  if ( !a1 )
    return 0;
  v1 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &Character `RTTI Type Descriptor',
         0);
  if ( !v1 )
    return 0;
  if ( !v1[0x16] )
    return 0;
  v2 = (void *)(*(int (__thiscall **)(_DWORD *))(*v1 + 0x124))(v1);
  v4 = sub_6A1F30(v2, 0x504D4156);
  if ( 0.0 == v4 )
    return 0;
  result = (float *)FormHeapAlloc(4u);
  if ( result )
  {
    *result = 0.0;
    *result = v4;
  }
  else
  {
    *(float *)0 = v4;
    return 0;
  }
  return result;
}
