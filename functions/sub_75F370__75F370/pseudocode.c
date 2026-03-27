void __thiscall sub_75F370(void *this, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  char v6; // al

  v3 = a2;
  if ( a2 )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( v5 )
    {
      while ( (char *)v5 != dword_B3E7E8 )
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
    v3 &= -(v6 != 0);
  }
  (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this + 0xAC))(this, &a2);
  sub_6E80F0(v3, a2);
}
