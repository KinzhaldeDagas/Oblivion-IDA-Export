// positive sp value has been detected, the output may be wrong!
int __usercall MagicTarget_AddEffect_::AddEffectToTarget@<eax>(
        char a1@<bpl>,
        int a2@<edi>,
        int a3@<esi>,
        double a4@<st1>,
        int a5,
        int a6,
        int a7)
{
  _DWORD *v7; // eax
  int v9; // [esp-4h] [ebp-14h]
  int v10; // [esp+0h] [ebp-10h]
  int v11; // [esp+4h] [ebp-Ch]
  int v12; // [esp+8h] [ebp-8h]
  int (__cdecl *v13)(int, _DWORD); // [esp+Ch] [ebp-4h]

  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) )
    return MagicTarget_AddEffect_::DestroyClone_Return_0((void (__thiscall ***)(_DWORD, signed int))a3, a5, a6, a7);
  v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  BSSimpleList_InsertSorted(v7, a3, (int)MagicTarget_ActiveEffectComparisonFunc, v9, v10, v11, v12, v13);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x10))(a2, a3);
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 0xC) + 0x1C) + 0x98) == 0x504D4156 )
    ActiveEffect_Base_ProcessEffect((ActiveEffect *)a3, a1, a4, 0.0, 0.0);
  return ((int (*)(void))MagicTarget_AddEffect_::PrintEffectAdded_DebugMsg)();
}
