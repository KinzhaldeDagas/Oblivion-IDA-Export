_BYTE *__cdecl sub_607F90(_BYTE *a1, int a2, _BYTE *a3, char a4, char a5)
{
  Actor *v5; // eax
  Actor *v6; // ebp
  int v7; // ebx
  Actor *v8; // edi
  char v9; // bl
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  _BYTE *v13; // eax
  Actor *v14; // eax
  _BYTE *result; // eax
  _BYTE *v16; // ebp
  _BYTE *v17; // edi
  _BYTE *v18; // esi
  int v19; // eax
  int i; // [esp+10h] [ebp-4h]

  v5 = sub_673A50(&ActorProcessManager_ptr, 0);
  v6 = sub_7616D0((ActorList *)v5);
  v7 = 0;
  v8 = v6;
  for ( i = 0; v8; v7 = i )
  {
    if ( !*(_DWORD *)&v8->members.super.super.super.type && !v8->vtbl )
      break;
    if ( v7 >= a2 )
      break;
    v9 = 0;
    v10 = OblivionDynamicCast(
            v8->vtbl,
            0,
            (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
            &ArrowProjectile `RTTI Type Descriptor',
            0);
    v11 = v10;
    if ( !v10 )
      goto LABEL_19;
    v12 = v10[0x17];
    v13 = v12 ? *(_BYTE **)(v12 + 0x28) : 0;
    if ( v13 == a3
      && (_BYTE *)(*(int (__thiscall **)(_DWORD *))(*v11 + 0x170))(v11) == a1
      && (!a5 || *((_BYTE *)v11 + 0x95))
      && (!a4 ? (v11[0x18] = 3) : ((*(void (__thiscall **)(_DWORD *, int))(*v11 + 0x10))(v11, 1), v9 = 1), ++i, v9) )
    {
      if ( v8 != v6 )
        v8 = *(Actor **)&v6->members.super.super.super.type;
    }
    else
    {
LABEL_19:
      v6 = v8;
      v8 = *(Actor **)&v8->members.super.super.super.type;
    }
  }
  v14 = sub_673A50(&ActorProcessManager_ptr, 1);
  result = sub_7616D0((ActorList *)v14);
  v16 = result;
  v17 = result;
  while ( v17 )
  {
    if ( !*((_DWORD *)v17 + 1) && !*(_DWORD *)v17 )
      break;
    if ( v7 >= a2 )
      break;
    result = OblivionDynamicCast(
               *(void **)v17,
               0,
               (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
               &ArrowProjectile `RTTI Type Descriptor',
               0);
    v18 = result;
    if ( result
      && ((v19 = *((_DWORD *)result + 0x17)) == 0 ? (result = 0) : (result = *(_BYTE **)(v19 + 0x28)),
          result == a3
       && (result = (_BYTE *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 0x170))(v18), result == a1)
       && (!a5 || v18[0x95])) )
    {
      result = (_BYTE *)(*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v18 + 0x10))(v18, 1);
      if ( v17 != v16 )
        v17 = *((_BYTE **)v16 + 1);
      ++v7;
    }
    else
    {
      v16 = v17;
      v17 = *((_BYTE **)v17 + 1);
    }
  }
  return result;
}
