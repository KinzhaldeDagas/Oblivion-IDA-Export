// bhkBoxShape setup helper. Copies caller-provided extents into a temporary vector and invokes the box shape virtual setter; 0x565510 passes half-extents, not full SpeedTree box dimensions.
int __thiscall OB_bhkBoxShape_SetHalfExtents_010201A0(void *this, __m128 *a2)
{
  _DWORD v4[4]; // [esp+Ch] [ebp-20h] BYREF
  float v5[4]; // [esp+1Ch] [ebp-10h] BYREF

  *(float *)&v4[1] = flt_B2EFC4; /*0x564092*/
  v5[3] = 0.0; /*0x56409b*/
  v5[0] = 1.0; /*0x5640a6*/
  v4[0] = 0; /*0x5640aa*/
  v5[1] = 1.0; /*0x5640b2*/
  v5[2] = 1.0; /*0x5640b6*/
  sub_47DCD0(v5, a2); /*0x5640ba*/
  return (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x70))(this, v4); /*0x5640ce*/
}
