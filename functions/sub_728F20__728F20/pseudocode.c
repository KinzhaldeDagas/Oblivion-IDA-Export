void __thiscall sub_728F20(Ni2DBuffer **this, _DWORD *a2)
{
  Ni2DBuffer *v3; // eax

  nullsub_returnvVoid_1arg((int)a2);
  if ( a2[0x36] >= 0xA030007u )
  {
    v3 = (Ni2DBuffer *)sub_7124A0(a2);
    NiSmartPointer_Set__(this + 0xD, v3);
  }
}
