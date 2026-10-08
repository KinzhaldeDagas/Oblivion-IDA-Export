void __thiscall SkyShaderProperty::~SkyShaderProperty(BSShaderProperty *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi

  this->vtbl = &SkyShaderProperty::`vftable'; /*0x7c529a*/
  v2 = *((_DWORD *)this + 0x1F); /*0x7c52a0*/
  v3 = InterlockedDecrement; /*0x7c52a5*/
  if ( v2 ) /*0x7c52b3*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x7c52b9*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7c52cb*/
    *((_DWORD *)this + 0x1F) = 0; /*0x7c52cd*/
  }
  *((_DWORD *)this + 0x22) = 8; /*0x7c52d6*/
  *((float *)this + 0x20) = 0.0; /*0x7c52e0*/
  *((_WORD *)this + 0x42) = 0; /*0x7c52e6*/
  v4 = *((_DWORD *)this + 0x1F); /*0x7c52ef*/
  if ( v4 ) /*0x7c52f9*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7c52ff*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7c5311*/
  }
  BSShaderProperty::~BSShaderProperty(this); /*0x7c531d*/
}
