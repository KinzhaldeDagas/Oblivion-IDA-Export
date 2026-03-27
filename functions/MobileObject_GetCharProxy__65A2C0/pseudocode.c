bhkCharacterProxy *__thiscall MobileObject_GetCharProxy(MobileObject *this)
{
  bhkCharacterProxy *v1; // edi
  BaseFormComponent *v2; // esi
  volatile LONG *v4; // [esp+4h] [ebp-4h] BYREF

  v4 = (volatile LONG *)this;
  if ( !this->process )
    return 0;
  v1 = *this->process->GetCharProxy(this->process, (bhkCharacterProxy **)&v4);
  if ( v4 )
  {
    v2 = (BaseFormComponent *)v4;
    if ( !InterlockedDecrement(v4 + 1) )
      v2->vtbl->InitializeComponent(v2);
  }
  return v1;
}
