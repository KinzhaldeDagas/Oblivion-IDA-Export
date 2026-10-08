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

  v12 = 0; /*0x43a973*/
  do /*0x43aa46*/
  {
    while ( 1 ) /*0x43a9c7*/
    {
      do /*0x43a9c7*/
      {
        do /*0x43a9a2*/
        {
          Comperand = *(LONG **)(*this + 4); /*0x43a98a*/
          *(_DWORD *)*(this + 1) = Comperand; /*0x43a999*/
        }
        while ( Comperand != *(LONG **)(*this + 4) ); /*0x43a9a2*/
        v3 = *(_DWORD *)(*this + 8); /*0x43a9aa*/
        Exchange = *Comperand; /*0x43a9af*/
        *(_DWORD *)*(this + 2) = *Comperand; /*0x43a9ba*/
      }
      while ( Comperand != *(LONG **)(*this + 4) ); /*0x43a9c7*/
      if ( !Exchange ) /*0x43a9cf*/
      {
        v8 = a2; /*0x43ab00*/
        *(_DWORD *)*(this + 1) = 0; /*0x43ab04*/
        *a2 = 0; /*0x43ab0a*/
        v6 = v12; /*0x43ab10*/
        goto LABEL_20; /*0x43ab14*/
      }
      if ( Comperand != (LONG *)v3 ) /*0x43a9db*/
        break; /*0x43a9db*/
      InterlockedCompareExchange((volatile LONG *)(*this + 8), Exchange, v3); /*0x43a9e9*/
    }
    if ( v12 != *(_DWORD *)(Exchange + 4) ) /*0x43a9fa*/
    {
      if ( v12 ) /*0x43a9fe*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v12 + 8)) ) /*0x43aa04*/
          (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x43aa17*/
      }
      v4 = *(_DWORD *)(Exchange + 4); /*0x43aa19*/
      v12 = v4; /*0x43aa1d*/
      if ( v4 ) /*0x43aa21*/
        InterlockedIncrement((volatile LONG *)(v4 + 8)); /*0x43aa27*/
    }
  }
  while ( (LONG *)InterlockedCompareExchange((volatile LONG *)(*this + 4), Exchange, (LONG)Comperand) != Comperand ); /*0x43aa46*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x43aa53*/
  v5 = *(_DWORD *)(Exchange + 4); /*0x43aa59*/
  if ( v5 ) /*0x43aa61*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 8)) ) /*0x43aa67*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x43aa7e*/
    *(_DWORD *)(Exchange + 4) = 0; /*0x43aa80*/
  }
  *(_DWORD *)*(this + 1) = 0; /*0x43aa8d*/
  *(_DWORD *)*(this + 2) = 0; /*0x43aa99*/
  sub_4329A0(this, (unsigned int)Comperand); /*0x43aa9f*/
  v6 = v12; /*0x43aaa4*/
  v7 = v12 == 0; /*0x43aaa8*/
  v8 = a2; /*0x43aaaa*/
  *a2 = v12; /*0x43aaae*/
  if ( v12 ) /*0x43aab0*/
  {
    InterlockedIncrement((volatile LONG *)(v12 + 8)); /*0x43aab6*/
LABEL_20:
    v7 = v6 == 0; /*0x43aabc*/
  }
  if ( !v7 && !InterlockedDecrement((volatile LONG *)(v6 + 8)) ) /*0x43aad1*/
    (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x43aae3*/
  return v8; /*0x43aae7*/
}
