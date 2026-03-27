void __usercall sub_620E80(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
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

  v5 = *(_DWORD *)(a1 + 0x6C) == 8;
  v6 = *(_DWORD **)(a1 + 0x3C);
  v25 = v6[0x16];
  if ( !v5 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 0x25C))(v6) )
    {
      v5 = *(_DWORD *)(a1 + 0x70) == 0xD;
      *(_BYTE *)(a1 + 0x4D) = 1;
      if ( !v5 )
      {
        __asm
        {
          fld     dword ptr ds:0A30634h
          fstp    dword ptr [esi+188h]
        }
        *(float *)(a1 + 0x188) = _ET1;
      }
      *(_DWORD *)(a1 + 0x70) = 0xD;
      sub_6160B0((Actor **)a1);
      v8 = *(_DWORD *)(a1 + 0x70);
      if ( v8 == 2 || v8 == 4 )
        sub_61FE90((float *)a1, a2, a4);
      else
        sub_61FEF0((float *)a1, a2, a4);
      return;
    }
    v9 = *(_DWORD *)(a1 + 0x3C);
    *(_BYTE *)(a1 + 0x4F) = 0;
    sub_619920(a1, 8);
    v10 = *(_DWORD **)(a1 + 0x3C);
    v11 = (void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v10 + 0x308);
    v12 = sub_6135F0(a1);
    (*v11)(v10, v12, 2, 0);
    v13 = *(_DWORD **)(a1 + 0x3C);
    v14 = (void (__thiscall **)(_DWORD *, int, int, int, _DWORD, _DWORD))(*v13 + 0x318);
    v15 = sub_6135F0(a1);
    (*v14)(v13, v15, 1, 1, 0, 0);
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x334))(v9, 1) )
      return;
    v16 = sub_5E0380(*(Actor **)(a1 + 0x3C));
    v17 = OblivionDynamicCast(
            v16,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
            &FleePackage `RTTI Type Descriptor',
            0);
    if ( v17 )
    {
      for ( i = *(_DWORD *)(a1 + 0x40); i; i = *(_DWORD *)(i + 4) )
      {
        if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i )
          break;
        a4 = sub_626C90(v17, **(_DWORD **)i);
      }
    }
    if ( !Actor_IsCreature(*(Actor **)(a1 + 0x3C)) )
      sub_5E6D70(*(_DWORD **)(a1 + 0x3C), 0);
  }
  if ( Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)) )
    sub_5F4AE0(*(Actor **)(a1 + 0x3C), a2, a3, a4, 0);
  if ( *(_DWORD *)(a1 + 0x70) == 0xC && !Actor_IsSwimming(*(_DWORD **)(a1 + 0x3C)) )
  {
    v19 = sub_5E0380(*(Actor **)(a1 + 0x3C));
    if ( OblivionDynamicCast(
           v19,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
           &FleePackage `RTTI Type Descriptor',
           0) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x178))(
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        0);
    }
    if ( *(_DWORD *)(a1 + 0x70) != 0xD )
    {
      __asm
      {
        fld     dword ptr ds:0A30634h
        fstp    dword ptr [esi+188h]
      }
      *(float *)(a1 + 0x188) = _ET1;
    }
    *(_DWORD *)(a1 + 0x70) = 0xD;
    sub_619920(a1, 0);
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x184))(v25) == a1 )
  {
    v5 = *(_DWORD *)(a1 + 0x70) == 0xD;
    *(_BYTE *)(a1 + 0x4D) = 1;
    if ( !v5 )
    {
      __asm
      {
        fld     dword ptr ds:0A30634h
        fstp    dword ptr [esi+188h]
      }
      *(float *)(a1 + 0x188) = _ET1;
    }
    *(_DWORD *)(a1 + 0x70) = 0xD;
    sub_61D320(a1);
  }
  else
  {
    v22 = sub_5E0380(*(Actor **)(a1 + 0x3C));
    if ( OblivionDynamicCast(
           v22,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
           &FleePackage `RTTI Type Descriptor',
           0) )
    {
      __asm
      {
        fld     dword ptr [eax+4Ch]
        fld     dword ptr ds:0B36D50h
        fcompp
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 0x41, 0) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x178))(
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
          0);
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x340))(*(_DWORD *)(a1 + 0x3C), 0);
      }
    }
  }
}
