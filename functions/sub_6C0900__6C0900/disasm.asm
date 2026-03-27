0x6C0900: push    esi
0x6C0901: mov     esi, [esp+4+arg_4]
0x6C0905: push    edi
0x6C0906: mov     edi, [esp+8+arg_0]
0x6C090A: push    esi
0x6C090B: push    edi
0x6C090C: call    sub_6BC1E0
0x6C0911: mov     eax, [edi+220h]
0x6C0917: push    1
0x6C0919: lea     ecx, [esp+14h+arg_4]
0x6C091D: push    ecx
0x6C091E: push    4
0x6C0920: lea     edx, [esi+10h]
0x6C0923: push    edx
0x6C0924: push    eax
0x6C0925: mov     eax, [eax+8]
0x6C0928: mov     [esp+24h+arg_4], 4
0x6C0930: call    eax
0x6C0932: mov     eax, [edi+220h]
0x6C0938: push    1
0x6C093A: lea     ecx, [esp+28h+arg_4]
0x6C093E: push    ecx
0x6C093F: push    4
0x6C0941: lea     edx, [esi+14h]
0x6C0944: push    edx
0x6C0945: push    eax
0x6C0946: mov     eax, [eax+8]
0x6C0949: mov     [esp+38h+arg_4], 4
0x6C0951: call    eax
0x6C0953: mov     edi, [edi+220h]
0x6C0959: mov     edx, [edi+8]
0x6C095C: push    1
0x6C095E: lea     ecx, [esp+3Ch+arg_4]
0x6C0962: push    ecx
0x6C0963: push    4
0x6C0965: add     esi, 18h
0x6C0968: push    esi
0x6C0969: push    edi
0x6C096A: mov     [esp+4Ch+arg_4], 4
0x6C0972: call    edx
0x6C0974: add     esp, 44h
0x6C0977: pop     edi
0x6C0978: pop     esi
0x6C0979: retn
