// Appends one compact 0x1C stock collision record to the collision vector; vector stride proves no in-record 4.1 supplemental rotation fields.
void *__fastcall OB_CollisionObjectVector_Append_010201A0(unsigned int *vec, int scratch, const void *record)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  OB_CollisionObject_010201A0 *v6; // edi
  void *v7; // eax
  unsigned int v8; // edi
  OB_stVector_CollisionObjectIterator_010201A0 result; // [esp+Ch] [ebp-8h] BYREF

  v4 = vec[1]; /*0x78d557*/
  if ( v4 ) /*0x78d55d*/
    v5 = (int)(vec[2] - v4) / 0x1C; /*0x78d579*/
  else
    v5 = 0; /*0x78d55f*/
  if ( v4 && v5 < (int)(vec[3] - v4) / 0x1C ) /*0x78d599*/
  {
    v6 = (OB_CollisionObject_010201A0 *)vec[2]; /*0x78d5a3*/
    LOBYTE(result.owner) = 0; /*0x78d5a6*/
    v7 = OB_stVector_CollisionObject_UninitializedFillN_010201A0(v6, 1u, (const OB_CollisionObject_010201A0 *)record); /*0x78d5b6*/
    vec[2] = (unsigned int)&v6[1]; /*0x78d5c1*/
  }
  else
  {
    v8 = vec[2]; /*0x78d5cd*/
    if ( v4 > v8 ) /*0x78d5d2*/
      _invalid_parameter_noinfo(); /*0x78d5d4*/
    return OB_stVector_CollisionObject_InsertOne_010201A0( /*0x78d5e7*/
             (OB_stVector_CollisionObject_010201A0 *)vec,
             &result,
             (OB_stVector_CollisionObjectIterator_010201A0)__PAIR64__(v8, (unsigned int)vec),
             (const OB_CollisionObject_010201A0 *)record);
  }
  return v7; /*0x78d5c4*/
}
