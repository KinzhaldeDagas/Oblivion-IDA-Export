LONG __thiscall sub_69F6D0(void *this)
{
  LONG result; // eax
  int v3; // eax
  int v4; // ecx
  LONG (__thiscall ***v5)(_DWORD, int); // esi
  LONG v6; // [esp+Ch] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x154))(this); /*0x69f6dc*/
  if ( result ) /*0x69f6e0*/
  {
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x154))(this); /*0x69f6ec*/
    result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 0x58))(v3, "MagicAreaDisplay"); /*0x69f6fa*/
    if ( result ) /*0x69f6fe*/
    {
      v4 = *(_DWORD *)(result + 0x1C); /*0x69f700*/
      if ( v4 ) /*0x69f705*/
      {
        (*(void (__thiscall **)(int, LONG *, LONG))(*(_DWORD *)v4 + 0x88))(v4, &v6, result); /*0x69f715*/
        result = v6; /*0x69f717*/
        if ( v6 ) /*0x69f71d*/
        {
          v5 = (LONG (__thiscall ***)(_DWORD, int))v6; /*0x69f71f*/
          result = InterlockedDecrement((volatile LONG *)(v6 + 4)); /*0x69f725*/
          if ( !result ) /*0x69f72d*/
            return (**v5)(v5, 1); /*0x69f73b*/
        }
      }
    }
  }
  return result; /*0x69f73d*/
}
