_DWORD *__thiscall sub_6E3B20(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // esi
  int v7; // edi
  bool v8; // zf

  result = (_DWORD *)sub_6EBA60(this, a2, a3);
  v5 = (_DWORD *)*(this + 7);
  v6 = result;
  if ( v5 )
  {
    sub_6E46A0(v5, (int)&a3, *(float *)&a2, *(float *)&a3);
    sub_6DABF0(v6, a3);
    v7 = a3;
    v8 = a3 == 0;
    v6[8] = 0;
    if ( !v8 && !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
    {
      if ( v7 )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    return v6;
  }
  return result;
}
