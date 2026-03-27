0x558610: push    ebx
0x558611: mov     ebx, [esp+4+arg_4]
0x558615: push    ebp
0x558616: mov     ebp, [esp+8+arg_8]
0x55861A: push    esi
0x55861B: mov     esi, [esp+0Ch+arg_0]
0x55861F: push    edi
0x558620: mov     edi, ebx
0x558622: sub     edi, esi
0x558624: sar     edi, 6
0x558627: shl     edi, 6
0x55862A: add     edi, ebp
0x55862C: cmp     esi, ebx
0x55862E: jz      short loc_558642
0x558630: sub     ebp, esi
0x558632: push    esi
0x558633: lea     ecx, [esi+ebp]
0x558636: call    sub_557770
0x55863B: add     esi, 40h ; '@'
0x55863E: cmp     esi, ebx
0x558640: jnz     short loc_558632
0x558642: mov     eax, edi
0x558644: pop     edi
0x558645: pop     esi
0x558646: pop     ebp
0x558647: pop     ebx
0x558648: retn
