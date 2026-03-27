int __userpurge sub_659B90@<eax>(int *a1@<ecx>, double a2@<st0>, float a3)
{
  int v4; // edi
  float v6; // [esp+10h] [ebp+4h]

  v4 = *a1;
  (*(void (__thiscall **)(int *))(*a1 + 0x1E0))(a1);
  v6 = a2 + a3;
  return (*(int (__thiscall **)(int *, _DWORD))(v4 + 0x1E8))(a1, LODWORD(v6));
}
