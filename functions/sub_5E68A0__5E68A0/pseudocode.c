double __userpurge sub_5E68A0@<st0>(_DWORD *a1@<ecx>, int a2@<edi>, float a3, TESObjectREFR *a4)
{
  int v5; // ecx
  int v7; // eax
  float retaddr; // [esp+10h] [ebp+0h]

  v5 = a1[0x16];
  if ( !v5 || (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5) || !a1[0x16] )
    return 0.0;
  v7 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x174))(a1, a2);
  retaddr = a4->vtbl->GetPos(a4)[2] - *(float *)(v7 + 8);
  (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]);
  if ( a4->vtbl->IsDead(a4, 0) )
    return (float)(a3 * dbl_A2FAA0);
  return a3;
}
