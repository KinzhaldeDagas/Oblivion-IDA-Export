void __thiscall sub_4ECAE0(_DWORD *this, volatile LONG *a2)
{
  volatile LONG *v2; // ebx
  volatile LONG *v4; // edi
  _DWORD **v5; // esi
  int v6; // edi

  v2 = a2;
  switch ( *(this + 2) )
  {
    case 2:
      *(this + 2) = 4;
      break;
    case 3:
      (*(void (__thiscall **)(volatile LONG *, volatile LONG **, _DWORD))(*a2 + 0x88))(a2, &a2, *(this + 0xB));
      v4 = a2;
      if ( a2 )
      {
        if ( !InterlockedDecrement(a2 + 1) )
        {
          if ( v4 )
            (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
        }
      }
      *(this + 2) = 2;
      break;
    case 4:
      sub_4EC810(this);
      break;
  }
  v5 = (_DWORD **)(this + 0xC);
  if ( *v5 )
  {
    v6 = 4;
    do
    {
      sub_4ECAE0(*v5++, v2);
      --v6;
    }
    while ( v6 );
  }
}
