// Oblivion stRandom constructor. The class has no per-instance generator state; if the shared SIdvRandomImpl state is not initialized, it invokes Reseed(-1).
OB_stRandom_010201A0 *__thiscall OB_stRandom_ctor_010201A0(OB_stRandom_010201A0 *this)
{
  if ( !OB_SIdvRandomImpl_m_bInit_010201A0 ) /*0x78eaf0*/
    OB_stRandom_Reseed_010201A0(this, 0xFFFFFFFF); /*0x78eafe*/
  return this; /*0x78eb05*/
}
