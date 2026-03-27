_DWORD *__cdecl sub_607E90(int a1, char a2)
{
  Actor *v2; // eax
  Actor *v3; // edi
  Actor *v4; // esi
  _DWORD *v5; // eax
  int v6; // ecx
  Actor *v7; // eax
  _DWORD *result; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // esi
  int v11; // ecx

  v2 = sub_673A50(&ActorProcessManager_ptr, 0);
  v3 = sub_7616D0((ActorList *)v2);
  v4 = v3;
  while ( v4 )
  {
    if ( !*(_DWORD *)&v4->members.super.super.super.type && !v4->vtbl )
      break;
    v5 = OblivionDynamicCast(
           v4->vtbl,
           0,
           (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
           &ArrowProjectile `RTTI Type Descriptor',
           0);
    if ( v5 )
    {
      v6 = v5[0x17];
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 0x2C) == a1 )
        {
          if ( a2 )
          {
            (*(void (__thiscall **)(_DWORD *, int))(*v5 + 0x10))(v5, 1);
            if ( v4 != v3 )
              v4 = *(Actor **)&v3->members.super.super.super.type;
            continue;
          }
          v5[0x18] = 3;
        }
      }
    }
    v3 = v4;
    v4 = *(Actor **)&v4->members.super.super.super.type;
  }
  v7 = sub_673A50(&ActorProcessManager_ptr, 1);
  result = sub_7616D0((ActorList *)v7);
  v9 = result;
  v10 = result;
  while ( v10 )
  {
    if ( !v10[1] && !*v10 )
      break;
    result = OblivionDynamicCast(
               (void *)*v10,
               0,
               (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
               &ArrowProjectile `RTTI Type Descriptor',
               0);
    if ( result && (v11 = result[0x17]) != 0 && *(_DWORD *)(v11 + 0x2C) == a1 )
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*result + 0x10))(result, 1);
      if ( v10 != v9 )
        v10 = (_DWORD *)v9[1];
    }
    else
    {
      v9 = v10;
      v10 = (_DWORD *)v10[1];
    }
  }
  return result;
}
