void __thiscall sub_5AD700(int *this, TESObjectCELL *a2)
{
  int v3; // edi

  if ( *(this + 0x14) )
  {
    do
    {
      v3 = *(_DWORD *)(*(this + 0x14) + 4);
      FormHeapFree(*(this + 0x14));
      *(this + 0x14) = v3;
    }
    while ( v3 );
  }
  *(this + 0x13) = 0;
  sub_5AD440(this, a2);
  *(this + 0x11) = (int)a2;
}
