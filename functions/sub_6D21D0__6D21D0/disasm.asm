0x6D21D0: push    0FFFFFFFFh
0x6D21D2: push    offset SEH_8C8900
0x6D21D7: mov     eax, large fs:0
0x6D21DD: push    eax
0x6D21DE: push    ecx
0x6D21DF: mov     eax, ds:0B30AACh
0x6D21E4: xor     eax, esp
0x6D21E6: push    eax
0x6D21E7: lea     eax, [esp+14h+var_C]
0x6D21EB: mov     large fs:0, eax
0x6D21F1: push    5Ch ; '\'; Size
0x6D21F3: call    FormHeapAlloc
0x6D21F8: add     esp, 4
0x6D21FB: mov     [esp+14h+var_10], eax
0x6D21FF: test    eax, eax
0x6D2201: mov     [esp+14h+var_4], 0
0x6D2209: jz      short loc_6D2222
0x6D220B: mov     ecx, eax; this
0x6D220D: call    ??0NiFlipController@@QAE@XZ; NiFlipController::NiFlipController(void)
0x6D2212: mov     ecx, [esp+14h+var_C]
0x6D2216: mov     large fs:0, ecx
0x6D221D: pop     ecx
0x6D221E: add     esp, 10h
0x6D2221: retn
0x6D2222: xor     eax, eax
0x6D2224: mov     ecx, [esp+14h+var_C]
0x6D2228: mov     large fs:0, ecx
0x6D222F: pop     ecx
0x6D2230: add     esp, 10h
0x6D2233: retn
