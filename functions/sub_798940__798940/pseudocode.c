void __thiscall sub_798940(unsigned int *this)
{
  int *v2; // eax
  unsigned int v3; // edi

  FormHeapFree(*(this + 8));
  FormHeapFree(*(this + 9));
  v2 = (int *)*(this + 0xB);
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 0x44u, v2[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7981E0);
    FormHeapFree(v3);
  }
  FormHeapFree(*(this + 6));
  *(this + 3) = 0;
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 0xB) = 0;
  *(this + 6) = 0;
}
