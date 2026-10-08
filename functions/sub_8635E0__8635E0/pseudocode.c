char *__thiscall sub_8635E0(_DWORD *this, const char *a2, char a3, const char *a4)
{
  char *result; // eax
  int *v6; // eax
  int (__thiscall ***v7)(_DWORD, int); // edi
  int v8; // [esp+10h] [ebp-118h] BYREF
  char Src[260]; // [esp+14h] [ebp-114h] BYREF
  unsigned int v10; // [esp+124h] [ebp-4h]

  result = (char *)sub_7D8160((int **)this, a2, a3, a4); /*0x863634*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x863640*/
  {
    result = BuildTextureVariantPath(Src, a2, (int)&suffix); /*0x86364d*/
    if ( Src[0] ) /*0x86365a*/
    {
      v6 = NiSourceTexture_LoadChecked(&v8, Src, a3, 1); /*0x863669*/
      v10 = 0; /*0x863678*/
      OB_NiSmartPointer_Assign_010201A0(this + 0x41, v6); /*0x863683*/
      result = (char *)v8; /*0x863688*/
      v10 = 0xFFFFFFFF; /*0x86368e*/
      if ( v8 ) /*0x863699*/
      {
        v7 = (int (__thiscall ***)(_DWORD, int))v8; /*0x86369b*/
        result = (char *)InterlockedDecrement((volatile LONG *)(v8 + 4)); /*0x8636a1*/
        if ( !result ) /*0x8636a9*/
          result = (char *)(**v7)(v7, 1); /*0x8636b7*/
      }
    }
  }
  if ( *(this + 0x41) ) /*0x8636b9*/
  {
    *(this + 7) |= 0x40000u; /*0x8636c2*/
    *(this + 9) = 0; /*0x8636c9*/
  }
  return result; /*0x8636d0*/
}
