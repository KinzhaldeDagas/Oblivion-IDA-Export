volatile LONG **__thiscall sub_708560(int ***this, volatile LONG **a2, signed int a3)
{
  _DWORD *v4; // edi
  volatile LONG *v5; // esi
  int v6; // eax
  void (__thiscall ***v8)(_DWORD, int); // esi
  volatile LONG *v9; // esi
  bool v10; // zf
  volatile LONG *v11; // [esp+10h] [ebp-10h] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-4h]

  v11 = 0; /*0x708586*/
  if ( a3 < 0xA && (v4 = *(this + 0x27)) != 0 ) /*0x70859d*/
  {
    while ( 1 ) /*0x7085a0*/
    {
      v5 = (volatile LONG *)v4[2]; /*0x7085a0*/
      v4 = (_DWORD *)*v4; /*0x7085a8*/
      v11 = v5; /*0x7085aa*/
      if ( v5 ) /*0x7085ae*/
        InterlockedIncrement(v5 + 1); /*0x7085b4*/
      v12 = 0; /*0x7085bc*/
      if ( v5 ) /*0x7085c4*/
      {
        v6 = (*(int (__thiscall **)(volatile LONG *))(*v5 + 0x4C))(v5); /*0x7085cd*/
        if ( v6 == a3 ) /*0x7085d3*/
          break; /*0x7085d3*/
      }
      v12 = 0xFFFFFFFF; /*0x7085d7*/
      if ( v5 ) /*0x7085df*/
      {
        if ( !InterlockedDecrement(v5 + 1) ) /*0x7085e5*/
          (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1); /*0x7085f7*/
      }
      if ( !v4 ) /*0x7085fb*/
        goto LABEL_11; /*0x7085fb*/
    }
    sub_4A0E50(this + 0x26, &a3, (int *)&v11); /*0x70862c*/
    v8 = (void (__thiscall ***)(_DWORD, int))a3; /*0x708631*/
    if ( a3 ) /*0x708637*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) ) /*0x70863d*/
      {
        if ( v8 ) /*0x708649*/
          (**v8)(v8, 1); /*0x708653*/
      }
    }
    v9 = v11; /*0x708655*/
    v10 = v11 == 0; /*0x708659*/
    *a2 = v11; /*0x70865f*/
    if ( !v10 ) /*0x708661*/
      InterlockedIncrement(v9 + 1); /*0x708667*/
    v12 = 0xFFFFFFFF; /*0x70866f*/
    if ( v9 ) /*0x708677*/
    {
      if ( !InterlockedDecrement(v9 + 1) ) /*0x70867d*/
        (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x70868f*/
    }
    return a2; /*0x708691*/
  }
  else
  {
LABEL_11:
    *a2 = 0; /*0x7085fd*/
    return a2; /*0x7085fd*/
  }
}
