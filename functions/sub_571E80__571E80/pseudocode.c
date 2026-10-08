float *__thiscall sub_571E80(float *this)
{
  float *v2; // esi
  int v3; // ebx
  double v4; // st7
  int v6; // [esp+14h] [ebp-14h]

  ArrayConstructor( /*0x571ebf*/
    (char *)this,
    0x1Cu,
    0xC8,
    (void (__thiscall *)(char *))sub_571D40,
    (void (__thiscall *)(void *))sub_571DF0);
  *(this + 0x57B) = 0.0; /*0x571eca*/
  *(this + 0x579) = 0.0; /*0x571ed0*/
  *(this + 0x57A) = 0.0; /*0x571ed6*/
  *((_DWORD *)this + 0x578) = &NiTList<DebugText::DebugTextData *>::`vftable'; /*0x571edc*/
  v2 = this + 5; /*0x571eeb*/
  v6 = 0xC8; /*0x571eee*/
  do /*0x571f4e*/
  {
    v2[0xFFFFFFFD] = 0.0; /*0x571ef8*/
    v2[0xFFFFFFFB] = 0.0; /*0x571efb*/
    v2[0xFFFFFFFC] = 0.0; /*0x571efe*/
    v3 = *((_DWORD *)v2 + 0xFFFFFFFE); /*0x571f01*/
    if ( v3 ) /*0x571f06*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x571f0c*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x571f22*/
      v2[0xFFFFFFFE] = 0.0; /*0x571f24*/
    }
    FormHeapFree(*((_DWORD *)v2 + 0xFFFFFFFF)); /*0x571f2b*/
    v4 = kTerrainLODQuadRayDirectionZ; /*0x571f30*/
    v2[0xFFFFFFFF] = 0.0; /*0x571f36*/
    *((_WORD *)v2 + 1) = 0; /*0x571f39*/
    *(_WORD *)v2 = 0; /*0x571f3d*/
    v2[1] = v4; /*0x571f40*/
    v2 += 7; /*0x571f46*/
    --v6; /*0x571f49*/
  }
  while ( v6 ); /*0x571f4e*/
  return this; /*0x571f52*/
}
