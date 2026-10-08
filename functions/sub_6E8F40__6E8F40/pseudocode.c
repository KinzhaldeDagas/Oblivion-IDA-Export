NiBoneLODController *__thiscall sub_6E8F40(float *this, int *a2)
{
  NiBoneLODController *v3; // eax
  NiBoneLODController *v4; // esi

  v3 = (NiBoneLODController *)FormHeapAlloc(0x70u); /*0x6e8f67*/
  v4 = 0; /*0x6e8f73*/
  if ( v3 ) /*0x6e8f7b*/
    v4 = NiBoneLODController::NiBoneLODController(v3); /*0x6e8f84*/
  NiTimeController_CopyMembers(this, (int)v4, a2); /*0x6e8f96*/
  *((float *)v4 + 0xF) = *(this + 0xF); /*0x6e8f9e*/
  *((float *)v4 + 0x10) = *(this + 0x10); /*0x6e8fa4*/
  return v4; /*0x6e8fa9*/
}
