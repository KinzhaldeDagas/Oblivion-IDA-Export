void __thiscall sub_6A8DB0(_DWORD *this)
{
  int (__stdcall ***v2)(_DWORD, GUID *, int *); // eax
  int v3; // [esp+10h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 0x37) & 2) != 0 ) /*0x6a8dbb*/
  {
    v2 = (int (__stdcall ***)(_DWORD, GUID *, int *))*(this + 0x1C); /*0x6a8dbd*/
    if ( v2 ) /*0x6a8dc2*/
    {
      if ( (**v2)(v2, &CLSID_IMediaControl, &v3) >= 0 ) /*0x6a8dd7*/
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 0x24))(v3); /*0x6a8de3*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x6a8def*/
        *(this + 0x37) &= 0xFFFFFFFC; /*0x6a8df1*/
      }
    }
  }
}
