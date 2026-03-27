0x412620: push    esi
0x412621: mov     esi, ecx
0x412623: call    ??1IntSeenData@@UAE@XZ; IntSeenData::~IntSeenData(void)
0x412628: test    byte ptr [esp+4+arg_0], 1
0x41262D: jz      short loc_412638
0x41262F: push    esi
0x412630: call    FormHeapFree
0x412635: add     esp, 4
0x412638: mov     eax, esi
0x41263A: pop     esi
0x41263B: retn    4
