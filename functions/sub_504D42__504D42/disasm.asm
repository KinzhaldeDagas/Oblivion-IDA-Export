0x504D42: mov     edx, [esp+arg_18]
0x504D46: push    eax; a5
0x504D47: mov     eax, [esp+4+a1]
0x504D4B: push    edi; a4
0x504D4C: push    ecx; a3
0x504D4D: push    edx; a2
0x504D4E: push    eax; a1
0x504D4F: mov     [esp+14h+arg_1C], 0
0x504D57: call    Script_ExtractArgs
0x504D5C: add     esp, 20h
0x504D5F: test    al, al
0x504D61: jnz     short loc_504D66
0x504D63: pop     esi
0x504D64: pop     edi
0x504D65: retn
0x504D66: fild    [esp-0Ch+arg_1C]
0x504D6A: mov     edx, [esi]
0x504D6C: mov     eax, [edx+254h]
0x504D72: push    ecx
0x504D73: mov     ecx, esi
0x504D75: fstp    [esp-8+arg_4]
0x504D78: call    eax
0x504D7A: cmp     byte ptr ds:0B361ACh, 0
0x504D81: jz      short loc_504DA2
0x504D83: mov     edx, [esi]
0x504D85: mov     eax, [edx+250h]
0x504D8B: mov     ecx, esi
0x504D8D: call    eax
0x504D8F: sub     esp, 8
0x504D92: fstp    qword ptr [esp+0]
0x504D95: push    offset aActorCrimeGo_0; "Actor Crime Gold modified to %.02f "
0x504D9A: call    Interface_ConsolePrint
0x504D9F: add     esp, 0Ch
0x504DA2: pop     esi
0x504DA3: mov     al, 1
0x504DA5: pop     edi
0x504DA6: retn
