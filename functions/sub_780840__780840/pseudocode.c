// Apply NiPropertyState in stock order; alpha property is propertyState[2] and is applied before the shader pass.
// DX11 geometry-state audit 2026-09-30: generic property-state dispatch order is slot+28 wire via manager+24, +18 shade via+18, +08 alpha via+08, +2C Z-buffer via+28, +1C stencil via+20, +10 material via+14. Do not substitute this generic order for Lighting30 7FB470.
int __thiscall OB_NiD3DRenderState_ApplyPropertyState_010201A0(void *this, void *propertyState)
{
  (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x24))(this, *((_DWORD *)propertyState + 0xA)); /*0x780853*/
  (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x18))(this, *((_DWORD *)propertyState + 6)); /*0x780860*/
  (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 8))(this, *((_DWORD *)propertyState + 2));// Apply propertyState[2] through NiD3DRenderState::ApplyAlphaProperty before the shader pass and texture-stage application. /*0x78086d*/
  (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x28))(this, *((_DWORD *)propertyState + 0xB)); /*0x78087a*/
  (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x20))(this, *((_DWORD *)propertyState + 7)); /*0x780887*/
  return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x14))(this, *((_DWORD *)propertyState + 4)); /*0x780896*/
}
