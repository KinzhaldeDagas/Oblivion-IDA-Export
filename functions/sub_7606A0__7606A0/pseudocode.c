NiD3DPass **__cdecl sub_7606A0(NiD3DPass **a1)
{
  unsigned int *v1; // ecx
  _DWORD *v2; // esi
  NiD3DPass ***v3; // edi
  _DWORD *v4; // ebx
  NiD3DPass **v5; // eax
  NiD3DPass *v6; // ecx
  NiD3DPass **result; // eax

  v1 = (unsigned int *)dword_B42044;
  v2 = (_DWORD *)(dword_B42044 + 8);
  v3 = (NiD3DPass ***)dword_B42044;
  if ( !*v2 )
  {
    v4 = v1 + 3;
    sub_760600(v1, v1[3]);
    *v4 *= 2;
  }
  v5 = *v3;
  v6 = **v3;
  *v5 = v5[--*v2];
  result = a1;
  *a1 = v6;
  if ( v6 )
    ++v6->RefCount;
  if ( !v6->RendererOwned )
    v6->RendererOwned = 1;
  return result;
}
