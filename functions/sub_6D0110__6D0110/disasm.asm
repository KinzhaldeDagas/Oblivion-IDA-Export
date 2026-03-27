0x6D0110: push    ebx
0x6D0111: mov     bl, [esp+4+arg_0]
0x6D0115: test    bl, 2
0x6D0118: push    esi
0x6D0119: mov     esi, ecx
0x6D011B: jz      short loc_6D0148
0x6D011D: mov     eax, [esi-4]
0x6D0120: push    edi
0x6D0121: push    offset j_??1NiBlendBoolInterpolator@@UAE@XZ; void (__thiscall *)(void *)
0x6D0126: lea     edi, [esi-4]
0x6D0129: push    eax; int
0x6D012A: push    30h ; '0'; unsigned int
0x6D012C: push    esi; void *
0x6D012D: call    $LN21
0x6D0132: test    bl, 1
0x6D0135: jz      short loc_6D0140
0x6D0137: push    edi
0x6D0138: call    FormHeapFree
0x6D013D: add     esp, 4
0x6D0140: mov     eax, edi
0x6D0142: pop     edi
0x6D0143: pop     esi
0x6D0144: pop     ebx
0x6D0145: retn    4
0x6D0148: call    ??1NiBlendBoolInterpolator@@UAE@XZ; NiBlendBoolInterpolator::~NiBlendBoolInterpolator(void)
0x6D014D: test    bl, 1
0x6D0150: jz      short loc_6D015B
0x6D0152: push    esi
0x6D0153: call    FormHeapFree
0x6D0158: add     esp, 4
0x6D015B: mov     eax, esi
0x6D015D: pop     esi
0x6D015E: pop     ebx
0x6D015F: retn    4
