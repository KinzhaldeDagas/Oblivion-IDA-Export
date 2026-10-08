void __thiscall NiSourceTexture::~NiSourceTexture(NiSourceTexture *this)
{
  NiPixelData *pixelData; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiPixelData *v4; // edi

  this->vtbl = (NiSourceTextureVtbl *)&NiSourceTexture::`vftable'; /*0x701d6a*/
  FormHeapFree((unsigned int)this->members.unk034); /*0x701d7c*/
  FormHeapFree((unsigned int)this->members.fileName); /*0x701d85*/
  pixelData = this->members.pixelData; /*0x701d8a*/
  v3 = InterlockedDecrement; /*0x701d8d*/
  if ( pixelData ) /*0x701d98*/
  {
    if ( !v3((volatile LONG *)pixelData + 1) ) /*0x701d9e*/
      (**(void (__thiscall ***)(NiPixelData *, int))pixelData)(pixelData, 1); /*0x701db0*/
    this->members.pixelData = 0; /*0x701db2*/
  }
  v4 = this->members.pixelData; /*0x701db9*/
  if ( v4 ) /*0x701dc3*/
  {
    if ( !v3((volatile LONG *)v4 + 1) ) /*0x701dc9*/
      (**(void (__thiscall ***)(NiPixelData *, int))v4)(v4, 1); /*0x701ddb*/
  }
  NiTexture::~NiTexture((NiTexture *)this); /*0x701de7*/
}
