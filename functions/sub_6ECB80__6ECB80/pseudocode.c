int __thiscall sub_6ECB80(void *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int v5; // eax
  char v6; // al
  int v8[3]; // [esp+8h] [ebp-Ch] BYREF

  v3 = a2;
  if ( a2 )
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*a2 + 4))(a2);
    if ( v5 )
    {
      while ( (char *)v5 != dword_B3DCF0 )
      {
        v5 = *(_DWORD *)(v5 + 4);
        if ( !v5 )
          goto LABEL_5;
      }
      v6 = 1;
    }
    else
    {
LABEL_5:
      v6 = 0;
    }
    v3 = v6 != 0 ? a2 : 0;
  }
  (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this + 0xA8))(this, v8);
  return sub_6DA440(v3, v8[0], v8[1], v8[2]);
}
