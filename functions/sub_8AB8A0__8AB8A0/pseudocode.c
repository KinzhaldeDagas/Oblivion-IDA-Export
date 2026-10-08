void __cdecl sub_8AB8A0(int a1, float a2)
{
  NiRTTI *v2; // eax
  int v3; // esi
  NiRTTI *v4; // eax
  int v5; // eax
  NiObject *v6; // eax
  int *vftable; // esi

  if ( a1 ) /*0x8ab8a7*/
  {
    v2 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x8ab8b4*/
    if ( v2 ) /*0x8ab8b8*/
    {
      while ( v2 != &parent ) /*0x8ab8c5*/
      {
        v2 = v2->parent; /*0x8ab8c7*/
        if ( !v2 ) /*0x8ab8cc*/
          goto LABEL_17; /*0x8ab8cc*/
      }
      if ( *(_WORD *)(a1 + 0xB6) ) /*0x8ab8e1*/
      {
        v3 = **(_DWORD **)(a1 + 0xB0); /*0x8ab8f6*/
        if ( v3 ) /*0x8ab8fa*/
        {
          v4 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3); /*0x8ab907*/
          if ( v4 ) /*0x8ab90b*/
          {
            while ( v4 != &parent ) /*0x8ab916*/
            {
              v4 = v4->parent; /*0x8ab918*/
              if ( !v4 ) /*0x8ab91d*/
                goto LABEL_17; /*0x8ab91d*/
            }
            if ( *(_WORD *)(v3 + 0xB6) ) /*0x8ab933*/
            {
              v5 = **(_DWORD **)(v3 + 0xB0); /*0x8ab943*/
              if ( v5 ) /*0x8ab947*/
              {
                v6 = NiRTTI_Cast((BSStringT *)&MEMORY[0xBA7D24], *(NiObject **)(v5 + 0xA8)); /*0x8ab955*/
                if ( v6 ) /*0x8ab95f*/
                {
                  vftable = (int *)v6[2].__vftable; /*0x8ab961*/
                  if ( vftable ) /*0x8ab966*/
                  {
                    (*(void (__thiscall **)(int *, int))(*vftable + 0x9C))(vftable, 6); /*0x8ab974*/
                    sub_4D6AF0(vftable, (int)&unk_BA7A40); /*0x8ab97d*/
                    sub_4D6B30(vftable, (int)&unk_BA7A40); /*0x8ab989*/
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
  sub_8AB240(*(float *)&a1, a2); /*0x8ab98f*/
}
