NiTimeController *__thiscall sub_6C3E80(_DWORD *this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x40u);
  v4 = v3;
  if ( v3 )
  {
    sub_6CE1D0(v3);
    v4->vtbl = (NiTimeControllerVtbl *)&NiTransformController::`vftable';
  }
  else
  {
    v4 = 0;
  }
  sub_6CE2C0(this, (int)v4, a2);
  return v4;
}
