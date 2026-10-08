// Native receiver pre-gate: read NiGeometry+0xBC direct shader-property slot and require BSShaderProperty RTTI/cast success.
NiObject *__cdecl sub_7B8150(int a1)
{
  NiObject *v1; // esi
  int v2; // eax
  char v3; // al

  v1 = *(NiObject **)(a1 + 0xBC); /*0x7b8155*/
  if ( !v1 ) /*0x7b815d*/
    return 0; /*0x7b815d*/
  v2 = (int)v1->__vftable->GetType(*(_DWORD *)(a1 + 0xBC)); /*0x7b8166*/
  if ( v2 ) /*0x7b816a*/
  {
    while ( (BSStringT *)v2 != &stru_B42884 ) /*0x7b8175*/
    {
      v2 = *(_DWORD *)(v2 + 4); /*0x7b8177*/
      if ( !v2 ) /*0x7b817c*/
        goto LABEL_5; /*0x7b817c*/
    }
    v3 = 1; /*0x7b8198*/
  }
  else
  {
LABEL_5:
    v3 = 0; /*0x7b817e*/
  }
  if ( (v3 != 0 ? (unsigned int)v1 : 0) != 0 )
    return NiRTTI_Cast((BSStringT *)&MEMORY[0xB4257C], v1); /*0x7b818e*/
  else
    return 0; /*0x7b819c*/
}
