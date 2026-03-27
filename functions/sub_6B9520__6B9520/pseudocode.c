void __thiscall sub_6B9520(Ni2DBuffer **this)
{
  _DWORD *v2; // eax
  Ni2DBuffer *v3; // eax
  char *v4; // edi
  int *v5; // esi
  int v6; // ebx

  if ( byte_B23C60 )
  {
    v2 = (_DWORD *)FormHeapAlloc(0x28u);
    if ( v2 )
      v3 = (Ni2DBuffer *)sub_6B9BD0(v2, "Root", 0);
    else
      v3 = 0;
    v4 = (char *)(this + 1);
    NiSmartPointer_Set__(this + 1, v3);
    v5 = (int *)(this + 2);
    v6 = 0x3C;
    do
    {
      if ( *v5 )
        sub_6B9D10(*(_DWORD **)v4, *v5);
      ++v5;
      --v6;
    }
    while ( v6 );
    sub_6B9610(*(_DWORD **)v4, 0x3Cu);
    NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<AverageEntry>>(*(_DWORD **)v4);
    sub_6B9E10(*(_DWORD **)v4);
  }
}
