int __usercall DispelEffect_Apply_::EffectLoop_Body@<eax>(
        int *a1@<ebx>,
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

  v8 = *a3; /*0x693aeb*/
  if ( v8 ) /*0x693aef*/
  {
    if ( v8 != a2 ) /*0x693af3*/
    {
      item = v8->members.item; /*0x693af5*/
      if ( !(*(int (__thiscall **)(MagicItem *))(*(_DWORD *)item + 0x18))(item) ) /*0x693aff*/
      {
        magnitude = a2->members.magnitude; /*0x693b0f*/
        v10 = ((double (__thiscall *)(char *, unsigned int))**((_DWORD **)item + 3))( /*0x693b21*/
                (char *)item + 0xC,
                a8 & (unsigned int)-(HIBYTE(a7) != 0));
        if ( flt_B37ED0[0x82] * magnitude >= v10 ) /*0x693b34*/
          ActiveEffect_Base_Remove(v8, (char)a2, v10, 0); /*0x693b3a*/
      }
    }
  }
  return DispelEffect_Apply_::EffectLoop_Next(a1, (int)a2, a4, a5, a6, a7, a8);
}
