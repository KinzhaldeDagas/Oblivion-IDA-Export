QueuedChildren *__thiscall QueuedChildren::QueuedChildren(QueuedChildren *this, LONG a2)
{
  _WORD *v3; // eax
  _DWORD *v4; // esi
  unsigned __int16 *v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ecx
  QueuedChildren *result; // eax
  _WORD *v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+1Ch] [ebp-4h]

  if ( !*((_DWORD *)this + 7) )
  {
    v3 = (_WORD *)FormHeapAlloc(0x14u);
    v4 = v3;
    v9 = v3;
    v10 = 0;
    if ( v3 )
    {
      sub_435B50(v3, 5u, 0xA);
      *v4 = &QueuedChildren::`vftable';
      v4[4] = 0;
    }
    else
    {
      v4 = 0;
    }
    *((_DWORD *)this + 7) = v4;
  }
  v9 = (_WORD *)a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 8));
  v5 = *((unsigned __int16 **)this + 7);
  v6 = v5[5];
  v7 = v5[4];
  v10 = 1;
  if ( v6 >= v7 )
    sub_4360A0(v5, v6 + v5[7]);
  result = (QueuedChildren *)sub_4362F0(v5, v6, (LONG *)&v9);
  v10 = 0xFFFFFFFF;
  if ( a2 )
  {
    result = (QueuedChildren *)InterlockedDecrement((volatile LONG *)(a2 + 8));
    if ( !result )
      return (**(QueuedChildren *(__thiscall ***)(LONG, int))a2)(a2, 1);
  }
  return result;
}
