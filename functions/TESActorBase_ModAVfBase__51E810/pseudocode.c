// TESActorBase_ModAVfBase reads current float base AV via vtbl +0x12C, adds the float delta, then calls vtbl +0x130 SetAVfBase. Decoded for AVU risk tracking; not hooked in current pass.
int __userpurge TESActorBase_ModAVfBase@<eax>(int *a1@<ecx>, double a2@<st0>, int a3, float a4)
{
  int v6; // edi
  float v8; // [esp+18h] [ebp+4h]

  v6 = *a1; /*0x51e819*/
  (*(void (__thiscall **)(int *, int))(*a1 + 0x12C))(a1, a3); /*0x51e822*/
  v8 = a2 + a4; /*0x51e82f*/
  return (*(int (__thiscall **)(int *, int, _DWORD))(v6 + 0x130))(a1, a3, LODWORD(v8)); /*0x51e83f*/
}
