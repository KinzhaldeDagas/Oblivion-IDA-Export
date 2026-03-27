_DWORD *__usercall sub_7ABC40@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3@<esi>)
{
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx

  if ( a1[0x1D] )
    return (_DWORD *)a1[0x1D];
  v4 = (_DWORD *)FormHeapAlloc(0x2Cu);
  if ( v4 )
  {
    *v4 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable';
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
    v4[5] = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
    v4[6] = 0;
    v4[7] = 0;
    v4[8] = 0;
    v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  sub_7A9C30((int)v5);
  v5[3] = v5[1];
  v5[1] = 0;
  v5[2] = 0;
  v5[4] = 0;
  sub_7A9C30((int)(v5 + 5));
  v5[8] = v5[6];
  v5[6] = 0;
  v5[7] = 0;
  v5[9] = 0;
  v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int, int))(a1[0x19] + 4))(a1 + 0x19, a2, a3);
  v6[2] = v5;
  *v6 = 0;
  v6[1] = a1[0x1B];
  v7 = (_DWORD *)a1[0x1B];
  if ( v7 )
  {
    *v7 = v6;
    ++a1[0x1C];
  }
  else
  {
    ++a1[0x1C];
    a1[0x1A] = v6;
  }
  a1[0x1B] = v6;
  a1[0x1D] = v5;
  return v5;
}
