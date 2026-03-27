_DWORD *__thiscall sub_70B530(unsigned __int16 *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  unsigned int v4; // eax
  unsigned int v5; // ebp
  unsigned int v6; // esi
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ebx
  _DWORD *result; // eax
  _DWORD *v10; // ebp
  _DWORD *v11; // ebx
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v14; // ebx
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  sub_7081B0(this, a2);
  v4 = sub_7124D0(a2);
  v5 = v4;
  if ( v4 )
  {
    sub_523B10(this + 0x56, v4);
    v6 = 0;
    do
    {
      v7 = sub_7124A0(v2);
      (*(void (__thiscall **)(unsigned __int16 *, int *, unsigned int, int))(*(_DWORD *)this + 0x90))(
        this,
        &v17,
        v6,
        v7);
      if ( v17 )
      {
        v8 = (void (__thiscall ***)(_DWORD, int))v17;
        if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
          (**v8)(v8, 1);
        v2 = a2;
      }
      ++v6;
    }
    while ( v6 < v5 );
  }
  result = (_DWORD *)sub_7124D0(v2);
  v10 = result;
  if ( v2[0x36] >= 0x4010008u )
  {
    if ( result )
    {
      while ( 1 )
      {
        v10 = (_DWORD *)((char *)v10 + 0xFFFFFFFF);
        result = (_DWORD *)sub_7124A0(v2);
        v14 = result;
        if ( result )
        {
          v15 = (_DWORD *)(*(int (__thiscall **)(unsigned __int16 *))(*((_DWORD *)this + 0x2F) + 4))(this + 0x5E);
          v15[2] = v14;
          v15[1] = 0;
          *v15 = *((_DWORD *)this + 0x30);
          v16 = *((_DWORD *)this + 0x30);
          if ( v16 )
            *(_DWORD *)(v16 + 4) = v15;
          else
            *((_DWORD *)this + 0x31) = v15;
          ++*((_DWORD *)this + 0x32);
          *((_DWORD *)this + 0x30) = v15;
          result = sub_708E40(v14, this);
        }
        if ( !v10 )
          break;
        v2 = a2;
      }
    }
  }
  else if ( result )
  {
    while ( 1 )
    {
      v10 = (_DWORD *)((char *)v10 + 0xFFFFFFFF);
      result = (_DWORD *)sub_7124A0(v2);
      v11 = result;
      if ( result )
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(unsigned __int16 *))(*((_DWORD *)this + 0x2F) + 4))(this + 0x5E);
        v12[2] = v11;
        *v12 = 0;
        v12[1] = *((_DWORD *)this + 0x31);
        v13 = *((_DWORD **)this + 0x31);
        if ( v13 )
          *v13 = v12;
        else
          *((_DWORD *)this + 0x30) = v12;
        ++*((_DWORD *)this + 0x32);
        *((_DWORD *)this + 0x31) = v12;
        result = sub_708E40(v11, this);
      }
      if ( !v10 )
        break;
      v2 = a2;
    }
  }
  return result;
}
