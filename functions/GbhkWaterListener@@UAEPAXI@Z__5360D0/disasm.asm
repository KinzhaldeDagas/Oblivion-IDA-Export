0x5360D0: push    esi
0x5360D1: mov     esi, ecx
0x5360D3: call    ??1bhkWaterListener@@UAE@XZ; bhkWaterListener::~bhkWaterListener(void)
0x5360D8: test    byte ptr [esp+4+arg_0], 1
0x5360DD: jz      short loc_5360E8
0x5360DF: push    esi
0x5360E0: call    FormHeapFree
0x5360E5: add     esp, 4
0x5360E8: mov     eax, esi
0x5360EA: pop     esi
0x5360EB: retn    4
