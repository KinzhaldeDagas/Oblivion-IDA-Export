_DWORD *__thiscall sub_778180(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  void *v7; // ecx
  _DWORD *result; // eax
  _DWORD *v9; // [esp+24h] [ebp-4h] BYREF

  v9 = this;
  v6 = *(this + 2);
  v9 = 0;
  if ( (*(int (__stdcall **)(int, int, int, int, int, _DWORD **, _DWORD))(*(_DWORD *)v6 + 0x6C))(
         v6,
         a2,
         a3,
         a4,
         a5,
         &v9,
         0) < 0 )
  {
    TESTexture::ClearComponentReferences(v7);
    return 0;
  }
  else
  {
    result = v9;
    if ( a6 )
    {
      (*(void (__stdcall **)(_DWORD *, int))(*v9 + 0x34))(v9, a6);
      return v9;
    }
  }
  return result;
}
