int __thiscall sub_55A950(void *this, int a2, int a3, int a4, float a5, int a6, int a7)
{
  void (__cdecl *v8)(int, int, int, _DWORD, int); // edx

  switch ( a6 )
  {
    case 0:
      return (*(int (__cdecl **)(int, int, int, _DWORD, int))(*(_DWORD *)this + 0x44))(a2, a3, a4, LODWORD(a5), a7);
    case 1:
      return (*(int (__cdecl **)(int, int, int, _DWORD, int))(*(_DWORD *)this + 0x34))(a2, a3, a4, LODWORD(a5), a7);
    case 2:
      v8 = *(void (__cdecl **)(int, int, int, _DWORD, int))(*(_DWORD *)this + 0x3C);
      goto LABEL_6;
    case 3:
      v8 = *(void (__cdecl **)(int, int, int, _DWORD, int))(*(_DWORD *)this + 0x4C);
LABEL_6:
      v8(a2, a3, a4, LODWORD(a5), a7);
      return def_55A959(a2, a3, a4, LODWORD(a5), a6, a7);
    default:
      JUMPOUT(0x55A9D6);
  }
}
