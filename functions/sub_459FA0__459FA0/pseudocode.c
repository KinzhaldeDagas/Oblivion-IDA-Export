float *__stdcall sub_459FA0(void *a1)
{
  _DWORD *v1; // eax
  void *v2; // eax
  float *result; // eax
  float v4; // [esp+8h] [ebp+4h]

  if ( !a1 ) /*0x459fa9*/
    return 0; /*0x459fa9*/
  v1 = OblivionDynamicCast( /*0x459fb8*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &Character `RTTI Type Descriptor',
         0);
  if ( !v1 ) /*0x459fc2*/
    return 0; /*0x459fc2*/
  if ( !v1[0x16] ) /*0x459fc4*/
    return 0; /*0x459fc4*/
  v2 = (void *)(*(int (__thiscall **)(_DWORD *))(*v1 + 0x124))(v1); /*0x459fd8*/
  v4 = sub_6A1F30(v2, 0x504D4156); /*0x459fe1*/
  if ( 0.0 == v4 ) /*0x459ff0*/
    return 0; /*0x45a01a*/
  result = (float *)FormHeapAlloc(4u); /*0x459ff4*/
  if ( result ) /*0x459ffe*/
  {
    *result = 0.0; /*0x45a003*/
    *result = v4; /*0x45a009*/
  }
  else
  {
    *(float *)0 = v4; /*0x45a014*/
    return 0; /*0x45a012*/
  }
  return result; /*0x45a016*/
}
