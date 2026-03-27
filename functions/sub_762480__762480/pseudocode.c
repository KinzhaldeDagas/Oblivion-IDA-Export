char *__thiscall sub_762480(char *this)
{
  char *v2; // edi
  char *v3; // ebx
  char *v4; // eax
  size_t v6; // [esp-18h] [ebp-470h]
  char v7[1100]; // [esp+8h] [ebp-450h] BYREF

  v2 = this + 0x3BC;
  *(this + 0x3BC) = 0;
  _memset(v7, 0, sizeof(v7));
  if ( (*(int (__stdcall **)(int, _DWORD, _DWORD, char *))(*(_DWORD *)dword_B42154 + 0x14))(
         dword_B42154,
         *((_DWORD *)this + 0x16F),
         0,
         v7) >= 0 )
  {
    switch ( *((_DWORD *)this + 0x170) )
    {
      case 1:
        v3 = (char *)&off_A88574;
        break;
      case 2:
        v3 = off_A3CEB0;
        break;
      case 3:
        v3 = (char *)&unk_A88578;
        break;
      default:
        v3 = "???";
        break;
    }
    v4 = sub_761C50(this);
    HIDWORD(v6) = "%s (%s-%s)";
    LODWORD(v6) = 0x200;
    sub_6C5D40(v2, v2, v6, &v7[0x200], v3, v4);
  }
  return v2;
}
