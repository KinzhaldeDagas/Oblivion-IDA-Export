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

  if ( !a2 )
    return 0;
  if ( a9 != *((_DWORD *)this + 0x22) )
  {
    sub_97AEC0(this + 1, (float *)(a5 + 0x64));
    *((_DWORD *)this + 0x22) = a9;
  }
  if ( a10 != *((_DWORD *)a2 + 0x22) )
  {
    sub_97AEC0(a2 + 1, (float *)(a6 + 0x64));
    *((_DWORD *)a2 + 0x22) = a10;
  }
  if ( !sub_97AFC0((int)(this + 1), (int)(a2 + 1)) )
    return 0;
  if ( !a7 || !a8 )
    return sub_97A530((int)this, (int)a2, a3, a4, a5, a6, a11);
  v13 = (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 4))(this) == 0;
  v14 = *(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a2 + 4);
  if ( !v13 )
  {
    if ( v14(a2) || !sub_977510(a2) )
    {
      result = sub_97A530((int)this, (int)a2, a3, a4, a5, a6, a11);
      if ( result >= 1 )
        return result;
    }
    else
    {
      v19 = a8 - 1;
      result = (*(int (__thiscall **)(float *, _DWORD, int, int, int, int, int, int, int, int, _BYTE *))(*(_DWORD *)this + 0xC))(
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
      if ( result >= 1 )
        return result;
      result = (*(int (__thiscall **)(float *, _DWORD, int, int, int, int, int, int, int, int, _BYTE *))(*(_DWORD *)this + 0xC))(
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
      if ( result >= 1 )
        return result;
    }
    return 0;
  }
  v15 = v14(a2);
  v16 = *((_DWORD *)this + 0x20);
  if ( !v15 )
  {
    v18 = a7 - 1;
    if ( v16 && *((_DWORD *)this + 0x21) )
    {
      result = (*(int (__thiscall **)(int, float *, int, int, int, int, int, int, int, int, _BYTE *))(*(_DWORD *)v16 + 0xC))(
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
      if ( result < 1 )
      {
        result = (*(int (__thiscall **)(_DWORD, float *, int, int, int, int, int, int, int, int, _BYTE *))(**((_DWORD **)this + 0x21) + 0xC))(
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
        if ( result < 1 )
          return 0;
      }
      return result;
    }
    return sub_97A530((int)this, (int)a2, a3, a4, a5, a6, a11);
  }
  if ( !v16 || !*((_DWORD *)this + 0x21) )
    return sub_97A530((int)this, (int)a2, a3, a4, a5, a6, a11);
  v17 = a7 - 1;
  result = (*(int (__thiscall **)(int, float *, int, int, int, int, int, int, int, int, _BYTE *))(*(_DWORD *)v16 + 0xC))(
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
  if ( result < 1 )
  {
    result = (*(int (__thiscall **)(_DWORD, float *, int, int, int, int, int, int, int, int, _BYTE *))(**((_DWORD **)this + 0x21) + 0xC))(
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
    if ( result < 1 )
      return 0;
  }
  return result;
}
