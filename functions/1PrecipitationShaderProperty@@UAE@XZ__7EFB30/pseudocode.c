void __thiscall PrecipitationShaderProperty::~PrecipitationShaderProperty(BSShaderProperty *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  int v3; // edi
  int v4; // edi

  this->vtbl = &PrecipitationShaderProperty::`vftable'; /*0x7efb5a*/
  v2 = InterlockedDecrement; /*0x7efb60*/
  *((_DWORD *)this + 0x1B) = 0; /*0x7efb66*/
  v3 = *((_DWORD *)this + 0x27); /*0x7efb6d*/
  if ( v3 ) /*0x7efb7d*/
  {
    if ( !v2((volatile LONG *)(v3 + 4)) ) /*0x7efb83*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7efb95*/
    *((_DWORD *)this + 0x27) = 0; /*0x7efb97*/
  }
  v4 = *((_DWORD *)this + 0x27); /*0x7efba1*/
  if ( v4 ) /*0x7efbae*/
  {
    if ( !v2((volatile LONG *)(v4 + 4)) ) /*0x7efbb4*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7efbc6*/
  }
  BSShaderProperty::~BSShaderProperty(this); /*0x7efbd2*/
}
