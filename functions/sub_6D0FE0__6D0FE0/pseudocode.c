float *__thiscall sub_6D0FE0(int this, float a2)
{
  unsigned int v2; // eax
  float *v3; // eax
  float v5; // [esp+1Ch] [ebp+4h]

  v2 = LOWORD(a2);
  v5 = 0.0;
  if ( v2 < *(unsigned __int16 *)(this + 0x4A) )
    v5 = *(float *)(*(_DWORD *)(this + 0x44) + 4 * v2);
  v3 = (float *)FormHeapAlloc(0x18u);
  if ( v3 )
    return sub_6D29E0(v3, v5);
  else
    return 0;
}
