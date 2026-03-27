LONG __thiscall sub_700050(unsigned __int16 *this, _DWORD *a2)
{
  int v3; // ebx
  unsigned int *v4; // eax
  LONG result; // eax
  int v6; // esi
  int v7; // ebx

  nullsub_returnvVoid_1arg((int)a2);
  if ( a2[0x36] >= 0x500000Bu )
  {
    v3 = sub_7124D0(a2);
    sub_6FF760(this, v3);
    for ( ; v3; --v3 )
    {
      v4 = (unsigned int *)sub_7124A0(a2);
      NiNode_AddNiExtraData((const void **)this, v3, v4);
    }
  }
  else
  {
    *((_DWORD *)this + 4) = sub_7124A0(a2);
  }
  result = sub_7124A0(a2);
  v6 = *((_DWORD *)this + 3);
  v7 = result;
  if ( v6 != result )
  {
    if ( v6 )
    {
      result = InterlockedDecrement((volatile LONG *)(v6 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v6)(v6, 1);
    }
    *((_DWORD *)this + 3) = v7;
    if ( v7 )
      return InterlockedIncrement((volatile LONG *)(v7 + 4));
  }
  return result;
}
