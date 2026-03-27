BSStringT *__thiscall sub_47D400(unsigned __int16 *this, BSStringT *a2)
{
  char v3; // cl
  __int16 v4; // dx
  unsigned __int16 v5; // bp
  char v6; // al
  __int16 v7; // cx
  __int16 v8; // ax
  char v9; // dl
  char v10; // bl
  unsigned __int16 v11; // di
  const char **v12; // eax
  const char *v13; // eax
  int v15; // [esp+14h] [ebp-34h]
  __int16 v16; // [esp+2Ch] [ebp-1Ch] BYREF
  char v17; // [esp+2Eh] [ebp-1Ah]
  __int16 v18; // [esp+2Fh] [ebp-19h]
  char v19; // [esp+31h] [ebp-17h]
  __int16 v20; // [esp+32h] [ebp-16h]
  char v21; // [esp+34h] [ebp-14h]
  __int16 v22; // [esp+35h] [ebp-13h]
  char v23; // [esp+37h] [ebp-11h]
  int v24; // [esp+44h] [ebp-4h]

  a2->m_data = 0;
  a2->m_dataLen = 0;
  a2->m_bufLen = 0;
  v3 = byte_A3D192;
  v4 = word_A3D18C;
  v5 = *this;
  v24 = 0;
  v16 = word_A3D190;
  v6 = byte_A3D18E;
  v17 = v3;
  v7 = word_A3D188;
  v19 = v6;
  v8 = word_A3D184;
  v20 = v7;
  LOBYTE(v7) = byte_A3D186;
  v18 = v4;
  v21 = byte_A3D18A;
  v22 = v8;
  v23 = v7;
  sub_47D330(v5);
  v10 = v9;
  if ( v9 < 1 || v9 > 3 )
    v15 = 0;
  else
    v15 = v9;
  v11 = *(this + 1);
  v12 = *(const char ***)(4 * sub_47D330(v5) + 0xB06FA4);
  if ( v12 )
    v13 = *v12;
  else
    v13 = 0;
  BSStringT_Static_Format(a2, "%d%s of %s, 3E%d", v10, (const char *)&v16 + 2 * v15 + v15, v13, v11);
  return a2;
}
