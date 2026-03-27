0x6ECB80: sub     esp, 0Ch
0x6ECB83: push    esi
0x6ECB84: mov     esi, [esp+10h+arg_0]
0x6ECB88: test    esi, esi
0x6ECB8A: push    edi
0x6ECB8B: mov     edi, ecx
0x6ECB8D: jz      short loc_6ECBB8
0x6ECB8F: mov     eax, [esi]
0x6ECB91: mov     edx, [eax+4]
0x6ECB94: mov     ecx, esi
0x6ECB96: call    edx
0x6ECB98: test    eax, eax
0x6ECB9A: jz      short loc_6ECBAE
0x6ECB9C: lea     esp, [esp+0]
0x6ECBA0: cmp     eax, offset dword_B3DCF0
0x6ECBA5: jz      short loc_6ECBF1
0x6ECBA7: mov     eax, [eax+4]
0x6ECBAA: test    eax, eax
0x6ECBAC: jnz     short loc_6ECBA0
0x6ECBAE: xor     al, al
0x6ECBB0: neg     al
0x6ECBB2: sbb     eax, eax
0x6ECBB4: and     eax, esi
0x6ECBB6: mov     esi, eax
0x6ECBB8: mov     eax, [edi]
0x6ECBBA: mov     edx, [eax+0A8h]
0x6ECBC0: lea     ecx, [esp+14h+var_C]
0x6ECBC4: push    ecx
0x6ECBC5: mov     ecx, edi
0x6ECBC7: call    edx
0x6ECBC9: mov     ecx, [esp+14h+var_C]
0x6ECBCD: mov     edx, [esp+14h+var_8]
0x6ECBD1: sub     esp, 0Ch
0x6ECBD4: mov     eax, esp
0x6ECBD6: mov     [eax], ecx
0x6ECBD8: mov     ecx, [esp+20h+var_4]
0x6ECBDC: mov     [eax+4], edx
0x6ECBDF: mov     [eax+8], ecx
0x6ECBE2: mov     ecx, esi
0x6ECBE4: call    sub_6DA440
0x6ECBE9: pop     edi
0x6ECBEA: pop     esi
0x6ECBEB: add     esp, 0Ch
0x6ECBEE: retn    8
0x6ECBF1: mov     al, 1
0x6ECBF3: jmp     short loc_6ECBB0
