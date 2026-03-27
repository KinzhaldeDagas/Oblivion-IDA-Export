0x91DEB0: push    ecx
0x91DEB1: mov     eax, [esp+4+arg_0]
0x91DEB5: push    ebp
0x91DEB6: mov     ebp, [eax+0Ch]
0x91DEB9: mov     [esp+8+var_4], ecx
0x91DEBD: mov     ecx, [ebp+0]
0x91DEC0: sub     ecx, ebp
0x91DEC2: sub     ecx, 30h ; '0'
0x91DEC5: mov     eax, 2AAAAAABh
0x91DECA: imul    ecx
0x91DECC: sar     edx, 3
0x91DECF: mov     eax, edx
0x91DED1: shr     eax, 1Fh
0x91DED4: add     eax, edx
0x91DED6: test    eax, eax
0x91DED8: jle     short loc_91DF1F
0x91DEDA: push    ebx
0x91DEDB: push    esi
0x91DEDC: add     ebp, 30h ; '0'
0x91DEDF: mov     [esp+10h+arg_0], eax
0x91DEE3: push    edi
0x91DEE4: jmp     short loc_91DEF0
0x91DEE6: align 10h
0x91DEF0: mov     edx, [esp+14h+var_4]
0x91DEF4: mov     edi, ds:0BA8458h
0x91DEFA: mov     esi, [edx-10h]
0x91DEFD: lea     ecx, [ebp+10h]
0x91DF00: push    ebp
0x91DF01: mov     ebx, 0FF008000h
0x91DF06: call    sub_91DC00
0x91DF0B: mov     eax, [esp+18h+arg_0]
0x91DF0F: add     esp, 4
0x91DF12: add     ebp, 30h ; '0'
0x91DF15: dec     eax
0x91DF16: mov     [esp+14h+arg_0], eax
0x91DF1A: jnz     short loc_91DEF0
0x91DF1C: pop     edi
0x91DF1D: pop     esi
0x91DF1E: pop     ebx
0x91DF1F: pop     ebp
0x91DF20: pop     ecx
0x91DF21: retn    4
