int __thiscall sub_763620(_BYTE *this, int a2, _DWORD *a3)
{
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  signed int v9; // eax
  void *v10; // ecx
  int v11; // edi
  _DWORD v12[2]; // [esp+14h] [ebp-8h] BYREF

  *a3 = 0; /*0x763631*/
  if ( !a2 ) /*0x763638*/
    return 0; /*0x763641*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x20))(a2); /*0x76364c*/
  if ( !v5 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 0x2C))(v5) ) /*0x763659*/
    return 0; /*0x763667*/
  v6 = *(_DWORD *)v5; /*0x76366a*/
  v7 = 0; /*0x76366d*/
  if ( *(this + 0x6E9) ) /*0x76366f*/
  {
    v8 = (*(int (__thiscall **)(int))(v6 + 0x14))(v5); /*0x76367d*/
    v7 = 0x2000; /*0x76367f*/
  }
  else
  {
    v8 = (*(int (__thiscall **)(int))(v6 + 0x28))(v5); /*0x763689*/
  }
  if ( !v8 ) /*0x76368d*/
    return 0; /*0x76368d*/
  v9 = (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)v8 + 0x4C))(v8, 0, v12, 0, v7); /*0x76369f*/
  if ( v9 < 0 ) /*0x7636a3*/
  {
    D3D9_HResultToString(v9); /*0x7636a6*/
    Shared_NoOpVirtual_60D0A0(v10); /*0x7636b1*/
    return 0; /*0x7636c2*/
  }
  v11 = v12[1]; /*0x7636c9*/
  *a3 = v12[0]; /*0x7636cd*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x30))(v5, 1); /*0x7636d9*/
  return v11; /*0x76363a*/
}
