void __thiscall sub_7E5C30(MEF_RefPointerArray16 *this, NiAVObject *element)
{
  MEF_RefPointerArray16 *v3; // edi
  int v4; // eax
  int v5; // eax
  NiAVObject *v6; // esi

  v3 = this + 0x11; /*0x7e5c54*/
  NiTObjectArray_ClearAndRelease(this + 0x11); /*0x7e5c5c*/
  v4 = *((_DWORD *)this + 0x1C); /*0x7e5c61*/
  if ( v4 ) /*0x7e5c67*/
  {
    v5 = v4 - 1; /*0x7e5c69*/
    if ( v5 ) /*0x7e5c6c*/
    {
      if ( v5 == 1 ) /*0x7e5c71*/
      {
        v6 = element; /*0x7e5c73*/
        if ( element ) /*0x7e5c7d*/
          InterlockedIncrement((volatile LONG *)&element->members); /*0x7e5c83*/
        NiTObjectArray_AddFirstEmpty(v3, (void **)&element); /*0x7e5c98*/
        if ( v6 ) /*0x7e5ca7*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v6->members) ) /*0x7e5cad*/
            v6->vtbl->super.super.Destructor((NiRefObject *)v6, 1); /*0x7e5cbf*/
        }
      }
    }
    else
    {
      sub_7E5B50(this, element); /*0x7e5cca*/
    }
  }
  else
  {
    sub_7E59C0(this, element); /*0x7e5cd8*/
  }
  sub_4784A0(v3); /*0x7e5cdf*/
}
