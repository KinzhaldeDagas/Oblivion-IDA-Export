LONG __thiscall sub_74D9E0(_WORD *this, int a2, int a3)
{
  int v3; // ebp
  _WORD *v4; // edx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // cx
  int v7; // edi
  int v8; // esi
  int *v9; // eax
  NiObject *v10; // edi
  LONG (__stdcall *v11)(volatile LONG *); // ebx
  void (__thiscall ***v12)(_DWORD, int); // edi
  int v13; // edi
  LONG result; // eax
  _WORD *v15; // [esp+18h] [ebp-4h]

  v3 = (unsigned __int16)a3; /*0x74d9e7*/
  v4 = this; /*0x74d9ec*/
  v5 = *(_WORD *)(*(_DWORD *)(a2 + 0x5C) + 0x1C * (unsigned __int16)a3 + 0x18); /*0x74d9fa*/
  v6 = *(this + 0x11); /*0x74d9ff*/
  v15 = v4; /*0x74da08*/
  if ( v5 >= v6 ) /*0x74da0c*/
    v5 = v6 - 1; /*0x74da11*/
  v7 = v5; /*0x74da14*/
  if ( v5 < (unsigned int)*(unsigned __int16 *)(a2 + 0x7E) ) /*0x74da1d*/
  {
    v9 = (int *)(*(_DWORD *)(a2 + 0x78) + 4 * v5); /*0x74da2a*/
    if ( *v9 ) /*0x74da26*/
    {
      sub_74D790(*v9, &a3); /*0x74da3a*/
      v8 = a3; /*0x74da3f*/
      if ( a3 ) /*0x74da45*/
        goto LABEL_12; /*0x74da45*/
      v4 = v15; /*0x74da47*/
    }
    else
    {
      v8 = 0; /*0x74da2f*/
    }
  }
  else
  {
    v8 = 0; /*0x74da1f*/
  }
  v10 = NiObject_CloneWithPointerMap(*(NiObject **)(*((_DWORD *)v4 + 7) + 4 * v7)); /*0x74da56*/
  if ( v10 ) /*0x74da5a*/
  {
    v8 = (int)v10; /*0x74da7a*/
    InterlockedIncrement((volatile LONG *)&v10->members); /*0x74da82*/
  }
LABEL_12:
  *(_WORD *)(v8 + 0x18) |= 1u; /*0x74da88*/
  sub_715C10(v8, 0.0); /*0x74da94*/
  (*(void (__thiscall **)(_DWORD, int *, int, int))(**(_DWORD **)(a2 + 0x68) + 0x90))( /*0x74daae*/
    *(_DWORD *)(a2 + 0x68),
    &a3,
    v3,
    v8);
  v11 = InterlockedDecrement; /*0x74dab6*/
  if ( a3 ) /*0x74dabc*/
  {
    v12 = (void (__thiscall ***)(_DWORD, int))a3; /*0x74dabe*/
    if ( !v11((volatile LONG *)(a3 + 4)) ) /*0x74dac4*/
      (**v12)(v12, 1); /*0x74dad6*/
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 0x6C))(v8, *(_DWORD *)(*((_DWORD *)v15 + 4) + 0xAC)); /*0x74daed*/
  v13 = *(_DWORD *)(*((_DWORD *)v15 + 4) + 0xB0); /*0x74daf2*/
  if ( v13 ) /*0x74dafa*/
    InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x74db00*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x70))(v8, v13); /*0x74db0e*/
  if ( v13 ) /*0x74db12*/
  {
    if ( !v11((volatile LONG *)(v13 + 4)) ) /*0x74db18*/
      (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x74db26*/
  }
  result = v11((volatile LONG *)(v8 + 4)); /*0x74db2c*/
  if ( !result ) /*0x74db30*/
    return (**(LONG (__thiscall ***)(int, int))v8)(v8, 1); /*0x74db3a*/
  return result; /*0x74db3c*/
}
