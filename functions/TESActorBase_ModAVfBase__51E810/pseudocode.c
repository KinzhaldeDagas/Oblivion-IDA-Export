int __userpurge TESActorBase_ModAVfBase@<eax>(int *a1@<ecx>, double a2@<st0>, int a3, float a4)
{
  int v6; // edi
  float v8; // [esp+18h] [ebp+4h]

  v6 = *a1;
  (*(void (__thiscall **)(int *, int))(*a1 + 0x12C))(a1, a3);
  v8 = a2 + a4;
  return (*(int (__thiscall **)(int *, int, _DWORD))(v6 + 0x130))(a1, a3, LODWORD(v8));
}
