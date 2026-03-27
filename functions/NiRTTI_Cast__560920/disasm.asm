0x560920: push    esi
0x560921: mov     esi, [esp+4+arg_4]
0x560925: test    esi, esi
0x560927: jnz     short loc_56092D
0x560929: xor     eax, eax
0x56092B: pop     esi
0x56092C: retn
0x56092D: mov     eax, [esi]
0x56092F: mov     edx, [eax+4]
0x560932: mov     ecx, esi
0x560934: call    edx
0x560936: test    eax, eax
0x560938: jz      short loc_56094B
0x56093A: mov     ecx, [esp+4+arg_0]
0x56093E: mov     edi, edi
0x560940: cmp     eax, ecx
0x560942: jz      short loc_560955
0x560944: mov     eax, [eax+4]
0x560947: test    eax, eax
0x560949: jnz     short loc_560940
0x56094B: xor     al, al
0x56094D: neg     al
0x56094F: sbb     eax, eax
0x560951: and     eax, esi
0x560953: pop     esi
0x560954: retn
0x560955: mov     al, 1
0x560957: neg     al
0x560959: sbb     eax, eax
0x56095B: and     eax, esi
0x56095D: pop     esi
0x56095E: retn
