char *__thiscall sub_8635E0(_DWORD *this, const char *a2, char a3, const char *a4)
{
  char *result; // eax
  int *v6; // eax
  int (__thiscall ***v7)(_DWORD, int); // edi
  int v8; // [esp+10h] [ebp-118h] BYREF
  char Src[260]; // [esp+14h] [ebp-114h] BYREF
  unsigned int v10; // [esp+124h] [ebp-4h]

  result = (char *)sub_7D8160((int **)this, a2, a3, a4);
  if ( ShaderPackage >= 2 )
  {
    result = sub_7B4160(Src, a2, (int)&off_A7D0E8);
    if ( Src[0] )
    {
      v6 = sub_7B8200(&v8, Src, a3, 1);
      v10 = 0;
      sub_55E2A0(this + 0x41, v6);
      result = (char *)v8;
      v10 = 0xFFFFFFFF;
      if ( v8 )
      {
        v7 = (int (__thiscall ***)(_DWORD, int))v8;
        result = (char *)InterlockedDecrement((volatile LONG *)(v8 + 4));
        if ( !result )
          result = (char *)(**v7)(v7, 1);
      }
    }
  }
  if ( *(this + 0x41) )
  {
    *(this + 7) |= 0x40000u;
    *(this + 9) = 0;
  }
  return result;
}
