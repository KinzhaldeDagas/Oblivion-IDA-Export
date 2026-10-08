void __thiscall sub_6B9520(Ni2DBuffer **this)
{
  BSStringT *v2; // eax
  Ni2DBuffer *v3; // eax
  unsigned int **v4; // edi
  int *v5; // esi
  int v6; // ebx

  if ( byte_B23C60 ) /*0x6b9546*/
  {
    v2 = (BSStringT *)FormHeapAlloc(0x28u); /*0x6b9551*/
    if ( v2 ) /*0x6b9567*/
      v3 = (Ni2DBuffer *)sub_6B9BD0(v2, "Root", 0); /*0x6b9572*/
    else
      v3 = 0; /*0x6b9579*/
    v4 = (unsigned int **)(this + 1); /*0x6b957b*/
    NiSmartPointer_Set__(this + 1, v3); /*0x6b9589*/
    v5 = (int *)(this + 2); /*0x6b958e*/
    v6 = 0x3C; /*0x6b9591*/
    do /*0x6b95aa*/
    {
      if ( *v5 ) /*0x6b9596*/
        sub_6B9D10(*v4, *v5); /*0x6b959f*/
      ++v5; /*0x6b95a4*/
      --v6; /*0x6b95a7*/
    }
    while ( v6 ); /*0x6b95aa*/
    sub_6B9610((int ***)*v4, 0x3Cu); /*0x6b95b0*/
    NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>((NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>> *)*v4); /*0x6b95b7*/
    sub_6B9E10(*v4); /*0x6b95be*/
  }
}
