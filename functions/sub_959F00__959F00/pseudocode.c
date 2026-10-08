void sub_959F00()
{
  BOOL (__cdecl **v0)(float, float *, float *, float *, float *); // esi
  char (__cdecl **v1)(float, float *, float *, float *, float *, float *, float *, char, float *, float *); // edi
  BOOL (__cdecl **v2)(float, int, float *, float *, float *, float *, float *); // ebp
  char (__cdecl **v3)(float, float *, float *, float *, float *, float *, float *, float *, float *, char, float *, float *); // eax

  if ( !unk_BA9A65 ) /*0x959f03*/
  {
    unk_BA9A65 = 1; /*0x959f1c*/
    sub_712590((int)"NiCollisionData", (TESForm *)sub_96DAE0); /*0x959f23*/
    unk_BA9A8C = (int)sub_968210; /*0x959f39*/
    unk_BA9A90 = (int)sub_961350; /*0x959f43*/
    unk_BA9A9C = (int)sub_95F720; /*0x959f4d*/
    unk_BA9A94 = (int)sub_96D640; /*0x959f57*/
    MEMORY[0xBA9A88][0] = (int)sub_96CCF0; /*0x959f61*/
    unk_BA9A98 = (int)sub_95FE70; /*0x959f6b*/
    v0 = (BOOL (__cdecl **)(float, float *, float *, float *, float *))FormHeapAlloc(0x90u); /*0x959f7f*/
    v0[0x18] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_95FB40; /*0x959f86*/
    v0[0x19] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_95FB40; /*0x959f89*/
    v0[0x1A] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_95FB40; /*0x959f8c*/
    v0[0x1D] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_95FB40; /*0x959f8f*/
    *v0 = sub_96C550; /*0x959fa3*/
    v0[1] = 0; /*0x959fa9*/
    v0[2] = 0; /*0x959fac*/
    v0[3] = 0; /*0x959faf*/
    v0[4] = 0; /*0x959fb2*/
    v0[5] = 0; /*0x959fb5*/
    v0[6] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_9682F0; /*0x959fbd*/
    v0[7] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_961790; /*0x959fc4*/
    v0[8] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_962CF0; /*0x959fcb*/
    v0[9] = 0; /*0x959fd2*/
    v0[0xA] = 0; /*0x959fd5*/
    v0[0xB] = 0; /*0x959fd8*/
    v0[0xC] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_960510; /*0x959fdb*/
    v0[0xD] = 0; /*0x959fe2*/
    v0[0xE] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_960650; /*0x959fe5*/
    v0[0xF] = 0; /*0x959fec*/
    v0[0x10] = 0; /*0x959fef*/
    v0[0x11] = 0; /*0x959ff2*/
    v0[0x12] = 0; /*0x959ff5*/
    v0[0x13] = 0; /*0x959ff8*/
    v0[0x14] = 0; /*0x959ffb*/
    v0[0x15] = 0; /*0x959ffe*/
    v0[0x16] = 0; /*0x95a001*/
    v0[0x17] = 0; /*0x95a004*/
    v0[0x1B] = 0; /*0x95a007*/
    v0[0x1C] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_95FBA0; /*0x95a00a*/
    v0[0x1E] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_95DCA0; /*0x95a011*/
    v0[0x1F] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_95DD70; /*0x95a018*/
    v0[0x20] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_95DEE0; /*0x95a01f*/
    v0[0x21] = 0; /*0x95a029*/
    v0[0x22] = 0; /*0x95a02f*/
    v0[0x23] = (BOOL (__cdecl *)(float, float *, float *, float *, float *))sub_95E000; /*0x95a035*/
    v1 = (char (__cdecl **)(float, float *, float *, float *, float *, float *, float *, char, float *, float *))FormHeapAlloc(0x90u); /*0x95a044*/
    *v1 = sub_96C6A0; /*0x95a046*/
    v1[1] = 0; /*0x95a04c*/
    v1[2] = 0; /*0x95a04f*/
    v1[3] = 0; /*0x95a052*/
    v1[4] = 0; /*0x95a055*/
    v1[5] = 0; /*0x95a058*/
    v1[6] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_9646B0; /*0x95a05b*/
    v1[7] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_968B00; /*0x95a062*/
    v1[8] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_9649B0; /*0x95a069*/
    v1[9] = 0; /*0x95a070*/
    v1[0xA] = 0; /*0x95a073*/
    v1[0x18] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_95FC90; /*0x95a07b*/
    v1[0x19] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_95FC90; /*0x95a07e*/
    v1[0x1A] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_95FC90; /*0x95a081*/
    v1[0x1B] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_95FC90; /*0x95a084*/
    v1[0x1D] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_95FC90; /*0x95a087*/
    v1[0xB] = 0; /*0x95a09b*/
    v1[0xC] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_9602C0; /*0x95a09e*/
    v1[0xD] = 0; /*0x95a0a5*/
    v1[0xE] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_9603C0; /*0x95a0a8*/
    v1[0xF] = 0; /*0x95a0af*/
    v1[0x10] = 0; /*0x95a0b2*/
    v1[0x11] = 0; /*0x95a0ba*/
    v1[0x12] = 0; /*0x95a0bd*/
    v1[0x13] = 0; /*0x95a0c0*/
    v1[0x14] = 0; /*0x95a0c3*/
    v1[0x15] = 0; /*0x95a0c6*/
    v1[0x16] = 0; /*0x95a0c9*/
    v1[0x17] = 0; /*0x95a0cc*/
    v1[0x1C] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_95FD10; /*0x95a0cf*/
    v1[0x1E] = sub_95E250; /*0x95a0d6*/
    v1[0x1F] = sub_95E4D0; /*0x95a0dd*/
    v1[0x20] = sub_95E980; /*0x95a0e4*/
    v1[0x21] = 0; /*0x95a0ee*/
    v1[0x22] = 0; /*0x95a0f4*/
    v1[0x23] = sub_95EEF0; /*0x95a0fa*/
    v2 = (BOOL (__cdecl **)(float, int, float *, float *, float *, float *, float *))FormHeapAlloc(0x18u); /*0x95a109*/
    *v2 = sub_96CDD0; /*0x95a11c*/
    v2[1] = (BOOL (__cdecl *)(float, int, float *, float *, float *, float *, float *))sub_962E30; /*0x95a123*/
    v2[2] = (BOOL (__cdecl *)(float, int, float *, float *, float *, float *, float *))sub_9607B0; /*0x95a12a*/
    v2[3] = 0; /*0x95a131*/
    v2[4] = (BOOL (__cdecl *)(float, int, float *, float *, float *, float *, float *))sub_95FC20; /*0x95a134*/
    v2[5] = (BOOL (__cdecl *)(float, int, float *, float *, float *, float *, float *))sub_95E0E0; /*0x95a13b*/
    v3 = (char (__cdecl **)(float, float *, float *, float *, float *, float *, float *, float *, float *, char, float *, float *))FormHeapAlloc(0x18u); /*0x95a147*/
    *v3 = sub_96CF80; /*0x95a14c*/
    v3[1] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_964AB0; /*0x95a152*/
    v3[2] = sub_960CB0; /*0x95a159*/
    v3[3] = 0; /*0x95a160*/
    v3[4] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_95FDC0; /*0x95a163*/
    v3[5] = (char (__cdecl *)(float, float *, float *, float *, float *, float *, float *, float *, float *, char, float *, float *))sub_95F210; /*0x95a16a*/
    unk_BA9AA4 = (int)v1; /*0x95a174*/
    unk_BA9AA0 = (int)v0; /*0x95a17b*/
    unk_BA9AA8 = (int)v2; /*0x95a182*/
    unk_BA9AAC = (int)v3; /*0x95a188*/
    unk_BA9AB0 = (int)sub_95D830; /*0x95a18d*/
    unk_BA9AB4 = (int)sub_95D860; /*0x95a197*/
    unk_BA9AB8 = (int)sub_95D8B0; /*0x95a1a1*/
  }
}
