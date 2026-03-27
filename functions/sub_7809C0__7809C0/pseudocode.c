char __thiscall sub_7809C0(_BYTE *this, int a2)
{
  float *v3; // ecx
  int v4; // eax
  char result; // al
  int v6; // ecx

  v3 = *(float **)(a2 + 0x58);
  if ( !v3 )
  {
    v4 = FormHeapAlloc(0x48u);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 0x44) = 0;
      sub_7808C0((float *)v4, a2);
    }
    else
    {
      v3 = 0;
    }
    *(_DWORD *)(a2 + 0x58) = v3;
    *(this + 4) = 1;
  }
  result = sub_7808C0(v3, a2);
  if ( result )
    *(this + 4) = 1;
  if ( v6 != *(_DWORD *)this )
  {
    *(this + 4) = 1;
    *(_DWORD *)this = v6;
  }
  return result;
}
