void __thiscall NiParticleMeshesData::~NiParticleMeshesData(NiGeometryData *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  this->__vftable = (NiGeometryDataVtbl *)&NiParticleMeshesData::`vftable'; /*0x74013a*/
  v2 = *((_DWORD *)this + 0x17); /*0x740140*/
  v3 = InterlockedDecrement; /*0x740145*/
  if ( v2 ) /*0x740153*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x740159*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x74016b*/
    *((_DWORD *)this + 0x17) = 0; /*0x74016d*/
  }
  v4 = *((_DWORD *)this + 0x17); /*0x740174*/
  if ( v4 ) /*0x74017e*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x740184*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x740196*/
  }
  sub_73EEC0(this); /*0x7401a2*/
}
