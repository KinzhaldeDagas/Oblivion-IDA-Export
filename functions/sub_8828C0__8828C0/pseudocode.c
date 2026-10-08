char *__thiscall sub_8828C0(_DWORD *this, char *sourcePath, char loadFromCache, const char *a4)
{
  char *result; // eax
  int *v6; // eax
  NiSourceTexture *v7; // ebp
  int *v8; // eax
  NiSourceTexture *v9; // esi
  NiSourceTexture *v10; // [esp+14h] [ebp-11Ch] BYREF
  NiSourceTexture *outTexture; // [esp+18h] [ebp-118h] BYREF
  char Src[260]; // [esp+1Ch] [ebp-114h] BYREF
  int v13; // [esp+12Ch] [ebp-4h]

  sub_7D8160((int **)this, sourcePath, loadFromCache, a4); /*0x882915*/
  result = BuildTextureVariantPath(Src, sourcePath, (const char *)&off_A7D0E4); /*0x882925*/
  if ( Src[0] ) /*0x882932*/
  {
    v6 = (int *)NiSourceTexture_LoadChecked(&outTexture, Src, loadFromCache, 1); /*0x882941*/
    v13 = 0; /*0x882950*/
    OB_NiSmartPointer_Assign_010201A0(this + 0x5A, v6); /*0x88295b*/
    result = (char *)outTexture; /*0x882960*/
    v13 = 0xFFFFFFFF; /*0x882966*/
    if ( outTexture ) /*0x882971*/
    {
      v7 = outTexture; /*0x882973*/
      result = (char *)InterlockedDecrement((volatile LONG *)&outTexture->members); /*0x882979*/
      if ( !result ) /*0x882981*/
        result = (char *)((int (__thiscall *)(NiSourceTexture *, int))v7->vtbl->super.super.super.Destructor)(v7, 1); /*0x882990*/
    }
  }
  if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 ) /*0x882999*/
  {
    result = BuildTextureVariantPath(Src, sourcePath, (const char *)&suffix); /*0x8829a6*/
    if ( Src[0] ) /*0x8829b3*/
    {
      v8 = (int *)NiSourceTexture_LoadChecked(&v10, Src, loadFromCache, 1); /*0x8829c2*/
      v13 = 1; /*0x8829d1*/
      OB_NiSmartPointer_Assign_010201A0(this + 0x5B, v8); /*0x8829dc*/
      result = (char *)v10; /*0x8829e1*/
      v13 = 0xFFFFFFFF; /*0x8829e7*/
      if ( v10 ) /*0x8829f2*/
      {
        v9 = v10; /*0x8829f4*/
        result = (char *)InterlockedDecrement((volatile LONG *)&v10->members); /*0x8829fa*/
        if ( !result ) /*0x882a02*/
          return ((char *(__thiscall *)(NiSourceTexture *, int))v9->vtbl->super.super.super.Destructor)(v9, 1); /*0x882a10*/
      }
    }
  }
  return result; /*0x882a12*/
}
