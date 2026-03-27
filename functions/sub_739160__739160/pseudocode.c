int __thiscall sub_739160(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // esi
  int result; // eax
  int v5; // ebp
  int v6; // edi
  volatile LONG *v7; // esi
  volatile LONG **v8; // ebx
  volatile LONG *v9; // edi

  v2 = a2;
  v3 = this;
  nullsub_returnvVoid_1arg((int)a2);
  result = sub_7124D0(a2);
  v5 = result;
  if ( result )
  {
    while ( 1 )
    {
      v6 = v3[2];
      --v5;
      result = sub_7124A0(v2);
      v7 = (volatile LONG *)result;
      if ( result )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 0x4C))(result);
        if ( result <= 0xA )
        {
          result = (*(int (__thiscall **)(volatile LONG *))(*v7 + 0x4C))(v7);
          v8 = (volatile LONG **)(v6 + 4 * result + 8);
          v9 = *v8;
          if ( *v8 != v7 )
          {
            if ( v9 )
            {
              if ( !InterlockedDecrement(v9 + 1) )
                (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
            }
            *v8 = v7;
            result = InterlockedIncrement(v7 + 1);
          }
        }
      }
      if ( !v5 )
        break;
      v3 = this;
      v2 = a2;
    }
  }
  return result;
}
