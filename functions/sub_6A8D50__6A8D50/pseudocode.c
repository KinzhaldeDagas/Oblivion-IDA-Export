int (__stdcall ***__thiscall sub_6A8D50(_DWORD *this))(_DWORD, void *, char *)
{
  int v2; // eax
  int (__stdcall ***result)(_DWORD, void *, char *); // eax
  int v4; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 0x37); /*0x6a8d54*/
  if ( (v2 & 2) != 0 ) /*0x6a8d5c*/
  {
    result = (int (__stdcall ***)(_DWORD, void *, char *))*(this + 0x1C); /*0x6a8d6a*/
    if ( result ) /*0x6a8d6f*/
    {
      result = (int (__stdcall ***)(_DWORD, void *, char *))(**result)(result, &CLSID_IMediaControl, (char *)&v4); /*0x6a8d80*/
      if ( (int)result >= 0 ) /*0x6a8d84*/
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 0x1C))(v4); /*0x6a8d90*/
        result = (int (__stdcall ***)(_DWORD, void *, char *))(*(int (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x6a8d9c*/
        *(this + 0x37) &= ~4u; /*0x6a8d9e*/
      }
    }
  }
  else
  {
    result = (int (__stdcall ***)(_DWORD, void *, char *))(v2 & 0xFFFFFFFB); /*0x6a8d5e*/
    *(this + 0x37) = result; /*0x6a8d61*/
  }
  return result; /*0x6a8d67*/
}
