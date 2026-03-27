0x5585B0: sub     esp, 8
0x5585B3: mov     edx, [esp+8+arg_8]
0x5585B7: push    ebx
0x5585B8: mov     ebx, [esp+0Ch+arg_0]
0x5585BC: push    esi
0x5585BD: mov     esi, [esp+10h+arg_4]
0x5585C1: push    edi
0x5585C2: mov     edi, [esp+14h+arg_8]
0x5585C6: xor     al, al
0x5585C8: mov     byte ptr [esp+14h+var_4], al
0x5585CC: mov     ecx, [esp+14h+var_4]
0x5585D0: mov     byte ptr [esp+14h+var_8], al
0x5585D4: mov     eax, [esp+14h+var_8]
0x5585D8: push    eax
0x5585D9: push    ecx
0x5585DA: push    edx
0x5585DB: push    edi
0x5585DC: push    esi
0x5585DD: push    ebx
0x5585DE: call    sub_557970
0x5585E3: sub     esi, ebx
0x5585E5: mov     eax, 66666667h
0x5585EA: imul    esi
0x5585EC: sar     edx, 3
0x5585EF: add     esp, 18h
0x5585F2: mov     eax, edx
0x5585F4: shr     eax, 1Fh
0x5585F7: add     eax, edx
0x5585F9: lea     eax, [eax+eax*4]
0x5585FC: lea     eax, [edi+eax*4]
0x5585FF: pop     edi
0x558600: pop     esi
0x558601: pop     ebx
0x558602: add     esp, 8
0x558605: retn
