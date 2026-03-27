0x891160: push    ebp
0x891161: mov     ebp, ecx
0x891163: xor     eax, eax
0x891165: test    dword ptr [ebp+1F4h], 8000h
0x89116F: jz      loc_891227
0x891175: mov     ecx, [ebp+364h]
0x89117B: test    ecx, ecx
0x89117D: push    ebx
0x89117E: push    esi
0x89117F: push    edi
0x891180: jz      loc_891218
0x891186: push    eax
0x891187: call    sub_89F6B0
0x89118C: test    eax, eax
0x89118E: jz      loc_891218
0x891194: mov     edx, [eax]
0x891196: mov     ecx, eax
0x891198: mov     eax, [edx+8]
0x89119B: call    eax
0x89119D: test    eax, eax
0x89119F: jz      short loc_891218
0x8911A1: cmp     word ptr [eax+0B6h], 0
0x8911A9: ja      short loc_8911AF
0x8911AB: xor     eax, eax
0x8911AD: jmp     short loc_8911B7
0x8911AF: mov     ecx, [eax+0B0h]
0x8911B5: mov     eax, [ecx]
0x8911B7: push    eax
0x8911B8: push    offset dword_B3FAB0
0x8911BD: call    NiRTTI_Cast
0x8911C2: mov     ebx, eax
0x8911C4: add     esp, 8
0x8911C7: test    ebx, ebx
0x8911C9: jz      short loc_891218
0x8911CB: movzx   esi, word ptr [ebx+0B6h]
0x8911D2: test    esi, esi
0x8911D4: jz      short loc_891218
0x8911D6: jmp     short loc_8911E0
0x8911D8: align 10h
0x8911E0: movzx   edx, word ptr [ebx+0B6h]
0x8911E7: sub     esi, 1
0x8911EA: cmp     edx, esi
0x8911EC: jbe     short loc_891214
0x8911EE: mov     eax, [ebx+0B0h]
0x8911F4: mov     edi, [eax+esi*4]
0x8911F7: test    edi, edi
0x8911F9: jz      short loc_891214
0x8911FB: mov     eax, [edi+8]
0x8911FE: test    eax, eax
0x891200: jz      short loc_891214
0x891202: push    offset aBhkcoldisp; "bhkColDisp"
0x891207: push    eax; Str1
0x891208: call    __strcmp
0x89120D: add     esp, 8
0x891210: test    eax, eax
0x891212: jz      short loc_891229
0x891214: test    esi, esi
0x891216: jnz     short loc_8911E0
0x891218: and     dword ptr [ebp+1F4h], 0FFFF7FFFh
0x891222: pop     edi
0x891223: pop     esi
0x891224: xor     eax, eax
0x891226: pop     ebx
0x891227: pop     ebp
0x891228: retn
0x891229: mov     eax, edi
0x89122B: pop     edi
0x89122C: pop     esi
0x89122D: pop     ebx
0x89122E: pop     ebp
0x89122F: retn
