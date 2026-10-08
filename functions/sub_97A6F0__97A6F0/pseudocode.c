int __thiscall sub_97A6F0(
        float *this,
        float *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _BYTE *a11)
{
  int result; // eax
  bool v13; // zf
  unsigned __int8 (__thiscall *v14)(float *); // eax
  unsigned __int8 v15; // al
  int v16; // ecx
  int v17; // [esp+38h] [ebp+18h]
  int v18; // [esp+38h] [ebp+18h]
  int v19; // [esp+3Ch] [ebp+1Ch]

  if ( !a2 ) /*0x97a6fa*/
    return 0; /*0x97a700*/
  if ( a9 != *((_DWORD *)this + 0x22) ) /*0x97a713*/
  {
    sub_97AEC0((NiPoint3 *)(this + 1), (NiTransform *)(a5 + 0x64)); /*0x97a71c*/
    *((_DWORD *)this + 0x22) = a9; /*0x97a721*/
  }
  if ( a10 != *((_DWORD *)a2 + 0x22) ) /*0x97a735*/
  {
    sub_97AEC0((NiPoint3 *)(a2 + 1), (NiTransform *)(a6 + 0x64)); /*0x97a73e*/
    *((_DWORD *)a2 + 0x22) = a10; /*0x97a747*/
  }
  if ( !sub_97AFC0((int)(this + 1), (int)(a2 + 1)) ) /*0x97a75b*/
    return 0; /*0x97a75b*/
  if ( !a7 || !a8 ) /*0x97a771*/
    return sub_97A530((int)this, (int)a2, a3, a4, a5, a6, a11); /*0x97a771*/
  v13 = (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 4))(this) == 0; /*0x97a782*/
  v14 = *(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a2 + 4); /*0x97a784*/
  if ( !v13 ) /*0x97a789*/
  {
    if ( v14(a2) || !sub_977510(a2) ) /*0x97a79b*/
    {
      result = sub_97A530((int)this, (int)a2, a3, a4, a5, a6, a11); /*0x97a846*/
      if ( result >= 1 ) /*0x97a84e*/
        return result; /*0x97a84e*/
    }
    else
    {
      v19 = a8 - 1; /*0x97a7c8*/
      result = (*(int (__thiscall **)(float *, _DWORD, int, int, int, int, int, int, int, int, _BYTE *))(*(_DWORD *)this + 0xC))( /*0x97a7e2*/
                 this,
                 *((_DWORD *)a2 + 0x20),
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 v19,
                 a9,
                 a10,
                 a11);
      if ( result >= 1 ) /*0x97a7e7*/
        return result; /*0x97a7e7*/
      result = (*(int (__thiscall **)(float *, _DWORD, int, int, int, int, int, int, int, int, _BYTE *))(*(_DWORD *)this + 0xC))( /*0x97a820*/
                 this,
                 *((_DWORD *)a2 + 0x21),
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 v19,
                 a9,
                 a10,
                 a11);
      if ( result >= 1 ) /*0x97a825*/
        return result; /*0x97a825*/
    }
    return 0; /*0x97a9ac*/
  }
  v15 = v14(a2); /*0x97a85b*/
  v16 = *((_DWORD *)this + 0x20); /*0x97a85f*/
  if ( !v15 ) /*0x97a865*/
  {
    v18 = a7 - 1; /*0x97a92d*/
    if ( v16 && *((_DWORD *)this + 0x21) ) /*0x97a933*/
    {
      result = (*(int (__thiscall **)(int, float *, int, int, int, int, int, int, int, int, _BYTE *))(*(_DWORD *)v16 + 0xC))( /*0x97a967*/
                 v16,
                 a2,
                 a3,
                 a4,
                 a5,
                 a6,
                 v18,
                 a8,
                 a9,
                 a10,
                 a11);
      if ( result < 1 ) /*0x97a96c*/
      {
        result = (*(int (__thiscall **)(_DWORD, float *, int, int, int, int, int, int, int, int, _BYTE *))(**((_DWORD **)this + 0x21) + 0xC))( /*0x97a99f*/
                   *((_DWORD *)this + 0x21),
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   v18,
                   a8,
                   a9,
                   a10,
                   a11);
        if ( result < 1 ) /*0x97a9a4*/
          return 0; /*0x97a9a4*/
      }
      return result; /*0x97a9a4*/
    }
    return sub_97A530((int)this, (int)a2, a3, a4, a5, a6, a11); /*0x97a9c3*/
  }
  if ( !v16 || !*((_DWORD *)this + 0x21) ) /*0x97a873*/
    return sub_97A530((int)this, (int)a2, a3, a4, a5, a6, a11); /*0x97a87a*/
  v17 = a7 - 1; /*0x97a889*/
  result = (*(int (__thiscall **)(int, float *, int, int, int, int, int, int, int, int, _BYTE *))(*(_DWORD *)v16 + 0xC))( /*0x97a8b6*/
             v16,
             a2,
             a3,
             a4,
             a5,
             a6,
             v17,
             a8,
             a9,
             a10,
             a11);
  if ( result < 1 ) /*0x97a8bb*/
  {
    result = (*(int (__thiscall **)(_DWORD, float *, int, int, int, int, int, int, int, int, _BYTE *))(**((_DWORD **)this + 0x21) + 0xC))( /*0x97a8f2*/
               *((_DWORD *)this + 0x21),
               a2,
               a3,
               a4,
               a5,
               a6,
               v17,
               a8,
               a9,
               a10,
               a11);
    if ( result < 1 ) /*0x97a8f7*/
      return 0; /*0x97a8f7*/
  }
  return result; /*0x97a6fc*/
}
