int __thiscall sub_955240(_DWORD *this, int a2, int a3, signed int a4, int a5, int a6)
{
  _DWORD *v7; // ecx
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  __int16 v12; // [esp+24h] [ebp+14h]

  v7 = (_DWORD *)*(this + 4);
  v8 = a6;
  v9 = v7[3] - a6;
  if ( a4 >= 3 )
    goto LABEL_11;
  v10 = v7[3] - a5;
  v12 = *((_WORD *)v7 + 6) - a5;
  if ( (v10 > 0 || v9 > 0xF8) && v10 < 0x10000 && v9 < 0x10000 )
  {
    sub_956520(v7, v9);
    sub_956520((_DWORD *)*(this + 4), SBYTE1(v9));
    sub_956520((_DWORD *)*(this + 4), v12);
    sub_956520((_DWORD *)*(this + 4), SHIBYTE(v12));
    sub_956520((_DWORD *)*(this + 4), a2);
    sub_956520((_DWORD *)*(this + 4), a3);
    return sub_956520((_DWORD *)*(this + 4), a4 + 0x23);
  }
  if ( a3 - a2 == 1 )
  {
    if ( v9 > 0xFB )
    {
      sub_954BC0(this, v8);
      v8 = *(_DWORD *)(*(this + 4) + 0xC);
    }
    sub_954BC0(this, a5);
    sub_956520((_DWORD *)*(this + 4), *(_DWORD *)(*(this + 4) + 0xC) - v8);
    sub_956520((_DWORD *)*(this + 4), a2);
    return sub_956520((_DWORD *)*(this + 4), a4 + 0x20);
  }
  else
  {
LABEL_11:
    if ( v9 > 0xFB )
    {
      sub_954BC0(this, v8);
      v8 = *(_DWORD *)(*(this + 4) + 0xC);
    }
    sub_954BC0(this, a5);
    sub_956520((_DWORD *)*(this + 4), *(_DWORD *)(*(this + 4) + 0xC) - v8);
    sub_956520((_DWORD *)*(this + 4), a2);
    sub_956520((_DWORD *)*(this + 4), a3);
    return sub_956520((_DWORD *)*(this + 4), a4 + 0x10);
  }
}
