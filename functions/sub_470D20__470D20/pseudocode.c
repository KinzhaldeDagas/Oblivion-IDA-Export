int __thiscall sub_470D20(_DWORD **this, unsigned int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // ebx
  int v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  if ( sub_470960(*(this + 0x27), a2, &v10) )
  {
    if ( (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v10 + 0x10))(v10, 0xFFFFFFFF) )
      JUMPOUT(0x470EDF);
  }
  if ( (a2 & 0xF00) != 0 )
  {
    v4 = sub_51A9E0(a2) - 3;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
        {
LABEL_13:
          if ( sub_470960(*(this + 0x27), a2 & 0xF0FF, &v9) )
          {
            if ( (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v9 + 0x10))(v9, 0xFFFFFFFF) )
              JUMPOUT(0x470F0C);
          }
          goto LABEL_15;
        }
      }
      else if ( (a2 & 0xF000) != 0x2000 )
      {
        if ( sub_470960(*(this + 0x27), a2 & 0xF3FF | 0x300, &v9) )
        {
          if ( (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v9 + 0x10))(v9, 0xFFFFFFFF) )
            JUMPOUT(0x470EE8);
        }
      }
    }
    if ( sub_470960(*(this + 0x27), a2 & 0xF2FF | 0x200, &v9) )
    {
      if ( (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v9 + 0x10))(v9, 0xFFFFFFFF) )
        JUMPOUT(0x470EFA);
    }
    goto LABEL_13;
  }
LABEL_15:
  if ( (_WORD)a2 )
  {
    switch ( sub_51AA00(a2) )
    {
      case 7:
        v7 = a2 & 0xFF00 | 3;
        goto LABEL_21;
      case 8:
        v7 = a2 & 0xFF00 | 4;
        goto LABEL_21;
      case 9:
        v7 = a2 & 0xFF00 | 5;
        goto LABEL_21;
      case 0xA:
        v7 = a2 & 0xFF00 | 6;
LABEL_21:
        if ( (_WORD)v7 != 0xFF )
        {
          LOBYTE(v6) = v7 ^ sub_470D20(this, v7, 1);
          if ( !(_BYTE)v6 )
            JUMPOUT(0x470F1C);
        }
        return def_470E4A(v6, a2, a3);
      default:
        break;
    }
  }
  JUMPOUT(0x470E9D);
}
