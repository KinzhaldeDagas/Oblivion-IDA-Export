0x70FA00: push    ebx
0x70FA01: mov     ebx, dword ptr [esp+4+ArgList]
0x70FA05: push    esi
0x70FA06: mov     eax, ebx
0x70FA08: push    edi
0x70FA09: lea     edx, [eax+1]
0x70FA0C: lea     esp, [esp+0]
0x70FA10: mov     cl, [eax]
0x70FA12: add     eax, 1
0x70FA15: test    cl, cl
0x70FA17: jnz     short loc_70FA10
0x70FA19: sub     eax, edx
0x70FA1B: lea     esi, [eax+7]
0x70FA1E: push    esi; Size
0x70FA1F: call    FormHeapAlloc
0x70FA24: mov     edi, eax
0x70FA26: movzx   eax, [esp+10h+arg_4]
0x70FA2B: push    eax
0x70FA2C: push    ebx; ArgList
0x70FA2D: push    offset aSU; "%s = %u"
0x70FA32: push    esi; SizeInBytes
0x70FA33: push    edi; DstBuf
0x70FA34: call    sub_6C5D40
0x70FA39: add     esp, 18h
0x70FA3C: mov     eax, edi
0x70FA3E: pop     edi
0x70FA3F: pop     esi
0x70FA40: pop     ebx
0x70FA41: retn
