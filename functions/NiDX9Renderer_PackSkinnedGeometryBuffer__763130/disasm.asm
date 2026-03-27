0x763130: sub     esp, 1Ch
0x763133: push    ebx
0x763134: push    esi
0x763135: mov     esi, [esp+24h+a2]
0x763139: test    esi, esi
0x76313B: mov     [esp+24h+var_C], ecx
0x76313F: jz      loc_7633BD
0x763145: mov     ebx, [esp+24h+a3]
0x763149: test    ebx, ebx
0x76314B: jz      loc_7633BD
0x763151: mov     ecx, esi
0x763153: call    sub_777F10
0x763158: cmp     byte ptr [esp+24h+a7], 0
0x76315D: mov     byte ptr [esp+24h+a2], al
0x763161: jnz     short loc_76317F
0x763163: test    al, al
0x763165: jz      short loc_76317F
0x763167: mov     ax, [ebx+2Eh]
0x76316B: and     ax, 0F000h
0x76316F: cmp     ax, 4000h
0x763173: jnz     short loc_76317F
0x763175: pop     esi
0x763176: mov     al, 1
0x763178: pop     ebx
0x763179: add     esp, 1Ch
0x76317C: retn    18h
0x76317F: cmp     dword ptr [ebx+20h], 0
0x763183: movzx   ecx, byte ptr [ebx+2Ch]
0x763187: setnz   al
0x76318A: xor     edx, edx
0x76318C: and     ecx, 3Fh
0x76318F: cmp     [ebx+24h], edx
0x763192: jz      short loc_763199
0x763194: mov     edx, 400000h
0x763199: test    al, al
0x76319B: jz      short loc_7631A3
0x76319D: or      edx, offset loc_800000
0x7631A3: shl     ecx, 18h
0x7631A6: or      ecx, edx
0x7631A8: push    ebp
0x7631A9: mov     [esi], ecx
0x7631AB: push    edi
0x7631AC: mov     edi, [esp+2Ch+a5]
0x7631B0: movzx   ecx, word ptr [edi+1Ch]
0x7631B4: mov     eax, [edi+14h]
0x7631B7: movzx   edx, word ptr [edi+1Eh]
0x7631BB: mov     [esp+2Ch+var_8], ecx
0x7631BF: mov     ecx, [edi+18h]
0x7631C2: mov     [esp+2Ch+var_4], ecx
0x7631C6: movzx   ecx, word ptr [edi+22h]
0x7631CA: test    cx, cx
0x7631CD: mov     [esp+2Ch+var_10], eax
0x7631D1: mov     [esp+2Ch+var_14], ecx
0x7631D5: jnz     short loc_7631F0
0x7631D7: movzx   ebp, dx
0x7631DA: lea     edx, [ebp+ebp*2+0]
0x7631DE: mov     [esp+2Ch+var_1C], ebp
0x7631E2: mov     [esp+2Ch+Src], edx
0x7631E6: mov     [esp+2Ch+var_14], 1
0x7631EE: jmp     short loc_763203
0x7631F0: movzx   edx, dx
0x7631F3: movzx   eax, cx
0x7631F6: lea     ecx, [edx+eax*2]
0x7631F9: mov     [esp+2Ch+var_1C], edx
0x7631FD: mov     [esp+2Ch+Src], ecx
0x763201: mov     ebp, edx
0x763203: mov     eax, [esp+2Ch+a6]
0x763207: test    eax, eax
0x763209: jz      short loc_763214
0x76320B: mov     ecx, [eax+20h]
0x76320E: mov     [esp+2Ch+a5], ecx
0x763212: jmp     short loc_763220
0x763214: mov     [esp+2Ch+a5], 1
0x76321C: mov     ecx, [esp+2Ch+a5]
0x763220: movzx   edx, word ptr [ebx+2Eh]
0x763224: mov     ebx, edx
0x763226: and     edx, 0F000h
0x76322C: and     ebx, 0FFFh
0x763232: cmp     edx, 8000h
0x763238: jz      short loc_763241
0x76323A: cmp     byte ptr [esp+2Ch+a7], 0
0x76323F: jz      short loc_763246
0x763241: mov     ebx, 0FFFh
0x763246: cmp     byte ptr [esp+2Ch+a2], 0
0x76324B: jz      short loc_76325C
0x76324D: cmp     ecx, [esi+1Ch]
0x763250: jz      short loc_76329A
0x763252: push    ecx; streamCount
0x763253: mov     ecx, esi; this
0x763255: call    sub_777F70
0x76325A: jmp     short loc_76328D
0x76325C: mov     ebp, [esi+4]
0x76325F: xor     ebx, ebx
0x763261: test    ecx, ecx
0x763263: jbe     short loc_76327E
0x763265: mov     edx, [ebp+0]
0x763268: mov     eax, [edx+1Ch]
0x76326B: push    ebx
0x76326C: push    esi
0x76326D: mov     ecx, ebp
0x76326F: call    eax
0x763271: add     ebx, 1
0x763274: cmp     ebx, [esp+2Ch+a5]
0x763278: jb      short loc_763265
0x76327A: mov     ecx, [esp+2Ch+a5]
0x76327E: push    ecx; streamCount
0x76327F: mov     ecx, esi; this
0x763281: call    sub_777F70
0x763286: mov     dword ptr [esi+34h], 0
0x76328D: mov     ebp, [esp+2Ch+var_1C]
0x763291: mov     ecx, [esp+2Ch+a5]
0x763295: mov     ebx, 0FFFh
0x76329A: movzx   eax, word ptr [esp+2Ch+var_8]
0x76329F: mov     edx, [esp+2Ch+var_10]
0x7632A3: mov     [esi+14h], eax
0x7632A6: mov     [esi+18h], eax
0x7632A9: mov     eax, [esp+2Ch+var_4]
0x7632AD: mov     [esi+48h], eax
0x7632B0: mov     [esi+4Ch], edx
0x7632B3: movzx   edx, word ptr [esp+2Ch+var_14]
0x7632B8: movzx   eax, bx
0x7632BB: test    eax, 0FFFFFFEFh
0x7632C0: mov     [esi+3Ch], ebp
0x7632C3: mov     [esi+40h], ebp
0x7632C6: mov     [esi+44h], edx
0x7632C9: jz      short loc_763347
0x7632CB: xor     eax, eax
0x7632CD: test    ecx, ecx
0x7632CF: mov     [esp+2Ch+a7], eax
0x7632D3: jbe     short loc_763347
0x7632D5: jmp     short loc_7632DB
0x7632D7: mov     eax, [esp+2Ch+a7]
0x7632DB: cmp     eax, [esi+1Ch]
0x7632DE: jnb     short loc_7632E8
0x7632E0: mov     ecx, [esi+24h]
0x7632E3: mov     ebp, [ecx+eax*4]
0x7632E6: jmp     short loc_7632EA
0x7632E8: xor     ebp, ebp
0x7632EA: mov     ecx, [esp+2Ch+a6]
0x7632EE: test    ecx, ecx
0x7632F0: jz      short loc_76330D
0x7632F2: mov     edx, [ecx]
0x7632F4: mov     edx, [edx+6Ch]
0x7632F7: push    0
0x7632F9: push    eax
0x7632FA: mov     eax, [esp+34h+a4]
0x7632FE: push    ebp
0x7632FF: push    ebx
0x763300: push    edi
0x763301: push    eax
0x763302: mov     eax, [esp+44h+a3]
0x763306: push    eax
0x763307: call    edx
0x763309: test    eax, eax
0x76330B: jnz     short loc_763336
0x76330D: cmp     [esp+2Ch+a5], 1
0x763312: jnz     short loc_763389
0x763314: mov     eax, [esp+2Ch+a4]
0x763318: mov     ecx, [esp+2Ch+a3]
0x76331C: mov     edx, [esp+2Ch+var_C]
0x763320: push    0
0x763322: push    ebp
0x763323: push    ebx
0x763324: push    edi
0x763325: push    eax
0x763326: push    ecx
0x763327: mov     ecx, [edx+8B0h]
0x76332D: call    sub_7774C0
0x763332: test    eax, eax
0x763334: jz      short loc_763389
0x763336: mov     eax, [esp+2Ch+a7]
0x76333A: add     eax, 1
0x76333D: cmp     eax, [esp+2Ch+a5]
0x763341: mov     [esp+2Ch+a7], eax
0x763345: jb      short loc_7632D7
0x763347: test    bl, 30h
0x76334A: jz      short loc_7633B1
0x76334C: mov     eax, [esi+2Ch]
0x76334F: mov     ebx, [esi+30h]
0x763352: mov     edx, [esp+2Ch+var_10]
0x763356: mov     [esp+2Ch+a7], eax
0x76335A: mov     al, [esi+10h]
0x76335D: neg     al
0x76335F: lea     ecx, [esp+2Ch+a7]
0x763363: sbb     eax, eax
0x763365: and     eax, 10h
0x763368: push    eax; Dst
0x763369: mov     eax, [esp+30h+Src]
0x76336D: push    1; int
0x76336F: push    ecx; int
0x763370: push    ebx; int
0x763371: push    eax; int
0x763372: push    eax; Src
0x763373: mov     eax, [esp+44h+var_C]
0x763377: mov     ecx, [eax+8B4h]
0x76337D: push    edx; int
0x76337E: call    sub_7781F0
0x763383: mov     edi, eax
0x763385: test    edi, edi
0x763387: jnz     short loc_763395
0x763389: pop     edi
0x76338A: pop     ebp
0x76338B: pop     esi
0x76338C: xor     al, al
0x76338E: pop     ebx
0x76338F: add     esp, 1Ch
0x763392: retn    18h
0x763395: cmp     ebx, edi
0x763397: jz      short loc_7633B1
0x763399: mov     ecx, esi
0x76339B: call    sub_777F40
0x7633A0: mov     ecx, [esp+2Ch+Src]
0x7633A4: mov     edx, [esp+2Ch+a7]
0x7633A8: mov     [esi+30h], edi
0x7633AB: mov     [esi+28h], ecx
0x7633AE: mov     [esi+2Ch], edx
0x7633B1: pop     edi
0x7633B2: pop     ebp
0x7633B3: pop     esi
0x7633B4: mov     al, 1
0x7633B6: pop     ebx
0x7633B7: add     esp, 1Ch
0x7633BA: retn    18h
0x7633BD: pop     esi
0x7633BE: xor     al, al
0x7633C0: pop     ebx
0x7633C1: add     esp, 1Ch
0x7633C4: retn    18h
