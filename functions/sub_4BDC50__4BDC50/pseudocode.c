void __thiscall sub_4BDC50(unsigned int **this)
{
  sub_4BD8C0(this);
  *this = (unsigned int *)&LockFreeMap<unsigned int,NiPointer<DistantLODLoaderTask>>::`vftable';
  sub_642E50(this, 1);
  FormHeapFree((unsigned int)*(this + 3));
  FormHeapFree((unsigned int)*(this + 1));
}
