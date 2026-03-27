0x778350: sub     esp, 18h
0x778353: push    edi
0x778354: mov     edi, ecx
0x778356: cmp     dword ptr [edi+8], 0
0x77835A: mov     [esp+1Ch+var_18], edi
0x77835E: jnz     short loc_778369
0x778360: xor     eax, eax
0x778362: pop     edi
0x778363: add     esp, 18h
0x778366: retn    10h
0x778369: push    ebx
0x77836A: mov     ebx, [esp+20h+arg_0]
0x77836E: test    ebx, ebx
0x778370: jnz     short loc_77837C
0x778372: pop     ebx
0x778373: xor     eax, eax
0x778375: pop     edi
0x778376: add     esp, 18h
0x778379: retn    10h
0x77837C: push    ebp
0x77837D: lea     ebp, [ebx+ebx*2]
0x778380: add     ebp, ebp
0x778382: push    esi
0x778383: mov     esi, [edi+0Ch]
0x778386: add     ebp, ebp
0x778388: test    esi, esi
0x77838A: jz      short loc_7783F8
0x77838C: xor     eax, eax
0x77838E: lea     ecx, [esp+28h+var_14]
0x778392: mov     [esp+28h+var_14], eax
0x778396: mov     [esp+28h+var_10], eax
0x77839A: mov     [esp+28h+var_C], eax
0x77839E: mov     [esp+28h+var_8], eax
0x7783A2: mov     [esp+28h+var_4], eax
0x7783A6: mov     eax, [esi]
0x7783A8: mov     edx, [eax+34h]
0x7783AB: push    ecx
0x7783AC: push    esi
0x7783AD: call    edx
0x7783AF: test    eax, eax
0x7783B1: jl      short loc_7783F8
0x7783B3: cmp     [esp+28h+var_14], 65h ; 'e'
0x7783B8: jnz     short loc_7783F0
0x7783BA: cmp     [esp+28h+var_10], 7
0x7783BF: jnz     short loc_7783F0
0x7783C1: mov     eax, [esp+28h+arg_8]
0x7783C5: cmp     [esp+28h+var_C], eax
0x7783C9: jnz     short loc_7783F0
0x7783CB: mov     ecx, [esp+28h+arg_C]
0x7783CF: cmp     [esp+28h+var_8], ecx
0x7783D3: jnz     short loc_7783F0
0x7783D5: cmp     [esp+28h+var_4], ebp
0x7783D9: jb      short loc_7783F0
0x7783DB: cmp     byte ptr [esp+28h+arg_4], 0
0x7783E0: mov     edi, esi
0x7783E2: jnz     short loc_778459
0x7783E4: mov     eax, esi
0x7783E6: pop     esi
0x7783E7: pop     ebp
0x7783E8: pop     ebx
0x7783E9: pop     edi
0x7783EA: add     esp, 18h
0x7783ED: retn    10h
0x7783F0: mov     edx, [esi]
0x7783F2: mov     eax, [edx+8]
0x7783F5: push    esi
0x7783F6: call    eax
0x7783F8: mov     eax, [edi+8]
0x7783FB: push    0
0x7783FD: lea     edx, [esp+2Ch+arg_4]
0x778401: push    edx
0x778402: mov     edx, [esp+30h+arg_C]
0x778406: push    edx
0x778407: mov     edx, [esp+34h+arg_8]
0x77840B: push    65h ; 'e'
0x77840D: push    edx
0x77840E: mov     [esp+3Ch+arg_4], 0
0x778416: mov     ecx, [eax]
0x778418: push    ebp
0x778419: push    eax
0x77841A: mov     eax, [ecx+6Ch]
0x77841D: call    eax
0x77841F: test    eax, eax
0x778421: jge     short loc_778438
0x778423: push    offset aNidx9indexbuff; "NiDX9IndexBufferManager::CreateIndexBuf"...
0x778428: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x77842D: add     esp, 4
0x778430: xor     edi, edi
0x778432: mov     [esp+28h+arg_4], edi
0x778436: jmp     short loc_77843C
0x778438: mov     edi, [esp+28h+arg_4]
0x77843C: test    edi, edi
0x77843E: jnz     short loc_778459
0x778440: push    offset aNidx9indexbu_2; "NiDX9IndexBufferManager::ResizeTempPoin"...
0x778445: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x77844A: add     esp, 4
0x77844D: pop     esi
0x77844E: pop     ebp
0x77844F: pop     ebx
0x778450: xor     eax, eax
0x778452: pop     edi
0x778453: add     esp, 18h
0x778456: retn    10h
0x778459: mov     ecx, [edi]
0x77845B: mov     eax, [ecx+2Ch]
0x77845E: xor     esi, esi
0x778460: push    esi
0x778461: lea     edx, [esp+2Ch+arg_C]
0x778465: push    edx
0x778466: push    ebp
0x778467: push    esi
0x778468: push    edi
0x778469: mov     [esp+3Ch+arg_C], esi
0x77846D: call    eax
0x77846F: test    eax, eax
0x778471: jl      short loc_7784C2
0x778473: test    ebx, ebx
0x778475: mov     eax, [esp+24h+arg_10]
0x778479: jbe     short loc_7784B8
0x77847B: jmp     short loc_778480
0x77847D: align 10h
0x778480: movzx   ecx, si
0x778483: mov     [eax], cx
0x778486: add     eax, 2
0x778489: lea     edx, [ecx+1]
0x77848C: mov     [eax], dx
0x77848F: add     eax, 2
0x778492: lea     edx, [ecx+2]
0x778495: mov     [eax], dx
0x778498: add     eax, 2
0x77849B: mov     [eax], cx
0x77849E: add     eax, 2
0x7784A1: mov     [eax], dx
0x7784A4: add     eax, 2
0x7784A7: add     ecx, 3
0x7784AA: mov     [eax], cx
0x7784AD: add     eax, 2
0x7784B0: add     esi, 4
0x7784B3: sub     ebx, 1
0x7784B6: jnz     short loc_778480
0x7784B8: mov     eax, [edi]
0x7784BA: mov     ecx, [eax+30h]
0x7784BD: push    edi
0x7784BE: call    ecx
0x7784C0: jmp     short loc_7784E1
0x7784C2: push    offset aNidx9indexbu_1; "NiDX9IndexBufferManager::PackBuffer> Fa"...
0x7784C7: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7784CC: mov     edx, [edi]
0x7784CE: mov     eax, [edx+30h]
0x7784D1: add     esp, 4
0x7784D4: push    edi
0x7784D5: call    eax
0x7784D7: mov     ecx, [edi]
0x7784D9: mov     edx, [ecx+8]
0x7784DC: push    edi
0x7784DD: call    edx
0x7784DF: xor     edi, edi
0x7784E1: mov     eax, [esp+28h+var_18]
0x7784E5: pop     esi
0x7784E6: mov     [eax+10h], ebp
0x7784E9: pop     ebp
0x7784EA: mov     [eax+0Ch], edi
0x7784ED: pop     ebx
0x7784EE: mov     eax, edi
0x7784F0: pop     edi
0x7784F1: add     esp, 18h
0x7784F4: retn    10h
