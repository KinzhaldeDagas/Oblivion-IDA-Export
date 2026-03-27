void __thiscall NiTArray<NiPointer<NiD3DPass>>::~NiTArray<NiPointer<NiD3DPass>>(_DWORD *this)
{
  int v1; // eax
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  int i; // edi
  NiD3DPass *v6; // ecx

  v1 = *(this + 1);
  *this = &NiTArray<NiPointer<NiD3DPass>>::`vftable';
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 - 4);
    v3 = v1 - 4;
    v4 = v1 + 4 * v2;
    for ( i = v2 - 1; i >= 0; --i )
    {
      v6 = *(NiD3DPass **)(v4 - 4);
      v4 -= 4;
      if ( v6 )
      {
        if ( v6->RefCount-- == 1 )
          sub_7604D0(v6);
      }
    }
    FormHeapFree(v3);
  }
}
