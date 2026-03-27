void __thiscall sub_411330(SceneGraph *this)
{
  double v2; // st5
  double v3; // st7
  double v4; // st5
  NiCamera *camera; // eax
  float v6; // [esp+Ch] [ebp-34h]
  float v7; // [esp+10h] [ebp-30h]
  float FarPlane; // [esp+14h] [ebp-2Ch]
  float v9; // [esp+14h] [ebp-2Ch]
  float v10; // [esp+14h] [ebp-2Ch]
  int a2[10]; // [esp+18h] [ebp-28h] BYREF

  if ( byte_B03144 )
  {
    if ( (dword_B33450 & 1) == 0 )
    {
      dword_B33450 |= 1u;
      flt_B3344C = GetFarPlane(this);
      a2[9] = 0xFFFFFFFF;
    }
    if ( 1.0 / (double)dword_B0314C < flt_B33E9C || 1.0 / (double)dword_B03154 > flt_B33E9C )
    {
      FarPlane = GetFarPlane(this);
      v7 = (float)dword_B0315C;
      v6 = (1.0 / flt_B33E9C - (double)dword_B0314C) / (double)dword_B03154;
      v2 = v6;
      if ( v6 <= 1.0 )
      {
        v3 = flt_B33E9C;
        if ( v2 > 0.0 )
          v7 = v7 + v2 * (FarPlane - v7);
      }
      else
      {
        v3 = flt_B33E9C;
        v7 = FarPlane;
      }
      v9 = v7 - flt_B3344C;
      v4 = v9;
      v10 = fabs(v9);
      if ( v10 > 10.0 )
      {
        camera = g_worldScenegraph->camera;
        qmemcpy(a2, &camera->members.Frustum, 0x1Cu);
        flt_B3344C = v3 * v4 + flt_B3344C;
        *(float *)&a2[5] = flt_B3344C;
        Camera_SetFrustum(camera, (int)a2);
      }
    }
  }
}
