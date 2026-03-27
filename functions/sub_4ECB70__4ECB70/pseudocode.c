int *__thiscall sub_4ECB70(_DWORD **this)
{
  int *result; // eax
  int v3; // ebx
  int v4; // esi
  bool v5; // zf
  int (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // esi
  int v8; // [esp+10h] [ebp-10h] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-4h]

  result = sub_4EC960(*(this + 1), &v8);
  v3 = *result;
  v4 = (int)*(this + 0xB);
  v5 = v4 == *result;
  v9 = 0;
  if ( !v5 )
  {
    if ( v4 )
    {
      result = (int *)InterlockedDecrement((volatile LONG *)(v4 + 4));
      if ( !result )
        result = (int *)(**(int (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *(this + 0xB) = (_DWORD *)v3;
    if ( v3 )
      result = (int *)InterlockedIncrement((volatile LONG *)(v3 + 4));
  }
  v6 = (int (__thiscall ***)(_DWORD, int))v8;
  v9 = 0xFFFFFFFF;
  if ( v8 )
  {
    result = (int *)InterlockedDecrement((volatile LONG *)(v8 + 4));
    if ( !result )
    {
      if ( v6 )
        result = (int *)(**v6)(v6, 1);
    }
  }
  *(this + 2) = (_DWORD *)2;
  v7 = (int)*(this + 1);
  if ( v7 )
  {
    result = (int *)InterlockedDecrement((volatile LONG *)(v7 + 8));
    if ( !result )
      result = (int *)(**(int (__thiscall ***)(int, int))v7)(v7, 1);
    *(this + 1) = 0;
  }
  return result;
}
