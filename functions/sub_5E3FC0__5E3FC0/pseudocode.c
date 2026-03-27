char __thiscall sub_5E3FC0(_BYTE *this)
{
  BSExtraDataVtbl *v2; // eax
  int v3; // ecx
  float *v4; // edi
  void (__thiscall *Destructor)(BSExtraData *); // ecx

  v2 = sub_41E650((ExtraDataList *)(this + 0x44));
  v3 = *((_DWORD *)this + 0x16);
  v4 = (float *)v2;
  if ( v2 )
  {
    if ( v2->Destructor )
    {
      if ( v3 )
      {
        v2 = (BSExtraDataVtbl *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0xF0))(v3, 1);
        if ( v2 )
        {
          Destructor = v2[1].Destructor;
          if ( Destructor )
          {
            if ( *((_BYTE *)Destructor + 4) == 0x1A )
              LOBYTE(v2) = sub_4B22E0((float *)Destructor, v4, 0);
          }
        }
      }
    }
  }
  return (char)v2;
}
