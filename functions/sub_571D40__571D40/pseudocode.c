_DWORD *__thiscall sub_571D40(_DWORD *this)
{
  int v2; // edi
  double v3; // st7

  *(this + 3) = 0; /*0x571d6c*/
  *(this + 4) = 0; /*0x571d73*/
  *((_WORD *)this + 0xA) = 0; /*0x571d76*/
  *((_WORD *)this + 0xB) = 0; /*0x571d7a*/
  *(float *)this = 0.0; /*0x571d80*/
  *(this + 2) = 0; /*0x571d82*/
  *((float *)this + 1) = 0.0; /*0x571d85*/
  v2 = *(this + 3); /*0x571d8d*/
  if ( v2 ) /*0x571d92*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x571d98*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x571dae*/
    *(this + 3) = 0; /*0x571db0*/
  }
  FormHeapFree(*(this + 4)); /*0x571db7*/
  v3 = kTerrainLODQuadRayDirectionZ; /*0x571dbc*/
  *(this + 4) = 0; /*0x571dc2*/
  *((_WORD *)this + 0xB) = 0; /*0x571dc5*/
  *((_WORD *)this + 0xA) = 0; /*0x571dc9*/
  *((float *)this + 6) = v3; /*0x571dcd*/
  return this; /*0x571dd5*/
}
