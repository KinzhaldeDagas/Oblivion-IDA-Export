Ni2DBuffer *__thiscall sub_72BDB0(Ni2DBuffer **this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  Ni2DBuffer *v5; // ebx
  Ni2DBuffer *v6; // eax
  unsigned int v7; // ebx
  Ni2DBuffer *result; // eax
  unsigned int v9; // edi

  nullsub_returnvVoid_1arg((int)a2);
  v3 = sub_7124A0(a2);
  v4 = (int)*(this + 2);
  v5 = (Ni2DBuffer *)v3;
  if ( v4 != v3 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *(this + 2) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)&v5->members);
  }
  if ( a2[0x36] >= 0xA010065u )
  {
    v6 = (Ni2DBuffer *)sub_7124A0(a2);
    NiSmartPointer_Set__(this + 3, v6);
  }
  *(this + 4) = (Ni2DBuffer *)sub_7124A0(a2);
  v7 = sub_7124D0(a2);
  result = (Ni2DBuffer *)FormHeapAlloc((unsigned __int64)v7 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v7);
  v9 = 0;
  for ( *(this + 5) = result; v9 < v7; ++v9 )
  {
    result = (Ni2DBuffer *)sub_7124A0(a2);
    *((_DWORD *)&(*(this + 5))->__vftable + v9) = result;
  }
  return result;
}
