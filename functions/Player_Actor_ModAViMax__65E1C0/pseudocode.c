int __thiscall Player_Actor_ModAViMax(PlayerCharacter *this, int a2, signed int a3, Actor *a4)
{
  int v7; // eax
  int v8; // ebx
  float v10; // [esp+24h] [ebp+8h]

  sub_5E2510(a2, a3, (int)a4);
  v8 = v7;
  v10 = (float)v7;
  if ( a2 != 0xFFFFFFFF )
    this->maxAVModifiers[a2] = Player_ModAVNode(this->maxAVModifiers[a2], v10, 1);
  sub_57A6F0(a2);
  if ( a2 == 8 && v8 < 0 )
    this->vtbl->super.OnHealthDamage((Actor *)this, a4, COERCE_FLOAT(LODWORD(v10)));
  return sub_5E2670(this, a2, 0);
}
