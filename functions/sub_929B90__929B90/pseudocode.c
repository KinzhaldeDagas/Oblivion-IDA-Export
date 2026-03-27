int __thiscall sub_929B90(void *this)
{
  int v2; // eax
  char v4[525]; // [esp+Fh] [ebp-211h] BYREF
  int v5; // [esp+21Ch] [ebp-4h]

  v5 = __security_cookie;
  v2 = (*(int (__thiscall **)(void *, _DWORD, char *))(*(_DWORD *)this + 0x28))(this, 0, &v4[1]);
  if ( *(_BYTE *)sub_950B10((int)v4, v2 + 0x10, v2 + 0x20, v2 + 0x30, dword_B3060C) == 1 )
    return 0;
  else
    return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x24))(this, 0);
}
