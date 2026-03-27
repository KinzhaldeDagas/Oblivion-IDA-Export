void __thiscall sub_4ED0D0(Ni2DBuffer **this)
{
  ArchiveFile *v2; // edi
  char *v3; // [esp-8h] [ebp-4B4h]
  _DWORD v4[292]; // [esp+Ch] [ebp-4A0h] BYREF
  unsigned int v5; // [esp+4A8h] [ebp-4h]

  v2 = sub_434650(this, 0, 1);
  NiStream::NiStream((NiStream *)v4);
  v4[0] = &BSStream::`vftable';
  v4[0x123] = 0;
  v4[0x122] = 0;
  v3 = (char *)*(this + 8);
  v5 = 0;
  if ( sub_6F9980((char *)v4, v3, (int)v2) )
    NiSmartPointer_Set__(this + 0xF, *(Ni2DBuffer **)v4[0x82]);
  v5 = 0xFFFFFFFF;
  BSStream::~BSStream((BSStream *)v4);
}
