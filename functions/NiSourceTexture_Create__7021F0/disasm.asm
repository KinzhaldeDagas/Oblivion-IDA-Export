0x7021F0: push    0FFFFFFFFh
0x7021F2: push    offset SEH_8C8900
0x7021F7: mov     eax, large fs:0
0x7021FD: push    eax
0x7021FE: push    ecx
0x7021FF: mov     eax, ds:0B30AACh
0x702204: xor     eax, esp
0x702206: push    eax
0x702207: lea     eax, [esp+14h+var_C]
0x70220B: mov     large fs:0, eax
0x702211: push    48h ; 'H'; Size
0x702213: call    FormHeapAlloc
0x702218: add     esp, 4
0x70221B: mov     [esp+14h+var_10], eax
0x70221F: test    eax, eax
0x702221: mov     [esp+14h+var_4], 0
0x702229: jz      short loc_702242
0x70222B: mov     ecx, eax; this
0x70222D: call    ??0NiSourceTexture@@QAE@XZ; NiSourceTexture::NiSourceTexture(void)
0x702232: mov     ecx, [esp+14h+var_C]
0x702236: mov     large fs:0, ecx
0x70223D: pop     ecx
0x70223E: add     esp, 10h
0x702241: retn
0x702242: xor     eax, eax
0x702244: mov     ecx, [esp+14h+var_C]
0x702248: mov     large fs:0, ecx
0x70224F: pop     ecx
0x702250: add     esp, 10h
0x702253: retn
