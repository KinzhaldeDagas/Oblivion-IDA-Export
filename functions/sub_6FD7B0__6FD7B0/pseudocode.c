char __thiscall sub_6FD7B0(unsigned int *this, int a2)
{
  int v4; // [esp-4h] [ebp-8h]

  nullsub_returnvVoid_1arg(a2); /*0x6fd7b8*/
  v4 = *(this + 0xF); /*0x6fd7c0*/
  *(this + 0xF) = 0xFFFFFFFF; /*0x6fd7c3*/
  return sub_6FD5D0((int)this, v4); /*0x6fd7cf*/
}
