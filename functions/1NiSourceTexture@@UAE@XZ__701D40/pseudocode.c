void __thiscall NiSourceTexture::~NiSourceTexture(NiSourceTexture *this)
{
  NiPixelData *pixelData; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiPixelData *v4; // edi

  this->vtbl = (NiSourceTextureVtbl *)&NiSourceTexture::`vftable';
  FormHeapFree((unsigned int)this->members.unk034);
  FormHeapFree((unsigned int)this->members.fileName);
  pixelData = this->members.pixelData;
  v3 = InterlockedDecrement;
  if ( pixelData )
  {
    if ( !v3((volatile LONG *)pixelData + 1) )
      (**(void (__thiscall ***)(NiPixelData *, int))pixelData)(pixelData, 1);
    this->members.pixelData = 0;
  }
  v4 = this->members.pixelData;
  if ( v4 )
  {
    if ( !v3((volatile LONG *)v4 + 1) )
      (**(void (__thiscall ***)(NiPixelData *, int))v4)(v4, 1);
  }
  NiTexture::~NiTexture((NiTexture *)this);
}
