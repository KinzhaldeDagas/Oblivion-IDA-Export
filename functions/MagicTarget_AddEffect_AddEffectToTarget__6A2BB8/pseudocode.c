// positive sp value has been detected, the output may be wrong!
int __usercall MagicTarget_AddEffect_::AddEffectToTarget@<eax>(
        char a1@<bpl>,
        int a2@<edi>,
        int a3@<esi>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7,
        int a8)
{
  _DWORD *v8; // eax
  int v10; // [esp-4h] [ebp-14h]
  int v11; // [esp+0h] [ebp-10h]
  int v12; // [esp+4h] [ebp-Ch]
  int v13; // [esp+8h] [ebp-8h]
  int (__cdecl *v14)(int, _DWORD); // [esp+Ch] [ebp-4h]

  if ( !(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a2 + 8))(a2, a5, a4) ) /*0x6a2bbf*/
    return MagicTarget_AddEffect_::DestroyClone_Return_0((void (__thiscall ***)(_DWORD, signed int))a3, a6, a7, a8); /*0x6a2bc3*/
  v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2); /*0x6a2bd6*/
  BSSimpleList_InsertSorted(v8, a3, (int)MagicTarget_ActiveEffectComparisonFunc, v10, v11, v12, v13, v14); /*0x6a2bda*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x10))(a2, a3); /*0x6a2be7*/
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 0xC) + 0x1C) + 0x98) == 0x504D4156 ) /*0x6a2bf9*/
    ActiveEffect_Base_ProcessEffect((ActiveEffect *)a3, a1, a4, 0.0, 0.0);// Verified ActiveEffectList is Oblivion's existing EffectNode type: the getter returns the embedded two-word head, sorted insertion and removal use BSSimpleList helpers, and update/removal loops traverse data then next. Fallout independently identifies its homolog as BSSimpleList<ActiveEffect *> (Probable family name). /*0x6a2c03*/
  return ((int (*)(void))MagicTarget_AddEffect_::PrintEffectAdded_DebugMsg)();
}
