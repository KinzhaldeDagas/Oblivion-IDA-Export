bool __thiscall sub_428FB0(BSExtraData *this, BSExtraData *a2)
{
  _DWORD *v3; // esi

  v3 = OblivionDynamicCast( /*0x428fcd*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraOriginalReference `RTTI Type Descriptor',
         0);
  return !v3 || BSExtraData_CompareTo(this, a2) || *((_DWORD *)this + 3) != v3[3]; /*0x428fd6*/
}
