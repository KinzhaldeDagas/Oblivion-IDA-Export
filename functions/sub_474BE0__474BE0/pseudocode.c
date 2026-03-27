int __thiscall sub_474BE0(_DWORD **this, int a2, _DWORD *a3)
{
  float v6; // edi
  _DWORD *v8; // ebx
  char *v9; // eax

  v6 = *(float *)&a3;
  if ( (_WORD)a3 == 0xFF || !sub_470960(this[0x27], (int)a3, &a3) )
    return 0;
  v8 = a3;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a3 + 0xC))(a3) && (v9 = sub_470C40(v8, a2)) != 0 )
    return sub_474530(this, (int)v9, v6, 0xFFFFFFFF);
  else
    return 0;
}
