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

  a2->m_data = 0; /*0x47d442*/
  a2->m_dataLen = 0; /*0x47d444*/
  a2->m_bufLen = 0; /*0x47d448*/
  v3 = byte_A3D192; /*0x47d44c*/
  v4 = word_A3D18C; /*0x47d453*/
  v5 = *this; /*0x47d45a*/
  v24 = 0; /*0x47d45d*/
  v16 = word_A3D190; /*0x47d468*/
  v6 = byte_A3D18E; /*0x47d46d*/
  v17 = v3; /*0x47d472*/
  v7 = word_A3D188; /*0x47d476*/
  v19 = v6; /*0x47d47d*/
  v8 = word_A3D184; /*0x47d481*/
  v20 = v7; /*0x47d488*/
  LOBYTE(v7) = byte_A3D186; /*0x47d48d*/
  v18 = v4; /*0x47d494*/
  v21 = byte_A3D18A; /*0x47d4a8*/
  v22 = v8; /*0x47d4ac*/
  v23 = v7; /*0x47d4b1*/
  sub_47D330(v5); /*0x47d4b5*/
  v10 = v9; /*0x47d4ba*/
  if ( v9 < 1 || v9 > 3 ) /*0x47d4cb*/
    v15 = 0; /*0x47d4d6*/
  else
    v15 = v9; /*0x47d4d0*/
  v11 = *(this + 1); /*0x47d4de*/
  v12 = *(const char ***)(4 * sub_47D330(v5) + 0xB06FA4); /*0x47d4e8*/
  if ( v12 ) /*0x47d4f8*/
    v13 = *v12; /*0x47d4fa*/
  else
    v13 = 0; /*0x47d4fe*/
  BSStringT_Static_Format(a2, "%d%s of %s, 3E%d", v10, (const char *)&v16 + 2 * v15 + v15, v13, v11); /*0x47d51b*/
  return a2; /*0x47d525*/
}
