0x740240: push    0FFFFFFFFh
0x740242: push    offset SEH_7B3E60
0x740247: mov     eax, large fs:0
0x74024D: push    eax
0x74024E: sub     esp, 0Ch
0x740251: push    ebx
0x740252: push    ebp
0x740253: push    esi
0x740254: push    edi
0x740255: mov     eax, ds:0B30AACh
0x74025A: xor     eax, esp
0x74025C: push    eax
0x74025D: lea     eax, [esp+2Ch+var_C]
0x740261: mov     large fs:0, eax
0x740267: mov     edi, ecx
0x740269: mov     ax, [edi+48h]
0x74026D: mov     esi, [esp+2Ch+arg_0]
0x740271: mov     ecx, [edi+5Ch]
0x740274: mov     edx, [ecx]
0x740276: mov     edx, [edx+8Ch]
0x74027C: sub     ax, 1
0x740280: movzx   eax, ax
0x740283: cmp     si, ax
0x740286: movzx   eax, ax
0x740289: push    eax
0x74028A: jnz     short loc_7402B0
0x74028C: lea     eax, [esp+30h+var_14]
0x740290: push    eax
0x740291: call    edx
0x740293: mov     eax, dword ptr [esp+2Ch+var_14]
0x740297: test    eax, eax
0x740299: jz      loc_740385
0x74029F: mov     esi, eax
0x7402A1: add     eax, 4
0x7402A4: push    eax; lpAddend
0x7402A5: call    dword ptr ds:0A2807Ch
0x7402AB: jmp     loc_740373
0x7402B0: lea     eax, [esp+30h+var_18]
0x7402B4: push    eax
0x7402B5: call    edx
0x7402B7: mov     ecx, [edi+5Ch]
0x7402BA: mov     eax, [ecx]
0x7402BC: mov     eax, [eax+8Ch]
0x7402C2: movzx   esi, si
0x7402C5: push    esi
0x7402C6: lea     edx, [esp+30h+var_14]
0x7402CA: push    edx
0x7402CB: mov     [esp+34h+var_4], 0
0x7402D3: call    eax
0x7402D5: mov     eax, dword ptr [esp+2Ch+var_14]
0x7402D9: test    eax, eax
0x7402DB: mov     ebp, ds:0A2807Ch
0x7402E1: jz      short loc_7402FD
0x7402E3: mov     ebx, eax
0x7402E5: add     eax, 4
0x7402E8: push    eax; lpAddend
0x7402E9: call    ebp ; InterlockedDecrement
0x7402EB: test    eax, eax
0x7402ED: jnz     short loc_7402FD
0x7402EF: test    ebx, ebx
0x7402F1: jz      short loc_7402FD
0x7402F3: mov     edx, [ebx]
0x7402F5: mov     eax, [edx]
0x7402F7: push    1
0x7402F9: mov     ecx, ebx
0x7402FB: call    eax
0x7402FD: mov     eax, dword ptr [esp+2Ch+var_18]
0x740301: mov     ecx, [edi+5Ch]
0x740304: mov     edx, [ecx]
0x740306: mov     edx, [edx+90h]
0x74030C: push    eax
0x74030D: push    esi
0x74030E: lea     eax, [esp+34h+var_10]
0x740312: push    eax
0x740313: call    edx
0x740315: mov     eax, [esp+2Ch+var_10]
0x740319: test    eax, eax
0x74031B: jz      short loc_740337
0x74031D: mov     esi, eax
0x74031F: add     eax, 4
0x740322: push    eax; lpAddend
0x740323: call    ebp ; InterlockedDecrement
0x740325: test    eax, eax
0x740327: jnz     short loc_740337
0x740329: test    esi, esi
0x74032B: jz      short loc_740337
0x74032D: mov     eax, [esi]
0x74032F: mov     edx, [eax]
0x740331: push    1
0x740333: mov     ecx, esi
0x740335: call    edx
0x740337: mov     eax, dword ptr [esp+2Ch+var_18]
0x74033B: test    eax, eax
0x74033D: jz      short loc_74035F
0x74033F: mov     esi, eax
0x740341: add     eax, 4
0x740344: push    eax; lpAddend
0x740345: call    ebp ; InterlockedDecrement
0x740347: test    eax, eax
0x740349: jnz     short loc_740359
0x74034B: test    esi, esi
0x74034D: jz      short loc_740359
0x74034F: mov     eax, [esi]
0x740351: mov     edx, [eax]
0x740353: push    1
0x740355: mov     ecx, esi
0x740357: call    edx
0x740359: xor     eax, eax
0x74035B: mov     dword ptr [esp+2Ch+var_18], eax
0x74035F: test    eax, eax
0x740361: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x740369: jz      short loc_740385
0x74036B: mov     esi, eax
0x74036D: add     eax, 4
0x740370: push    eax; lpAddend
0x740371: call    ebp ; InterlockedDecrement
0x740373: test    eax, eax
0x740375: jnz     short loc_740385
0x740377: test    esi, esi
0x740379: jz      short loc_740385
0x74037B: mov     eax, [esi]
0x74037D: mov     edx, [eax]
0x74037F: push    1
0x740381: mov     ecx, esi
0x740383: call    edx
0x740385: mov     eax, [esp+2Ch+arg_0]
0x740389: push    eax
0x74038A: mov     ecx, edi
0x74038C: call    sub_73EFB0
0x740391: mov     ecx, [esp+2Ch+var_C]
0x740395: mov     large fs:0, ecx
0x74039C: pop     ecx
0x74039D: pop     edi
0x74039E: pop     esi
0x74039F: pop     ebp
0x7403A0: pop     ebx
0x7403A1: add     esp, 18h
0x7403A4: retn    4
