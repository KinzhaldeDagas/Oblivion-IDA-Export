//
//
// [2026-10-03 lifetime distinction] Leaf-property destructor releases STLSP then lighting-property base resources; it does not destroy owner geometry. Frond plugin now preserves geometry metadata across property retirement and supports rebinding without resurrecting destroyed shape records.
void __thiscall SpeedTreeLeafShaderProperty::~SpeedTreeLeafShaderProperty(SpeedTreeLeafShaderProperty *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  *(_DWORD *)this = &SpeedTreeLeafShaderProperty::`vftable'; /*0x7f1b9a*/
  v2 = *((_DWORD *)this + 0x2A); /*0x7f1ba0*/
  v3 = InterlockedDecrement; /*0x7f1ba8*/
  if ( v2 ) /*0x7f1bb6*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x7f1bbc*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7f1bce*/
    *((_DWORD *)this + 0x2A) = 0; /*0x7f1bd0*/
  }
  v4 = *((_DWORD *)this + 0x2A); /*0x7f1bda*/
  if ( v4 ) /*0x7f1be7*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7f1bed*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7f1bff*/
  }
  SpeedTreeShaderLightingProperty::~SpeedTreeShaderLightingProperty(this); /*0x7f1c0b*/
}
