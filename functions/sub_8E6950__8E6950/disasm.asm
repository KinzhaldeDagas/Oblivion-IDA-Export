0x8E6950: push    ebp
0x8E6951: mov     ebp, esp
0x8E6953: and     esp, 0FFFFFFF0h
0x8E6956: sub     esp, 64h
0x8E6959: mov     eax, [ebp+arg_10]
0x8E695C: mov     ecx, [eax]
0x8E695E: push    ebx
0x8E695F: push    esi
0x8E6960: push    edi
0x8E6961: mov     edi, [ebp+arg_0]
0x8E6964: movzx   eax, word ptr [edi+16h]
0x8E6968: mov     [esp+70h+var_54], ecx
0x8E696C: cmp     [edi+10h], eax
0x8E696F: jnz     short loc_8E69BD
0x8E6971: mov     ecx, large fs:2Ch
0x8E6978: mov     edx, ds:0BA9DE4h
0x8E697E: mov     edx, [ecx+edx*4]
0x8E6981: mov     ecx, [edx+19Ch]
0x8E6987: push    24h ; '$'
0x8E6989: push    eax
0x8E698A: call    sub_8A7560
0x8E698F: mov     ecx, [edi+4]
0x8E6992: mov     esi, eax
0x8E6994: mov     eax, [edi+8]
0x8E6997: and     eax, 3FFFFFFFh
0x8E699C: cmp     ecx, eax
0x8E699E: jnz     short loc_8E69AB
0x8E69A0: push    4
0x8E69A2: push    edi
0x8E69A3: call    sub_8A6EE0
0x8E69A8: add     esp, 8
0x8E69AB: mov     ecx, [edi+4]
0x8E69AE: mov     edx, [edi]
0x8E69B0: mov     [edx+ecx*4], esi
0x8E69B3: inc     dword ptr [edi+4]
0x8E69B6: mov     dword ptr [edi+10h], 0
0x8E69BD: mov     ecx, [edi+4]
0x8E69C0: mov     edx, [edi]
0x8E69C2: mov     esi, [edx+ecx*4-4]
0x8E69C6: mov     eax, [edi+10h]
0x8E69C9: movzx   ecx, word ptr [edi+14h]
0x8E69CD: mov     edx, [ebp+arg_14]
0x8E69D0: mov     ebx, [ebp+arg_8]
0x8E69D3: add     esi, eax
0x8E69D5: add     ecx, eax
0x8E69D7: mov     eax, [ebp+arg_4]
0x8E69DA: mov     [edi+10h], ecx
0x8E69DD: mov     [esi+10h], edx
0x8E69E0: mov     [esi+14h], eax
0x8E69E3: mov     [esi+18h], ebx
0x8E69E6: mov     cx, [eax+28h]
0x8E69EA: mov     [esi+0Ch], cx
0x8E69EE: mov     dx, [ebx+28h]
0x8E69F2: mov     [esi+0Eh], dx
0x8E69F6: mov     edx, [eax+2Ch]
0x8E69F9: lea     ecx, [eax+24h]
0x8E69FC: and     edx, 3FFFFFFFh
0x8E6A02: cmp     [ecx+4], edx
0x8E6A05: jnz     short loc_8E6A15
0x8E6A07: push    8
0x8E6A09: push    ecx
0x8E6A0A: call    sub_8A6EE0
0x8E6A0F: mov     eax, [ebp+arg_4]
0x8E6A12: add     esp, 8
0x8E6A15: mov     ecx, [eax+28h]
0x8E6A18: mov     edx, [eax+24h]
0x8E6A1B: lea     edx, [edx+ecx*8]
0x8E6A1E: inc     ecx
0x8E6A1F: mov     [eax+28h], ecx
0x8E6A22: lea     ecx, [ebx+24h]
0x8E6A25: mov     [esp+70h+var_5C], edx
0x8E6A29: mov     edx, [ecx+8]
0x8E6A2C: and     edx, 3FFFFFFFh
0x8E6A32: cmp     [ecx+4], edx
0x8E6A35: jnz     short loc_8E6A45
0x8E6A37: push    8
0x8E6A39: push    ecx
0x8E6A3A: call    sub_8A6EE0
0x8E6A3F: mov     eax, [ebp+arg_4]
0x8E6A42: add     esp, 8
0x8E6A45: mov     ecx, [ebx+28h]
0x8E6A48: mov     edx, [ebx+24h]
0x8E6A4B: lea     edx, [edx+ecx*8]
0x8E6A4E: inc     ecx
0x8E6A4F: mov     [ebx+28h], ecx
0x8E6A52: mov     [esp+70h+var_58], edx
0x8E6A56: mov     edx, [esp+70h+var_5C]
0x8E6A5A: mov     ecx, [esp+70h+var_58]
0x8E6A5E: mov     [edx], esi
0x8E6A60: mov     [ecx], esi
0x8E6A62: mov     [edx+4], ebx
0x8E6A65: mov     edx, [ebp+arg_10]
0x8E6A68: mov     [ecx+4], eax
0x8E6A6B: mov     ecx, [esi+10h]
0x8E6A6E: mov     [esp+70h+var_44], ecx
0x8E6A72: mov     ecx, [ebx+8]
0x8E6A75: mov     [esp+70h+var_48], edx
0x8E6A79: mov     edx, [eax+8]
0x8E6A7C: push    ecx
0x8E6A7D: push    edx
0x8E6A7E: lea     ecx, [esp+78h+var_40]
0x8E6A82: mov     [esp+78h+var_50], eax
0x8E6A86: mov     [esp+78h+var_4C], ebx
0x8E6A8A: call    sub_8B1FF0
0x8E6A8F: movzx   edx, word ptr [ebx+1Ah]
0x8E6A93: mov     eax, [ebp+arg_4]
0x8E6A96: movzx   ecx, word ptr [eax+1Ah]
0x8E6A9A: lea     eax, [edx+ecx*8]
0x8E6A9D: mov     ecx, [ebp+arg_10]
0x8E6AA0: mov     edx, [ecx]
0x8E6AA2: mov     al, [eax+edx+19D4h]
0x8E6AA9: mov     [esi+8], al
0x8E6AAC: mov     edx, [ecx]
0x8E6AAE: movsx   eax, al
0x8E6AB1: imul    eax, 3Ch ; '<'
0x8E6AB4: lea     eax, [eax+edx+1A14h]
0x8E6ABB: mov     [ecx+28h], eax
0x8E6ABE: mov     eax, [ebp+arg_C]
0x8E6AC1: mov     ecx, [esp+70h+var_54]
0x8E6AC5: mov     edx, eax
0x8E6AC7: imul    edx, 34h ; '4'
0x8E6ACA: mov     [esi+1], al
0x8E6ACD: mov     ebx, [edx+ecx+16B8h]
0x8E6AD4: test    ebx, ebx
0x8E6AD6: jz      short loc_8E6AEE
0x8E6AD8: xorps   xmm0, xmm0
0x8E6ADB: mov     byte ptr [esi], 4
0x8E6ADE: mov     dword ptr [esi+1Ch], 0BF800000h
0x8E6AE5: movaps  xmmword ptr [esi+20h], xmm0
0x8E6AE9: lea     edx, [esi+30h]
0x8E6AEC: jmp     short loc_8E6AF4
0x8E6AEE: mov     byte ptr [esi], 2
0x8E6AF1: lea     edx, [esi+20h]
0x8E6AF4: movzx   eax, al
0x8E6AF7: imul    eax, 34h ; '4'
0x8E6AFA: push    edx
0x8E6AFB: lea     edx, [esp+74h+var_50]
0x8E6AFF: push    esi
0x8E6B00: push    edx
0x8E6B01: call    dword ptr [eax+ecx+1694h]
0x8E6B08: mov     al, [edi+14h]
0x8E6B0B: add     esp, 0Ch
0x8E6B0E: mov     [esi+3], al
0x8E6B11: pop     edi
0x8E6B12: mov     eax, esi
0x8E6B14: pop     esi
0x8E6B15: pop     ebx
0x8E6B16: mov     esp, ebp
0x8E6B18: pop     ebp
0x8E6B19: retn
