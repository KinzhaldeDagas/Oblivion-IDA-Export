_DWORD *__thiscall sub_944A90(_DWORD *this, int a2)
{
  *(_OWORD *)this = *(_OWORD *)a2; /*0x944a99*/
  *(this + 4) = *(_DWORD *)(a2 + 0x10); /*0x944a9f*/
  *(this + 5) = *(_DWORD *)(a2 + 0x14); /*0x944aa5*/
  *(this + 6) = *(_DWORD *)(a2 + 0x18); /*0x944aab*/
  *(this + 7) = *(_DWORD *)(a2 + 0x1C); /*0x944ab1*/
  return this; /*0x944ab4*/
}
