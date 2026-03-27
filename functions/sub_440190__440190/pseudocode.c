void __thiscall sub_440190(_DWORD *this, TESObjectCELL *a2)
{
  _DWORD *v3; // ecx
  char v4; // al
  _DWORD *v5; // ecx

  v3 = (_DWORD *)*(this + 0x17);
  if ( v3[0x37] )
  {
    if ( a2 )
    {
      if ( TESObjectCELL_IsInterior(a2) )
      {
        v4 = sub_4C9820(a2);
        v5 = (_DWORD *)*(this + 0x17);
        if ( v4 )
          sub_543BB0(v5, 2);
        else
          sub_543BB0(v5, 1);
      }
      else
      {
        sub_543BB0((_DWORD *)*(this + 0x17), 3);
      }
    }
    else
    {
      sub_543BB0(v3, 3);
    }
  }
}
