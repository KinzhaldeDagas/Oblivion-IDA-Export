void __userpurge Player_Actor_ModAVfDamage(PlayerCharacter *a1@<ecx>, double st7_0@<st0>, int a2, float a4, int a5)
{
  int v9; // [esp+1Ch] [ebp+8h]

  if ( !g_GodMode || a4 >= 0.0 || a2 < 8 || a2 > 0xA )
  {
    sub_5E02D0(a2, a4, a5);
    *(float *)&v9 = st7_0;
    Player_ModAVModifierf(2, a2, v9, 0);
    sub_57A6F0(a2);
    if ( a2 == 8 && *(float *)&v9 < 0.0 )
    {
      ((void (__thiscall *)(PlayerCharacter *, int, int))a1->vtbl->super.OnHealthDamage)(a1, a5, v9);
      sub_5E2670(a1, 8, 0);
    }
    else
    {
      sub_5E2670(a1, a2, 0);
    }
  }
}
