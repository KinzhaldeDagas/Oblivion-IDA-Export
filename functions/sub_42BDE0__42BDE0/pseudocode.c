UInt32 __cdecl sub_42BDE0(const char *a1, UInt32 a2, UInt32 a3, UInt32 a4)
{
  if ( MEMORY[0xB33A04] ) /*0x42bde8*/
    return MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], a1, a2, a3, a4); /*0x42be03*/
  else
    return 0; /*0x42be06*/
}
