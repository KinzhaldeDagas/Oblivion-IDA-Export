// TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
bhkCharacterProxy *__thiscall MobileObject_GetCharProxy(MobileObject *this)
{
  bhkCharacterProxy *v1; // edi
  BaseFormComponent *v2; // esi
  volatile LONG *v4; // [esp+4h] [ebp-4h] BYREF

  v4 = (volatile LONG *)this; /*0x65a2c0*/
  if ( !this->process ) /*0x65a2c1*/
    return 0; /*0x65a309*/
  v1 = *this->process->GetCharProxy(this->process, (bhkCharacterProxy **)&v4); /*0x65a2da*/
  if ( v4 ) /*0x65a2e2*/
  {
    v2 = (BaseFormComponent *)v4; /*0x65a2e5*/
    if ( !InterlockedDecrement(v4 + 1) ) /*0x65a2eb*/
      v2->vtbl->InitializeComponent(v2); /*0x65a301*/
  }
  return v1; /*0x65a308*/
}
