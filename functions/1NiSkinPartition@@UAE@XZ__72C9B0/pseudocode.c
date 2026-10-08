void __thiscall NiSkinPartition::~NiSkinPartition(NiSkinPartition *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &NiSkinPartition::`vftable'; /*0x72c9d8*/
  sub_701500((int)this); /*0x72c9e7*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 3); /*0x72c9ec*/
  if ( v2 ) /*0x72c9f4*/
  {
    if ( v2[0xFFFFFFFF] ) /*0x72c9f6*/
      (**v2)(v2, 3); /*0x72ca05*/
    else
      FormHeapFree((unsigned int)(v2 + 0xFFFFFFFF)); /*0x72ca0a*/
  }
  NiRefObject_destr(this); /*0x72ca1c*/
}
