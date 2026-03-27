0x73DA30: push    esi
0x73DA31: push    edi
0x73DA32: mov     edi, [esp+8+arg_0]
0x73DA36: push    edi
0x73DA37: mov     esi, ecx
0x73DA39: call    sub_70B6A0
0x73DA3E: mov     eax, [edi+220h]
0x73DA44: mov     edx, [eax+8]
0x73DA47: push    1
0x73DA49: lea     ecx, [esp+0Ch+arg_0]
0x73DA4D: push    ecx
0x73DA4E: push    4
0x73DA50: add     esi, 0DCh ; 'Ü'
0x73DA56: push    esi
0x73DA57: push    eax
0x73DA58: mov     [esp+1Ch+arg_0], 4
0x73DA60: call    edx
0x73DA62: add     esp, 14h
0x73DA65: pop     edi
0x73DA66: pop     esi
0x73DA67: retn    4
