0x8AECE0: push    esi
0x8AECE1: mov     esi, ecx
0x8AECE3: mov     eax, [esi]
0x8AECE5: mov     edx, [eax+58h]
0x8AECE8: call    edx
0x8AECEA: test    eax, eax
0x8AECEC: jz      short loc_8AECFB
0x8AECEE: mov     ecx, [esi+8]
0x8AECF1: push    1
0x8AECF3: push    ecx
0x8AECF4: mov     ecx, eax
0x8AECF6: call    sub_89B390
0x8AECFB: pop     esi
0x8AECFC: retn
