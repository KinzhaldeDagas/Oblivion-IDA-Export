int __thiscall sub_781040(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 0x10); /*0x781048*/
  if ( result != a2 ) /*0x78104d*/
  {
    if ( result ) /*0x781051*/
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x781059*/
    *(this + 0x10) = a2; /*0x78105d*/
    if ( a2 ) /*0x781060*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x781068*/
  }
  return result; /*0x78106a*/
}
