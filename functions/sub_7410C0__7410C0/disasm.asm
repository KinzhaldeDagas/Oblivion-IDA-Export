0x7410C0: push    esi
0x7410C1: push    edi
0x7410C2: mov     edi, [esp+8+arg_0]
0x7410C6: push    edi
0x7410C7: mov     esi, ecx
0x7410C9: call    sub_700AC0
0x7410CE: cmp     dword ptr [edi+0D8h], 0A000102h
0x7410D8: jnb     short loc_741128
0x7410DA: movzx   eax, word ptr [edi+25Ch]
0x7410E1: mov     [esi+18h], ax
0x7410E5: cmp     dword ptr [edi+0D8h], 5000016h
0x7410EF: jnb     short loc_74111F
0x7410F1: mov     cl, al
0x7410F3: shr     cl, 1
0x7410F5: and     cl, 1
0x7410F8: shr     eax, 3
0x7410FB: xor     edx, edx
0x7410FD: and     eax, 3
0x741100: test    cl, cl
0x741102: setnz   dl
0x741105: mov     word ptr [esi+18h], 0
0x74110B: mov     cx, dx
0x74110E: and     cx, 0FFF9h
0x741113: lea     edx, [eax+eax]
0x741116: or      cx, dx
0x741119: mov     [esi+18h], cx
0x74111D: jmp     short loc_74114C
0x74111F: and     eax, 7
0x741122: mov     [esi+18h], ax
0x741126: jmp     short loc_74114C
0x741128: mov     eax, [edi+21Ch]
0x74112E: push    1
0x741130: lea     ecx, [esp+0Ch+arg_0]
0x741134: push    ecx
0x741135: push    2
0x741137: lea     edx, [esi+18h]
0x74113A: push    edx
0x74113B: push    eax
0x74113C: mov     eax, [eax+4]
0x74113F: mov     [esp+1Ch+arg_0], 2
0x741147: call    eax
0x741149: add     esp, 14h
0x74114C: mov     eax, [edi+21Ch]
0x741152: push    1
0x741154: lea     ecx, [esp+0Ch+arg_0]
0x741158: push    ecx
0x741159: push    4
0x74115B: lea     edx, [esi+1Ch]
0x74115E: push    edx
0x74115F: push    eax
0x741160: mov     eax, [eax+4]
0x741163: mov     [esp+1Ch+arg_0], 4
0x74116B: call    eax
0x74116D: add     esp, 14h
0x741170: push    edi
0x741171: lea     ecx, [esi+20h]
0x741174: call    sub_709430
0x741179: pop     edi
0x74117A: pop     esi
0x74117B: retn    4
