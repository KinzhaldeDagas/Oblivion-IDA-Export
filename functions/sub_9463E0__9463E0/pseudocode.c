_WORD *__thiscall sub_9463E0(_WORD *this, _DWORD *a2)
{
  int v3; // eax

  *(this + 3) = 1; /*0x9463e8*/
  *((_BYTE *)this + 0xC) = 1; /*0x9463ec*/
  *((_DWORD *)this + 2) = &off_A9D1C0; /*0x9463f3*/
  *(_DWORD *)this = &off_AA2950; /*0x9463fa*/
  *((_DWORD *)this + 2) = &off_AA2938; /*0x946400*/
  *((_DWORD *)this + 8) = 0; /*0x946409*/
  *((_DWORD *)this + 9) = 0; /*0x94640c*/
  *((_DWORD *)this + 0xA) = 0x80000000; /*0x94640f*/
  if ( (int)a2[1] <= 0 ) /*0x946419*/
    v3 = 0; /*0x946424*/
  else
    v3 = *(_DWORD *)(*(_DWORD *)*a2 + 4); /*0x94641f*/
  *((_DWORD *)this + 0xB) = v3; /*0x946428*/
  if ( v3 ) /*0x94642b*/
  {
    if ( *(_WORD *)(v3 + 4) ) /*0x94642d*/
      ++*(_WORD *)(v3 + 6); /*0x946433*/
    sub_8CA4D0(*((const void ***)this + 0xB), (int)sub_9463B0, (int)this); /*0x946440*/
  }
  return this; /*0x946447*/
}
