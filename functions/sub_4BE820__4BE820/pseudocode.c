void __thiscall sub_4BE820(unsigned int **this)
{
  sub_4BE420(this); /*0x4be850*/
  *this = (unsigned int *)&LockFreeMap<unsigned int,NiPointer<ExteriorCellLoaderTask>>::`vftable'; /*0x4be861*/
  sub_642E50(this, 1); /*0x4be867*/
  FormHeapFree((unsigned int)*(this + 3)); /*0x4be870*/
  FormHeapFree((unsigned int)*(this + 1)); /*0x4be881*/
}
