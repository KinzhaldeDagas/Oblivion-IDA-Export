char __thiscall sub_772CD0(_DWORD *this, int a2, int a3, unsigned __int8 a4)
{
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  bool v7; // zf
  unsigned int *v8; // ecx
  _DWORD *v9; // edi
  _DWORD **v10; // ebp
  _DWORD *v11; // ebx
  _DWORD *v12; // ecx
  int v13; // ecx
  int v14; // ecx
  char v16; // [esp+Fh] [ebp-1h] BYREF

  v16 = 0;
  v5 = sub_7727D0(this, a2, &v16);
  if ( v5 )
  {
    LOBYTE(v6) = v16;
    v7 = v16 == (char)a4;
    v5[1] = a3;
    if ( !v7 )
    {
      if ( (_BYTE)v6 )
      {
        sub_772790(this, (int)v5);
        v6 = (_DWORD *)*(this + 2);
        if ( v6 )
        {
          v6[3] = v5;
          v6 = (_DWORD *)*(this + 2);
          v5[2] = v6;
        }
        v5[3] = 0;
        ++*(this + 1);
        *(this + 2) = v5;
      }
      else
      {
        sub_772750(this, (int)v5);
        v6 = (_DWORD *)*(this + 4);
        if ( v6 )
        {
          v6[3] = v5;
          v5[2] = *(this + 4);
        }
        v5[3] = 0;
        ++*(this + 3);
        *(this + 4) = v5;
      }
    }
  }
  else
  {
    v8 = (unsigned int *)dword_B427AC;
    v9 = (_DWORD *)(dword_B427AC + 8);
    v10 = (_DWORD **)dword_B427AC;
    if ( !*v9 )
    {
      v11 = v8 + 3;
      sub_772A80(v8, v8[3]);
      *v11 *= 2;
    }
    v12 = *v10;
    v6 = (_DWORD *)**v10;
    *v12 = v12[--*v9];
    v6[2] = 0;
    v6[3] = 0;
    *v6 = a2;
    v6[1] = a3;
    if ( a4 )
    {
      v13 = *(this + 4);
      if ( v13 )
      {
        *(_DWORD *)(v13 + 0xC) = v6;
        v6[2] = *(this + 4);
      }
      v6[3] = 0;
      ++*(this + 3);
      *(this + 4) = v6;
    }
    else
    {
      v14 = *(this + 2);
      if ( v14 )
      {
        *(_DWORD *)(v14 + 0xC) = v6;
        v6[2] = *(this + 2);
      }
      v6[3] = 0;
      ++*(this + 1);
      *(this + 2) = v6;
    }
  }
  return (char)v6;
}
