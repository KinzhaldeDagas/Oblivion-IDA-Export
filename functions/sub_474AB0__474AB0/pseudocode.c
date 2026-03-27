char __userpurge sub_474AB0@<al>(
        int this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9)
{
  int v10; // ebx
  int v11; // eax
  int v12; // ebp
  int v13; // edi
  _DWORD *v14; // eax
  int v15; // eax
  double v16; // st4

  v10 = a5;
  if ( a5 == 5 )
  {
    v10 = 0;
  }
  else if ( a5 == 6 )
  {
    v10 = 3;
  }
  if ( a7 == 0xFFFFFFFF )
  {
    LOBYTE(v11) = sub_470FC0((_DWORD *)this, v10, 0.0);
    LOWORD(v12) = a6;
    if ( (_WORD)a6 != 0xFF )
    {
      LOBYTE(v11) = sub_470960(*(_DWORD **)(this + 0x9C), a6, &a6);
      if ( (_BYTE)v11 )
      {
        v13 = a6;
        v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a6 + 0x10))(a6, a9);
        if ( v11 )
        {
          v14 = (_DWORD *)(*(int (__usercall **)@<eax>(int@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v13 + 0x10))(
                            v13,
                            a9,
                            st7_0,
                            st6_0,
                            st5_0);
          *(_DWORD *)(this + 4 * v10 + 0xA0) = v14;
          LOBYTE(v11) = sub_6C9BA0(v14, 0, 0, 1.0, 0.0, 0, 0);
        }
      }
    }
  }
  else
  {
    v12 = a6;
    LOBYTE(v11) = sub_470960(*(_DWORD **)(this + 0x9C), a6, &a6);
    if ( (_BYTE)v11 )
    {
      if ( sub_470960(*(_DWORD **)(this + 0x9C), v12, &a6) )
      {
        v15 = (*(int (__usercall **)@<eax>(int@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a6 + 0x10))(
                a6,
                a9,
                st7_0,
                st6_0,
                st5_0);
        sub_474530((_DWORD *)this, v15, *(float *)&v12, a5);
      }
      LOBYTE(v11) = a7;
      *(_DWORD *)(this + 4 * v10 + 0x48) = a7;
    }
  }
  v16 = a8;
  *(_WORD *)(this + 2 * v10 + 0x3C) = v12;
  *(float *)(this + 0x94) = v16;
  return v11;
}
