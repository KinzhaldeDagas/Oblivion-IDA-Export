char __thiscall sub_4105F0(int this, const char *a2, char a3)
{
  bool v4; // zf
  unsigned int *v5; // eax
  FreeEntry *v6; // eax
  float v8; // [esp+Ch] [ebp+8h]

  v4 = *(_DWORD *)this == 0; /*0x4105f3*/
  *(_DWORD *)(this + 0x20) = 2; /*0x4105f6*/
  *(_BYTE *)(this + 0x24) = 1; /*0x4105fd*/
  if ( v4 && !sub_410160((int *)this, a2, 1, a3, 0) ) /*0x41061a*/
    goto LABEL_5; /*0x41061a*/
  *(_DWORD *)(this + 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x1248] + 0x280); /*0x41062c*/
  v5 = *(unsigned int **)this; /*0x410635*/
  v8 = (double)nHeight / (double)*(unsigned int *)(*(_DWORD *)this + 4); /*0x410649*/
  *(float *)(this + 0x14) = v8; /*0x410651*/
  *(float *)(this + 0x18) = ((double)nWidth - v8 * (double)*v5) * 0.5; /*0x41067b*/
  *(float *)(this + 0x1C) = 0.0; /*0x410680*/
  v6 = sub_40FEE0(*(FreeEntry **)(this + 4), *v5, v5[1], (FreeEntry *)4, 0x100u, (FreeEntry *)0x16); /*0x41068e*/
  *(_DWORD *)(this + 8) = v6; /*0x410698*/
  if ( !v6 ) /*0x41069b*/
  {
    *(_DWORD *)(this + 0x20) = 0; /*0x41069d*/
LABEL_5:
    *(_BYTE *)(this + 0x24) = 0; /*0x4106a0*/
    return 0; /*0x4106a6*/
  }
  *(_BYTE *)(this + 0x24) = 0; /*0x4106a9*/
  return 1; /*0x4106a5*/
}
