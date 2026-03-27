0x8E65B0: push    ebp
0x8E65B1: mov     ebp, esp
0x8E65B3: and     esp, 0FFFFFFF0h
0x8E65B6: sub     esp, 0Ch
0x8E65B9: mov     eax, [ebp+arg_0]
0x8E65BC: movzx   ecx, byte ptr [eax]
0x8E65BF: sub     ecx, 2
0x8E65C2: push    esi
0x8E65C3: jz      short loc_8E65CF
0x8E65C5: sub     ecx, 2
0x8E65C8: jz      short loc_8E65F6
0x8E65CA: sub     ecx, 2
0x8E65CD: jnz     short loc_8E65F1
0x8E65CF: movzx   ecx, byte ptr [eax+1]
0x8E65D3: mov     edx, [ebp+arg_4]
0x8E65D6: imul    ecx, 34h ; '4'
0x8E65D9: mov     esi, [edx]
0x8E65DB: mov     ecx, [ecx+esi+16B0h]
0x8E65E2: test    ecx, ecx
0x8E65E4: jz      short loc_8E65F1
0x8E65E6: push    edx
0x8E65E7: lea     edx, [eax+20h]
0x8E65EA: push    edx
0x8E65EB: push    eax
0x8E65EC: call    ecx
0x8E65EE: add     esp, 0Ch
0x8E65F1: pop     esi
0x8E65F2: mov     esp, ebp
0x8E65F4: pop     ebp
0x8E65F5: retn
0x8E65F6: movzx   ecx, byte ptr [eax+1]
0x8E65FA: mov     edx, [ebp+arg_4]
0x8E65FD: imul    ecx, 34h ; '4'
0x8E6600: mov     dword ptr [eax+1Ch], 0BF800000h
0x8E6607: xorps   xmm0, xmm0
0x8E660A: movaps  xmmword ptr [eax+20h], xmm0
0x8E660E: mov     esi, [edx]
0x8E6610: mov     ecx, [ecx+esi+16B0h]
0x8E6617: test    ecx, ecx
0x8E6619: jz      short loc_8E65F1
0x8E661B: push    edx
0x8E661C: lea     edx, [eax+30h]
0x8E661F: push    edx
0x8E6620: push    eax
0x8E6621: call    ecx
0x8E6623: add     esp, 0Ch
0x8E6626: pop     esi
0x8E6627: mov     esp, ebp
0x8E6629: pop     ebp
0x8E662A: retn
