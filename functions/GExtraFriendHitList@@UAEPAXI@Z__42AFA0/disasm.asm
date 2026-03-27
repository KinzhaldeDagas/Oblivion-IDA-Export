0x42AFA0: push    esi
0x42AFA1: mov     esi, ecx
0x42AFA3: call    ??1ExtraFriendHitList@@UAE@XZ; ExtraFriendHitList::~ExtraFriendHitList(void)
0x42AFA8: test    byte ptr [esp+4+arg_0], 1
0x42AFAD: jz      short loc_42AFB8
0x42AFAF: push    esi
0x42AFB0: call    FormHeapFree
0x42AFB5: add     esp, 4
0x42AFB8: mov     eax, esi
0x42AFBA: pop     esi
0x42AFBB: retn    4
