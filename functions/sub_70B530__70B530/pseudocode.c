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

  v2 = a2; /*0x70b532*/
  sub_7081B0(this, a2); /*0x70b53c*/
  v4 = sub_7124D0(a2); /*0x70b543*/
  v5 = v4; /*0x70b548*/
  if ( v4 ) /*0x70b54c*/
  {
    NiTObjectArray_Resize16(this + 0x56, v4); /*0x70b555*/
    v6 = 0; /*0x70b55a*/
    do /*0x70b5a9*/
    {
      v7 = sub_7124A0(v2); /*0x70b562*/
      (*(void (__thiscall **)(unsigned __int16 *, int *, unsigned int, int))(*(_DWORD *)this + 0x90))( /*0x70b578*/
        this,
        &v17,
        v6,
        v7);
      if ( v17 ) /*0x70b580*/
      {
        v8 = (void (__thiscall ***)(_DWORD, int))v17; /*0x70b582*/
        if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x70b588*/
          (**v8)(v8, 1); /*0x70b59e*/
        v2 = a2; /*0x70b5a0*/
      }
      ++v6; /*0x70b5a4*/
    }
    while ( v6 < v5 ); /*0x70b5a9*/
  }
  result = (_DWORD *)sub_7124D0(v2); /*0x70b5ad*/
  v10 = result; /*0x70b5bc*/
  if ( v2[0x36] >= 0x4010008u ) /*0x70b5be*/
  {
    if ( result ) /*0x70b631*/
    {
      while ( 1 ) /*0x70b63b*/
      {
        v10 = (_DWORD *)((char *)v10 + 0xFFFFFFFF); /*0x70b63b*/
        result = (_DWORD *)sub_7124A0(v2); /*0x70b63e*/
        v14 = result; /*0x70b643*/
        if ( result ) /*0x70b647*/
        {
          v15 = (_DWORD *)(*(int (__thiscall **)(unsigned __int16 *))(*((_DWORD *)this + 0x2F) + 4))(this + 0x5E); /*0x70b65a*/
          v15[2] = v14; /*0x70b65c*/
          v15[1] = 0; /*0x70b65f*/
          *v15 = *((_DWORD *)this + 0x30); /*0x70b669*/
          v16 = *((_DWORD *)this + 0x30); /*0x70b66b*/
          if ( v16 ) /*0x70b670*/
            *(_DWORD *)(v16 + 4) = v15; /*0x70b672*/
          else
            *((_DWORD *)this + 0x31) = v15; /*0x70b677*/
          ++*((_DWORD *)this + 0x32); /*0x70b67a*/
          *((_DWORD *)this + 0x30) = v15; /*0x70b681*/
          result = sub_708E40(v14, this); /*0x70b684*/
        }
        if ( !v10 ) /*0x70b68b*/
          break; /*0x70b68b*/
        v2 = a2; /*0x70b635*/
      }
    }
  }
  else if ( result ) /*0x70b5c2*/
  {
    while ( 1 ) /*0x70b5d6*/
    {
      v10 = (_DWORD *)((char *)v10 + 0xFFFFFFFF); /*0x70b5d6*/
      result = (_DWORD *)sub_7124A0(v2); /*0x70b5d9*/
      v11 = result; /*0x70b5de*/
      if ( result ) /*0x70b5e2*/
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(unsigned __int16 *))(*((_DWORD *)this + 0x2F) + 4))(this + 0x5E); /*0x70b5f5*/
        v12[2] = v11; /*0x70b5f7*/
        *v12 = 0; /*0x70b5fa*/
        v12[1] = *((_DWORD *)this + 0x31); /*0x70b603*/
        v13 = *((_DWORD **)this + 0x31); /*0x70b606*/
        if ( v13 ) /*0x70b60b*/
          *v13 = v12; /*0x70b60d*/
        else
          *((_DWORD *)this + 0x30) = v12; /*0x70b611*/
        ++*((_DWORD *)this + 0x32); /*0x70b614*/
        *((_DWORD *)this + 0x31) = v12; /*0x70b61b*/
        result = sub_708E40(v11, this); /*0x70b61e*/
      }
      if ( !v10 ) /*0x70b625*/
        break; /*0x70b625*/
      v2 = a2; /*0x70b5d0*/
    }
  }
  return result; /*0x70b627*/
}
