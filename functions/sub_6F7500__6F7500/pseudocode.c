int __thiscall sub_6F7500(_DWORD *this)
{
  unsigned __int8 **v2; // eax
  int result; // eax
  int v4; // edi

  v2 = (unsigned __int8 **)*(this + 8); /*0x6f7503*/
  if ( *v2 && *v2 < &(*v2)[*(_DWORD *)*(this + 0xC)] ) /*0x6f7519*/
    return **v2; /*0x6f751b*/
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this); /*0x6f7528*/
  v4 = result; /*0x6f752a*/
  if ( result != 0xFFFFFFFF ) /*0x6f752f*/
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, result); /*0x6f753e*/
    return v4; /*0x6f7540*/
  }
  return result; /*0x6f751e*/
}
