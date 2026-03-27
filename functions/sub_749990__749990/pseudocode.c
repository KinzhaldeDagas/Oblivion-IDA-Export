TESForm *__thiscall sub_749990(_DWORD *this, int a2)
{
  int v2; // esi
  _DWORD *v4; // edi
  LONG v5; // eax
  TESForm *result; // eax

  v2 = a2;
  v4 = (_DWORD *)*(this + 0x32);
  if ( v4 )
  {
    do
    {
      if ( *(_DWORD *)(v4[2] + 0xC) > *(_DWORD *)(a2 + 0xC) )
      {
        InterlockedIncrement((volatile LONG *)(a2 + 4));
        sub_7C6A20(this + 0x31, (int)v4, &a2);
        v5 = InterlockedDecrement((volatile LONG *)(v2 + 4));
        goto LABEL_6;
      }
      v4 = (_DWORD *)*v4;
    }
    while ( v4 );
    InterlockedIncrement((volatile LONG *)(a2 + 4));
    sub_7C16B0(this + 0x31, &a2);
    if ( InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  sub_749800(this + 0x31, &a2);
  if ( v2 )
  {
    v5 = InterlockedDecrement((volatile LONG *)(v2 + 4));
LABEL_6:
    if ( !v5 )
LABEL_11:
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
LABEL_12:
  result = sub_412D30(this + 0x35, *(_DWORD *)(v2 + 8), (TESForm *)v2);
  *(_DWORD *)(v2 + 0x10) = this;
  return result;
}
