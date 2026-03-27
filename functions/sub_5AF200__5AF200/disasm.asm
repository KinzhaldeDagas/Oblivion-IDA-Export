0x5AF200: fldz
0x5AF202: push    ebx
0x5AF203: push    ebp
0x5AF204: push    edi
0x5AF205: mov     edi, ecx
0x5AF207: mov     eax, [edi+160h]
0x5AF20D: fst     dword ptr [edi+158h]
0x5AF213: lea     eax, [eax+eax*4]
0x5AF216: fstp    dword ptr [edi+14Ch]
0x5AF21C: lea     eax, [edi+eax*8]
0x5AF21F: mov     dword ptr [edi+150h], 4
0x5AF229: cmp     byte ptr [eax+95h], 0
0x5AF230: jnz     short loc_5AF23D
0x5AF232: fld     dword ptr [edi+6Ch]
0x5AF235: fchs
0x5AF237: fstp    dword ptr [eax+90h]
0x5AF23D: mov     ecx, ds:0B333C4h
0x5AF243: push    1Eh
0x5AF245: call    Actor_GetSkillMasteryLevel
0x5AF24A: test    eax, eax
0x5AF24C: jnz     short loc_5AF252
0x5AF24E: xor     ebx, ebx
0x5AF250: jmp     short loc_5AF27B
0x5AF252: cmp     eax, 1
0x5AF255: jnz     short loc_5AF25B
0x5AF257: mov     ebx, eax
0x5AF259: jmp     short loc_5AF27B
0x5AF25B: cmp     eax, 2
0x5AF25E: jnz     short loc_5AF264
0x5AF260: mov     ebx, eax
0x5AF262: jmp     short loc_5AF27B
0x5AF264: cmp     eax, 3
0x5AF267: jnz     short loc_5AF26D
0x5AF269: mov     ebx, eax
0x5AF26B: jmp     short loc_5AF27B
0x5AF26D: xor     ebx, ebx
0x5AF26F: cmp     eax, 4
0x5AF272: setnz   bl
0x5AF275: sub     ebx, 1
0x5AF278: and     ebx, 4
0x5AF27B: mov     ecx, ds:0B35ECCh
0x5AF281: push    ecx
0x5AF282: mov     ecx, ds:0B333C4h
0x5AF288: call    TESObjectREF_GetItemCount
0x5AF28D: test    eax, eax
0x5AF28F: jz      short loc_5AF294
0x5AF291: add     ebx, 1
0x5AF294: xor     ebp, ebp
0x5AF296: cmp     [edi+4Ch], ebp
0x5AF299: jle     short loc_5AF2F0
0x5AF29B: push    esi
0x5AF29C: lea     esi, [edi+95h]
0x5AF2A2: cmp     byte ptr [esi], 0
0x5AF2A5: jz      short loc_5AF2E4
0x5AF2A7: test    ebx, ebx
0x5AF2A9: jg      short loc_5AF2E1
0x5AF2AB: mov     ecx, [esi+0Bh]
0x5AF2AE: test    ecx, ecx
0x5AF2B0: mov     byte ptr [esi], 0
0x5AF2B3: mov     byte ptr [esi-1], 1
0x5AF2B7: mov     byte ptr [esi+1], 1
0x5AF2BB: fld     dword ptr [edi+6Ch]
0x5AF2BE: fchs
0x5AF2C0: mov     dword ptr [esi-15h], 0FFFFFFFFh
0x5AF2C7: fstp    dword ptr [esi-5]
0x5AF2CA: jz      short loc_5AF2E4
0x5AF2CC: call    sub_6B7260
0x5AF2D1: test    al, al
0x5AF2D3: jnz     short loc_5AF2E4
0x5AF2D5: mov     ecx, [esi+0Bh]
0x5AF2D8: push    1
0x5AF2DA: call    sub_6B7190
0x5AF2DF: jmp     short loc_5AF2E4
0x5AF2E1: sub     ebx, 1
0x5AF2E4: add     ebp, 1
0x5AF2E7: add     esi, 28h ; '('
0x5AF2EA: cmp     ebp, [edi+4Ch]
0x5AF2ED: jl      short loc_5AF2A2
0x5AF2EF: pop     esi
0x5AF2F0: pop     edi
0x5AF2F1: pop     ebp
0x5AF2F2: pop     ebx
0x5AF2F3: retn
