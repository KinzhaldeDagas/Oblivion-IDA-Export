double __userpurge sub_5E68A0@<st0>(_DWORD *a1@<ecx>, int a2@<edi>, float a3, TESObjectREFR *a4)
{
  int v5; // ecx
  int v7; // eax
  float retaddr; // [esp+10h] [ebp+0h]

  v5 = a1[0x16]; /*0x5e68a6*/
  if ( !v5 || (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5) || !a1[0x16] ) /*0x5e68b8*/
    return 0.0; /*0x5e68bd*/
  v7 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x174))(a1, a2); /*0x5e68d2*/
  retaddr = a4->vtbl->GetPos(a4)[2] - *(float *)(v7 + 8); /*0x5e68fe*/
  (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0x16] + 0x4CC))(a1[0x16]); /*0x5e6983*/
  if ( a4->vtbl->IsDead(a4, 0) ) /*0x5e69bb*/
    return (float)(a3 * dbl_A2FAA0); /*0x5e69cd*/
  return a3; /*0x5e68bf*/
}
