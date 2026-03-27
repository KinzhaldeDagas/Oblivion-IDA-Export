void __thiscall sub_6A8DB0(_DWORD *this)
{
  int (__stdcall ***v2)(_DWORD, GUID *, int *); // eax
  int v3; // [esp+10h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 0x37) & 2) != 0 )
  {
    v2 = (int (__stdcall ***)(_DWORD, GUID *, int *))*(this + 0x1C);
    if ( v2 )
    {
      if ( (**v2)(v2, &CLSID_IMediaControl, &v3) >= 0 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 0x24))(v3);
        (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
        *(this + 0x37) &= 0xFFFFFFFC;
      }
    }
  }
}
