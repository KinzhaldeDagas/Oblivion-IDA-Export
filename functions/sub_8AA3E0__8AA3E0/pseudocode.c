char __thiscall sub_8AA3E0(int this)
{
  Ni2DBuffer **v1; // esi
  Ni2DBuffer *v2; // eax

  if ( *(char *)(this + 8) >= 0 )
    return 0;
  v1 = *(Ni2DBuffer ***)(this + 0x30);
  v2 = (Ni2DBuffer *)sub_700010(v1, (int)&unk_BA8000);
  if ( !v2 )
    return 0;
  sub_6FFE90(v1, v2);
  return 1;
}
