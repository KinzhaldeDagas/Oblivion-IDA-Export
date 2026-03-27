_DWORD **__stdcall sub_43B780(_DWORD **a1, int a2, int a3, unsigned __int8 a4, volatile LONG *a5, int a6)
{
  _DWORD *v6; // eax
  _DWORD *v7; // eax

  v6 = (_DWORD *)FormHeapAlloc(0x40u);
  if ( v6 )
    v7 = sub_4376A0(v6, a2, a3, a4, a6);
  else
    v7 = 0;
  *a1 = v7;
  if ( v7 )
    InterlockedIncrement(v7 + 2);
  sub_43AC40((QueuedChildren **)*a1, a5);
  (*(void (__thiscall **)(_DWORD))(**a1 + 0x20))(*a1);
  return a1;
}
