0x42ADB0: push    esi
0x42ADB1: mov     esi, ecx
0x42ADB3: call    ??1ExtraFollower@@UAE@XZ; ExtraFollower::~ExtraFollower(void)
0x42ADB8: test    byte ptr [esp+4+arg_0], 1
0x42ADBD: jz      short loc_42ADC8
0x42ADBF: push    esi
0x42ADC0: call    FormHeapFree
0x42ADC5: add     esp, 4
0x42ADC8: mov     eax, esi
0x42ADCA: pop     esi
0x42ADCB: retn    4
