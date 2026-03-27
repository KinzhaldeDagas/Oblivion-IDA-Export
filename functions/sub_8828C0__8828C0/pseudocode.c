char *__thiscall sub_8828C0(_DWORD *this, const char *a2, char a3, const char *a4)
{
  char *result; // eax
  int *v6; // eax
  int (__thiscall ***v7)(_DWORD, int); // ebp
  int *v8; // eax
  char *(__thiscall ***v9)(_DWORD, int); // esi
  int v10; // [esp+14h] [ebp-11Ch] BYREF
  int v11; // [esp+18h] [ebp-118h] BYREF
  char Src[260]; // [esp+1Ch] [ebp-114h] BYREF
  int v13; // [esp+12Ch] [ebp-4h]

  sub_7D8160((int **)this, a2, a3, a4);
  result = sub_7B4160(Src, a2, (int)&off_A7D0E4);
  if ( Src[0] )
  {
    v6 = sub_7B8200(&v11, Src, a3, 1);
    v13 = 0;
    sub_55E2A0(this + 0x5A, v6);
    result = (char *)v11;
    v13 = 0xFFFFFFFF;
    if ( v11 )
    {
      v7 = (int (__thiscall ***)(_DWORD, int))v11;
      result = (char *)InterlockedDecrement((volatile LONG *)(v11 + 4));
      if ( !result )
        result = (char *)(**v7)(v7, 1);
    }
  }
  if ( ShaderPackage >= 2 )
  {
    result = sub_7B4160(Src, a2, (int)&off_A7D0E8);
    if ( Src[0] )
    {
      v8 = sub_7B8200(&v10, Src, a3, 1);
      v13 = 1;
      sub_55E2A0(this + 0x5B, v8);
      result = (char *)v10;
      v13 = 0xFFFFFFFF;
      if ( v10 )
      {
        v9 = (char *(__thiscall ***)(_DWORD, int))v10;
        result = (char *)InterlockedDecrement((volatile LONG *)(v10 + 4));
        if ( !result )
          return (**v9)(v9, 1);
      }
    }
  }
  return result;
}
