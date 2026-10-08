_DWORD *__cdecl sub_607E90(int a1, char a2)
{
  Actor *ListHead; // eax
  Actor *v3; // edi
  Actor *v4; // esi
  _DWORD *v5; // eax
  int v6; // ecx
  Actor *v7; // eax
  _DWORD *result; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // esi
  int v11; // ecx

  ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x607e99*/
  v3 = ActorList_ReturnHead((ActorList *)ListHead); /*0x607ea5*/
  v4 = v3; /*0x607ea9*/
  while ( v4 ) /*0x607eab*/
  {
    if ( !*(_DWORD *)&v4->members.super.super.super.type && !v4->vtbl ) /*0x607ebb*/
      break; /*0x607ebb*/
    v5 = OblivionDynamicCast( /*0x607ece*/
           v4->vtbl,
           0,
           (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
           &ArrowProjectile `RTTI Type Descriptor',
           0);
    if ( v5 ) /*0x607ed8*/
    {
      v6 = v5[0x17]; /*0x607eda*/
      if ( v6 ) /*0x607edf*/
      {
        if ( *(_DWORD *)(v6 + 0x2C) == a1 ) /*0x607ee8*/
        {
          if ( a2 ) /*0x607eec*/
          {
            (*(void (__thiscall **)(_DWORD *, int))(*v5 + 0x10))(v5, 1); /*0x607ef7*/
            if ( v4 != v3 ) /*0x607efb*/
              v4 = *(Actor **)&v3->members.super.super.super.type; /*0x607efd*/
            continue; /*0x607f00*/
          }
          v5[0x18] = 3; /*0x607f02*/
        }
      }
    }
    v3 = v4; /*0x607f09*/
    v4 = *(Actor **)&v4->members.super.super.super.type; /*0x607f0b*/
  }
  v7 = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 1); /*0x607f13*/
  result = ActorList_ReturnHead((ActorList *)v7); /*0x607f21*/
  v9 = result; /*0x607f26*/
  v10 = result; /*0x607f2a*/
  while ( v10 ) /*0x607f2c*/
  {
    if ( !v10[1] && !*v10 ) /*0x607f36*/
      break; /*0x607f39*/
    result = OblivionDynamicCast( /*0x607f4c*/
               (void *)*v10,
               0,
               (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
               &ArrowProjectile `RTTI Type Descriptor',
               0);
    if ( result && (v11 = result[0x17]) != 0 && *(_DWORD *)(v11 + 0x2C) == a1 ) /*0x607f66*/
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*result + 0x10))(result, 1); /*0x607f71*/
      if ( v10 != v9 ) /*0x607f75*/
        v10 = (_DWORD *)v9[1]; /*0x607f77*/
    }
    else
    {
      v9 = v10; /*0x607f7c*/
      v10 = (_DWORD *)v10[1]; /*0x607f7e*/
    }
  }
  return result; /*0x607f85*/
}
