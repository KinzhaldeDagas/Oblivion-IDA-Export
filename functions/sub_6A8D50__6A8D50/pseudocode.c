int (__stdcall ***__thiscall sub_6A8D50(_DWORD *this))(_DWORD, void *, char *)
{
  int v2; // eax
  int (__stdcall ***result)(_DWORD, void *, char *); // eax
  int v4; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 0x37);
  if ( (v2 & 2) != 0 )
  {
    result = (int (__stdcall ***)(_DWORD, void *, char *))*(this + 0x1C);
    if ( result )
    {
      result = (int (__stdcall ***)(_DWORD, void *, char *))(**result)(result, &CLSID_IMediaControl, (char *)&v4);
      if ( (int)result >= 0 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 0x1C))(v4);
        result = (int (__stdcall ***)(_DWORD, void *, char *))(*(int (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        *(this + 0x37) &= ~4u;
      }
    }
  }
  else
  {
    result = (int (__stdcall ***)(_DWORD, void *, char *))(v2 & 0xFFFFFFFB);
    *(this + 0x37) = result;
  }
  return result;
}
