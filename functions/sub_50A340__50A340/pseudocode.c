char __cdecl sub_50A340(int a1, int a2, unsigned int *a3, int a4, int a5, int a6, double *a7)
{
  int v7; // eax
  unsigned __int8 *v8; // edi

  *a7 = 0.0;
  if ( !a3 )
    return 1;
  if ( !(*(unsigned __int8 (__thiscall **)(unsigned int *))(*a3 + 0x190))(a3) )
    return 1;
  if ( !TESDataHandler_IsFormIDCreated_(a3[3]) )
    return 1;
  v7 = (*(int (__thiscall **)(unsigned int *))(*a3 + 0x170))(a3);
  if ( !TESDataHandler_IsFormIDCreated_(*(_DWORD *)(v7 + 0xC)) )
    return 1;
  v8 = (unsigned __int8 *)(*(int (__thiscall **)(unsigned int *))(*a3 + 0x170))(a3);
  (*(void (__thiscall **)(unsigned int *, int))(*a3 + 0x10))(a3, 1);
  sub_449D20((char *)TESDataHandler, v8);
  if ( v8 )
    (*(void (__thiscall **)(unsigned __int8 *, int))(*(_DWORD *)v8 + 0x10))(v8, 1);
  return 0;
}
