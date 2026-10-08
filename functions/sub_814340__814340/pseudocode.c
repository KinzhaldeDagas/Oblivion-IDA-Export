// BSCubeMapCamera virtual render dispatcher. Mode 0 calls the six-face shadow object-list renderer; mode 3 calls the alternate face renderer; afterward it releases +0x140 and all six +0x128 face references.
int __thiscall BSCubeMapCamera_RenderAndReleaseFaceTargets(BSCubeMapCamera_ShadowLayout *self, int renderArg)
{
  int v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  void (__thiscall ***v5)(_DWORD, int); // edi
  int result; // eax
  volatile LONG *renderTarget_140; // edi
  void **faceTextureRefs_128; // edi
  int v9; // ebx
  volatile LONG *v10; // esi
  int v11; // [esp+0h] [ebp-10h]

  v2 = unk_B43124; /*0x814340*/
  v3 = InterlockedDecrement; /*0x814347*/
  if ( (BSCubeMapCamera_ShadowLayout *)unk_B43124 != self ) /*0x814353*/
  {
    if ( v2 ) /*0x814357*/
    {
      v5 = (void (__thiscall ***)(_DWORD, int))unk_B43124; /*0x814359*/
      if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x81435f*/
      {
        if ( v5 ) /*0x814367*/
          (**v5)(v5, 1); /*0x814371*/
      }
    }
    unk_B43124 = (int)self; /*0x814375*/
    if ( self ) /*0x81437b*/
      InterlockedIncrement((volatile LONG *)&self->base_000[4]); /*0x814381*/
  }
  result = self->renderMode_124;                // Dispatch by BSCubeMapCamera+0x124: mode 0 -> 0x00813510, mode 3 -> 0x00813960. /*0x814387*/
  switch ( result ) /*0x814392*/
  {
    case 0: /*0x814392*/
      result = BSCubeMapCamera_RenderMode0_ShadowObjectListFaces(self);// Mode 0 is the six-face render-target loop used by ShadowSceneLight special/object-list dispatch. /*0x81439b*/
      break; /*0x8143a0*/
    case 3: /*0x814392*/
      result = BSCubeMapCamera_RenderMode3Faces((float *)self->base_000, renderArg, v11);// Mode 3 uses the distinct image-space cube-face path; it is not the mode used by ShadowPass special-light rendering. /*0x8143a9*/
      break; /*0x8143a9*/
    default:
      break;
  }
  renderTarget_140 = (volatile LONG *)self->renderTarget_140;// Begin post-render ownership cleanup for BSCubeMapCamera+0x140 and six face texture references. /*0x8143ae*/
  if ( renderTarget_140 ) /*0x8143b6*/
  {
    result = v3(renderTarget_140 + 1); /*0x8143bc*/
    if ( !result ) /*0x8143c0*/
      result = (**(int (__thiscall ***)(void *, int))renderTarget_140)((void *)renderTarget_140, 1); /*0x8143ce*/
    self->renderTarget_140 = 0; /*0x8143d0*/
  }
  faceTextureRefs_128 = self->faceTextureRefs_128; /*0x8143da*/
  v9 = 6; /*0x8143e0*/
  do /*0x81440f*/
  {
    v10 = (volatile LONG *)*faceTextureRefs_128; /*0x8143e5*/
    if ( *faceTextureRefs_128 ) /*0x8143e5*/
    {
      result = v3(v10 + 1); /*0x8143ef*/
      if ( !result ) /*0x8143f3*/
      {
        if ( v10 ) /*0x8143f7*/
          result = (**(int (__thiscall ***)(void *, int))v10)((void *)v10, 1); /*0x814401*/
      }
      *faceTextureRefs_128 = 0; /*0x814403*/
    }
    ++faceTextureRefs_128; /*0x814409*/
    --v9; /*0x81440c*/
  }
  while ( v9 ); /*0x81440f*/
  return result; /*0x814411*/
}
