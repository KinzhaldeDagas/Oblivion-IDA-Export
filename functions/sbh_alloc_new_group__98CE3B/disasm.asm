0x98CE3B: push    ebp
0x98CE3C: mov     ebp, esp
0x98CE3E: push    ecx
0x98CE3F: push    ecx
0x98CE40: mov     ecx, [ebp+arg_0]
0x98CE43: mov     eax, [ecx+8]
0x98CE46: push    ebx
0x98CE47: push    esi
0x98CE48: mov     esi, [ecx+10h]
0x98CE4B: push    edi
0x98CE4C: xor     ebx, ebx
0x98CE4E: jmp     short loc_98CE53
0x98CE50: add     eax, eax
0x98CE52: inc     ebx
0x98CE53: test    eax, eax
0x98CE55: jge     short loc_98CE50
0x98CE57: mov     eax, ebx
0x98CE59: imul    eax, 204h
0x98CE5F: lea     eax, [eax+esi+144h]
0x98CE66: push    3Fh ; '?'
0x98CE68: mov     [ebp+var_8], eax
0x98CE6B: pop     edx
0x98CE6C: mov     [eax+8], eax
0x98CE6F: mov     [eax+4], eax
0x98CE72: add     eax, 8
0x98CE75: dec     edx
0x98CE76: jnz     short loc_98CE6C
0x98CE78: push    4; flAllocationType
0x98CE7A: mov     edi, ebx
0x98CE7C: push    1000h; flAllocationType
0x98CE81: shl     edi, 0Fh
0x98CE84: add     edi, [ecx+0Ch]
0x98CE87: push    8000h; dwSize
0x98CE8C: push    edi; lpAddress
0x98CE8D: call    ds:VirtualAlloc
0x98CE93: test    eax, eax
0x98CE95: jnz     short loc_98CE9F
0x98CE97: or      eax, 0FFFFFFFFh
0x98CE9A: jmp     loc_98CF3C
0x98CE9F: lea     edx, [edi+7000h]
0x98CEA5: cmp     edi, edx
0x98CEA7: mov     [ebp+var_4], edx
0x98CEAA: ja      short loc_98CEEF
0x98CEAC: mov     ecx, edx
0x98CEAE: sub     ecx, edi
0x98CEB0: shr     ecx, 0Ch
0x98CEB3: lea     eax, [edi+10h]
0x98CEB6: inc     ecx
0x98CEB7: or      dword ptr [eax-8], 0FFFFFFFFh
0x98CEBB: or      dword ptr [eax+0FECh], 0FFFFFFFFh
0x98CEC2: lea     edx, [eax+0FFCh]
0x98CEC8: mov     [eax], edx
0x98CECA: lea     edx, [eax-1004h]
0x98CED0: mov     dword ptr [eax-4], 0FF0h
0x98CED7: mov     [eax+4], edx
0x98CEDA: mov     dword ptr [eax+0FE8h], 0FF0h
0x98CEE4: add     eax, 1000h
0x98CEE9: dec     ecx
0x98CEEA: jnz     short loc_98CEB7
0x98CEEC: mov     edx, [ebp+var_4]
0x98CEEF: mov     eax, [ebp+var_8]
0x98CEF2: add     eax, 1F8h
0x98CEF7: lea     ecx, [edi+0Ch]
0x98CEFA: mov     [eax+4], ecx
0x98CEFD: mov     [ecx+8], eax
0x98CF00: lea     ecx, [edx+0Ch]
0x98CF03: mov     [eax+8], ecx
0x98CF06: mov     [ecx+4], eax
0x98CF09: and     dword ptr [esi+ebx*4+44h], 0
0x98CF0E: xor     edi, edi
0x98CF10: inc     edi
0x98CF11: mov     [esi+ebx*4+0C4h], edi
0x98CF18: mov     al, [esi+43h]
0x98CF1B: mov     cl, al
0x98CF1D: inc     cl
0x98CF1F: test    al, al
0x98CF21: mov     eax, [ebp+arg_0]
0x98CF24: mov     [esi+43h], cl
0x98CF27: jnz     short loc_98CF2C
0x98CF29: or      [eax+4], edi
0x98CF2C: mov     edx, 80000000h
0x98CF31: mov     ecx, ebx
0x98CF33: shr     edx, cl
0x98CF35: not     edx
0x98CF37: and     [eax+8], edx
0x98CF3A: mov     eax, ebx
0x98CF3C: pop     edi
0x98CF3D: pop     esi
0x98CF3E: pop     ebx
0x98CF3F: leave
0x98CF40: retn
