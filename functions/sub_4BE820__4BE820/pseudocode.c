void __thiscall sub_4BE820(unsigned int **this)
{
  sub_4BE420(this);
  *this = (unsigned int *)&LockFreeMap<unsigned int,NiPointer<ExteriorCellLoaderTask>>::`vftable';
  sub_642E50(this, 1);
  FormHeapFree((unsigned int)*(this + 3));
  FormHeapFree((unsigned int)*(this + 1));
}
