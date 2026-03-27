0x8A41F0: push    0FFFFFFFFh
0x8A41F2: push    offset SEH_8C8900
0x8A41F7: mov     eax, large fs:0
0x8A41FD: push    eax
0x8A41FE: push    ecx
0x8A41FF: mov     eax, ds:0B30AACh
0x8A4204: xor     eax, esp
0x8A4206: push    eax
0x8A4207: lea     eax, [esp+14h+var_C]
0x8A420B: mov     large fs:0, eax
0x8A4211: push    1Ch; Size
0x8A4213: call    FormHeapAlloc
0x8A4218: add     esp, 4
0x8A421B: mov     [esp+14h+var_10], eax
0x8A421F: test    eax, eax
0x8A4221: mov     [esp+14h+var_4], 0
0x8A4229: jz      short loc_8A4242
0x8A422B: mov     ecx, eax
0x8A422D: call    sub_8A4150
0x8A4232: mov     ecx, [esp+14h+var_C]
0x8A4236: mov     large fs:0, ecx
0x8A423D: pop     ecx
0x8A423E: add     esp, 10h
0x8A4241: retn
0x8A4242: xor     eax, eax
0x8A4244: mov     ecx, [esp+14h+var_C]
0x8A4248: mov     large fs:0, ecx
0x8A424F: pop     ecx
0x8A4250: add     esp, 10h
0x8A4253: retn
