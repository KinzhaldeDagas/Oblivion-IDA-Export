Ni2DBuffer *__thiscall sub_434EA0(Ni2DBuffer **this)
{
  int v2; // eax
  Ni2DBuffer *v3; // eax
  Ni2DBuffer *result; // eax
  char *v5; // eax
  NiSourceTexture *TextureByFilename; // eax
  NiSourceTexture *TextureNothing; // eax
  const char *v8; // esi

  v2 = (int)*(this + 9);
  if ( v2 )
  {
    v3 = (Ni2DBuffer *)sub_4A1ED0((_DWORD **)dword_B35300, v2, 0);
  }
  else
  {
    result = *(this + 8);
    if ( !result )
      goto LABEL_6;
    v3 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, Ni2DBuffer *, _DWORD))(*(_DWORD *)dword_B35300 + 4))(
                         dword_B35300,
                         result,
                         0);
  }
  result = (Ni2DBuffer *)NiSmartPointer_Set__(this + 0xA, v3);
LABEL_6:
  if ( !*(this + 0xA) )
  {
    v5 = (char *)*(this + 8);
    if ( v5 )
    {
      TextureByFilename = NiSourceTexture::LoadTextureByFilename(v5, (PixelLayout *)dword_B256D0, 1);
      return (Ni2DBuffer *)NiSmartPointer_Set__(this + 0xA, (Ni2DBuffer *)TextureByFilename);
    }
    else
    {
      result = *(this + 9);
      if ( result && (result = (Ni2DBuffer *)sub_42EBC0(1, (int)result, 0xFFFFFFFF, 0)) != 0 )
      {
        TextureNothing = NiSourceTexture::LoadTextureNothing(result, (PixelLayout *)dword_B256D0, 1u);
        return (Ni2DBuffer *)NiSmartPointer_Set__(this + 0xA, (Ni2DBuffer *)TextureNothing);
      }
      else if ( *(this + 9) )
      {
        return (Ni2DBuffer *)PrintError(
                               "Could not get file for texture with file entry offset %i and size %i.",
                               (*(this + 9))->members.height & 0x7FFFFFFF,
                               (*(this + 9))->members.width & 0x3FFFFFFF);
      }
      else
      {
        v8 = (const char *)*(this + 8);
        if ( v8 )
          return (Ni2DBuffer *)PrintError("Could not get file for texture %s.", v8);
      }
    }
  }
  return result;
}
