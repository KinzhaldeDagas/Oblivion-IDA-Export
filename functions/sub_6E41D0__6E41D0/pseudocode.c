int __thiscall sub_6E41D0(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // ecx
  NiRTTI *v5; // eax
  char v6; // al

  if ( a2 )
  {
    v5 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x6e41e7*/
    if ( v5 ) /*0x6e41eb*/
    {
      while ( v5 != &stru_B3E2D0 ) /*0x6e41f5*/
      {
        v5 = v5->parent; /*0x6e41f7*/
        if ( !v5 ) /*0x6e41fc*/
          goto LABEL_6; /*0x6e41fc*/
      }
      v6 = 1; /*0x6e4234*/
    }
    else
    {
LABEL_6:
      v6 = 0; /*0x6e41fe*/
    }
    v4 = v6 != 0 ? (_DWORD *)a2 : 0;
  }
  else
  {
    v4 = 0; /*0x6e41dc*/
  }
  return sub_6E3AA0( /*0x6e422f*/
           v4,
           *(_DWORD *)(*(this + 0x11) + 0xC),
           *(_DWORD *)(*(this + 0x11) + 0x10),
           *(_DWORD *)(*(this + 0x11) + 0x14),
           *(_DWORD *)(*(this + 0x11) + 0x18));
}
