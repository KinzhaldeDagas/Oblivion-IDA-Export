void __thiscall sub_700160(unsigned __int16 *this, int a2)
{
  Atmosphere *v3; // esi
  NiAVObject *PointerAtOffset08; // ebx
  unsigned int i; // esi
  int v6; // ecx

  nullsub_returnvVoid_1arg(a2); /*0x700169*/
  if ( *(_DWORD *)(a2 + 0xD8) < 0x500000Bu ) /*0x700178*/
  {
    v3 = *((Atmosphere **)this + 4); /*0x70017a*/
    if ( v3 ) /*0x70017f*/
    {
      *((_DWORD *)this + 4) = 0; /*0x700181*/
      do /*0x7001ac*/
      {
        PointerAtOffset08 = Shared_GetPointerAtOffset08(v3); /*0x700199*/
        sub_733830(v3); /*0x70019b*/
        NiObjectNET_AddExtraData((const void **)this, (int)PointerAtOffset08, (unsigned int *)v3); /*0x7001a3*/
        v3 = (Atmosphere *)PointerAtOffset08; /*0x7001aa*/
      }
      while ( PointerAtOffset08 ); /*0x7001ac*/
    }
  }
  for ( i = 0; i < *(this + 0xA); ++i ) /*0x7001b1*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)this + 4) + 4 * (unsigned __int16)i); /*0x7001bd*/
    if ( v6 ) /*0x7001c2*/
    {
      if ( (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6) == &stru_B3FFA8 ) /*0x7001d5*/
      {
        sub_6FFBE0(this, i); /*0x7001da*/
        i = 0xFFFFFFFF; /*0x7001df*/
      }
    }
  }
}
