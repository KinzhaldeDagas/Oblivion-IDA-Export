int __userpurge sub_61F8F0@<eax>(
        int a1@<ecx>,
        double a2@<st1>,
        int a3@<ebp>,
        char a4,
        float a5,
        float a6,
        int a7,
        int a8,
        char a9,
        bool *a10,
        _BYTE *a11)
{
  int v13; // edi
  bool *v14; // ebp
  int v15; // ebx
  int v16; // ebp
  int *v17; // eax
  bool v18; // al
  bool v19; // bl
  _DWORD *v20; // eax
  int result; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  float FatigueFraction; // [esp+4h] [ebp-24h]
  size_t v25; // [esp+8h] [ebp-20h]
  size_t v26; // [esp+8h] [ebp-20h]
  char v27; // [esp+Ch] [ebp-1Ch]
  char v28; // [esp+10h] [ebp-18h]
  Actor *v30; // [esp+24h] [ebp-4h]

  *a11 = 0;
  v13 = 0xFF;
  if ( !sub_6135F0(a1) )
    return v13;
  if ( Actor_IsNPC(*(Actor **)(a1 + 0x3C)) && Actor_IsSwimming(*(_DWORD **)(a1 + 0x3C)) )
  {
    v14 = a10;
    *a10 = 0;
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 0x3C);
    v16 = sub_6135F0(a1);
    v30 = *(Actor **)(a1 + 0x3C);
    v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x25C))(v15);
    v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x19C))(v16);
    FatigueFraction = Actor_GetFatigueFraction(v30, (int)v30, 0xFF);
    v17 = sub_5E0F50(v30);
    v14 = a10;
    *a10 = sub_546930(v17, FatigueFraction, a9, v27, v28);
  }
  if ( *(_DWORD *)(a1 + 0x6C) == 4 )
  {
    a6 = fCombatStepAdvanceDistance + a6;
    if ( GetRandomLargeInteger_(0) % 0x64 < 2 )
      a6 = a6 + fCostant_100;
  }
  v18 = sub_613440((void **)a1, a5, a6, 0);
  v19 = v18;
  if ( !a4 )
  {
    if ( !*v14 )
    {
      if ( v18 )
      {
        HIDWORD(v25) = off_B241C4;
        LODWORD(v25) = 0;
        v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C));
        return (sub_4727E0(v20, 0xFF, v25, 0, a3) != 0x6C) + 0x14;
      }
      return v13;
    }
    return sub_61E0F0(a1, a5, a2, a5, a5, a6, a7, a8, 0);
  }
  v22 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C));
  if ( ActorAnimData_GetSomethingFromField8Value(v22, 3) == 2 )
  {
    if ( *v14 )
      return sub_61E0F0(a1, a5, a2, a5, a5, a6, a7, a8, 0);
    if ( v19 )
    {
      HIDWORD(v26) = off_A70EA4;
      LODWORD(v26) = 3;
      v23 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C));
      result = 0x15 - (sub_472720(v23, a1, v26, 0, a3) != 0xFFFFFFFF);
      *a11 = 1;
      return result;
    }
  }
  return v13;
}
