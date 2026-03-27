0x542EA0: push    0FFFFFFFFh
0x542EA2: push    offset SEH_8C8900
0x542EA7: mov     eax, large fs:0
0x542EAD: push    eax
0x542EAE: push    ecx
0x542EAF: mov     eax, ds:0B30AACh
0x542EB4: xor     eax, esp
0x542EB6: push    eax
0x542EB7: lea     eax, [esp+14h+var_C]
0x542EBB: mov     large fs:0, eax
0x542EC1: mov     eax, ds:0B365C4h
0x542EC6: test    eax, eax
0x542EC8: jnz     short loc_542F0A
0x542ECA: push    104h; Size
0x542ECF: call    FormHeapAlloc
0x542ED4: add     esp, 4
0x542ED7: mov     [esp+14h+var_10], eax
0x542EDB: test    eax, eax
0x542EDD: mov     [esp+14h+var_4], 0
0x542EE5: jz      short loc_542F03
0x542EE7: mov     ecx, eax; this
0x542EE9: call    ??0Sky@@QAE@XZ; Sky::Sky(void)
0x542EEE: mov     ds:0B365C4h, eax
0x542EF3: mov     ecx, [esp+14h+var_C]
0x542EF7: mov     large fs:0, ecx
0x542EFE: pop     ecx
0x542EFF: add     esp, 10h
0x542F02: retn
0x542F03: xor     eax, eax
0x542F05: mov     ds:0B365C4h, eax
0x542F0A: mov     ecx, [esp+14h+var_C]
0x542F0E: mov     large fs:0, ecx
0x542F15: pop     ecx
0x542F16: add     esp, 10h
0x542F19: retn
