void __thiscall sub_74C910(void *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v4; // eax
  Ni2DBuffer *v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // eax

  v2 = a2; /*0x74c912*/
  if ( a2 ) /*0x74c91a*/
  {
    InterlockedIncrement(a2 + 1); /*0x74c929*/
    sub_74C5D0((int)this + 0x50, (LONG *)&a2); /*0x74c937*/
    if ( !InterlockedDecrement(v2 + 1) ) /*0x74c93d*/
      (*(void (__thiscall **)(_DWORD *, int))*v2)(v2, 1); /*0x74c94f*/
    v4 = v2[0x2E]; /*0x74c951*/
    if ( v4 ) /*0x74c95c*/
    {
      v5 = *(Ni2DBuffer **)(v4 + 0xC); /*0x74c95e*/
      v6 = (_DWORD *)FormHeapAlloc(0xCu); /*0x74c961*/
      if ( v5 ) /*0x74c96b*/
      {
        if ( v6 ) /*0x74c96f*/
        {
          v7 = sub_74A750(v6); /*0x74c978*/
          NiSmartPointer_Set__((Ni2DBuffer **)v7 + 2, v5); /*0x74c97e*/
        }
        else
        {
          v7 = 0; /*0x74c985*/
          NiSmartPointer_Set__((Ni2DBuffer **)8, v5); /*0x74c98b*/
        }
LABEL_13:
        a2 = v7; /*0x74c9ab*/
        if ( v7 ) /*0x74c9b2*/
          InterlockedIncrement(v7 + 1); /*0x74c9b8*/
        sub_74C6A0((int)this + 0x60, (LONG *)&a2); /*0x74c9c6*/
        if ( v7 ) /*0x74c9cd*/
        {
          if ( !InterlockedDecrement(v7 + 1) ) /*0x74c9d3*/
            (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1); /*0x74c9e5*/
        }
        v8 = v2[0x2D]; /*0x74c9e7*/
        if ( v8 ) /*0x74c9f0*/
          *(_BYTE *)(v8 + 0x30) |= 0x33u; /*0x74c9f2*/
        return; /*0x74c9f2*/
      }
    }
    else
    {
      v6 = (_DWORD *)FormHeapAlloc(0xCu); /*0x74c992*/
    }
    if ( v6 ) /*0x74c99c*/
      v7 = sub_74A750(v6); /*0x74c9a5*/
    else
      v7 = 0; /*0x74c9a9*/
    goto LABEL_13; /*0x74c9a7*/
  }
}
