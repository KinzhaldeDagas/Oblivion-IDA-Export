int __thiscall sub_55A9F0(void *this, int a2, int a3, float a4, float a5, int a6)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x18))(this, a6); /*0x55a9fa*/
  if ( result ) /*0x55a9fe*/
    return (*(int (__thiscall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)result + 8))( /*0x55aa1e*/
             result,
             a2,
             a3,
             LODWORD(a4),
             LODWORD(a5));
  return result; /*0x55aa20*/
}
