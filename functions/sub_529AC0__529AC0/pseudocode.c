char __userpurge sub_529AC0@<al>(int *a1@<ecx>, double a2@<st2>, double a3@<st1>, unsigned __int8 a4)
{
  int *v5; // esi
  int v6; // eax
  char v8; // al

  v5 = a1 + 0x10;
  if ( a1 != (int *)0xFFFFFFC0 )
  {
    do
    {
      v6 = v5[1];
      if ( !v6 && !*v5 )
        break;
      if ( *(_BYTE *)*v5 == a4 )
      {
        v8 = *((_BYTE *)a1 + 0x3C);
        if ( (v8 & 2) == 0 || (v8 & 8) != 0 )
        {
          *((_BYTE *)a1 + 0x3C) |= 1u;
          (*(void (__thiscall **)(int *, int))(*a1 + 0x40))(a1, 4);
        }
        if ( a4 > *((_BYTE *)a1 + 0x5C) )
          *((_BYTE *)a1 + 0x5C) = a4;
        sub_52B080(*v5, a2, a3, (int)a1);
        (*(void (__thiscall **)(int *, int))(*a1 + 0x40))(a1, 0x10000000);
        return 1;
      }
      v5 = (int *)v5[1];
    }
    while ( v6 );
  }
  return 0;
}
