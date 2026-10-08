void __thiscall sub_7204C0(Ni2DBuffer **this)
{
  Ni2DBuffer **v2; // edi
  NiDevImageConverter *v3; // eax
  Ni2DBuffer *v4; // eax

  v2 = this + 0xF; /*0x7204c8*/
  if ( !*(this + 0xF) ) /*0x7204c3*/
  {
    if ( *(this + 0xE) ) /*0x7204cd*/
    {
      v3 = sub_71B280(); /*0x7204d3*/
      v4 = (Ni2DBuffer *)(*(int (__thiscall **)(NiDevImageConverter *, _DWORD, _DWORD))(*(_DWORD *)v3 + 8))( /*0x7204e5*/
                           v3,
                           *(this + 0xE),
                           0);
      NiSmartPointer_Set__(v2, v4); /*0x7204ea*/
    }
  }
}
