void __thiscall sub_74C910(void *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v4; // eax
  Ni2DBuffer *v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // eax

  v2 = a2;
  if ( a2 )
  {
    InterlockedIncrement(a2 + 1);
    sub_74C5D0((int)this + 0x50, (LONG *)&a2);
    if ( !InterlockedDecrement(v2 + 1) )
      (*(void (__thiscall **)(_DWORD *, int))*v2)(v2, 1);
    v4 = v2[0x2E];
    if ( v4 )
    {
      v5 = *(Ni2DBuffer **)(v4 + 0xC);
      v6 = (_DWORD *)FormHeapAlloc(0xCu);
      if ( v5 )
      {
        if ( v6 )
        {
          v7 = sub_74A750(v6);
          NiSmartPointer_Set__((Ni2DBuffer **)v7 + 2, v5);
        }
        else
        {
          v7 = 0;
          NiSmartPointer_Set__((Ni2DBuffer **)8, v5);
        }
LABEL_13:
        a2 = v7;
        if ( v7 )
          InterlockedIncrement(v7 + 1);
        sub_74C6A0((int)this + 0x60, (LONG *)&a2);
        if ( v7 )
        {
          if ( !InterlockedDecrement(v7 + 1) )
            (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1);
        }
        v8 = v2[0x2D];
        if ( v8 )
          *(_BYTE *)(v8 + 0x30) |= 0x33u;
        return;
      }
    }
    else
    {
      v6 = (_DWORD *)FormHeapAlloc(0xCu);
    }
    if ( v6 )
      v7 = sub_74A750(v6);
    else
      v7 = 0;
    goto LABEL_13;
  }
}
