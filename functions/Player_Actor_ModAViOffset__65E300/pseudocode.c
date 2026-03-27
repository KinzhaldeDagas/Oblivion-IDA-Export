void __thiscall Player_Actor_ModAViOffset(PlayerCharacter *this, int a2, signed int a3, Actor *a4)
{
  int v7; // eax
  int v8; // ebx
  float v9; // [esp+24h] [ebp+8h]

  if ( !g_GodMode || (double)a3 >= *(float *)&SrcStr || a2 < 8 || a2 > 0xA )
  {
    sub_5E2510(a2, a3, (int)a4);
    v8 = v7;
    v9 = (float)v7;
    if ( a2 != 0xFFFFFFFF )
      this->scriptAVModifiers[a2] = Player_ModAVNode(this->scriptAVModifiers[a2], v9, 1);
    sub_57A6F0(a2);
    if ( a2 == 8 && v8 < 0 )
      this->vtbl->super.OnHealthDamage((Actor *)this, a4, COERCE_FLOAT(LODWORD(v9)));
    sub_5E2670(this, a2, 0);
  }
}
