void __thiscall sub_5E99C0(TESObjectREFR *this, _BYTE *a2, char a3, char a4)
{
  _DWORD *sound; // edi
  char *ItemUpDownSound; // eax
  int *v11; // eax
  int *v12; // esi

  if ( a2 && sub_578FE0() != 0x3EF )
  {
    sound = OSGlobals->sound;
    ItemUpDownSound = (char *)GetItemUpDownSound(a2, a3, a4);
    if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      v11 = PlaySound___(sound, ItemUpDownSound, 0x121, 0);
      v12 = v11;
      if ( !v11 )
        return;
      if ( !sub_6B7260(v11) )
        sub_6B7190(v12, 0);
    }
    else
    {
      v12 = sub_65A970(this, ItemUpDownSound, 0, 0x102, 1);
    }
    if ( v12 )
    {
      sub_6B73E0(v12);
      FormHeapFree((unsigned int)v12);
    }
  }
}
