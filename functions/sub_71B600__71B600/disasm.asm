0x71B600: sub     esp, 18h
0x71B603: push    ebx
0x71B604: push    ebp
0x71B605: push    esi
0x71B606: push    edi
0x71B607: mov     edi, [esp+28h+arg_4]
0x71B60B: mov     ebp, [edi+4]
0x71B60E: movzx   ebx, byte ptr [edi+1]
0x71B612: push    edi
0x71B613: lea     ecx, [esp+2Ch+var_18]
0x71B617: call    sub_71B4D0
0x71B61C: mov     esi, [esp+28h+arg_0]
0x71B620: push    edi
0x71B621: mov     ecx, esi
0x71B623: call    sub_71AD40
0x71B628: test    al, al
0x71B62A: jnz     loc_71B808
0x71B630: test    byte ptr [esi], 1
0x71B633: jz      loc_71B7D2
0x71B639: test    byte ptr [edi], 1
0x71B63C: jz      loc_71B7D2
0x71B642: mov     eax, [edi+4]
0x71B645: cmp     eax, 4
0x71B648: jl      short loc_71B653
0x71B64A: cmp     eax, 6
0x71B64D: jle     loc_71B7D2
0x71B653: cmp     ebx, 18h
0x71B656: jnz     short loc_71B67C
0x71B658: cmp     [esp+28h+var_14], 0FF00h
0x71B660: jnz     loc_71B7D2
0x71B666: mov     eax, [esp+28h+var_18]
0x71B66A: cmp     eax, 0FFh
0x71B66F: jz      short loc_71B67C
0x71B671: cmp     eax, 0FF0000h
0x71B676: jnz     loc_71B7D2
0x71B67C: push    offset unk_B25CE0
0x71B681: mov     ecx, esi
0x71B683: call    sub_71AD40
0x71B688: test    al, al
0x71B68A: jnz     loc_71B7DE
0x71B690: push    offset unk_B25D28
0x71B695: mov     ecx, esi
0x71B697: call    sub_71AD40
0x71B69C: test    al, al
0x71B69E: jnz     loc_71B7DE
0x71B6A4: push    offset unk_B25D70
0x71B6A9: mov     ecx, esi
0x71B6AB: call    sub_71AD40
0x71B6B0: test    al, al
0x71B6B2: jnz     loc_71B7A9
0x71B6B8: push    offset unk_B25DB8
0x71B6BD: mov     ecx, esi
0x71B6BF: call    sub_71AD40
0x71B6C4: test    al, al
0x71B6C6: jnz     loc_71B7A9
0x71B6CC: push    offset unk_B25E48
0x71B6D1: mov     ecx, esi
0x71B6D3: call    sub_71AD40
0x71B6D8: test    al, al
0x71B6DA: jnz     loc_71B79E
0x71B6E0: push    offset unk_B25E00
0x71B6E5: mov     ecx, esi
0x71B6E7: call    sub_71AD40
0x71B6EC: test    al, al
0x71B6EE: jnz     loc_71B79E
0x71B6F4: mov     ecx, esi
0x71B6F6: call    sub_70E240
0x71B6FB: test    al, al
0x71B6FD: jnz     loc_71B79E
0x71B703: push    offset unk_B25F20
0x71B708: mov     ecx, esi
0x71B70A: call    sub_71AD40
0x71B70F: test    al, al
0x71B711: jnz     short loc_71B785
0x71B713: push    offset unk_B25F68
0x71B718: mov     ecx, esi
0x71B71A: call    sub_71AD40
0x71B71F: test    al, al
0x71B721: jnz     short loc_71B785
0x71B723: push    offset unk_B25E90
0x71B728: mov     ecx, esi
0x71B72A: call    sub_71AD40
0x71B72F: test    al, al
0x71B731: jnz     short loc_71B747
0x71B733: push    offset unk_B25ED8
0x71B738: mov     ecx, esi
0x71B73A: call    sub_71AD40
0x71B73F: test    al, al
0x71B741: jz      loc_71B7D2
0x71B747: cmp     ebx, 10h
0x71B74A: jnz     loc_71B7D2
0x71B750: cmp     [esp+28h+var_C], 8000h
0x71B758: jnz     short loc_71B7D2
0x71B75A: cmp     [esp+28h+var_14], 3E0h
0x71B762: jnz     short loc_71B7D2
0x71B764: mov     eax, [esp+28h+var_18]
0x71B768: cmp     eax, 1Fh
0x71B76B: jnz     short loc_71B777
0x71B76D: cmp     [esp+28h+var_10], 7C00h
0x71B775: jmp     short loc_71B7D0
0x71B777: cmp     eax, 7C00h
0x71B77C: jnz     short loc_71B7D2
0x71B77E: cmp     [esp+28h+var_10], 1Fh
0x71B783: jmp     short loc_71B7D0
0x71B785: cmp     ebp, 8
0x71B788: jz      short loc_71B78F
0x71B78A: cmp     ebp, 9
0x71B78D: jnz     short loc_71B7D2
0x71B78F: cmp     ebx, 10h
0x71B792: jz      short loc_71B808
0x71B794: cmp     ebx, 18h
0x71B797: jz      short loc_71B808
0x71B799: cmp     ebx, 20h ; ' '
0x71B79C: jmp     short loc_71B7D0
0x71B79E: test    ebp, ebp
0x71B7A0: jz      short loc_71B78F
0x71B7A2: cmp     ebp, 1
0x71B7A5: jz      short loc_71B78F
0x71B7A7: jmp     short loc_71B785
0x71B7A9: test    ebp, ebp
0x71B7AB: jz      short loc_71B78F
0x71B7AD: cmp     ebp, 1
0x71B7B0: jz      short loc_71B78F
0x71B7B2: push    offset unk_B25D70
0x71B7B7: mov     ecx, edi
0x71B7B9: call    sub_70E260
0x71B7BE: test    al, al
0x71B7C0: jz      short loc_71B808
0x71B7C2: push    offset unk_B25DB8
0x71B7C7: mov     ecx, edi
0x71B7C9: call    sub_70E260
0x71B7CE: test    al, al
0x71B7D0: jz      short loc_71B808
0x71B7D2: pop     edi
0x71B7D3: pop     esi
0x71B7D4: pop     ebp
0x71B7D5: xor     al, al
0x71B7D7: pop     ebx
0x71B7D8: add     esp, 18h
0x71B7DB: retn    8
0x71B7DE: test    ebp, ebp
0x71B7E0: jz      short loc_71B7FE
0x71B7E2: cmp     ebp, 1
0x71B7E5: jz      short loc_71B7FE
0x71B7E7: push    offset unk_B25CE0
0x71B7EC: mov     ecx, edi
0x71B7EE: call    sub_70E260
0x71B7F3: test    al, al
0x71B7F5: jz      short loc_71B808
0x71B7F7: push    offset unk_B25D28
0x71B7FC: jmp     short loc_71B7C7
0x71B7FE: cmp     ebx, 18h
0x71B801: jz      short loc_71B808
0x71B803: cmp     ebx, 20h ; ' '
0x71B806: jnz     short loc_71B7D2
0x71B808: pop     edi
0x71B809: pop     esi
0x71B80A: pop     ebp
0x71B80B: mov     al, 1
0x71B80D: pop     ebx
0x71B80E: add     esp, 18h
0x71B811: retn    8
