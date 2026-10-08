int __thiscall TESAIForm_SetNonPackageData(_BYTE *this, int a2)
{
  int v3; // edx
  void (__thiscall *v4)(_BYTE *, int); // eax
  void (__thiscall *v5)(_BYTE *, int); // eax
  void (__thiscall *v6)(_BYTE *, int); // eax
  int result; // eax

  if ( a2 ) /*0x46828a*/
  {
    v3 = *(_DWORD *)this; /*0x46828f*/
    *(this + 4) = *(_BYTE *)a2; /*0x468291*/
    (*(void (__stdcall **)(int))(v3 + 0x10))(0x100); /*0x46829c*/
    v4 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10); /*0x4682a4*/
    *(this + 5) = *(_BYTE *)(a2 + 1); /*0x4682a7*/
    v4(this, 0x100); /*0x4682b1*/
    v5 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10); /*0x4682b9*/
    *(this + 6) = *(_BYTE *)(a2 + 2); /*0x4682bc*/
    v5(this, 0x100); /*0x4682c6*/
    v6 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10); /*0x4682ce*/
    *(this + 7) = *(_BYTE *)(a2 + 3); /*0x4682d1*/
    v6(this, 0x100); /*0x4682db*/
    *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 4); /*0x4682e0*/
    *(this + 0xC) = *(_BYTE *)(a2 + 8); /*0x4682e6*/
    result = *(unsigned __int8 *)(a2 + 9); /*0x4682e9*/
    *(this + 0xD) = result; /*0x4682ed*/
  }
  return result; /*0x4682f0*/
}
