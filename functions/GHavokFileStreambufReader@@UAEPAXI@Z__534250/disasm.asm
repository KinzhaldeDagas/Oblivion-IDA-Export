0x534250: push    esi
0x534251: mov     esi, ecx
0x534253: call    ??1HavokFileStreambufReader@@UAE@XZ; HavokFileStreambufReader::~HavokFileStreambufReader(void)
0x534258: test    byte ptr [esp+4+arg_0], 1
0x53425D: jz      short loc_534274
0x53425F: movzx   edx, word ptr [esi+4]
0x534263: mov     ecx, ds:0BA7D98h
0x534269: mov     eax, [ecx]
0x53426B: mov     eax, [eax+14h]
0x53426E: push    17h
0x534270: push    edx
0x534271: push    esi
0x534272: call    eax
0x534274: mov     eax, esi
0x534276: pop     esi
0x534277: retn    4
