int __thiscall sub_8FDA30(unsigned __int16 *this)
{
  int v2; // edi
  unsigned __int16 *v3; // ebx

  v2 = 0; /*0x8fda37*/
  if ( *((_BYTE *)this + 0x31) ) /*0x8fda33*/
  {
    v3 = this + 9; /*0x8fda3e*/
    do /*0x8fda59*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), *v3); /*0x8fda4c*/
      ++v2; /*0x8fda53*/
      v3 += 2; /*0x8fda54*/
    }
    while ( v2 < *((unsigned __int8 *)this + 0x31) ); /*0x8fda59*/
  }
  return (**(int (__thiscall ***)(unsigned __int16 *, int))this)(this, 1); /*0x8fda64*/
}
