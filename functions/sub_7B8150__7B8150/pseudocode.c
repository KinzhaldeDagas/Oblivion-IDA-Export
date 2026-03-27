NiObject *__cdecl sub_7B8150(int a1)
{
  NiObject *v1; // esi
  int v2; // eax
  char v3; // al

  v1 = *(NiObject **)(a1 + 0xBC);
  if ( !v1 )
    return 0;
  v2 = (int)v1->__vftable->GetType(*(_DWORD *)(a1 + 0xBC));
  if ( v2 )
  {
    while ( (char *)v2 != &byte_B42884 )
    {
      v2 = *(_DWORD *)(v2 + 4);
      if ( !v2 )
        goto LABEL_5;
    }
    v3 = 1;
  }
  else
  {
LABEL_5:
    v3 = 0;
  }
  if ( (v3 != 0 ? (unsigned int)v1 : 0) != 0 )
    return NiRTTI_Cast((BSStringT *)&ImageSpaceShaderRTTI___, v1);
  else
    return 0;
}
