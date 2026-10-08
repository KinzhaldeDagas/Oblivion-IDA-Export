char __thiscall sub_6E91F0(unsigned int *this, int a2)
{
  int v4; // [esp-4h] [ebp-8h]

  nullsub_returnvVoid_1arg(a2); /*0x6e91f8*/
  v4 = *(this + 0xF); /*0x6e9200*/
  *(this + 0xF) = 0xFFFFFFFF; /*0x6e9203*/
  return sub_6E8DD0((int)this, v4); /*0x6e920f*/
}
