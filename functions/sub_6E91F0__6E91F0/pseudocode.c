char __thiscall sub_6E91F0(unsigned int *this, int a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  nullsub_returnvVoid_1arg(a2);
  v4 = *(this + 0xF);
  *(this + 0xF) = 0xFFFFFFFF;
  return sub_6E8DD0((int)this, v4);
}
