void sub_95A1B0()
{
  unsigned int v0; // [esp-8h] [ebp-Ch]

  if ( unk_BA9A65 ) /*0x95a1b3*/
  {
    unk_BA9A65 = 0; /*0x95a1c4*/
    sub_7125B0((int)"NiCollisionData"); /*0x95a1ca*/
    v0 = unk_BA9AA0; /*0x95a1d4*/
    unk_BA9A8C = 0; /*0x95a1d5*/
    unk_BA9A90 = 0; /*0x95a1db*/
    unk_BA9A9C = 0; /*0x95a1e1*/
    unk_BA9A94 = 0; /*0x95a1e7*/
    MEMORY[0xBA9A88][0] = 0; /*0x95a1ed*/
    unk_BA9A98 = 0; /*0x95a1f3*/
    FormHeapFree(v0); /*0x95a1f9*/
    FormHeapFree(unk_BA9AA4); /*0x95a205*/
    FormHeapFree(unk_BA9AA8); /*0x95a211*/
    FormHeapFree(unk_BA9AAC); /*0x95a21c*/
    unk_BA9AA0 = 0; /*0x95a224*/
    unk_BA9AA4 = 0; /*0x95a22a*/
    unk_BA9AA8 = 0; /*0x95a230*/
    unk_BA9AAC = 0; /*0x95a236*/
    unk_BA9AB0 = 0; /*0x95a23c*/
    unk_BA9AB4 = 0; /*0x95a242*/
    unk_BA9AB8 = 0; /*0x95a248*/
  }
}
