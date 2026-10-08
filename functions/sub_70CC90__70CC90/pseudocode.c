int __thiscall sub_70CC90(NiCamera *this)
{
  int result; // eax
  double v2; // st5
  double v3; // st4
  double v4; // st7
  double v5; // st6
  double v6; // st2
  double v7; // rt0
  double v8; // st4
  double v9; // st4
  double v10; // st1
  double v11; // st3
  float v12; // [esp+0h] [ebp-58h]
  float v13; // [esp+0h] [ebp-58h]
  float v14; // [esp+4h] [ebp-54h]
  float v15; // [esp+4h] [ebp-54h]
  float v16; // [esp+8h] [ebp-50h]
  float v17; // [esp+Ch] [ebp-4Ch]
  float v18; // [esp+Ch] [ebp-4Ch]
  float v19; // [esp+10h] [ebp-48h]
  float v20; // [esp+10h] [ebp-48h]
  float v21; // [esp+10h] [ebp-48h]
  float v22; // [esp+14h] [ebp-44h]
  float v23; // [esp+14h] [ebp-44h]
  float v24; // [esp+18h] [ebp-40h]
  float v25; // [esp+1Ch] [ebp-3Ch]
  float v26; // [esp+1Ch] [ebp-3Ch]
  float v27; // [esp+1Ch] [ebp-3Ch]
  float v28; // [esp+20h] [ebp-38h]
  float v29; // [esp+20h] [ebp-38h]
  float v30; // [esp+20h] [ebp-38h]
  float v31; // [esp+24h] [ebp-34h]
  float v32; // [esp+24h] [ebp-34h]
  float v33; // [esp+24h] [ebp-34h]
  float v34; // [esp+24h] [ebp-34h]
  float v35; // [esp+28h] [ebp-30h]
  float v36; // [esp+2Ch] [ebp-2Ch]
  float v37; // [esp+30h] [ebp-28h]
  float v38; // [esp+38h] [ebp-20h]
  float v39; // [esp+3Ch] [ebp-1Ch]
  float x; // [esp+40h] [ebp-18h]
  float y; // [esp+44h] [ebp-14h]

  x = this->members.super.m_worldTransform.pos.x; /*0x70cca9*/
  result = SLODWORD(this->members.super.m_worldTransform.pos.z); /*0x70ccb1*/
  y = this->members.super.m_worldTransform.pos.y; /*0x70ccba*/
  v35 = this->members.super.m_worldTransform.rot.data[0][1]; /*0x70ccc9*/
  v36 = this->members.super.m_worldTransform.rot.data[1][1]; /*0x70ccd0*/
  v37 = this->members.super.m_worldTransform.rot.data[2][1]; /*0x70ccda*/
  v38 = this->members.super.m_worldTransform.rot.data[1][2]; /*0x70cce8*/
  v39 = this->members.super.m_worldTransform.rot.data[2][2]; /*0x70ccf2*/
  v2 = this->members.super.m_worldTransform.rot.data[0][2]; /*0x70ccfc*/
  v25 = x * v2 + y * v38 + *(float *)&result * v39; /*0x70cd1e*/
  v24 = -v25; /*0x70cd28*/
  v26 = x * v35 + y * v36 + *(float *)&result * v37; /*0x70cd42*/
  v27 = -v26; /*0x70cd4c*/
  v3 = this->members.super.m_worldTransform.rot.data[0][0]; /*0x70cd60*/
  v4 = this->members.super.m_worldTransform.rot.data[2][0]; /*0x70cd6c*/
  v5 = this->members.super.m_worldTransform.rot.data[1][0]; /*0x70cd70*/
  v22 = *(float *)&result * v4 + x * v3 + y * v5; /*0x70cd72*/
  v23 = -v22; /*0x70cd7c*/
  v16 = this->members.Frustum.Right + this->members.Frustum.Left; /*0x70cd8c*/
  v17 = this->members.Frustum.Bottom + this->members.Frustum.Top; /*0x70cd9c*/
  v14 = 1.0 / (this->members.Frustum.Right - this->members.Frustum.Left); /*0x70cdbb*/
  v12 = 1.0 / (this->members.Frustum.Top - this->members.Frustum.Bottom); /*0x70cdcd*/
  v19 = 1.0 / (this->members.Frustum.Far - this->members.Frustum.Near); /*0x70cdde*/
  if ( this->members.Frustum.Ortho ) /*0x70cdae*/
  {
    v6 = v14; /*0x70cde8*/
    v15 = v14 * dbl_A3D0C0; /*0x70cdf8*/
    v28 = dbl_A3D0C0 * v12; /*0x70cdff*/
    v31 = 1.0 / v19; /*0x70ce0b*/
    this->members.WorldToCam[0][0] = v2 * v15; /*0x70ce19*/
    this->members.WorldToCam[0][1] = v38 * v15; /*0x70ce25*/
    this->members.WorldToCam[0][2] = v39 * v15; /*0x70ce31*/
    v20 = v16 / v6; /*0x70ce3b*/
    v7 = v3; /*0x70ce4b*/
    this->members.WorldToCam[0][3] = v15 * v24 + v20; /*0x70ce4d*/
    v8 = v28; /*0x70ce5f*/
    this->members.WorldToCam[1][0] = v35 * v28; /*0x70ce61*/
    this->members.WorldToCam[1][1] = v36 * v28; /*0x70ce6d*/
    this->members.WorldToCam[1][2] = v37 * v28; /*0x70ce79*/
    v29 = v17 / v12; /*0x70ce86*/
    this->members.WorldToCam[1][3] = v8 * v27 + v29; /*0x70ce94*/
    this->members.WorldToCam[2][0] = v7 * v31; /*0x70cea4*/
    v9 = v31; /*0x70ceaa*/
    this->members.WorldToCam[2][1] = v5 * v31; /*0x70ceb0*/
    this->members.WorldToCam[2][2] = v4 * v31; /*0x70cebc*/
    v32 = -this->members.Frustum.Near * v31; /*0x70cecc*/
    this->members.WorldToCam[2][3] = v9 * v23 + v32; /*0x70ceda*/
    this->members.WorldToCam[3][0] = 0.0; /*0x70cee2*/
    this->members.WorldToCam[3][1] = 0.0; /*0x70cee8*/
    this->members.WorldToCam[3][2] = 0.0; /*0x70ceee*/
    this->members.WorldToCam[3][3] = 1.0; /*0x70cef6*/
  }
  else
  {
    v10 = dbl_A3D0C0; /*0x70cf08*/
    v30 = v14 * v10; /*0x70cf12*/
    v33 = v14 * -v16; /*0x70cf20*/
    v11 = v12; /*0x70cf2b*/
    v13 = v10 * v12; /*0x70cf2d*/
    v18 = v11 * -v17; /*0x70cf38*/
    v21 = this->members.Frustum.Far * v19; /*0x70cf46*/
    this->members.WorldToCam[0][0] = v2 * v30 + v33 * v3; /*0x70cf60*/
    this->members.WorldToCam[0][1] = v33 * v5 + v30 * v38; /*0x70cf72*/
    this->members.WorldToCam[0][2] = v33 * v4 + v30 * v39; /*0x70cf84*/
    this->members.WorldToCam[0][3] = v30 * v24 + v33 * v23; /*0x70cf9e*/
    this->members.WorldToCam[1][0] = v18 * v3 + v13 * v35; /*0x70cfb5*/
    this->members.WorldToCam[1][1] = v18 * v5 + v13 * v36; /*0x70cfc8*/
    this->members.WorldToCam[1][2] = v18 * v4 + v13 * v37; /*0x70cfdb*/
    this->members.WorldToCam[1][3] = v18 * v23 + v13 * v27; /*0x70cfec*/
    this->members.WorldToCam[2][0] = v21 * v3; /*0x70cffa*/
    this->members.WorldToCam[2][1] = v21 * v5; /*0x70d004*/
    this->members.WorldToCam[2][2] = v21 * v4; /*0x70d00e*/
    v34 = -this->members.Frustum.Near * v21; /*0x70d01e*/
    this->members.WorldToCam[2][3] = v21 * v23 + v34; /*0x70d02a*/
    this->members.WorldToCam[3][0] = v3; /*0x70d030*/
    this->members.WorldToCam[3][1] = v5; /*0x70d038*/
    this->members.WorldToCam[3][2] = v4; /*0x70d040*/
    this->members.WorldToCam[3][3] = v23; /*0x70d046*/
  }
  return result; /*0x70cefc*/
}
