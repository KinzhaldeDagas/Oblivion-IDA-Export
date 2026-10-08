NiAVObject *__cdecl sub_6FBC40(float *a1, NiColorAlpha *colors)
{
  double v2; // st7
  double v3; // st6
  NiPoint3 *v4; // ebx
  float *v6; // eax
  void *v7; // ebp
  NiAVObject *v8; // eax
  NiAVObject *v9; // esi
  NiColorAlpha *colorsa; // [esp+2Ch] [ebp+8h]

  if ( (unk_B3F528 & 1) == 0 ) /*0x6fbc70*/
  {
    v2 = kHeadBodyNormalMatchRadius; /*0x6fbc76*/
    unk_B3F528 |= 1u; /*0x6fbc7c*/
    unk_B3F4C8 = v2; /*0x6fbc82*/
    unk_B3F4CC = v2; /*0x6fbc88*/
    unk_B3F4D0 = v2; /*0x6fbc8e*/
    unk_B3F4D4 = v2; /*0x6fbc94*/
    unk_B3F4D8 = v2; /*0x6fbc9a*/
    v3 = flt_A45E4C; /*0x6fbca0*/
    unk_B3F4DC = flt_A45E4C; /*0x6fbca6*/
    unk_B3F4E4 = v3; /*0x6fbcac*/
    unk_B3F4F0 = v3; /*0x6fbcb2*/
    unk_B3F4F4 = v3; /*0x6fbcb8*/
    unk_B3F4F8 = v3; /*0x6fbcbe*/
    unk_B3F504 = v3; /*0x6fbcc4*/
    unk_B3F50C = v3; /*0x6fbcca*/
    unk_B3F510 = v3; /*0x6fbcd0*/
    unk_B3F514 = v3; /*0x6fbcd6*/
    unk_B3F51C = v3; /*0x6fbcdc*/
    unk_B3F520 = v3; /*0x6fbce2*/
    unk_B3F524 = v3; /*0x6fbce8*/
    unk_B3F4E0 = v2; /*0x6fbcee*/
    unk_B3F4E8 = v2; /*0x6fbcf4*/
    unk_B3F4EC = v2; /*0x6fbcfa*/
    unk_B3F4FC = v2; /*0x6fbd00*/
    unk_B3F500 = v2; /*0x6fbd06*/
    unk_B3F508 = v2; /*0x6fbd0c*/
    unk_B3F518 = v2; /*0x6fbd12*/
  }
  v4 = (NiPoint3 *)FormHeapAlloc(0x60u); /*0x6fbd1f*/
  v4->x = *a1 * unk_B3F4C8; /*0x6fbd36*/
  v4->y = unk_B3F4CC * a1[1]; /*0x6fbd41*/
  v4->z = unk_B3F4D0 * a1[2]; /*0x6fbd4d*/
  v4[1].x = *a1 * unk_B3F4D4; /*0x6fbd58*/
  v4[1].y = unk_B3F4D8 * a1[1]; /*0x6fbd64*/
  v4[1].z = unk_B3F4DC * a1[2]; /*0x6fbd70*/
  v4[2].x = *a1 * unk_B3F4E0; /*0x6fbd7b*/
  v4[2].y = unk_B3F4E4 * a1[1]; /*0x6fbd87*/
  v4[2].z = unk_B3F4E8 * a1[2]; /*0x6fbd93*/
  v4[3].x = *a1 * unk_B3F4EC; /*0x6fbd9e*/
  v4[3].y = unk_B3F4F0 * a1[1]; /*0x6fbdaa*/
  v4[3].z = unk_B3F4F4 * a1[2]; /*0x6fbdb6*/
  v4[4].x = *a1 * unk_B3F4F8; /*0x6fbdc1*/
  v4[4].y = unk_B3F4FC * a1[1]; /*0x6fbdcd*/
  v4[4].z = unk_B3F500 * a1[2]; /*0x6fbdd9*/
  v4[5].x = *a1 * unk_B3F504; /*0x6fbde4*/
  v4[5].y = unk_B3F508 * a1[1]; /*0x6fbdf0*/
  v4[5].z = unk_B3F50C * a1[2]; /*0x6fbdfc*/
  v4[6].x = *a1 * unk_B3F510; /*0x6fbe07*/
  v4[6].y = unk_B3F514 * a1[1]; /*0x6fbe13*/
  v4[6].z = unk_B3F518 * a1[2]; /*0x6fbe1f*/
  v4[7].x = *a1 * unk_B3F51C; /*0x6fbe2a*/
  v4[7].y = unk_B3F520 * a1[1]; /*0x6fbe36*/
  v4[7].z = unk_B3F524 * a1[2]; /*0x6fbe42*/
  if ( colors ) /*0x6fbe45*/
  {
    v6 = (float *)FormHeapAlloc(0x80u); /*0x6fbe50*/
    if ( v6 ) /*0x6fbe5a*/
    {
      *v6 = 0.0; /*0x6fbe5e*/
      v6[1] = 0.0; /*0x6fbe60*/
      v6[2] = 0.0; /*0x6fbe63*/
      v6[3] = 0.0; /*0x6fbe66*/
      v6[4] = 0.0; /*0x6fbe69*/
      v6[5] = 0.0; /*0x6fbe6c*/
      v6[6] = 0.0; /*0x6fbe6f*/
      v6[7] = 0.0; /*0x6fbe72*/
      v6[8] = 0.0; /*0x6fbe75*/
      v6[9] = 0.0; /*0x6fbe78*/
      v6[0xA] = 0.0; /*0x6fbe7b*/
      v6[0xB] = 0.0; /*0x6fbe7e*/
      v6[0xC] = 0.0; /*0x6fbe81*/
      v6[0xD] = 0.0; /*0x6fbe84*/
      v6[0xE] = 0.0; /*0x6fbe87*/
      v6[0xF] = 0.0; /*0x6fbe8a*/
      v6[0x10] = 0.0; /*0x6fbe8d*/
      v6[0x11] = 0.0; /*0x6fbe90*/
      v6[0x12] = 0.0; /*0x6fbe93*/
      v6[0x13] = 0.0; /*0x6fbe96*/
      v6[0x14] = 0.0; /*0x6fbe99*/
      v6[0x15] = 0.0; /*0x6fbe9c*/
      v6[0x16] = 0.0; /*0x6fbe9f*/
      v6[0x17] = 0.0; /*0x6fbea2*/
      v6[0x18] = 0.0; /*0x6fbea5*/
      v6[0x19] = 0.0; /*0x6fbea8*/
      v6[0x1A] = 0.0; /*0x6fbeab*/
      v6[0x1B] = 0.0; /*0x6fbeae*/
      v6[0x1C] = 0.0; /*0x6fbeb1*/
      v6[0x1D] = 0.0; /*0x6fbeb4*/
      v6[0x1E] = 0.0; /*0x6fbeb7*/
      v6[0x1F] = 0.0; /*0x6fbeba*/
    }
    else
    {
      v6 = 0; /*0x6fbebf*/
    }
    colorsa = (NiColorAlpha *)v6; /*0x6fbec3*/
    if ( v6 ) /*0x6fbec7*/
    {
      *v6 = *(float *)colors; /*0x6fbecf*/
      v6[1] = *((float *)colors + 1); /*0x6fbed4*/
      v6[2] = *((float *)colors + 2); /*0x6fbeda*/
      v6[3] = *((float *)colors + 3); /*0x6fbee0*/
      v6[4] = *(float *)colors; /*0x6fbee5*/
      v6[5] = *((float *)colors + 1); /*0x6fbeeb*/
      v6[6] = *((float *)colors + 2); /*0x6fbef1*/
      v6[7] = *((float *)colors + 3); /*0x6fbef7*/
      v6[8] = *(float *)colors; /*0x6fbefc*/
      v6[9] = *((float *)colors + 1); /*0x6fbf02*/
      v6[0xA] = *((float *)colors + 2); /*0x6fbf08*/
      v6[0xB] = *((float *)colors + 3); /*0x6fbf0e*/
      v6[0xC] = *(float *)colors; /*0x6fbf13*/
      v6[0xD] = *((float *)colors + 1); /*0x6fbf19*/
      v6[0xE] = *((float *)colors + 2); /*0x6fbf1f*/
      v6[0xF] = *((float *)colors + 3); /*0x6fbf25*/
      v6[0x10] = *(float *)colors; /*0x6fbf2a*/
      v6[0x11] = *((float *)colors + 1); /*0x6fbf30*/
      v6[0x12] = *((float *)colors + 2); /*0x6fbf36*/
      v6[0x13] = *((float *)colors + 3); /*0x6fbf3c*/
      v6[0x14] = *(float *)colors; /*0x6fbf41*/
      v6[0x15] = *((float *)colors + 1); /*0x6fbf47*/
      v6[0x16] = *((float *)colors + 2); /*0x6fbf4d*/
      v6[0x17] = *((float *)colors + 3); /*0x6fbf53*/
      v6[0x18] = *(float *)colors; /*0x6fbf58*/
      v6[0x19] = *((float *)colors + 1); /*0x6fbf5e*/
      v6[0x1A] = *((float *)colors + 2); /*0x6fbf64*/
      v6[0x1B] = *((float *)colors + 3); /*0x6fbf6a*/
      v6[0x1C] = *(float *)colors; /*0x6fbf6f*/
      v6[0x1D] = *((float *)colors + 1); /*0x6fbf75*/
      v6[0x1E] = *((float *)colors + 2); /*0x6fbf7b*/
      v6[0x1F] = *((float *)colors + 3); /*0x6fbf81*/
    }
  }
  else
  {
    colorsa = 0; /*0x6fbff8*/
  }
  v7 = (void *)FormHeapAlloc(0x48u); /*0x6fbf8b*/
  qmemcpy(v7, &unk_A7D338, 0x48u); /*0x6fbf9e*/
  v8 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x6fbfa0*/
  v9 = 0; /*0x6fbfac*/
  if ( v8 ) /*0x6fbfb4*/
    v9 = NiTriShape_ctorWithGeometryData(v8, 8u, v4, 0, colorsa, 0, 0, 0, 0xCu, (UInt16 *)v7); /*0x6fbfcc*/
  v9->vtbl[1].super.Unk_03((NiObject *)v9); /*0x6fbfe0*/
  return v9; /*0x6fbfe4*/
}
