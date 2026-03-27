void __thiscall sub_7204C0(Ni2DBuffer **this)
{
  Ni2DBuffer **v2; // edi
  NiDevImageConverter *v3; // eax
  Ni2DBuffer *v4; // eax

  v2 = this + 0xF;
  if ( !*(this + 0xF) )
  {
    if ( *(this + 0xE) )
    {
      v3 = sub_71B280();
      v4 = (Ni2DBuffer *)(*(int (__thiscall **)(NiDevImageConverter *, _DWORD, _DWORD))(*(_DWORD *)v3 + 8))(
                           v3,
                           *(this + 0xE),
                           0);
      NiSmartPointer_Set__(v2, v4);
    }
  }
}
