void __usercall MagicTarget_ProcessEffects_::DestroyEffect(
        int a1@<edi>,
        void (__thiscall ***a2)(_DWORD, signed int)@<esi>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5)
{
  int *v5; // eax

  if ( a4 == (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1) ) /*0x6a2373*/
    a3 = a4; /*0x6a2375*/
  v5 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x6a237f*/
  BSSimpleList_Remove(v5, (int)a2);             // Verified target-process cleanup: BSSimpleList_Remove unlinks the terminated ActiveEffect node before the target PostRemoveEffect callback and virtual deleting destructor; the loop then advances using the saved predecessor/next node. /*0x6a2383*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x14))(a1, a2); /*0x6a2390*/
  (**a2)(a2, 1); /*0x6a239a*/
  MagicTarget_ProcessEffects_::ActvEffLoop_Next(a3, a5); /*0x6a239b*/
}
