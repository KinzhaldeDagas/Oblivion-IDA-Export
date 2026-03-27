signed int __thiscall TimeGlobals_GetGameMonth(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 1);
  if ( v1 )
    return (char)Double_To_SInt32(*(float *)(v1 + 0x24));
  else
    return 7;
}
