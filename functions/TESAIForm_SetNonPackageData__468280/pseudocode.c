int __thiscall TESAIForm_SetNonPackageData(_BYTE *this, int a2)
{
  int v3; // edx
  void (__thiscall *v4)(_BYTE *, int); // eax
  void (__thiscall *v5)(_BYTE *, int); // eax
  void (__thiscall *v6)(_BYTE *, int); // eax
  int result; // eax

  if ( a2 )
  {
    v3 = *(_DWORD *)this;
    *(this + 4) = *(_BYTE *)a2;
    (*(void (__stdcall **)(int))(v3 + 0x10))(0x100);
    v4 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10);
    *(this + 5) = *(_BYTE *)(a2 + 1);
    v4(this, 0x100);
    v5 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10);
    *(this + 6) = *(_BYTE *)(a2 + 2);
    v5(this, 0x100);
    v6 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10);
    *(this + 7) = *(_BYTE *)(a2 + 3);
    v6(this, 0x100);
    *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 4);
    *(this + 0xC) = *(_BYTE *)(a2 + 8);
    result = *(unsigned __int8 *)(a2 + 9);
    *(this + 0xD) = result;
  }
  return result;
}
