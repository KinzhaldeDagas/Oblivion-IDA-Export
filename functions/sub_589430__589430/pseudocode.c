void __thiscall sub_589430(_DWORD *this)
{
  _DWORD *v1; // edi
  _DWORD *v2; // ecx
  _DWORD *v3; // eax
  int v4; // esi
  unsigned __int16 v5; // dx

  v1 = (_DWORD *)*(this + 0xD);
  while ( v1 )
  {
    v2 = (_DWORD *)v1[2];
    v3 = (_DWORD *)v2[6];
    v1 = (_DWORD *)*v1;
    if ( !v3 )
      goto LABEL_6;
    while ( 1 )
    {
      v4 = v3[2];
      v5 = *(_WORD *)(v4 + 0x18);
      v3 = (_DWORD *)*v3;
      if ( v5 == 0xFA4 )
        break;
      if ( v5 > 0xFA4u || !v3 )
        goto LABEL_6;
    }
    if ( fConstant_2 == *(float *)(v4 + 4) )
      v2[0xB] |= 0x100u;
    else
LABEL_6:
      sub_589430(v2);
  }
}
