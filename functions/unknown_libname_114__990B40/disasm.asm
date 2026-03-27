0x990B40: cmp     byte ptr [edx+0Eh], 5
0x990B44: jnz     short loc_990B57
0x990B46: mov     bx, [ebp-0A4h]
0x990B4D: or      bh, 2
0x990B50: and     bh, 0FEh
0x990B53: mov     bl, 3Fh ; '?'
0x990B55: jmp     short loc_990B5B
0x990B57: mov     bx, 133Fh
0x990B5B: mov     [ebp-0A2h], bx
0x990B62: fldcw   word ptr [ebp-0A2h]
0x990B68: mov     ebx, offset unk_B319CC
0x990B6D: fxam
0x990B6F: mov     [ebp-94h], edx
0x990B75: fstsw   word ptr [ebp-0A0h]
0x990B7C: mov     byte ptr [ebp-90h], 0
0x990B83: wait
0x990B84: mov     cl, [ebp-9Fh]
0x990B8A: shl     cl, 1
0x990B8C: sar     cl, 1
0x990B8E: rol     cl, 1
0x990B90: mov     al, cl
0x990B92: and     al, 0Fh
0x990B94: xlat
0x990B95: movsx   eax, al
0x990B98: and     ecx, 404h
0x990B9E: mov     ebx, edx
0x990BA0: add     ebx, eax
0x990BA2: add     ebx, 10h
0x990BA5: jmp     dword ptr [ebx]
