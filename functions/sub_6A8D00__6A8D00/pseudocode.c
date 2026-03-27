int (__stdcall ***__thiscall sub_6A8D00(_DWORD *this))(_DWORD, void *, char *)
{
  int (__stdcall ***result)(_DWORD, void *, char *); // eax
  int (__stdcall ***v3)(_DWORD, void *, char *); // [esp+10h] [ebp-4h] BYREF

  result = (int (__stdcall ***)(_DWORD, void *, char *))*(this + 0x1C);
  if ( result )
  {
    result = (int (__stdcall ***)(_DWORD, void *, char *))(**result)(result, &CLSID_IMediaControl, (char *)&v3);
    if ( (int)result >= 0 )
    {
      result = v3;
      if ( v3 )
      {
        ((void (__stdcall *)(int (__stdcall ***)(_DWORD, void *, char *)))(*v3)[8])(v3);
        result = (int (__stdcall ***)(_DWORD, void *, char *))((int (__stdcall *)(int (__stdcall ***)(_DWORD, void *, char *)))(*v3)[2])(v3);
        *(this + 0x37) |= 4u;
      }
    }
  }
  return result;
}
