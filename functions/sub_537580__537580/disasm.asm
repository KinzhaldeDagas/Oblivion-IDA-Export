0x537580: mov     eax, [esp+arg_0]
0x537584: push    esi
0x537585: mov     esi, [eax+30h]
0x537588: add     eax, 14h
0x53758B: and     esi, 3Fh
0x53758E: cmp     esi, 0Eh
0x537591: push    edi
0x537592: mov     edi, ecx
0x537594: jz      short loc_5375A0
0x537596: cmp     esi, 10h
0x537599: jz      short loc_5375A0
0x53759B: cmp     esi, 14h
0x53759E: jnz     short loc_5375E4
0x5375A0: push    eax
0x5375A1: call    sub_536110
0x5375A6: add     esp, 4
0x5375A9: test    eax, eax
0x5375AB: jz      short loc_5375E4
0x5375AD: cmp     esi, 0Eh
0x5375B0: jz      short loc_5375C4
0x5375B2: cmp     esi, 10h
0x5375B5: jz      short loc_5375C4
0x5375B7: push    eax
0x5375B8: mov     ecx, edi
0x5375BA: call    sub_5374F0
0x5375BF: pop     edi
0x5375C0: pop     esi
0x5375C1: retn    4
0x5375C4: mov     ecx, [edi+18h]
0x5375C7: test    ecx, ecx
0x5375C9: jz      short loc_5375DC
0x5375CB: jmp     short loc_5375D0
0x5375CD: align 10h
0x5375D0: cmp     [ecx+0Ch], eax
0x5375D3: jz      short loc_5375DC
0x5375D5: mov     ecx, [ecx+4]
0x5375D8: test    ecx, ecx
0x5375DA: jnz     short loc_5375D0
0x5375DC: push    ecx
0x5375DD: mov     ecx, edi
0x5375DF: call    sub_536D30
0x5375E4: pop     edi
0x5375E5: pop     esi
0x5375E6: retn    4
