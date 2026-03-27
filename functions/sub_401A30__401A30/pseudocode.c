void __thiscall sub_401A30(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v4; // edi
  char *v5; // eax

  v2 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = (_DWORD *)*v2;
      if ( !*v2 || (v4[1] & 0x40000000) == 0 )
        break;
      sub_4018F0(this, v4, v2);
      v2 = v4;
      if ( !v4 )
        goto LABEL_5;
    }
    while ( v2 != (_DWORD *)*(this + 9) )
    {
      v5 = (char *)v2 + (v2[1] & 0xFFFFFFF);
      if ( (*((_DWORD *)v5 + 3) & 0x40000000) == 0 )
        break;
      sub_4018F0(this, v2, (_DWORD *)v5 + 2);
    }
  }
LABEL_5:
  sub_4019A0(this);
}
