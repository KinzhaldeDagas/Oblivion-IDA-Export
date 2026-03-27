0x5579B0: sub     esp, 8
0x5579B3: mov     edx, [esp+8+arg_8]
0x5579B7: push    ebx
0x5579B8: mov     ebx, [esp+0Ch+arg_0]
0x5579BC: push    esi
0x5579BD: mov     esi, [esp+10h+arg_4]
0x5579C1: push    edi
0x5579C2: mov     edi, [esp+14h+arg_8]
0x5579C6: xor     al, al
0x5579C8: mov     byte ptr [esp+14h+var_4], al
0x5579CC: mov     ecx, [esp+14h+var_4]
0x5579D0: mov     byte ptr [esp+14h+var_8], al
0x5579D4: mov     eax, [esp+14h+var_8]
0x5579D8: push    eax
0x5579D9: push    ecx
0x5579DA: push    edx
0x5579DB: push    edi
0x5579DC: push    esi
0x5579DD: push    ebx
0x5579DE: call    sub_5577C0
0x5579E3: sub     esi, ebx
0x5579E5: mov     eax, 66666667h
0x5579EA: imul    esi
0x5579EC: sar     edx, 3
0x5579EF: mov     eax, edx
0x5579F1: shr     eax, 1Fh
0x5579F4: add     eax, edx
0x5579F6: lea     eax, [eax+eax*4]
0x5579F9: add     eax, eax
0x5579FB: add     eax, eax
0x5579FD: add     esp, 18h
0x557A00: mov     ecx, eax
0x557A02: mov     eax, edi
0x557A04: pop     edi
0x557A05: pop     esi
0x557A06: sub     eax, ecx
0x557A08: pop     ebx
0x557A09: add     esp, 8
0x557A0C: retn
