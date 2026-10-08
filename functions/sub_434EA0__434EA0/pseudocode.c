Ni2DBuffer *__thiscall sub_434EA0(Ni2DBuffer **this)
{
  int v2; // eax
  Ni2DBuffer *v3; // eax
  Ni2DBuffer *result; // eax
  char *v5; // eax
  NiSourceTexture *TextureByFilename; // eax
  NiSourceTexture *TextureNothing; // eax
  const char *v8; // esi

  v2 = (int)*(this + 9); /*0x434ea3*/
  if ( v2 ) /*0x434ea9*/
  {
    v3 = (Ni2DBuffer *)sub_4A1ED0((_DWORD **)unk_B35300, v2, 0); /*0x434eb4*/
  }
  else
  {
    result = *(this + 8); /*0x434ebb*/
    if ( !result ) /*0x434ec0*/
      goto LABEL_6; /*0x434ec0*/
    v3 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, Ni2DBuffer *, _DWORD))(*(_DWORD *)unk_B35300 + 4))( /*0x434ed0*/
                         unk_B35300,
                         result,
                         0);
  }
  result = (Ni2DBuffer *)NiSmartPointer_Set__(this + 0xA, v3); /*0x434ed6*/
LABEL_6:
  if ( !*(this + 0xA) ) /*0x434edb*/
  {
    v5 = (char *)*(this + 8); /*0x434ee8*/
    if ( v5 ) /*0x434eed*/
    {
      TextureByFilename = NiSourceTexture::LoadTextureByFilename( /*0x434ef7*/
                            v5,
                            (PixelLayout *)OB_TES_DefaultSourceTextureFormatPrefs_010201A0,
                            1);
      return (Ni2DBuffer *)NiSmartPointer_Set__(this + 0xA, (Ni2DBuffer *)TextureByFilename); /*0x434f02*/
    }
    else
    {
      result = *(this + 9); /*0x434f0a*/
      if ( result && (result = (Ni2DBuffer *)sub_42EBC0(1, (int)result, 0xFFFFFFFF, 0)) != 0 ) /*0x434f22*/
      {
        TextureNothing = NiSourceTexture::LoadTextureNothing( /*0x434f2c*/
                           result,
                           (PixelLayout *)OB_TES_DefaultSourceTextureFormatPrefs_010201A0,
                           1u);
        return (Ni2DBuffer *)NiSmartPointer_Set__(this + 0xA, (Ni2DBuffer *)TextureNothing); /*0x434f37*/
      }
      else if ( *(this + 9) ) /*0x434f3f*/
      {
        return (Ni2DBuffer *)PrintError( /*0x434f61*/
                               "Could not get file for texture with file entry offset %i and size %i.",
                               (*(this + 9))->members.height & 0x7FFFFFFF,
                               (*(this + 9))->members.width & 0x3FFFFFFF);
      }
      else
      {
        v8 = (const char *)*(this + 8); /*0x434f6c*/
        if ( v8 ) /*0x434f71*/
          return (Ni2DBuffer *)PrintError("Could not get file for texture %s.", v8); /*0x434f79*/
      }
    }
  }
  return result; /*0x434f07*/
}
