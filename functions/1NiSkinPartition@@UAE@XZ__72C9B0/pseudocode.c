void __thiscall NiSkinPartition::~NiSkinPartition(NiSkinPartition *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &NiSkinPartition::`vftable';
  sub_701500((int)this);
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 3);
  if ( v2 )
  {
    if ( v2[0xFFFFFFFF] )
      (**v2)(v2, 3);
    else
      FormHeapFree((unsigned int)(v2 + 0xFFFFFFFF));
  }
  NiRefObject_destr(this);
}
