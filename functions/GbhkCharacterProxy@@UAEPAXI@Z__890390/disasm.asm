0x890390: push    esi
0x890391: mov     esi, ecx
0x890393: call    ??1bhkCharacterProxy@@UAE@XZ; bhkCharacterProxy::~bhkCharacterProxy(void)
0x890398: test    byte ptr [esp+4+arg_0], 1
0x89039D: jz      short loc_8903A8
0x89039F: push    esi
0x8903A0: call    FormHeapFree
0x8903A5: add     esp, 4
0x8903A8: mov     eax, esi
0x8903AA: pop     esi
0x8903AB: retn    4
