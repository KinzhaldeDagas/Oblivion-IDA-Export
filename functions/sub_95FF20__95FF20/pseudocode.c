void __thiscall sub_95FF20(void *this, unsigned int a2)
{
  signed int v2; // ebx
  unsigned int i; // esi
  int v5; // eax

  v2 = a2; /*0x95ff21*/
  nullsub_returnvVoid_1arg(a2); /*0x95ff2a*/
  sub_6BE9D0(v2, (int)&a2); /*0x95ff35*/
  for ( i = 0; i < a2; ++i ) /*0x95ff43*/
  {
    v5 = sub_95DB10(v2); /*0x95ff46*/
    sub_95FEE0((int)this, v5); /*0x95ff51*/
  }
}
