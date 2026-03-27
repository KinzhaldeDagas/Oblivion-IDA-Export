int __usercall DispelEffect_Apply_::EffectLoop_Body@<eax>(
        int a1@<ebx>,
        ActiveEffect *a2@<ebp>,
        ActiveEffect **a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  ActiveEffect *v8; // esi
  MagicItem *item; // edi
  double v10; // st7
  float magnitude; // [esp+18h] [ebp+18h]

  v8 = *a3;
  if ( v8 )
  {
    if ( v8 != a2 )
    {
      item = v8->members.item;
      if ( !(*(int (__thiscall **)(MagicItem *))(*(_DWORD *)item + 0x18))(item) )
      {
        magnitude = a2->members.magnitude;
        v10 = ((double (__thiscall *)(char *, unsigned int))**((_DWORD **)item + 3))(
                (char *)item + 0xC,
                a8 & (unsigned int)-(HIBYTE(a7) != 0));
        if ( fMagicDispelMagnitudeMult * magnitude >= v10 )
          ActiveEffect_Base_Remove(v8, (char)a2, v10, 0);
      }
    }
  }
  return DispelEffect_Apply_::EffectLoop_Next(a1);
}
