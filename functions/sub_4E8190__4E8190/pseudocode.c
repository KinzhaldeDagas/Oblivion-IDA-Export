LONG __thiscall sub_4E8190(_DWORD *this)
{
  LONG result; // eax
  int v3; // ecx
  int (__thiscall ***v4)(_DWORD, int); // edi
  LONG v5; // [esp+8h] [ebp-4h] BYREF

  result = *(this + 0xA);
  if ( result )
  {
    sub_477EF0((_WORD *)(result + 0xAC));
    result = *(this + 0xA);
    v3 = *(_DWORD *)(result + 0x1C);
    if ( v3 )
    {
      (*(void (__thiscall **)(int, LONG *, _DWORD))(*(_DWORD *)v3 + 0x88))(v3, &v5, *(this + 0xA));
      result = v5;
      if ( v5 )
      {
        v4 = (int (__thiscall ***)(_DWORD, int))v5;
        result = InterlockedDecrement((volatile LONG *)(v5 + 4));
        if ( !result )
          result = (**v4)(v4, 1);
      }
    }
    *(this + 0xA) = 0;
  }
  return result;
}
