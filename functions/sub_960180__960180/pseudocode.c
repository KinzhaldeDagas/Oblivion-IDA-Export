int __thiscall sub_960180(int this, int a2)
{
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4); /*0x960187*/
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8); /*0x96018d*/
  *(_DWORD *)(this + 0xC) = *(_DWORD *)(a2 + 0xC); /*0x960193*/
  *(_DWORD *)(this + 0x10) = *(_DWORD *)(a2 + 0x10); /*0x960199*/
  *(_DWORD *)(this + 0x14) = *(_DWORD *)(a2 + 0x14); /*0x96019f*/
  *(_DWORD *)(this + 0x18) = *(_DWORD *)(a2 + 0x18); /*0x9601a5*/
  *(float *)(this + 0x1C) = *(float *)(a2 + 0x1C); /*0x9601ab*/
  *(float *)(this + 0x38) = *(float *)(a2 + 0x38); /*0x9601b1*/
  return sub_9600B0((float *)this); /*0x9601b9*/
}
