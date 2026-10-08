int (__stdcall ***__thiscall sub_6A8D00(_DWORD *this))(_DWORD, void *, char *)
{
  int (__stdcall ***result)(_DWORD, void *, char *); // eax
  int (__stdcall ***v3)(_DWORD, void *, char *); // [esp+10h] [ebp-4h] BYREF

  result = (int (__stdcall ***)(_DWORD, void *, char *))*(this + 0x1C); /*0x6a8d04*/
  if ( result ) /*0x6a8d09*/
  {
    result = (int (__stdcall ***)(_DWORD, void *, char *))(**result)(result, &CLSID_IMediaControl, (char *)&v3); /*0x6a8d1a*/
    if ( (int)result >= 0 ) /*0x6a8d1e*/
    {
      result = v3; /*0x6a8d20*/
      if ( v3 ) /*0x6a8d26*/
      {
        ((void (__stdcall *)(int (__stdcall ***)(_DWORD, void *, char *)))(*v3)[8])(v3); /*0x6a8d2e*/
        result = (int (__stdcall ***)(_DWORD, void *, char *))((int (__stdcall *)(int (__stdcall ***)(_DWORD, void *, char *)))(*v3)[2])(v3); /*0x6a8d3a*/
        *(this + 0x37) |= 4u; /*0x6a8d3c*/
      }
    }
  }
  return result; /*0x6a8d43*/
}
