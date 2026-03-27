int __stdcall sub_7F5B80(float *a1, NiPoint3 *a2)
{
  int result; // eax
  double scale; // st7
  NiTransform v4; // [esp+4h] [ebp-34h] BYREF

  a2[4].z = 0.0;
  a2[4].y = 0.0;
  a2[4].x = 0.0;
  a2[3].z = 0.0;
  a2[3].x = 0.0;
  a2[2].z = 0.0;
  a2[2].y = 0.0;
  a2[2].x = 0.0;
  a2[1].y = 0.0;
  a2[1].x = 0.0;
  a2->z = 0.0;
  a2->y = 0.0;
  a2[5].x = 1.0;
  a2[3].y = 1.0;
  a2[1].z = 1.0;
  a2->x = 1.0;
  result = sub_718A80(a1, &v4);
  scale = v4.scale;
  a2->x = v4.rot.data[0][0] * v4.scale;
  a2->y = v4.rot.data[1][0] * scale;
  a2->z = v4.rot.data[2][0] * scale;
  a2[1].y = v4.rot.data[0][1] * scale;
  a2[1].z = v4.rot.data[1][1] * scale;
  a2[2].x = v4.rot.data[2][1] * scale;
  a2[2].z = v4.rot.data[0][2] * scale;
  a2[3].x = v4.rot.data[1][2] * scale;
  a2[3].y = scale * v4.rot.data[2][2];
  a2[4] = v4.pos;
  a2[5].x = 1.0;
  return result;
}
