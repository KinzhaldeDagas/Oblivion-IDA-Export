char __thiscall sub_77C7C0(_DWORD *this, NiGeometry *a2, Atmosphere *a3)
{
  NiAVObject *v4; // ebx
  int CastingType; // ebp
  Atmosphere *v6; // eax
  size_t v8; // [esp-8h] [ebp-44h]
  char *v9; // [esp+0h] [ebp-3Ch]
  char DstBuf[32]; // [esp+18h] [ebp-24h] BYREF

  v4 = Shared_GetPointerAtOffset08(a3); /*0x77c7e7*/
  if ( !v4 ) /*0x77c7eb*/
  {
    v9 = *(char **)MEMORY[0xB42894]; /*0x77c7f4*/
    HIDWORD(v8) = "NiD3DShader%d"; /*0x77c7f5*/
    LODWORD(v8) = 0x20; /*0x77c801*/
    ++*(_DWORD *)MEMORY[0xB42894]; /*0x77c804*/
    sub_6C5D40((va_list)this, DstBuf, v8, v9); /*0x77c809*/
    sub_738630((unsigned int *)a3, DstBuf); /*0x77c818*/
    v4 = Shared_GetPointerAtOffset08(a3); /*0x77c824*/
  }
  CastingType = TESEnchantableForm_GetCastingType(a3); /*0x77c82d*/
  v6 = (Atmosphere *)(*(int (__thiscall **)(_DWORD *, NiAVObject *, int, _DWORD))(*this + 4))(this, v4, CastingType, 0); /*0x77c83a*/
  if ( v6 ) /*0x77c83e*/
  {
    if ( v6 != a3 ) /*0x77c842*/
      return 0; /*0x77c858*/
  }
  else
  {
    sub_769B10((_DWORD *)*(this + 5), (int)a3); /*0x77c85f*/
    if ( a3->__vftbl[0xA].GetObjectNode(a3) ) /*0x77c86b*/
      CastingType = 0xFFFFFFFF; /*0x77c871*/
    (*(void (__thiscall **)(_DWORD *, Atmosphere *, int))(*this + 0x18))(this, a3, CastingType); /*0x77c87d*/
  }
  return sub_77C2A0(this, a2, (BSShader *)a3); /*0x77c844*/
}
