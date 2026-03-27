float *__thiscall sub_571E80(float *this)
{
  float *v2; // esi
  int v3; // ebx
  double v4; // st7
  int v6; // [esp+14h] [ebp-14h]

  ArrayConstructor(this, 0x1Cu, 0xC8, (int)sub_571D40, (void (__thiscall *)(void *))sub_571DF0);
  *(this + 0x57B) = 0.0;
  *(this + 0x579) = 0.0;
  *(this + 0x57A) = 0.0;
  *((_DWORD *)this + 0x578) = &NiTList<DebugText::DebugTextData *>::`vftable';
  v2 = this + 5;
  v6 = 0xC8;
  do
  {
    v2[0xFFFFFFFD] = 0.0;
    v2[0xFFFFFFFB] = 0.0;
    v2[0xFFFFFFFC] = 0.0;
    v3 = *((_DWORD *)v2 + 0xFFFFFFFE);
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      v2[0xFFFFFFFE] = 0.0;
    }
    FormHeapFree(*((_DWORD *)v2 + 0xFFFFFFFF));
    v4 = flt_A30634;
    v2[0xFFFFFFFF] = 0.0;
    *((_WORD *)v2 + 1) = 0;
    *(_WORD *)v2 = 0;
    v2[1] = v4;
    v2 += 7;
    --v6;
  }
  while ( v6 );
  return this;
}
