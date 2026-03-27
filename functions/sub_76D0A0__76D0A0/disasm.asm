0x76D0A0: push    ecx
0x76D0A1: push    ebp
0x76D0A2: mov     ebp, ecx
0x76D0A4: cmp     dword ptr [ebp+3Ch], 0
0x76D0A8: push    esi
0x76D0A9: lea     esi, [ebp+3Ch]
0x76D0AC: jnz     loc_76D1F5
0x76D0B2: push    ebx
0x76D0B3: lea     eax, [esp+10h+var_4]
0x76D0B7: push    edi
0x76D0B8: push    eax
0x76D0B9: call    sub_7606A0
0x76D0BE: mov     ecx, [esi]
0x76D0C0: mov     edi, eax
0x76D0C2: add     esp, 4
0x76D0C5: cmp     ecx, [edi]
0x76D0C7: jz      short loc_76D0E4
0x76D0C9: test    ecx, ecx
0x76D0CB: jz      short loc_76D0D8
0x76D0CD: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x76D0D1: jnz     short loc_76D0D8
0x76D0D3: call    sub_7604D0
0x76D0D8: mov     eax, [edi]
0x76D0DA: test    eax, eax
0x76D0DC: mov     [esi], eax
0x76D0DE: jz      short loc_76D0E4
0x76D0E0: add     dword ptr [eax+60h], 1
0x76D0E4: mov     eax, [esp+14h+var_4]
0x76D0E8: test    eax, eax
0x76D0EA: jz      short loc_76D0FF
0x76D0EC: add     dword ptr [eax+60h], 0FFFFFFFFh
0x76D0F0: mov     ecx, eax
0x76D0F2: add     eax, 60h ; '`'
0x76D0F5: cmp     dword ptr [eax], 0
0x76D0F8: jnz     short loc_76D0FF
0x76D0FA: call    sub_7604D0
0x76D0FF: mov     edi, [esi]
0x76D101: cmp     dword ptr [edi+30h], 0
0x76D105: jnz     short loc_76D10F
0x76D107: call    sub_772DF0
0x76D10C: mov     [edi+30h], eax
0x76D10F: mov     ecx, [edi+30h]
0x76D112: push    1
0x76D114: push    7
0x76D116: push    0A8h ; '¨'
0x76D11B: call    sub_772CD0
0x76D120: movzx   ecx, word ptr [ebp+48h]
0x76D124: mov     ebx, [ebp+38h]
0x76D127: cmp     ebx, ecx
0x76D129: lea     edi, [ebp+40h]
0x76D12C: jb      short loc_76D13C
0x76D12E: movzx   edx, word ptr [edi+0Eh]
0x76D132: add     edx, ebx
0x76D134: push    edx
0x76D135: mov     ecx, edi
0x76D137: call    sub_76CCA0
0x76D13C: push    esi
0x76D13D: push    ebx
0x76D13E: mov     ecx, edi
0x76D140: call    sub_76CE40
0x76D145: cmp     dword ptr [ebp+38h], 0
0x76D149: jz      short loc_76D1C6
0x76D14B: mov     ebx, [esp+14h+arg_0]
0x76D14F: cmp     ebx, 2
0x76D152: jnz     short loc_76D16A
0x76D154: cmp     [esp+14h+arg_4], 1
0x76D159: jnz     short loc_76D16A
0x76D15B: mov     ecx, [esi]
0x76D15D: push    1
0x76D15F: push    0
0x76D161: push    1Bh
0x76D163: call    sub_76C730
0x76D168: jmp     short loc_76D1C6
0x76D16A: mov     edi, [esi]
0x76D16C: cmp     dword ptr [edi+30h], 0
0x76D170: jnz     short loc_76D17A
0x76D172: call    sub_772DF0
0x76D177: mov     [edi+30h], eax
0x76D17A: mov     ecx, [edi+30h]
0x76D17D: push    0
0x76D17F: push    ebx
0x76D180: push    13h
0x76D182: call    sub_772CD0
0x76D187: mov     edi, [esi]
0x76D189: cmp     dword ptr [edi+30h], 0
0x76D18D: jnz     short loc_76D197
0x76D18F: call    sub_772DF0
0x76D194: mov     [edi+30h], eax
0x76D197: mov     eax, [esp+14h+arg_4]
0x76D19B: mov     ecx, [edi+30h]
0x76D19E: push    0
0x76D1A0: push    eax
0x76D1A1: push    14h
0x76D1A3: call    sub_772CD0
0x76D1A8: mov     esi, [esi]
0x76D1AA: cmp     dword ptr [esi+30h], 0
0x76D1AE: jnz     short loc_76D1B8
0x76D1B0: call    sub_772DF0
0x76D1B5: mov     [esi+30h], eax
0x76D1B8: mov     ecx, [esi+30h]
0x76D1BB: push    1
0x76D1BD: push    1
0x76D1BF: push    1Bh
0x76D1C1: call    sub_772CD0
0x76D1C6: mov     al, [esp+14h+arg_8]
0x76D1CA: test    al, al
0x76D1CC: mov     cl, [esp+14h+arg_C]
0x76D1D0: mov     [ebp+50h], al
0x76D1D3: mov     [ebp+51h], cl
0x76D1D6: mov     edx, ds:0B28CB0h
0x76D1DC: mov     [ebp+58h], edx
0x76D1DF: mov     ecx, ds:0B28CB4h
0x76D1E5: pop     edi
0x76D1E6: mov     [ebp+5Ch], ecx
0x76D1E9: pop     ebx
0x76D1EA: jz      short loc_76D1F5
0x76D1EC: or      eax, 0FFFFFFFFh
0x76D1EF: add     [ebp+58h], eax
0x76D1F2: add     [ebp+5Ch], eax
0x76D1F5: pop     esi
0x76D1F6: pop     ebp
0x76D1F7: pop     ecx
0x76D1F8: retn    10h
