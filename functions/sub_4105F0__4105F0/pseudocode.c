char __thiscall sub_4105F0(int this, const char *a2, char a3)
{
  bool v4; // zf
  FreeEntry **v5; // eax
  FreeEntry *v6; // eax
  float v8; // [esp+Ch] [ebp+8h]

  v4 = *(_DWORD *)this == 0;
  *(_DWORD *)(this + 0x20) = 2;
  *(_BYTE *)(this + 0x24) = 1;
  if ( v4 && !sub_410160((int *)this, a2, 1, a3, 0) )
    goto LABEL_5;
  *(_DWORD *)(this + 4) = *(_DWORD *)(dword_B350D8 + 0x280);
  v5 = *(FreeEntry ***)this;
  v8 = (double)nHeight / (double)*(unsigned int *)(*(_DWORD *)this + 4);
  *(float *)(this + 0x14) = v8;
  *(float *)(this + 0x18) = ((double)nWidth - v8 * (double)(unsigned int)*v5) * 0.5;
  *(float *)(this + 0x1C) = 0.0;
  v6 = sub_40FEE0(*(FreeEntry **)(this + 4), *v5, v5[1], (FreeEntry *)4, (FreeEntry *)0x100, (FreeEntry *)0x16);
  *(_DWORD *)(this + 8) = v6;
  if ( !v6 )
  {
    *(_DWORD *)(this + 0x20) = 0;
LABEL_5:
    *(_BYTE *)(this + 0x24) = 0;
    return 0;
  }
  *(_BYTE *)(this + 0x24) = 0;
  return 1;
}
