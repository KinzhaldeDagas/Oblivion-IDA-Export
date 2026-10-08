Ni2DBuffer *__thiscall sub_72BDB0(Ni2DBuffer **this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  Ni2DBuffer *v5; // ebx
  Ni2DBuffer *v6; // eax
  unsigned int v7; // ebx
  Ni2DBuffer *result; // eax
  unsigned int v9; // edi

  nullsub_returnvVoid_1arg((int)a2); /*0x72bdbb*/
  v3 = sub_7124A0(a2); /*0x72bdc2*/
  v4 = (int)*(this + 2); /*0x72bdc7*/
  v5 = (Ni2DBuffer *)v3; /*0x72bdca*/
  if ( v4 != v3 ) /*0x72bdce*/
  {
    if ( v4 ) /*0x72bdd2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x72bdd8*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x72bdee*/
    }
    *(this + 2) = v5; /*0x72bdf2*/
    if ( v5 ) /*0x72bdf5*/
      InterlockedIncrement((volatile LONG *)&v5->members); /*0x72bdfb*/
  }
  if ( a2[0x36] >= 0xA010065u ) /*0x72be0b*/
  {
    v6 = (Ni2DBuffer *)sub_7124A0(a2); /*0x72be0f*/
    NiSmartPointer_Set__(this + 3, v6); /*0x72be18*/
  }
  *(this + 4) = (Ni2DBuffer *)sub_7124A0(a2); /*0x72be26*/
  v7 = sub_7124D0(a2); /*0x72be30*/
  result = (Ni2DBuffer *)FormHeapAlloc((unsigned __int64)v7 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v7);
  v9 = 0; /*0x72be49*/
  for ( *(this + 5) = result; v9 < v7; ++v9 ) /*0x72be50*/
  {
    result = (Ni2DBuffer *)sub_7124A0(a2); /*0x72be54*/
    *((_DWORD *)&(*(this + 5))->__vftable + v9) = result; /*0x72be5c*/
  }
  return result; /*0x72be67*/
}
