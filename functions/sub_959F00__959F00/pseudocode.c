void sub_959F00()
{
  BOOL (__cdecl **v0)(float, int, int, int, int); // esi
  char (__cdecl **v1)(float, int, int, int, int, int, int, char, int, int); // edi
  BOOL (__cdecl **v2)(float, int, int, int, int, int, int); // ebp
  char (__cdecl **v3)(float, int, int, int, int, int, int, int, int, char, int, int); // eax

  if ( !byte_BA9A65 )
  {
    byte_BA9A65 = 1;
    sub_712590((int)"NiCollisionData", (TESForm *)sub_96DAE0);
    dword_BA9A8C = (int)sub_968210;
    dword_BA9A90 = (int)sub_961350;
    dword_BA9A9C = (int)sub_95F720;
    dword_BA9A94 = (int)sub_96D640;
    funcs_95DB35[0] = (int)sub_96CCF0;
    dword_BA9A98 = (int)sub_95FE70;
    v0 = (BOOL (__cdecl **)(float, int, int, int, int))FormHeapAlloc(0x90u);
    v0[0x18] = (BOOL (__cdecl *)(float, int, int, int, int))sub_95FB40;
    v0[0x19] = (BOOL (__cdecl *)(float, int, int, int, int))sub_95FB40;
    v0[0x1A] = (BOOL (__cdecl *)(float, int, int, int, int))sub_95FB40;
    v0[0x1D] = (BOOL (__cdecl *)(float, int, int, int, int))sub_95FB40;
    *v0 = sub_96C550;
    v0[1] = 0;
    v0[2] = 0;
    v0[3] = 0;
    v0[4] = 0;
    v0[5] = 0;
    v0[6] = (BOOL (__cdecl *)(float, int, int, int, int))sub_9682F0;
    v0[7] = (BOOL (__cdecl *)(float, int, int, int, int))sub_961790;
    v0[8] = (BOOL (__cdecl *)(float, int, int, int, int))sub_962CF0;
    v0[9] = 0;
    v0[0xA] = 0;
    v0[0xB] = 0;
    v0[0xC] = sub_960510;
    v0[0xD] = 0;
    v0[0xE] = sub_960650;
    v0[0xF] = 0;
    v0[0x10] = 0;
    v0[0x11] = 0;
    v0[0x12] = 0;
    v0[0x13] = 0;
    v0[0x14] = 0;
    v0[0x15] = 0;
    v0[0x16] = 0;
    v0[0x17] = 0;
    v0[0x1B] = 0;
    v0[0x1C] = (BOOL (__cdecl *)(float, int, int, int, int))sub_95FBA0;
    v0[0x1E] = (BOOL (__cdecl *)(float, int, int, int, int))sub_95DCA0;
    v0[0x1F] = (BOOL (__cdecl *)(float, int, int, int, int))sub_95DD70;
    v0[0x20] = (BOOL (__cdecl *)(float, int, int, int, int))sub_95DEE0;
    v0[0x21] = 0;
    v0[0x22] = 0;
    v0[0x23] = (BOOL (__cdecl *)(float, int, int, int, int))sub_95E000;
    v1 = (char (__cdecl **)(float, int, int, int, int, int, int, char, int, int))FormHeapAlloc(0x90u);
    *v1 = sub_96C6A0;
    v1[1] = 0;
    v1[2] = 0;
    v1[3] = 0;
    v1[4] = 0;
    v1[5] = 0;
    v1[6] = sub_9646B0;
    v1[7] = (char (__cdecl *)(float, int, int, int, int, int, int, char, int, int))sub_968B00;
    v1[8] = sub_9649B0;
    v1[9] = 0;
    v1[0xA] = 0;
    v1[0x18] = (char (__cdecl *)(float, int, int, int, int, int, int, char, int, int))sub_95FC90;
    v1[0x19] = (char (__cdecl *)(float, int, int, int, int, int, int, char, int, int))sub_95FC90;
    v1[0x1A] = (char (__cdecl *)(float, int, int, int, int, int, int, char, int, int))sub_95FC90;
    v1[0x1B] = (char (__cdecl *)(float, int, int, int, int, int, int, char, int, int))sub_95FC90;
    v1[0x1D] = (char (__cdecl *)(float, int, int, int, int, int, int, char, int, int))sub_95FC90;
    v1[0xB] = 0;
    v1[0xC] = sub_9602C0;
    v1[0xD] = 0;
    v1[0xE] = sub_9603C0;
    v1[0xF] = 0;
    v1[0x10] = 0;
    v1[0x11] = 0;
    v1[0x12] = 0;
    v1[0x13] = 0;
    v1[0x14] = 0;
    v1[0x15] = 0;
    v1[0x16] = 0;
    v1[0x17] = 0;
    v1[0x1C] = (char (__cdecl *)(float, int, int, int, int, int, int, char, int, int))sub_95FD10;
    v1[0x1E] = sub_95E250;
    v1[0x1F] = sub_95E4D0;
    v1[0x20] = sub_95E980;
    v1[0x21] = 0;
    v1[0x22] = 0;
    v1[0x23] = sub_95EEF0;
    v2 = (BOOL (__cdecl **)(float, int, int, int, int, int, int))FormHeapAlloc(0x18u);
    *v2 = sub_96CDD0;
    v2[1] = (BOOL (__cdecl *)(float, int, int, int, int, int, int))sub_962E30;
    v2[2] = (BOOL (__cdecl *)(float, int, int, int, int, int, int))sub_9607B0;
    v2[3] = 0;
    v2[4] = (BOOL (__cdecl *)(float, int, int, int, int, int, int))sub_95FC20;
    v2[5] = (BOOL (__cdecl *)(float, int, int, int, int, int, int))sub_95E0E0;
    v3 = (char (__cdecl **)(float, int, int, int, int, int, int, int, int, char, int, int))FormHeapAlloc(0x18u);
    *v3 = sub_96CF80;
    v3[1] = (char (__cdecl *)(float, int, int, int, int, int, int, int, int, char, int, int))sub_964AB0;
    v3[2] = sub_960CB0;
    v3[3] = 0;
    v3[4] = (char (__cdecl *)(float, int, int, int, int, int, int, int, int, char, int, int))sub_95FDC0;
    v3[5] = sub_95F210;
    dword_BA9AA4 = (int)v1;
    dword_BA9AA0 = (int)v0;
    dword_BA9AA8 = (int)v2;
    dword_BA9AAC = (int)v3;
    dword_BA9AB0 = (int)sub_95D830;
    dword_BA9AB4 = (int)sub_95D860;
    dword_BA9AB8 = (int)sub_95D8B0;
  }
}
