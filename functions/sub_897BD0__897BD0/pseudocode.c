int __thiscall sub_897BD0(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2; /*0x897bd2*/
  sub_711D00(this, a2); /*0x897bd9*/
  v6 = v2[0x88]; /*0x897bf1*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(v6 + 8); /*0x897bf2*/
  a2 = 2; /*0x897bf5*/
  v4(v6, this + 3, 2, &a2, 1); /*0x897bfd*/
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 4)); /*0x897c0f*/
}
