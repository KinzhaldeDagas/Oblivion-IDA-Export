double __usercall sub_620E80@<st0>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double result@<st0>)
{
  bool v5; // zf
  _DWORD *v6; // ecx
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // ebp
  void (__thiscall **v11)(_DWORD *, int, int, _DWORD); // edi
  int v12; // eax
  _DWORD *v13; // ebp
  void (__thiscall **v14)(_DWORD *, int, int, int, _DWORD, _DWORD); // edi
  int v15; // eax
  TESPackage *v16; // eax
  _DWORD *v17; // ebx
  int i; // edi
  TESPackage *v19; // eax
  TESPackage *v22; // eax
  int v25; // [esp+28h] [ebp-4h]

  v5 = *(_DWORD *)(a1 + 0x6C) == 8; /*0x620e85*/
  v6 = *(_DWORD **)(a1 + 0x3C); /*0x620e89*/
  v25 = v6[0x16]; /*0x620e90*/
  if ( !v5 ) /*0x620e94*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 0x25C))(v6) ) /*0x620ea2*/
    {
      v5 = *(_DWORD *)(a1 + 0x70) == 0xD; /*0x620ead*/
      *(_BYTE *)(a1 + 0x4D) = 1; /*0x620eb0*/
      if ( !v5 ) /*0x620eb4*/
      {
        __asm /*0x620eb6*/
        {
          fld     dword ptr ds:0A30634h
          fstp    dword ptr [esi+188h]
        }
        *(float *)(a1 + 0x188) = _ET1; /*0x620ebc*/
      }
      *(_DWORD *)(a1 + 0x70) = 0xD; /*0x620ec4*/
      sub_6160B0((Actor **)a1); /*0x620ec7*/
      v8 = *(_DWORD *)(a1 + 0x70); /*0x620ecc*/
      if ( v8 == 2 || v8 == 4 ) /*0x620ed7*/
        sub_61FE90((float *)a1, a2, result); /*0x620ee1*/
      else
        sub_61FEF0((float *)a1, a2, result); /*0x620eee*/
      return result; /*0x620ee1*/
    }
    v9 = *(_DWORD *)(a1 + 0x3C); /*0x620ef3*/
    *(_BYTE *)(a1 + 0x4F) = 0; /*0x620efb*/
    sub_619920(a1, 8); /*0x620eff*/
    v10 = *(_DWORD **)(a1 + 0x3C); /*0x620f04*/
    v11 = (void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v10 + 0x308); /*0x620f10*/
    v12 = CombatController_GetCurrentTarget(a1); /*0x620f16*/
    (*v11)(v10, v12, 2, 0); /*0x620f20*/
    v13 = *(_DWORD **)(a1 + 0x3C); /*0x620f22*/
    v14 = (void (__thiscall **)(_DWORD *, int, int, int, _DWORD, _DWORD))(*v13 + 0x318); /*0x620f32*/
    v15 = CombatController_GetCurrentTarget(a1); /*0x620f38*/
    (*v14)(v13, v15, 1, 1, 0, 0); /*0x620f42*/
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x334))(v9, 1) ) /*0x620f55*/
      return result; /*0x620f55*/
    v16 = Actor::GetCurrentPackage(*(Actor **)(a1 + 0x3C)); /*0x620f6c*/
    v17 = OblivionDynamicCast( /*0x620f77*/
            v16,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
            &FleePackage `RTTI Type Descriptor',
            0);
    if ( v17 ) /*0x620f7e*/
    {
      for ( i = *(_DWORD *)(a1 + 0x40); i; i = *(_DWORD *)(i + 4) ) /*0x620f85*/
      {
        if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i ) /*0x620f8d*/
          break; /*0x620f90*/
        sub_626C90(v17, **(_DWORD **)i); /*0x620f99*/
      }
    }
    if ( !Actor_IsCreature(*(Actor **)(a1 + 0x3C)) ) /*0x620fa8*/
      sub_5E6D70(*(_DWORD **)(a1 + 0x3C), 0); /*0x620fb6*/
  }
  if ( Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)) ) /*0x620fbe*/
    Actor_UpdateBlockingState(*(Actor **)(a1 + 0x3C), a2, a3, result, 0); /*0x620fcc*/
  if ( *(_DWORD *)(a1 + 0x70) == 0xC && !Actor_IsSwimming(*(_DWORD **)(a1 + 0x3C)) ) /*0x620fdf*/
  {
    v19 = Actor::GetCurrentPackage(*(Actor **)(a1 + 0x3C)); /*0x620ff9*/
    if ( OblivionDynamicCast( /*0x620fff*/
           v19,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
           &FleePackage `RTTI Type Descriptor',
           0) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x178))( /*0x62101b*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        0);
    }
    if ( *(_DWORD *)(a1 + 0x70) != 0xD ) /*0x621020*/
    {
      __asm /*0x621022*/
      {
        fld     dword ptr ds:0A30634h
        fstp    dword ptr [esi+188h]
      }
      *(float *)(a1 + 0x188) = _ET1; /*0x621028*/
    }
    *(_DWORD *)(a1 + 0x70) = 0xD; /*0x621032*/
    sub_619920(a1, 0); /*0x621035*/
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x184))(v25) == a1 ) /*0x62104a*/
  {
    v5 = *(_DWORD *)(a1 + 0x70) == 0xD; /*0x62104c*/
    *(_BYTE *)(a1 + 0x4D) = 1; /*0x62104f*/
    if ( !v5 ) /*0x621053*/
    {
      __asm /*0x621055*/
      {
        fld     dword ptr ds:0A30634h
        fstp    dword ptr [esi+188h]
      }
      *(float *)(a1 + 0x188) = _ET1; /*0x62105b*/
    }
    *(_DWORD *)(a1 + 0x70) = 0xD; /*0x621061*/
    sub_61D320(a1); /*0x62106c*/
  }
  else
  {
    v22 = Actor::GetCurrentPackage(*(Actor **)(a1 + 0x3C)); /*0x621082*/
    if ( OblivionDynamicCast( /*0x621088*/
           v22,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
           &FleePackage `RTTI Type Descriptor',
           0) )
    {
      __asm /*0x621094*/
      {
        fld     dword ptr [eax+4Ch]
        fld     dword ptr ds:0B36D50h
        fcompp
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 0x41, 0) ) /*0x6210a4*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x178))( /*0x6210b6*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
          0);
        return ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 0x3C) + 0x340))( /*0x6210c7*/
                 *(_DWORD *)(a1 + 0x3C),
                 0);
      }
    }
  }
  return result; /*0x620ed9*/
}
