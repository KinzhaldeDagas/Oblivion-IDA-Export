0x488100: push    ecx
0x488101: push    ebx
0x488102: push    ebp
0x488103: mov     ebx, ecx
0x488105: mov     ecx, [ebx+4]; this
0x488108: test    ecx, ecx
0x48810A: push    esi
0x48810B: push    edi
0x48810C: mov     [esp+14h+var_4], 0
0x488114: jz      short loc_48811D
0x488116: call    TESObjectREFR_GetContainer
0x48811B: jmp     short loc_48811F
0x48811D: xor     eax, eax
0x48811F: lea     esi, [eax+8]
0x488122: test    esi, esi
0x488124: jz      loc_4881DC
0x48812A: lea     ebx, [ebx+0]
0x488130: cmp     dword ptr [esi+4], 0
0x488134: jnz     short loc_48813F
0x488136: cmp     dword ptr [esi], 0
0x488139: jz      loc_4881DC
0x48813F: cmp     [esp+14h+arg_0], 0
0x488144: mov     eax, [esi]
0x488146: mov     edi, [eax+4]
0x488149: jnz     short loc_488158
0x48814B: mov     edx, [edi]
0x48814D: mov     eax, [edx+78h]
0x488150: mov     ecx, edi
0x488152: call    eax
0x488154: test    al, al
0x488156: jnz     short loc_4881D1
0x488158: cmp     [esp+14h+arg_4], 0
0x48815D: jnz     short loc_488165
0x48815F: cmp     dword ptr [edi+0Ch], 0Fh
0x488163: jz      short loc_4881D1
0x488165: push    edi
0x488166: call    sub_470520
0x48816B: mov     ebp, eax
0x48816D: add     esp, 4
0x488170: cmp     ebp, 0FFFFFFFFh
0x488173: jz      short loc_4881D1
0x488175: test    ebp, ebp
0x488177: jz      short loc_4881D1
0x488179: mov     ecx, [ebx]
0x48817B: test    ecx, ecx
0x48817D: mov     al, 1
0x48817F: jz      short loc_4881B2
0x488181: test    al, al
0x488183: jz      short loc_4881A8
0x488185: mov     edx, [ecx]
0x488187: test    edx, edx
0x488189: jz      short loc_488194
0x48818B: cmp     [edx+8], edi
0x48818E: jnz     short loc_488194
0x488190: xor     al, al
0x488192: jmp     short loc_488197
0x488194: mov     ecx, [ecx+4]
0x488197: test    ecx, ecx
0x488199: jnz     short loc_488181
0x48819B: mov     ecx, [esi]
0x48819D: mov     edx, [ecx]
0x48819F: imul    edx, ebp
0x4881A2: add     [esp+14h+var_4], edx
0x4881A6: jmp     short loc_4881D1
0x4881A8: test    ecx, ecx
0x4881AA: jz      short loc_4881B2
0x4881AC: mov     ecx, [ecx]
0x4881AE: test    ecx, ecx
0x4881B0: jnz     short loc_4881BF
0x4881B2: mov     ecx, [esi]
0x4881B4: mov     edx, [ecx]
0x4881B6: imul    edx, ebp
0x4881B9: add     [esp+14h+var_4], edx
0x4881BD: jmp     short loc_4881D1
0x4881BF: mov     eax, [esi]
0x4881C1: mov     ecx, [ecx+4]
0x4881C4: mov     edx, [eax]
0x4881C6: add     ecx, edx
0x4881C8: jz      short loc_4881D1
0x4881CA: imul    ecx, ebp
0x4881CD: add     [esp+14h+var_4], ecx
0x4881D1: mov     esi, [esi+4]
0x4881D4: test    esi, esi
0x4881D6: jnz     loc_488130
0x4881DC: mov     ebp, [ebx]
0x4881DE: test    ebp, ebp
0x4881E0: jz      loc_48826C
0x4881E6: mov     edi, [ebp+0]
0x4881E9: test    edi, edi
0x4881EB: jz      short loc_48826C
0x4881ED: mov     esi, [edi+8]
0x4881F0: test    esi, esi
0x4881F2: jz      short loc_488261
0x4881F4: mov     ecx, [ebx+4]; this
0x4881F7: test    ecx, ecx
0x4881F9: jz      short loc_488220
0x4881FB: call    TESObjectREFR_GetContainer
0x488200: test    eax, eax
0x488202: jz      short loc_488220
0x488204: mov     ecx, [ebx+4]; this
0x488207: test    ecx, ecx
0x488209: jz      short loc_488212
0x48820B: call    TESObjectREFR_GetContainer
0x488210: jmp     short loc_488214
0x488212: xor     eax, eax
0x488214: push    esi; a2
0x488215: mov     ecx, eax; this
0x488217: call    TESContainer_HasForm
0x48821C: test    al, al
0x48821E: jnz     short loc_488261
0x488220: cmp     [esp+14h+arg_0], 0
0x488225: jnz     short loc_488234
0x488227: mov     eax, [esi]
0x488229: mov     edx, [eax+78h]
0x48822C: mov     ecx, esi
0x48822E: call    edx
0x488230: test    al, al
0x488232: jnz     short loc_488261
0x488234: cmp     [esp+14h+arg_4], 0
0x488239: jnz     short loc_488241
0x48823B: cmp     dword ptr [esi+0Ch], 0Fh
0x48823F: jz      short loc_488261
0x488241: push    esi
0x488242: call    sub_470520
0x488247: add     esp, 4
0x48824A: cmp     eax, 0FFFFFFFFh
0x48824D: jz      short loc_488261
0x48824F: test    eax, eax
0x488251: jz      short loc_488261
0x488253: mov     ecx, [edi+4]
0x488256: test    ecx, ecx
0x488258: jz      short loc_488261
0x48825A: imul    ecx, eax
0x48825D: add     [esp+14h+var_4], ecx
0x488261: mov     ebp, [ebp+4]
0x488264: test    ebp, ebp
0x488266: jnz     loc_4881E6
0x48826C: mov     eax, [esp+14h+var_4]
0x488270: pop     edi
0x488271: pop     esi
0x488272: pop     ebp
0x488273: pop     ebx
0x488274: pop     ecx
0x488275: retn    8
