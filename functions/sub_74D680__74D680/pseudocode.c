_DWORD **__thiscall sub_74D680(_DWORD *this, _DWORD **a2)
{
  _DWORD **result; // eax
  unsigned int i; // edi
  _DWORD *v5; // ecx

  result = sub_752D80(this, a2); /*0x74d68a*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x11); ++i ) /*0x74d691*/
  {
    result = (_DWORD **)*(this + 7); /*0x74d697*/
    v5 = result[i]; /*0x74d69a*/
    if ( v5 ) /*0x74d69f*/
      result = (_DWORD **)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*v5 + 0x38))(v5, a2); /*0x74d6a7*/
  }
  return result; /*0x74d6b4*/
}
