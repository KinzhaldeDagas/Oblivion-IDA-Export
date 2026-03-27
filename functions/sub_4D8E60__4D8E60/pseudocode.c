int __thiscall sub_4D8E60(int *this, BSExtraDataVtbl *a2)
{
  int v3; // eax

  sub_4201A0((ExtraDataList *)(this + 0x11), (int)this, a2);
  v3 = *this;
  if ( a2 )
    return (*(int (__thiscall **)(int *, int))(v3 + 0x40))(this, 0x4000);
  else
    return (*(int (__thiscall **)(int *, int))(v3 + 0x44))(this, 0x4000);
}
