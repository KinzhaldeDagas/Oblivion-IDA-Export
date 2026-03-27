__int16 __thiscall sub_712330(_DWORD *this, int a2, int a3)
{
  int v4; // ebp
  int *v5; // edi
  _DWORD *v6; // edi
  int v7; // eax

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2);
  v5 = *(int **)(*(this + 2) + 4 * v4);
  if ( v5 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, a2, v5[1]) )
    {
      v5 = (int *)*v5;
      if ( !v5 )
        goto LABEL_4;
    }
    if ( !*((_BYTE *)this + 0x10) )
      v5[1] = a2;
    *((_WORD *)v5 + 4) = a3;
    LOWORD(v7) = a3;
  }
  else
  {
LABEL_4:
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x14))(this);
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int))(*this + 0xC))(this, v6, a2, a3);
    v7 = *(this + 2);
    *v6 = *(_DWORD *)(v7 + 4 * v4);
    *(_DWORD *)(*(this + 2) + 4 * v4) = v6;
    ++*(this + 3);
  }
  return v7;
}
