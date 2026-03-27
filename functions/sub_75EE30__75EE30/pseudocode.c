LONG __thiscall sub_75EE30(_DWORD *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // edi
  int v5; // ebx

  nullsub_returnvVoid_1arg((int)a2);
  *(this + 4) = sub_7124A0(a2);
  *(this + 9) = sub_7124A0(a2);
  result = sub_7124A0(a2);
  v4 = *(this + 0xA);
  v5 = result;
  if ( v4 != result )
  {
    if ( v4 )
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *(this + 0xA) = v5;
    if ( v5 )
      return InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  return result;
}
