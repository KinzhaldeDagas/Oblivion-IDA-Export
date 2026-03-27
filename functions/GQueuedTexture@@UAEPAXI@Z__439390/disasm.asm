0x439390: push    esi
0x439391: mov     esi, ecx
0x439393: call    ??1QueuedTexture@@UAE@XZ; QueuedTexture::~QueuedTexture(void)
0x439398: test    byte ptr [esp+4+arg_0], 1
0x43939D: jz      short loc_4393A8
0x43939F: push    esi
0x4393A0: call    FormHeapFree
0x4393A5: add     esp, 4
0x4393A8: mov     eax, esi
0x4393AA: pop     esi
0x4393AB: retn    4
