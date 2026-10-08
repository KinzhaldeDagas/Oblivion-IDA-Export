// ActiveEffect process Remove call site: vfunc +0x3C, then bRemoved=1 and owner-list cleanup.
void __userpurge ActiveEffect_Base_ProcessEffect_::RemoveEffect(int a1@<esi>, int a2)
{
  int *v2; // ecx

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x3C))(a1);// Verified removal hook: calls ActiveEffect vtable slot +0x3C, then sets bRemoved=1 and removes associated target-side effect state before returning. /*0x68e9f7*/
  v2 = *(int **)(a1 + 0x2C); /*0x68e9f9*/
  *(_BYTE *)(a1 + 0x12) = 1;                    // Verified: RemoveEffect sets bRemoved=true after calling vtable slot +0x3C and before removing the effect from its parent data list. /*0x68e9fe*/
  if ( v2 ) /*0x68ea02*/
    sub_6B7240(v2); /*0x68ea04*/
  ActiveEffect_Base_ProcessEffect_::Done(a2); /*0x68ea05*/
}
