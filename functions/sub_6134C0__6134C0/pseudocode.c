char __thiscall sub_6134C0(void **this, int a2)
{
  int *v3; // eax
  int *v4; // eax
  int *v5; // eax
  int *v7; // eax
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v3 = sub_5E0F50(*(this + 0xF));
  if ( (double)(*(char (__thiscall **)(int *))(*v3 + 0x11C))(v3) > dbl_A2FC68 )
  {
    v4 = sub_5E0F50(*(this + 0xF));
    if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*v4 + 0x16C))(v4, 2) )
    {
      switch ( (unsigned int)retaddr )
      {
        case 0x16u:
          v5 = sub_5E0F50(*(this + 0xF));
          return (*(char (__thiscall **)(int *))(*v5 + 0x128))(v5) > 0;
        case 0x17u:
          v7 = sub_5E0F50(*(this + 0xF));
          return (*(char (__thiscall **)(int *))(*v7 + 0x12C))(v7) > 0;
        case 0x18u:
          v8 = sub_5E0F50(*(this + 0xF));
          return (*(char (__thiscall **)(int *))(*v8 + 0x130))(v8) > 0;
        case 0x19u:
          v9 = sub_5E0F50(*(this + 0xF));
          return (*(char (__thiscall **)(int *))(*v9 + 0x134))(v9) > 0;
        case 0x1Au:
          v10 = sub_5E0F50(*(this + 0xF));
          (*(void (__thiscall **)(int *))(*v10 + 0x138))(v10);
          return def_613527(a2);
        default:
          break;
      }
    }
  }
  JUMPOUT(0x6135CB);
}
