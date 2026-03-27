void __stdcall sub_432130(volatile LONG *a1)
{
  LONG v1; // esi
  volatile LONG *v2; // edi
  _DWORD *v3; // [esp+4h] [ebp-8h]

  v1 = *((_DWORD *)a1 + 3);
  v2 = a1 + 3;
  while ( 2 )
  {
    switch ( v1 )
    {
      case 0:
        if ( InterlockedCompareExchange(v2, 6, v1) != v1 )
          goto LABEL_14;
        (*(void (__thiscall **)(volatile LONG *, _DWORD))(*a1 + 0xC))(a1, 0);
        return;
      case 1:
      case 2:
        if ( InterlockedCompareExchange(v2, 6, v1) != v1 )
          goto LABEL_14;
        (*(void (__thiscall **)(volatile LONG *, _DWORD))(*a1 + 0xC))(a1, 0);
        sub_431D10(v3, (int)a1);
        def_432154((int)a1);
        return;
      case 3:
        if ( v1 == 3 )
        {
          do
            Sleep(1u);
          while ( *v2 == 3 );
        }
        goto LABEL_14;
      case 4:
        if ( v1 == 4 )
        {
          do
            Sleep(1u);
          while ( *v2 == 4 );
        }
        goto LABEL_14;
      case 5:
        if ( InterlockedCompareExchange(v2, 6, v1) != v1 )
        {
LABEL_14:
          v1 = *v2;
          if ( *v2 > 5u )
            return;
          continue;
        }
        (*(void (__thiscall **)(volatile LONG *, int))(*a1 + 0xC))(a1, 1);
        return;
      default:
        JUMPOUT(0x4321A4);
    }
  }
}
