bool __thiscall sub_979B90(float *this, float *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  bool v11; // zf
  int (__thiscall *v12)(float *); // edx
  char v13; // al
  int v14; // ecx
  int v16; // [esp+54h] [ebp+4h]
  int v17; // [esp+60h] [ebp+10h]
  int v18; // [esp+60h] [ebp+10h]
  int v19; // [esp+64h] [ebp+14h]

  if ( !a2 )
    return 0;
  if ( a7 != *((_DWORD *)this + 0x22) )
  {
    sub_97AEC0(this + 1, (float *)(a3 + 0x64));
    *((_DWORD *)this + 0x22) = a7;
  }
  if ( a8 != *((_DWORD *)a2 + 0x22) )
  {
    sub_97AEC0(a2 + 1, (float *)(a4 + 0x64));
    *((_DWORD *)a2 + 0x22) = a8;
  }
  if ( !sub_97AFC0((int)(this + 1), (int)(a2 + 1)) )
    return 0;
  if ( a5 && a6 )
  {
    v11 = (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 4))(this) == 0;
    v12 = *(int (__thiscall **)(float *))(*(_DWORD *)a2 + 4);
    if ( v11 )
    {
      v13 = v12(a2);
      v14 = *((_DWORD *)this + 0x20);
      if ( v13 )
      {
        if ( v14 && *((_DWORD *)this + 0x21) )
        {
          v17 = a5 - 1;
          return (*(unsigned __int8 (__thiscall **)(int, float *, int, int, int, int, int, int))(*(_DWORD *)v14 + 8))(
                   v14,
                   a2,
                   a3,
                   a4,
                   v17,
                   a6,
                   a7,
                   a8)
              || (*(unsigned __int8 (__thiscall **)(_DWORD, float *, int, int, int, int, int, int))(**((_DWORD **)this + 0x21)
                                                                                                  + 8))(
                   *((_DWORD *)this + 0x21),
                   a2,
                   a3,
                   a4,
                   v17,
                   a6,
                   a7,
                   a8);
        }
      }
      else if ( v14 && *((_DWORD *)this + 0x21) )
      {
        v18 = a6 - 1;
        v16 = a5 - 1;
        return (*(unsigned __int8 (__thiscall **)(int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v14 + 8))(
                 v14,
                 *((_DWORD *)a2 + 0x20),
                 a3,
                 a4,
                 a5 - 1,
                 a6 - 1,
                 a7,
                 a8)
            || (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int, int, int, int, int, int))(**((_DWORD **)this
                                                                                                  + 0x20)
                                                                                               + 8))(
                 *((_DWORD *)this + 0x20),
                 *((_DWORD *)a2 + 0x21),
                 a3,
                 a4,
                 v16,
                 v18,
                 a7,
                 a8)
            || (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int, int, int, int, int, int))(**((_DWORD **)this
                                                                                                  + 0x21)
                                                                                               + 8))(
                 *((_DWORD *)this + 0x21),
                 *((_DWORD *)a2 + 0x20),
                 a3,
                 a4,
                 v16,
                 v18,
                 a7,
                 a8)
            || (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int, int, int, int, int, int))(**((_DWORD **)this
                                                                                                  + 0x21)
                                                                                               + 8))(
                 *((_DWORD *)this + 0x21),
                 *((_DWORD *)a2 + 0x21),
                 a3,
                 a4,
                 v16,
                 v18,
                 a7,
                 a8);
      }
    }
    else if ( !(unsigned __int8)v12(a2) && sub_977510(a2) )
    {
      v19 = a6 - 1;
      return (*(unsigned __int8 (__thiscall **)(float *, _DWORD, int, int, int, int, int, int))(*(_DWORD *)this + 8))(
               this,
               *((_DWORD *)a2 + 0x20),
               a3,
               a4,
               a5,
               v19,
               a7,
               a8)
          || (*(unsigned __int8 (__thiscall **)(float *, _DWORD, int, int, int, int, int, int))(*(_DWORD *)this + 8))(
               this,
               *((_DWORD *)a2 + 0x21),
               a3,
               a4,
               a5,
               v19,
               a7,
               a8);
    }
  }
  return 1;
}
