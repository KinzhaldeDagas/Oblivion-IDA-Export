LONG __thiscall sub_69F6D0(void *this)
{
  LONG result; // eax
  int v3; // eax
  int v4; // ecx
  LONG (__thiscall ***v5)(_DWORD, int); // esi
  LONG v6; // [esp+Ch] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x154))(this);
  if ( result )
  {
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x154))(this);
    result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 0x58))(v3, "MagicAreaDisplay");
    if ( result )
    {
      v4 = *(_DWORD *)(result + 0x1C);
      if ( v4 )
      {
        (*(void (__thiscall **)(int, LONG *, LONG))(*(_DWORD *)v4 + 0x88))(v4, &v6, result);
        result = v6;
        if ( v6 )
        {
          v5 = (LONG (__thiscall ***)(_DWORD, int))v6;
          result = InterlockedDecrement((volatile LONG *)(v6 + 4));
          if ( !result )
            return (**v5)(v5, 1);
        }
      }
    }
  }
  return result;
}
