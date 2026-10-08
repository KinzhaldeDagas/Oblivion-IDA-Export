int __userpurge sub_657A80@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  Actor *v7; // eax
  Actor *v8; // ebp
  int result; // eax
  TESObjectREFR **v10; // edi
  TESObjectREFR *v11; // ecx
  TESForm *Owner; // eax
  int *v13; // ecx
  int v14; // ebp
  int v15; // eax
  int v16; // edx
  int *v17; // eax
  int v18; // ecx
  BaseExtraList *InitializeComponent; // ecx
  int v20; // [esp+14h] [ebp-10h]
  Actor *v21; // [esp+28h] [ebp+4h]

  (*(void (__usercall **)(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x184))(a1, a4, a3, a2); /*0x657a8d*/
  sub_5E4400(a5); /*0x657a95*/
  v8 = v7; /*0x657a9a*/
  v21 = v7; /*0x657aa6*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0xC0))(a1) ) /*0x657aaa*/
    return (*(int (__thiscall **)(int, TESObjectREFR *))(*(_DWORD *)a1 + 0x48))(a1, a5); /*0x657ab8*/
  if ( Actor::HasNPCBaseForm((Actor *)a5) /*0x657aeb*/
    && !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x36C))(a1)
    && !*(_DWORD *)(a1 + 0x120)
    && !*(_DWORD *)(a1 + 0xB4)
    && !*(_DWORD *)(a1 + 0xB0) )
  {
    sub_6553E0((_DWORD *)a1, a5, COERCE_FLOAT(1)); /*0x657af8*/
  }
  if ( Actor::HasNPCBaseForm((Actor *)a5) && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x36C))(a1) != 4 ) /*0x657b1b*/
  {
    if ( !*(_DWORD *)(a1 + 0x120) ) /*0x657b21*/
    {
      v10 = (TESObjectREFR **)(a1 + 0xB0); /*0x657b2b*/
      if ( BSSimpleList_Count((_DWORD *)(a1 + 0xB0)) ) /*0x657b33*/
      {
        v11 = *v10; /*0x657b3c*/
        *(_DWORD *)(a1 + 0x120) = *v10; /*0x657b3e*/
        Owner = TESObjectREFR_GetOwner(v11); /*0x657b44*/
        v13 = (int *)(a1 + 0xB0); /*0x657b4b*/
        if ( Owner ) /*0x657b4d*/
        {
          BSSimpleList_Remove(v13, *(_DWORD *)(a1 + 0x120)); /*0x657b56*/
        }
        else
        {
          v14 = BSSimpleList_Count(v13); /*0x657b64*/
          v15 = Game_RandomLargeInteger(0); /*0x657b66*/
          v16 = v15 % v14; /*0x657b6c*/
          if ( v15 % v14 >= v14 ) /*0x657b73*/
            v16 = v14; /*0x657b75*/
          v17 = (int *)(a1 + 0xB0); /*0x657b79*/
          if ( v16 > 0 ) /*0x657b7b*/
          {
            do /*0x657b86*/
            {
              --v16; /*0x657b80*/
              v17 = (int *)v17[1]; /*0x657b83*/
            }
            while ( v16 ); /*0x657b86*/
          }
          v20 = *v17; /*0x657b8a*/
          *(_DWORD *)(a1 + 0x120) = *v17; /*0x657b8d*/
          BSSimpleList_Remove((int *)(a1 + 0xB0), v20); /*0x657b93*/
          v8 = v21; /*0x657b98*/
        }
      }
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0xD0))(a1, *(_DWORD *)(a1 + 0x120)); /*0x657bad*/
    if ( *(_DWORD *)(a1 + 0x120) ) /*0x657baf*/
      (*(void (__thiscall **)(int, TESObjectREFR *, _DWORD))(*(_DWORD *)a1 + 0x51C))(a1, a5, 0); /*0x657bc5*/
    v18 = *(_DWORD *)(a1 + 0x34); /*0x657bc7*/
    if ( v18 ) /*0x657bcc*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 0x2C))(v18) ) /*0x657bd3*/
      {
        a4 = 0.0; /*0x657bd9*/
        *(_DWORD *)(a1 + 0x120) = 0; /*0x657be7*/
        sub_6FAEE0((Unk128 *)(a1 + 0x128), 0.0); /*0x657bf1*/
        *(_BYTE *)(a1 + 0x136) = 0; /*0x657bf6*/
        *(float *)(a1 + 0x128) = g_zeroNiPoint3.x; /*0x657c02*/
        *(float *)(a1 + 0x12C) = g_zeroNiPoint3.y; /*0x657c0a*/
        *(float *)(a1 + 0x130) = g_zeroNiPoint3.z; /*0x657c13*/
      }
    }
  }
  if ( Actor::HasNPCBaseForm((Actor *)a5) && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x36C))(a1) == 4 /*0x657c45*/
    || !*(_DWORD *)(a1 + 0x120) && !*(_DWORD *)(a1 + 0xB4) && !*(_DWORD *)(a1 + 0xB0) )
  {
    InitializeComponent = 0; /*0x657c4e*/
    if ( v8 ) /*0x657c52*/
    {
      if ( v8->vtbl ) /*0x657c54*/
        InitializeComponent = (BaseExtraList *)v8->vtbl->super.super.super.super.InitializeComponent; /*0x657c5b*/
      Actor_EquipIngredient_( /*0x657c66*/
        (PlayerCharacter *)a5,
        a2,
        a3,
        a4,
        (TESForm *)v8->members.super.super.super.flags,
        InitializeComponent,
        1);
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0xBC))(a1, 1); /*0x657c77*/
    BSSimpleList_Clear((_DWORD *)(a1 + 0xB0)); /*0x657c7f*/
  }
  (*(void (__thiscall **)(int, TESObjectREFR *))(*(_DWORD *)a1 + 0x48))(a1, a5); /*0x657c8c*/
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x2C0))(a1); /*0x657c98*/
  if ( (result & 0x400) != 0 ) /*0x657c9e*/
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 0x2C4))(a1, 0x400, 0); /*0x657cb1*/
  return result; /*0x657aba*/
}
