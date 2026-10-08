void __cdecl sub_6D42D0(int a1, int a2)
{
  NiRTTI *v2; // eax
  Ni2DBuffer *v3; // esi
  Ni2DBuffer *height; // edi
  NiRTTI *v5; // eax
  NiRTTI *v6; // eax
  NiRTTI *v7; // eax
  unsigned int i; // esi

  if ( a2 ) /*0x6d42d7*/
  {
    v2 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x6d42e4*/
    if ( v2 ) /*0x6d42e8*/
    {
      while ( v2 != &stru_B3FA80 ) /*0x6d42f5*/
      {
        v2 = v2->parent; /*0x6d42f7*/
        if ( !v2 ) /*0x6d42fc*/
          return; /*0x6d42fc*/
      }
      v3 = *(Ni2DBuffer **)(a2 + 0xC); /*0x6d4301*/
      if ( v3 ) /*0x6d4307*/
      {
        do /*0x6d438d*/
        {
          height = (Ni2DBuffer *)v3[2].members.height; /*0x6d4315*/
          v5 = (NiRTTI *)(*((int (__thiscall **)(Ni2DBuffer *))v3->__vftable + 1))(v3); /*0x6d431a*/
          if ( v5 ) /*0x6d431e*/
          {
            while ( v5 != &stru_B3DBDC ) /*0x6d4325*/
            {
              v5 = v5->parent; /*0x6d4327*/
              if ( !v5 ) /*0x6d432c*/
                goto LABEL_10; /*0x6d432c*/
            }
            sub_6D3EB0(v3); /*0x6d4371*/
          }
          else
          {
LABEL_10:
            v6 = (NiRTTI *)(*((int (__thiscall **)(Ni2DBuffer *))v3->__vftable + 1))(v3); /*0x6d432e*/
            if ( v6 ) /*0x6d4339*/
            {
              while ( v6 != &stru_B3DF34 ) /*0x6d4345*/
              {
                v6 = v6->parent; /*0x6d4347*/
                if ( !v6 ) /*0x6d434c*/
                  goto LABEL_13; /*0x6d434c*/
              }
              sub_6D3BD0((int)v3); /*0x6d4379*/
            }
            else
            {
LABEL_13:
              v7 = (NiRTTI *)(*((int (__thiscall **)(Ni2DBuffer *))v3->__vftable + 1))(v3); /*0x6d434e*/
              if ( v7 ) /*0x6d4359*/
              {
                while ( v7 != &stru_B3DDC0 ) /*0x6d4365*/
                {
                  v7 = v7->parent; /*0x6d4367*/
                  if ( !v7 ) /*0x6d436c*/
                    goto LABEL_20; /*0x6d436c*/
                }
                sub_6D4000((int)v3); /*0x6d4381*/
              }
            }
          }
LABEL_20:
          v3 = height; /*0x6d4389*/
        }
        while ( height ); /*0x6d438d*/
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) ) /*0x6d4396*/
      {
        for ( i = 0; *(unsigned __int16 *)(a2 + 0xB6) > i; sub_6D42D0(a1, *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * i++)) ) /*0x6d43a3*/
          ; /*0x6d43c0*/
      }
    }
  }
}
