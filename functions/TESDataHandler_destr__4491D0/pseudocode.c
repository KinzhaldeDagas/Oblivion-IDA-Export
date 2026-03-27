void __thiscall TESDataHandler_destr(CHAR **this)
{
  unsigned int v2; // edi
  unsigned int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  unsigned int v5; // edi
  unsigned int v6; // [esp-4h] [ebp-20h]

  v2 = (unsigned int)*(this + 0x337);
  if ( v2 )
  {
    ContainerExtraData_destr(v2);
    FormHeapFree(v2);
  }
  sub_451100(this + 0x232);
  v3 = (unsigned int)*this;
  if ( *this )
  {
    TESObjectListHead_destr(*this);
    FormHeapFree(v3);
  }
  v4 = (void (__thiscall ***)(_DWORD, int))*(this + 0x2F);
  if ( v4 )
    (**v4)(v4, 1);
  FormHeapFree((unsigned int)*(this + 0x336));
  v5 = g_idleAnimationMap;
  if ( g_idleAnimationMap )
  {
    sub_5219B0((_DWORD *)g_idleAnimationMap);
    FormHeapFree(v5);
  }
  g_idleAnimationMap = 0;
  NiTMap_Clear(&TESForm_FormIDMap);
  _LN21(this + 0x36, 0x60u, 0x15, TESSkill::~TESSkill);
  v6 = (unsigned int)*(this + 0x31);
  *(this + 0x30) = (CHAR *)&NiTLargeArray<TESObjectCELL *>::`vftable';
  FormHeapFree(v6);
}
