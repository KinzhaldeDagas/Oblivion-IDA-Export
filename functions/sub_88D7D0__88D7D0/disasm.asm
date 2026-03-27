0x88D7D0: sub     esp, 0Ch
0x88D7D3: mov     eax, [esp+0Ch+arg_0]
0x88D7D7: push    esi
0x88D7D8: push    edi
0x88D7D9: mov     edi, ecx
0x88D7DB: mov     esi, [edi+54h]
0x88D7DE: sub     esi, 1
0x88D7E1: mov     cl, [esp+14h+arg_4]
0x88D7E5: mov     [esp+14h+var_8], eax
0x88D7E9: mov     [esp+14h+var_C], edi
0x88D7ED: mov     [esp+14h+var_4], cl
0x88D7F1: js      short loc_88D814
0x88D7F3: mov     edx, [edi+50h]
0x88D7F6: cmp     dword ptr [edx+esi*4], 0
0x88D7FA: lea     eax, [edx+esi*4]
0x88D7FD: jz      short loc_88D80F
0x88D7FF: mov     eax, [eax]
0x88D801: mov     edx, [eax]
0x88D803: mov     edx, [edx+4]
0x88D806: lea     ecx, [esp+14h+var_C]
0x88D80A: push    ecx
0x88D80B: mov     ecx, eax
0x88D80D: call    edx
0x88D80F: sub     esi, 1
0x88D812: jns     short loc_88D7F3
0x88D814: pop     edi
0x88D815: pop     esi
0x88D816: add     esp, 0Ch
0x88D819: retn    8
