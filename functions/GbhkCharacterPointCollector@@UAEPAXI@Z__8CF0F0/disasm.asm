0x8CF0F0: push    esi
0x8CF0F1: mov     esi, ecx
0x8CF0F3: call    ??1bhkCharacterPointCollector@@UAE@XZ; bhkCharacterPointCollector::~bhkCharacterPointCollector(void)
0x8CF0F8: test    byte ptr [esp+4+arg_0], 1
0x8CF0FD: jz      short loc_8CF111
0x8CF0FF: mov     ecx, ds:0BA7D98h
0x8CF105: mov     eax, [ecx]
0x8CF107: mov     edx, [eax+14h]
0x8CF10A: push    1Ch
0x8CF10C: push    8
0x8CF10E: push    esi
0x8CF10F: call    edx
0x8CF111: mov     eax, esi
0x8CF113: pop     esi
0x8CF114: retn    4
