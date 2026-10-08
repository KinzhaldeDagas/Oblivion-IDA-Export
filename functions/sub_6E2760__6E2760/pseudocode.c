NiObject *__thiscall sub_6E2760(unsigned int *this, int a2)
{
  _DWORD *v3; // edi
  NiObject *v4; // eax
  int v6; // [esp+Ch] [ebp-24h]
  int v7; // [esp+10h] [ebp-20h]
  int v8; // [esp+14h] [ebp-1Ch]

  v3 = (_DWORD *)*(this + 0x11); /*0x6e2787*/
  *(float *)&v6 = sub_7300B0(v3, *(this + 0x12)); /*0x6e2795*/
  *(float *)&v7 = sub_7300B0(v3, *(this + 0x12) + 1); /*0x6e27a7*/
  *(float *)&v8 = sub_7300B0(v3, *(this + 0x12) + 2); /*0x6e27b9*/
  v4 = (NiObject *)FormHeapAlloc(0x20u); /*0x6e27d7*/
  if ( v4 ) /*0x6e27ed*/
    return sub_6DA240(v4, v6, v7, v8); /*0x6e280a*/
  else
    return 0; /*0x6e2823*/
}
