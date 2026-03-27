void __cdecl sub_8AB8A0(int a1, float a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  NiObject *v6; // eax
  int *vftable; // esi

  if ( a1 )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
    if ( v2 )
    {
      while ( (char *)v2 != dword_B3FAB0 )
      {
        v2 = *(_DWORD *)(v2 + 4);
        if ( !v2 )
          goto LABEL_17;
      }
      if ( *(_WORD *)(a1 + 0xB6) )
      {
        v3 = **(_DWORD **)(a1 + 0xB0);
        if ( v3 )
        {
          v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
          if ( v4 )
          {
            while ( (char *)v4 != dword_B3FAB0 )
            {
              v4 = *(_DWORD *)(v4 + 4);
              if ( !v4 )
                goto LABEL_17;
            }
            if ( *(_WORD *)(v3 + 0xB6) )
            {
              v5 = **(_DWORD **)(v3 + 0xB0);
              if ( v5 )
              {
                v6 = NiRTTI_Cast((BSStringT *)dword_BA7D24, *(NiObject **)(v5 + 0xA8));
                if ( v6 )
                {
                  vftable = (int *)v6[2].__vftable;
                  if ( vftable )
                  {
                    (*(void (__thiscall **)(int *, int))(*vftable + 0x9C))(vftable, 6);
                    sub_4D6AF0(vftable, (int)&stru_BA7A40);
                    sub_4D6B30(vftable, (int)&stru_BA7A40);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_17:
  sub_8AB240(*(float *)&a1, a2);
}
