0x437790: push    esi
0x437791: mov     esi, ecx
0x437793: cmp     dword ptr [esi+0Ch], 4
0x437797: jl      short loc_4377CD
0x437799: cmp     dword ptr [esi+1Ch], 0
0x43779D: jz      short loc_4377B4
0x43779F: mov     eax, [esi+1Ch]
0x4377A2: movzx   ecx, word ptr [eax+0Ch]
0x4377A6: mov     edx, [eax+10h]
0x4377A9: xor     eax, eax
0x4377AB: cmp     ecx, edx
0x4377AD: setz    al
0x4377B0: test    al, al
0x4377B2: jz      short loc_4377CD
0x4377B4: mov     ecx, [esi+20h]
0x4377B7: call    MagicItem_LoadVFX??
0x4377BC: mov     eax, [esi+8]
0x4377BF: test    eax, eax
0x4377C1: jnz     short loc_4377CD
0x4377C3: mov     edx, [esi]
0x4377C5: mov     eax, [edx]
0x4377C7: push    1
0x4377C9: mov     ecx, esi
0x4377CB: call    eax
0x4377CD: pop     esi
0x4377CE: retn
