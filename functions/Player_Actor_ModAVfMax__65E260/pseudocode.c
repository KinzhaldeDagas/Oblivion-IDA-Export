int __userpurge Player_Actor_ModAVfMax@<eax>(
        PlayerCharacter *a1@<ecx>,
        double st7_0@<st0>,
        int a2,
        float a4,
        Actor *a5)
{
  float v10; // [esp+20h] [ebp+8h]

  sub_5E02D0(a2, a4, (int)a5);
  v10 = st7_0;
  if ( a2 != 0xFFFFFFFF )
    a1->maxAVModifiers[a2] = Player_ModAVNode(a1->maxAVModifiers[a2], v10, 1);
  sub_57A6F0(a2);
  if ( a2 != 8 || v10 >= 0.0 )
    return sub_5E2670(a1, a2, 0);
  a1->vtbl->super.OnHealthDamage((Actor *)a1, a5, COERCE_FLOAT(LODWORD(v10)));
  return sub_5E2670(a1, 8, 0);
}
