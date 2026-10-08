int sub_9FBA00()
{
  dword_B13964 = FormHeapAlloc(0x94u); /*0x9fba2c*/
  _memset(dword_B13964, 0, 4 * dword_B13960); /*0x9fba31*/
  byte_B1396C = 1; /*0x9fba3b*/
  off_B1395C = &NiTStringPointerMap<Tile::BuildStorage *>::`vftable'; /*0x9fba42*/
  return atexit(sub_A24940); /*0x9fba54*/
}
