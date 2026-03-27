int __thiscall sub_77CEC0(unsigned int **this)
{
  Atmosphere *v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiAVObject *v4; // eax
  _DWORD *v5; // ecx
  Atmosphere *v6; // esi
  unsigned int v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = (Atmosphere *)sub_77C9C0(this);
  if ( v2 )
  {
    v3 = InterlockedDecrement;
    do
    {
      v4 = sub_452A60(v2);
      NiTMap_RemoveAt(*(this + 8), (int)v4);
      v5 = *(this + 8);
      if ( !v5 )
        break;
      if ( !*(this + 7) )
        break;
      v8 = 0;
      sub_7B2600(v5, this + 7, &v9, &v8);
      v6 = (Atmosphere *)v8;
      if ( v8 )
      {
        if ( !v3((volatile LONG *)(v8 + 4)) )
          ((void (__thiscall *)(Atmosphere *, int))v6->__vftbl->GetObjectNode)(v6, 1);
      }
      v2 = v6;
    }
    while ( v6 );
  }
  return NiTMap_Clear(*(this + 8));
}
