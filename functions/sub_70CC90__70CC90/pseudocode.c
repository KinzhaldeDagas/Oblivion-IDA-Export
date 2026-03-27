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

  x = this->members.super.m_worldTransform.pos.x;
  result = SLODWORD(this->members.super.m_worldTransform.pos.z);
  y = this->members.super.m_worldTransform.pos.y;
  v35 = this->members.super.m_worldTransform.rot.data[0][1];
  v36 = this->members.super.m_worldTransform.rot.data[1][1];
  v37 = this->members.super.m_worldTransform.rot.data[2][1];
  v38 = this->members.super.m_worldTransform.rot.data[1][2];
  v39 = this->members.super.m_worldTransform.rot.data[2][2];
  v2 = this->members.super.m_worldTransform.rot.data[0][2];
  v25 = x * v2 + y * v38 + *(float *)&result * v39;
  v24 = -v25;
  v26 = x * v35 + y * v36 + *(float *)&result * v37;
  v27 = -v26;
  v3 = this->members.super.m_worldTransform.rot.data[0][0];
  v4 = this->members.super.m_worldTransform.rot.data[2][0];
  v5 = this->members.super.m_worldTransform.rot.data[1][0];
  v22 = *(float *)&result * v4 + x * v3 + y * v5;
  v23 = -v22;
  v16 = this->members.Frustum.Right + this->members.Frustum.Left;
  v17 = this->members.Frustum.Bottom + this->members.Frustum.Top;
  v14 = 1.0 / (this->members.Frustum.Right - this->members.Frustum.Left);
  v12 = 1.0 / (this->members.Frustum.Top - this->members.Frustum.Bottom);
  v19 = 1.0 / (this->members.Frustum.Far - this->members.Frustum.Near);
  if ( this->members.Frustum.Ortho )
  {
    v6 = v14;
    v15 = v14 * dbl_A3D0C0;
    v28 = dbl_A3D0C0 * v12;
    v31 = 1.0 / v19;
    this->members.WorldToCam[0][0] = v2 * v15;
    this->members.WorldToCam[0][1] = v38 * v15;
    this->members.WorldToCam[0][2] = v39 * v15;
    v20 = v16 / v6;
    v7 = v3;
    this->members.WorldToCam[0][3] = v15 * v24 + v20;
    v8 = v28;
    this->members.WorldToCam[1][0] = v35 * v28;
    this->members.WorldToCam[1][1] = v36 * v28;
    this->members.WorldToCam[1][2] = v37 * v28;
    v29 = v17 / v12;
    this->members.WorldToCam[1][3] = v8 * v27 + v29;
    this->members.WorldToCam[2][0] = v7 * v31;
    v9 = v31;
    this->members.WorldToCam[2][1] = v5 * v31;
    this->members.WorldToCam[2][2] = v4 * v31;
    v32 = -this->members.Frustum.Near * v31;
    this->members.WorldToCam[2][3] = v9 * v23 + v32;
    this->members.WorldToCam[3][0] = 0.0;
    this->members.WorldToCam[3][1] = 0.0;
    this->members.WorldToCam[3][2] = 0.0;
    this->members.WorldToCam[3][3] = 1.0;
  }
  else
  {
    v10 = dbl_A3D0C0;
    v30 = v14 * v10;
    v33 = v14 * -v16;
    v11 = v12;
    v13 = v10 * v12;
    v18 = v11 * -v17;
    v21 = this->members.Frustum.Far * v19;
    this->members.WorldToCam[0][0] = v2 * v30 + v33 * v3;
    this->members.WorldToCam[0][1] = v33 * v5 + v30 * v38;
    this->members.WorldToCam[0][2] = v33 * v4 + v30 * v39;
    this->members.WorldToCam[0][3] = v30 * v24 + v33 * v23;
    this->members.WorldToCam[1][0] = v18 * v3 + v13 * v35;
    this->members.WorldToCam[1][1] = v18 * v5 + v13 * v36;
    this->members.WorldToCam[1][2] = v18 * v4 + v13 * v37;
    this->members.WorldToCam[1][3] = v18 * v23 + v13 * v27;
    this->members.WorldToCam[2][0] = v21 * v3;
    this->members.WorldToCam[2][1] = v21 * v5;
    this->members.WorldToCam[2][2] = v21 * v4;
    v34 = -this->members.Frustum.Near * v21;
    this->members.WorldToCam[2][3] = v21 * v23 + v34;
    this->members.WorldToCam[3][0] = v3;
    this->members.WorldToCam[3][1] = v5;
    this->members.WorldToCam[3][2] = v4;
    this->members.WorldToCam[3][3] = v23;
  }
  return result;
}
