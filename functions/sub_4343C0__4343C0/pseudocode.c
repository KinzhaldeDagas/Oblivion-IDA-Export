void __thiscall sub_4343C0(void **this)
{
  unsigned int v2; // edi
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *this = &BSTaskManager<__int64>::`vftable'; /*0x4343e9*/
  v2 = 0; /*0x4343ef*/
  if ( *(this + 9) ) /*0x4343f1*/
  {
    do /*0x434418*/
    {
      v3 = *((void (__thiscall ****)(_DWORD, int))*(this + 0xA) + v2); /*0x434403*/
      if ( v3 ) /*0x434408*/
        (**v3)(v3, 1); /*0x434410*/
      ++v2; /*0x434412*/
    }
    while ( v2 < (unsigned int)*(this + 9) ); /*0x434418*/
  }
  FormHeapFree((unsigned int)*(this + 0xA)); /*0x43441e*/
  FormHeapFree((unsigned int)*(this + 0xB)); /*0x434427*/
  *this = &LockFreeMap<__int64,NiPointer<BSTask<__int64>>>::`vftable'; /*0x43443b*/
  sub_433D70((LockFreeMap *)this, 1); /*0x434441*/
  FormHeapFree((unsigned int)*(this + 3)); /*0x43444a*/
  FormHeapFree((unsigned int)*(this + 1)); /*0x43445b*/
}
