char __thiscall sub_4D4D00(ExtraDataList *this)
{
  BSExtraDataVtbl *v2; // eax
  int *v3; // eax
  int v4; // ebp
  int v5; // eax
  int v6; // ebx
  _WORD *v7; // eax
  double v8; // st6
  int *v10; // [esp+Ch] [ebp-3Ch]
  _BYTE v11[36]; // [esp+14h] [ebp-34h] BYREF
  float v12[4]; // [esp+38h] [ebp-10h] BYREF

  if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
    v2 = sub_424180(this + 2);
  else
    v2 = (BSExtraDataVtbl *)bhkWorldM;
  v10 = (int *)v2;
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 || (v3 = *((int **)this + 0xF)) == 0 )
    v4 = 0;
  else
    v4 = *v3;
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 || (v5 = *((_DWORD *)this + 0xF)) == 0 )
    v6 = 0;
  else
    v6 = *(_DWORD *)(v5 + 4);
  v7 = (_WORD *)sub_41F950(this + 2);
  if ( v10 )
  {
    if ( v7 )
    {
      v12[3] = 1.0;
      v8 = dbl_A30F70;
      qmemcpy(v11, &stru_B26AF0[0xA].unk2C, sizeof(v11));
      v12[0] = (double)(v4 << 0xC) + v8;
      v12[1] = v8 + (double)(v6 << 0xC);
      v12[2] = 0.0;
      LOBYTE(v7) = sub_532F50(v7, v10, v12, (int)&dword_B27110);
    }
  }
  return (char)v7;
}
