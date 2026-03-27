float *__thiscall sub_6E2760(unsigned int *this, int a2)
{
  _DWORD *v3; // edi
  float *v4; // eax
  int v6; // [esp+Ch] [ebp-24h]
  int v7; // [esp+10h] [ebp-20h]
  int v8; // [esp+14h] [ebp-1Ch]

  v3 = (_DWORD *)*(this + 0x11);
  *(float *)&v6 = sub_7300B0(v3, *(this + 0x12));
  *(float *)&v7 = sub_7300B0(v3, *(this + 0x12) + 1);
  *(float *)&v8 = sub_7300B0(v3, *(this + 0x12) + 2);
  v4 = (float *)FormHeapAlloc(0x20u);
  if ( v4 )
    return sub_6DA240(v4, v6, v7, v8);
  else
    return 0;
}
