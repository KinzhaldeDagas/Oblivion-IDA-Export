void __cdecl sub_6D42D0(int a1, int a2)
{
  int v2; // eax
  Ni2DBuffer *v3; // esi
  Ni2DBuffer *height; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int i; // esi

  if ( a2 )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( v2 )
    {
      while ( (char *)v2 != dword_B3FA80 )
      {
        v2 = *(_DWORD *)(v2 + 4);
        if ( !v2 )
          return;
      }
      v3 = *(Ni2DBuffer **)(a2 + 0xC);
      if ( v3 )
      {
        do
        {
          height = (Ni2DBuffer *)v3[2].members.height;
          v5 = (*((int (__thiscall **)(Ni2DBuffer *))v3->__vftable + 1))(v3);
          if ( v5 )
          {
            while ( (char *)v5 != dword_B3DBDC )
            {
              v5 = *(_DWORD *)(v5 + 4);
              if ( !v5 )
                goto LABEL_10;
            }
            sub_6D3EB0(v3);
          }
          else
          {
LABEL_10:
            v6 = (*((int (__thiscall **)(Ni2DBuffer *))v3->__vftable + 1))(v3);
            if ( v6 )
            {
              while ( (char *)v6 != dword_B3DF34 )
              {
                v6 = *(_DWORD *)(v6 + 4);
                if ( !v6 )
                  goto LABEL_13;
              }
              sub_6D3BD0((int)v3);
            }
            else
            {
LABEL_13:
              v7 = (*((int (__thiscall **)(Ni2DBuffer *))v3->__vftable + 1))(v3);
              if ( v7 )
              {
                while ( (char *)v7 != dword_B3DDC0 )
                {
                  v7 = *(_DWORD *)(v7 + 4);
                  if ( !v7 )
                    goto LABEL_20;
                }
                sub_6D4000((int)v3);
              }
            }
          }
LABEL_20:
          v3 = height;
        }
        while ( height );
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) )
      {
        for ( i = 0; *(unsigned __int16 *)(a2 + 0xB6) > i; sub_6D42D0(a1, *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * i++)) )
          ;
      }
    }
  }
}
