_DWORD *__thiscall sub_75A7B0(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi
  int v5; // ecx
  Ni2DBuffer *v6; // eax

  v3 = (NiObject *)FormHeapAlloc(0x1Cu); /*0x75a7b7*/
  v4 = (int)v3; /*0x75a7bc*/
  if ( v3 ) /*0x75a7c3*/
  {
    sub_752BF0(v3); /*0x75a7c7*/
    *(_DWORD *)v4 = &NiPSysColliderManager::`vftable'; /*0x75a7cc*/
    *(_DWORD *)(v4 + 0x18) = 0; /*0x75a7d2*/
  }
  else
  {
    v4 = 0; /*0x75a7db*/
  }
  sub_752C40(this, v4, a2); /*0x75a7e5*/
  v5 = (int)*(this + 6); /*0x75a7ea*/
  if ( v5 ) /*0x75a7ef*/
  {
    v6 = (Ni2DBuffer *)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v5 + 0x18))(v5, a2); /*0x75a7f7*/
    NiSmartPointer_Set__((Ni2DBuffer **)(v4 + 0x18), v6); /*0x75a7fd*/
  }
  return (_DWORD *)v4; /*0x75a802*/
}
