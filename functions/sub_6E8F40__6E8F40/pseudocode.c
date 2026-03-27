NiBoneLODController *__thiscall sub_6E8F40(float *this, int *a2)
{
  NiBoneLODController *v3; // eax
  NiBoneLODController *v4; // esi

  v3 = (NiBoneLODController *)FormHeapAlloc(0x70u);
  v4 = 0;
  if ( v3 )
    v4 = NiBoneLODController::NiBoneLODController(v3);
  sub_715D80(this, (int)v4, a2);
  *((float *)v4 + 0xF) = *(this + 0xF);
  *((float *)v4 + 0x10) = *(this + 0x10);
  return v4;
}
