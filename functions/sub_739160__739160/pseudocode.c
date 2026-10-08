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

  v2 = a2; /*0x739162*/
  v3 = this; /*0x739168*/
  nullsub_returnvVoid_1arg((int)a2); /*0x73916f*/
  result = sub_7124D0(a2); /*0x739176*/
  v5 = result; /*0x73917b*/
  if ( result ) /*0x73917f*/
  {
    while ( 1 ) /*0x73918c*/
    {
      v6 = v3[2]; /*0x73918c*/
      --v5; /*0x739191*/
      result = sub_7124A0(v2); /*0x739194*/
      v7 = (volatile LONG *)result; /*0x739199*/
      if ( result ) /*0x73919d*/
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 0x4C))(result); /*0x7391a6*/
        if ( result <= 0xA ) /*0x7391ab*/
        {
          result = (*(int (__thiscall **)(volatile LONG *))(*v7 + 0x4C))(v7); /*0x7391b4*/
          v8 = (volatile LONG **)(v6 + 4 * result + 8); /*0x7391b6*/
          v9 = *v8; /*0x7391ba*/
          if ( *v8 != v7 ) /*0x7391be*/
          {
            if ( v9 ) /*0x7391c2*/
            {
              if ( !InterlockedDecrement(v9 + 1) ) /*0x7391c8*/
                (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x7391de*/
            }
            *v8 = v7; /*0x7391e0*/
            result = InterlockedIncrement(v7 + 1); /*0x7391e6*/
          }
        }
      }
      if ( !v5 ) /*0x7391ee*/
        break; /*0x7391ee*/
      v3 = this; /*0x739184*/
      v2 = a2; /*0x739188*/
    }
  }
  return result; /*0x7391f1*/
}
