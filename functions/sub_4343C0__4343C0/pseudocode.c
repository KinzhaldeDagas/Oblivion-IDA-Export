void __thiscall sub_4343C0(void **this)
{
  unsigned int v2; // edi
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *this = &BSTaskManager<__int64>::`vftable';
  v2 = 0;
  if ( *(this + 9) )
  {
    do
    {
      v3 = *((void (__thiscall ****)(_DWORD, int))*(this + 0xA) + v2);
      if ( v3 )
        (**v3)(v3, 1);
      ++v2;
    }
    while ( v2 < (unsigned int)*(this + 9) );
  }
  FormHeapFree((unsigned int)*(this + 0xA));
  FormHeapFree((unsigned int)*(this + 0xB));
  *this = &LockFreeMap<__int64,NiPointer<BSTask<__int64>>>::`vftable';
  sub_433D70((LockFreeMap *)this, 1);
  FormHeapFree((unsigned int)*(this + 3));
  FormHeapFree((unsigned int)*(this + 1));
}
