int __thiscall sub_893950(_DWORD *this)
{
  int result; // eax
  int v3; // ecx
  int (__thiscall ***v4)(_DWORD, int); // esi
  int v5; // [esp+8h] [ebp-4h] BYREF

  result = sub_891160(this);
  if ( result )
  {
    v3 = *(_DWORD *)(result + 0x1C);
    if ( v3 )
    {
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v3 + 0x88))(v3, &v5, result);
      result = v5;
      if ( v5 )
      {
        v4 = (int (__thiscall ***)(_DWORD, int))v5;
        result = InterlockedDecrement((volatile LONG *)(v5 + 4));
        if ( !result )
          result = (**v4)(v4, 1);
      }
    }
  }
  *(this + 0x7D) &= ~0x8000u;
  return result;
}
