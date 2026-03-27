_DWORD *__thiscall IOManager_43A940(unsigned int *this, _DWORD *a2)
{
  LONG v3; // ecx
  int v4; // edi
  int v5; // ebp
  int v6; // esi
  bool v7; // zf
  _DWORD *v8; // edi
  LONG *Comperand; // [esp+14h] [ebp-1Ch]
  LONG Exchange; // [esp+18h] [ebp-18h]
  int v12; // [esp+1Ch] [ebp-14h]

  v12 = 0;
  do
  {
    while ( 1 )
    {
      do
      {
        do
        {
          Comperand = *(LONG **)(*this + 4);
          *(_DWORD *)*(this + 1) = Comperand;
        }
        while ( Comperand != *(LONG **)(*this + 4) );
        v3 = *(_DWORD *)(*this + 8);
        Exchange = *Comperand;
        *(_DWORD *)*(this + 2) = *Comperand;
      }
      while ( Comperand != *(LONG **)(*this + 4) );
      if ( !Exchange )
      {
        v8 = a2;
        *(_DWORD *)*(this + 1) = 0;
        *a2 = 0;
        v6 = v12;
        goto LABEL_20;
      }
      if ( Comperand != (LONG *)v3 )
        break;
      InterlockedCompareExchange((volatile LONG *)(*this + 8), Exchange, v3);
    }
    if ( v12 != *(_DWORD *)(Exchange + 4) )
    {
      if ( v12 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v12 + 8)) )
          (**(void (__thiscall ***)(int, int))v12)(v12, 1);
      }
      v4 = *(_DWORD *)(Exchange + 4);
      v12 = v4;
      if ( v4 )
        InterlockedIncrement((volatile LONG *)(v4 + 8));
    }
  }
  while ( (LONG *)InterlockedCompareExchange((volatile LONG *)(*this + 4), Exchange, (LONG)Comperand) != Comperand );
  (*(void (__thiscall **)(unsigned int))(*(_DWORD *)*this + 8))(*this);
  v5 = *(_DWORD *)(Exchange + 4);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 8)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(_DWORD *)(Exchange + 4) = 0;
  }
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  sub_4329A0(this, (unsigned int)Comperand);
  v6 = v12;
  v7 = v12 == 0;
  v8 = a2;
  *a2 = v12;
  if ( v12 )
  {
    InterlockedIncrement((volatile LONG *)(v12 + 8));
LABEL_20:
    v7 = v6 == 0;
  }
  if ( !v7 && !InterlockedDecrement((volatile LONG *)(v6 + 8)) )
    (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  return v8;
}
