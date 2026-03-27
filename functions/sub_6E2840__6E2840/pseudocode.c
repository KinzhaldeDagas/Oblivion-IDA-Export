int __thiscall sub_6E2840(unsigned int *this, int a2, int a3)
{
  _DWORD *v4; // ebx
  int v5; // eax
  char v6; // al
  _DWORD *v7; // esi
  int v9; // [esp+Ch] [ebp-Ch]
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  if ( a2 )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( v5 )
    {
      while ( (char *)v5 != dword_B3DCF0 )
      {
        v5 = *(_DWORD *)(v5 + 4);
        if ( !v5 )
          goto LABEL_6;
      }
      v6 = 1;
    }
    else
    {
LABEL_6:
      v6 = 0;
    }
    v4 = v6 != 0 ? (_DWORD *)a2 : 0;
  }
  else
  {
    v4 = 0;
  }
  v7 = (_DWORD *)*(this + 0x11);
  *(float *)&v9 = sub_7300B0(v7, *(this + 0x12));
  *(float *)&v10 = sub_7300B0(v7, *(this + 0x12) + 1);
  *(float *)&v11 = sub_7300B0(v7, *(this + 0x12) + 2);
  return sub_6DA440(v4, v9, v10, v11);
}
