int __usercall MagicTarget_ProcessEffects_::DestroyEffect@<eax>(
        int a1@<edi>,
        void (__thiscall ***a2)(_DWORD, signed int)@<esi>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5)
{
  int *v5; // eax

  if ( a4 == (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1) )
    a3 = a4;
  v5 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  BSSimpleList_Remove(v5, (int)a2);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x14))(a1, a2);
  (**a2)(a2, 1);
  return MagicTarget_ProcessEffects_::ActvEffLoop_Next(a3, a5);
}
