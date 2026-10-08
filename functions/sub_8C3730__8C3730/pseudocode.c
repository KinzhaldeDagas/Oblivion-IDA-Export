bool __thiscall sub_8C3730(NiTriBasedGeomData *this, _DWORD *a2)
{
  bool v3; // bl
  int v4; // esi
  int v5; // esi
  _DWORD v7[2]; // [esp+Ch] [ebp-20h] BYREF
  int v8; // [esp+14h] [ebp-18h]
  float v9; // [esp+18h] [ebp-14h]
  _DWORD v10[4]; // [esp+1Ch] [ebp-10h] BYREF

  v3 = sub_8A1ED0(this, (int)a2); /*0x8c3742*/
  if ( v3 ) /*0x8c3746*/
  {
    v9 = 1.0; /*0x8c374d*/
    *(float *)&v10[3] = 1.0; /*0x8c3755*/
    v7[0] = 0; /*0x8c375c*/
    v7[1] = 0; /*0x8c3760*/
    v8 = 0; /*0x8c3764*/
    memset(v10, 0, 0xC); /*0x8c3768*/
    sub_8B0280(this, v7); /*0x8c3774*/
    if ( this && (v4 = *(_DWORD *)&this->members.super.m_usVertices) != 0 ) /*0x8c3782*/
      v5 = *(_DWORD *)(v4 + 0x10); /*0x8c3784*/
    else
      v5 = 0; /*0x8c3789*/
    v8 = v5; /*0x8c3792*/
    sub_8B0280(a2, v10); /*0x8c3796*/
  }
  return v3; /*0x8c379c*/
}
