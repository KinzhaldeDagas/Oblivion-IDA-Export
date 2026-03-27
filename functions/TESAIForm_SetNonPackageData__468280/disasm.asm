0x468280: push    esi
0x468281: push    edi
0x468282: mov     edi, [esp+8+arg_0]
0x468286: test    edi, edi
0x468288: mov     esi, ecx
0x46828A: jz      short loc_4682F0
0x46828C: movzx   eax, byte ptr [edi]
0x46828F: mov     edx, [esi]
0x468291: mov     [esi+4], al
0x468294: mov     eax, [edx+10h]
0x468297: push    100h
0x46829C: call    eax
0x46829E: movzx   ecx, byte ptr [edi+1]
0x4682A2: mov     edx, [esi]
0x4682A4: mov     eax, [edx+10h]
0x4682A7: mov     [esi+5], cl
0x4682AA: push    100h
0x4682AF: mov     ecx, esi
0x4682B1: call    eax
0x4682B3: movzx   ecx, byte ptr [edi+2]
0x4682B7: mov     edx, [esi]
0x4682B9: mov     eax, [edx+10h]
0x4682BC: mov     [esi+6], cl
0x4682BF: push    100h
0x4682C4: mov     ecx, esi
0x4682C6: call    eax
0x4682C8: movzx   ecx, byte ptr [edi+3]
0x4682CC: mov     edx, [esi]
0x4682CE: mov     eax, [edx+10h]
0x4682D1: mov     [esi+7], cl
0x4682D4: push    100h
0x4682D9: mov     ecx, esi
0x4682DB: call    eax
0x4682DD: mov     ecx, [edi+4]
0x4682E0: mov     [esi+8], ecx
0x4682E3: mov     dl, [edi+8]
0x4682E6: mov     [esi+0Ch], dl
0x4682E9: movzx   eax, byte ptr [edi+9]
0x4682ED: mov     [esi+0Dh], al
0x4682F0: pop     edi
0x4682F1: pop     esi
0x4682F2: retn    4
