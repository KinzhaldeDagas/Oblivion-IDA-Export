char __thiscall sub_477DB0(ActorAnimData *this, UInt32 a2, TESObjectREFR *a3, UInt32 a4, int a5)
{
  IOTask *v10; // eax
  IOTask *v11; // eax

  if ( !a4 || a4 == 5 )
    a5 = 3;
  v10 = (IOTask *)FormHeapAlloc(0x2Cu);
  if ( v10 )
    v11 = sub_474C50(v10, a2, a4, (BSTask *)a5, a3, 0);
  else
    v11 = 0;
  this->unkC8[2] = (UInt32)v11;
  return sub_476380(this);
}
