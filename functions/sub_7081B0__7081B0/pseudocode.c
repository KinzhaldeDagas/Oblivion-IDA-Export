MEF_RefListNode32 *__thiscall sub_7081B0(unsigned __int16 *this, _DWORD *payload)
{
  unsigned __int16 *v2; // esi
  _DWORD *v3; // ebx
  MEF_RefListNode32 *result; // eax
  MEF_RefListNode32 *v5; // edi
  _DWORD *v6; // ebp
  int v7; // esi
  MEF_RefList32 *v8; // ebp
  int v9; // esi
  Ni2DBuffer **v10; // esi
  Ni2DBuffer *v11; // eax

  v2 = this; /*0x7081d5*/
  v3 = payload; /*0x7081db*/
  sub_700050(this, payload); /*0x7081e0*/
  result = (MEF_RefListNode32 *)sub_7124D0(v3); /*0x7081e7*/
  v5 = result; /*0x7081f6*/
  if ( v3[0x36] >= 0x4010008u ) /*0x7081f8*/
  {
    if ( result ) /*0x708271*/
    {
      v8 = (MEF_RefList32 *)(v2 + 0x4C); /*0x708273*/
      do /*0x7082d8*/
      {
        v5 = (MEF_RefListNode32 *)((char *)v5 + 0xFFFFFFFF); /*0x708282*/
        v9 = sub_7124A0(v3); /*0x70828a*/
        payload = (_DWORD *)v9; /*0x70828e*/
        if ( v9 ) /*0x708292*/
          InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x708298*/
        result = NiTRefPointerList__AddHead(v8, (void **)&payload); /*0x7082ad*/
        if ( v9 ) /*0x7082bc*/
        {
          result = (MEF_RefListNode32 *)InterlockedDecrement((volatile LONG *)(v9 + 4)); /*0x7082c2*/
          if ( !result ) /*0x7082ca*/
            result = (MEF_RefListNode32 *)(**(int (__thiscall ***)(int, int))v9)(v9, 1); /*0x7082d4*/
        }
      }
      while ( v5 ); /*0x7082d8*/
      v2 = this; /*0x7082da*/
    }
    if ( v3[0x36] >= 0x5000013u ) /*0x7082e8*/
    {
      v10 = (Ni2DBuffer **)(v2 + 0x54); /*0x7082ec*/
      v11 = (Ni2DBuffer *)sub_7124A0(v3); /*0x7082f2*/
      result = (MEF_RefListNode32 *)NiSmartPointer_Set__(v10, v11); /*0x7082fa*/
      if ( *v10 ) /*0x7082ff*/
        return (MEF_RefListNode32 *)(*((_DWORD *(__thiscall **)(Ni2DBuffer *, _DWORD, _DWORD))(*v10)->__vftable + 0x17))( /*0x708313*/
                                      *v10,
                                      v3[0x36],
                                      0);
    }
  }
  else if ( result ) /*0x7081fc*/
  {
    v6 = v2 + 0x4C; /*0x708202*/
    do /*0x708268*/
    {
      v5 = (MEF_RefListNode32 *)((char *)v5 + 0xFFFFFFFF); /*0x708212*/
      v7 = sub_7124A0(v3); /*0x70821a*/
      payload = (_DWORD *)v7; /*0x70821e*/
      if ( v7 ) /*0x708222*/
        InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x708228*/
      result = (MEF_RefListNode32 *)NiTRefPointerList__AddTail(v6, (int *)&payload); /*0x70823d*/
      if ( v7 ) /*0x70824c*/
      {
        result = (MEF_RefListNode32 *)InterlockedDecrement((volatile LONG *)(v7 + 4)); /*0x708252*/
        if ( !result ) /*0x70825a*/
          result = (MEF_RefListNode32 *)(**(int (__thiscall ***)(int, int))v7)(v7, 1); /*0x708264*/
      }
    }
    while ( v5 ); /*0x708268*/
  }
  return result; /*0x708315*/
}
