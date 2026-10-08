int __stdcall sub_7F5B80(float *a1, NiPoint3 *a2)
{
  int result; // eax
  double scale; // st7
  NiTransform v4; // [esp+4h] [ebp-34h] BYREF

  a2[4].z = 0.0; /*0x7f5b8e*/
  a2[4].y = 0.0; /*0x7f5b95*/
  a2[4].x = 0.0; /*0x7f5b99*/
  a2[3].z = 0.0; /*0x7f5b9c*/
  a2[3].x = 0.0; /*0x7f5b9f*/
  a2[2].z = 0.0; /*0x7f5ba2*/
  a2[2].y = 0.0; /*0x7f5ba5*/
  a2[2].x = 0.0; /*0x7f5ba8*/
  a2[1].y = 0.0; /*0x7f5bab*/
  a2[1].x = 0.0; /*0x7f5bae*/
  a2->z = 0.0; /*0x7f5bb1*/
  a2->y = 0.0; /*0x7f5bb4*/
  a2[5].x = 1.0; /*0x7f5bb9*/
  a2[3].y = 1.0; /*0x7f5bbc*/
  a2[1].z = 1.0; /*0x7f5bbf*/
  a2->x = 1.0; /*0x7f5bc2*/
  result = sub_718A80(a1, &v4); /*0x7f5bc4*/
  scale = v4.scale; /*0x7f5bd5*/
  a2->x = v4.rot.data[0][0] * v4.scale; /*0x7f5bd7*/
  a2->y = v4.rot.data[1][0] * scale; /*0x7f5bdf*/
  a2->z = v4.rot.data[2][0] * scale; /*0x7f5be8*/
  a2[1].y = v4.rot.data[0][1] * scale; /*0x7f5bf1*/
  a2[1].z = v4.rot.data[1][1] * scale; /*0x7f5bfa*/
  a2[2].x = v4.rot.data[2][1] * scale; /*0x7f5c03*/
  a2[2].z = v4.rot.data[0][2] * scale; /*0x7f5c0c*/
  a2[3].x = v4.rot.data[1][2] * scale; /*0x7f5c15*/
  a2[3].y = scale * v4.rot.data[2][2]; /*0x7f5c1c*/
  a2[4] = v4.pos; /*0x7f5c23*/
  a2[5].x = 1.0; /*0x7f5c36*/
  return result; /*0x7f5c39*/
}
