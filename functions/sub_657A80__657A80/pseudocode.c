int __userpurge sub_657A80@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  int v7; // eax
  int v8; // ebp
  int result; // eax
  TESObjectREFR **v10; // edi
  TESObjectREFR *v11; // ecx
  BSExtraDataVtbl *Owner; // eax
  _DWORD *v13; // ecx
  int v14; // ebp
  int RandomLargeInteger; // eax
  int v16; // edx
  int *v17; // eax
  int v18; // ecx
  BaseExtraList *v19; // ecx
  int v20; // [esp+14h] [ebp-10h]
  int v21; // [esp+28h] [ebp+4h]

  (*(void (__usercall **)(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x184))(a1, a4, a3, a2);
  sub_5E4400(a5);
  v8 = v7;
  v21 = v7;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0xC0))(a1) )
    return (*(int (__thiscall **)(int, TESObjectREFR *))(*(_DWORD *)a1 + 0x48))(a1, a5);
  if ( sub_5E32D0(a5)
    && !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x36C))(a1)
    && !*(_DWORD *)(a1 + 0x120)
    && !*(_DWORD *)(a1 + 0xB4)
    && !*(_DWORD *)(a1 + 0xB0) )
  {
    sub_6553E0((_DWORD *)a1, a5, COERCE_FLOAT(1));
  }
  if ( sub_5E32D0(a5) && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x36C))(a1) != 4 )
  {
    if ( !*(_DWORD *)(a1 + 0x120) )
    {
      v10 = (TESObjectREFR **)(a1 + 0xB0);
      if ( BSSimpleList_Count((_DWORD *)(a1 + 0xB0)) )
      {
        v11 = *v10;
        *(_DWORD *)(a1 + 0x120) = *v10;
        Owner = TESObjectREFR_GetOwner(v11);
        v13 = (_DWORD *)(a1 + 0xB0);
        if ( Owner )
        {
          BSSimpleList_Remove(v13, *(_DWORD *)(a1 + 0x120));
        }
        else
        {
          v14 = BSSimpleList_Count(v13);
          RandomLargeInteger = GetRandomLargeInteger_(0);
          v16 = RandomLargeInteger % v14;
          if ( RandomLargeInteger % v14 >= v14 )
            v16 = v14;
          v17 = (int *)(a1 + 0xB0);
          if ( v16 > 0 )
          {
            do
            {
              --v16;
              v17 = (int *)v17[1];
            }
            while ( v16 );
          }
          v20 = *v17;
          *(_DWORD *)(a1 + 0x120) = *v17;
          BSSimpleList_Remove((_DWORD *)(a1 + 0xB0), v20);
          v8 = v21;
        }
      }
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0xD0))(a1, *(_DWORD *)(a1 + 0x120));
    if ( *(_DWORD *)(a1 + 0x120) )
      (*(void (__thiscall **)(int, TESObjectREFR *, _DWORD))(*(_DWORD *)a1 + 0x51C))(a1, a5, 0);
    v18 = *(_DWORD *)(a1 + 0x34);
    if ( v18 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 0x2C))(v18) )
      {
        a4 = 0.0;
        *(_DWORD *)(a1 + 0x120) = 0;
        sub_6FAEE0((Unk128 *)(a1 + 0x128), 0.0);
        *(_BYTE *)(a1 + 0x136) = 0;
        *(float *)(a1 + 0x128) = Vector3_InitValue_;
        *(float *)(a1 + 0x12C) = *(&Vector3_InitValue_ + 1);
        *(float *)(a1 + 0x130) = dword_B3F9B0;
      }
    }
  }
  if ( sub_5E32D0(a5) && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x36C))(a1) == 4
    || !*(_DWORD *)(a1 + 0x120) && !*(_DWORD *)(a1 + 0xB4) && !*(_DWORD *)(a1 + 0xB0) )
  {
    v19 = 0;
    if ( v8 )
    {
      if ( *(_DWORD *)v8 )
        v19 = **(BaseExtraList ***)v8;
      Actor_EquipIngredient_((PlayerCharacter *)a5, a2, a3, a4, *(TESForm **)(v8 + 8), v19, 1);
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0xBC))(a1, 1);
    BSSimpleList_Clear((_DWORD *)(a1 + 0xB0));
  }
  (*(void (__thiscall **)(int, TESObjectREFR *))(*(_DWORD *)a1 + 0x48))(a1, a5);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x2C0))(a1);
  if ( (result & 0x400) != 0 )
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 0x2C4))(a1, 0x400, 0);
  return result;
}
