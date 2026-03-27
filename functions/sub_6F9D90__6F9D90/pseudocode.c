char __thiscall sub_6F9D90(Ni2DBuffer **this)
{
  BSNodeReferences *v2; // eax
  Ni2DBuffer *v3; // eax
  char v4; // al
  int v5; // edi
  char v6; // bl

  if ( *(this + 0x122) )
  {
    v2 = (BSNodeReferences *)FormHeapAlloc(0x18u);
    if ( v2 )
      v3 = (Ni2DBuffer *)BSNodeReferences::BSNodeReferences(v2);
    else
      v3 = 0;
    NiSmartPointer_Set__(this + 0x123, v3);
    sub_713E50(this, (int)*(this + 0x123));
  }
  v4 = sub_714B20((unsigned __int16 *)this);
  v5 = (int)*(this + 0x123);
  v6 = v4;
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(this + 0x123) = 0;
  }
  return v6;
}
