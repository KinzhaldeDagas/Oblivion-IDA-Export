0x47F340: push    0FFFFFFFFh
0x47F342: push    offset SEH_47F340
0x47F347: mov     eax, large fs:0
0x47F34D: push    eax
0x47F34E: sub     esp, 7Ch
0x47F351: push    ebx
0x47F352: push    ebp
0x47F353: push    esi
0x47F354: push    edi
0x47F355: mov     eax, ds:0B30AACh
0x47F35A: xor     eax, esp
0x47F35C: push    eax
0x47F35D: lea     eax, [esp+9Ch+var_C]
0x47F364: mov     large fs:0, eax
0x47F36A: xor     esi, esi
0x47F36C: cmp     [esp+9Ch+arg_8], 0
0x47F374: mov     [esp+9Ch+var_88], esi
0x47F378: mov     [esp+9Ch+var_80], esi
0x47F37C: mov     eax, offset unk_B25E00
0x47F381: jnz     short loc_47F388
0x47F383: mov     eax, offset unk_B25E48
0x47F388: push    eax
0x47F389: lea     ecx, [esp+0A0h+var_50]
0x47F38D: call    sub_70F010
0x47F392: mov     ecx, [esp+9Ch+arg_0]
0x47F399: cmp     ecx, esi
0x47F39B: jz      loc_47F572
0x47F3A1: mov     eax, [esp+9Ch+arg_4]
0x47F3A8: cmp     eax, esi
0x47F3AA: jz      loc_47F572
0x47F3B0: mov     esi, [ecx+24h]
0x47F3B3: mov     edi, [eax+280h]
0x47F3B9: mov     eax, [esi]
0x47F3BB: mov     edx, [eax+4]
0x47F3BE: mov     ecx, esi
0x47F3C0: call    edx
0x47F3C2: mov     ebx, eax
0x47F3C4: mov     eax, [esi]
0x47F3C6: mov     edx, [eax+8]
0x47F3C9: mov     ecx, esi
0x47F3CB: call    edx
0x47F3CD: test    edi, edi
0x47F3CF: mov     ebp, eax
0x47F3D1: jz      loc_47F572
0x47F3D7: test    ebx, ebx
0x47F3D9: jz      loc_47F572
0x47F3DF: test    ebp, ebp
0x47F3E1: jz      loc_47F572
0x47F3E7: mov     eax, [esi]
0x47F3E9: mov     edx, [eax+18h]
0x47F3EC: mov     ecx, esi
0x47F3EE: call    edx
0x47F3F0: mov     edx, [eax]
0x47F3F2: mov     ecx, eax
0x47F3F4: mov     eax, [edx+14h]
0x47F3F7: call    eax
0x47F3F9: mov     esi, eax
0x47F3FB: mov     ecx, [esi]
0x47F3FD: mov     eax, [ecx+48h]
0x47F400: lea     edx, [esp+9Ch+var_80]
0x47F404: push    edx
0x47F405: push    0
0x47F407: push    esi
0x47F408: call    eax
0x47F40A: mov     ecx, [esi]
0x47F40C: mov     eax, [ecx+44h]
0x47F40F: lea     edx, [esp+9Ch+var_70]
0x47F413: push    edx
0x47F414: push    0
0x47F416: push    esi
0x47F417: call    eax
0x47F419: mov     eax, [esp+9Ch+var_70]
0x47F41D: mov     ecx, [edi]
0x47F41F: mov     ecx, [ecx+90h]
0x47F425: xor     esi, esi
0x47F427: push    esi
0x47F428: lea     edx, [esp+0A0h+var_88]
0x47F42C: push    edx
0x47F42D: push    2
0x47F42F: push    eax
0x47F430: push    ebp
0x47F431: push    ebx
0x47F432: push    edi
0x47F433: call    ecx
0x47F435: mov     eax, [esp+9Ch+var_88]
0x47F439: mov     ecx, [esp+9Ch+var_80]
0x47F43D: mov     edx, [edi]
0x47F43F: mov     edx, [edx+80h]
0x47F445: push    eax
0x47F446: push    ecx
0x47F447: push    edi
0x47F448: call    edx
0x47F44A: mov     eax, [esp+9Ch+var_88]
0x47F44E: mov     ecx, [eax]
0x47F450: push    esi
0x47F451: push    esi
0x47F452: lea     edx, [esp+0A4h+var_78]
0x47F456: push    edx
0x47F457: push    eax
0x47F458: mov     eax, [ecx+34h]
0x47F45B: call    eax
0x47F45D: push    70h ; 'p'; Size
0x47F45F: call    FormHeapAlloc
0x47F464: add     esp, 4
0x47F467: mov     [esp+9Ch+var_7C], eax
0x47F46B: cmp     eax, esi
0x47F46D: mov     [esp+9Ch+var_4], esi
0x47F474: jz      short loc_47F490
0x47F476: push    1
0x47F478: push    1
0x47F47A: lea     ecx, [esp+0A4h+var_50]
0x47F47E: push    ecx
0x47F47F: push    ebp
0x47F480: push    ebx
0x47F481: mov     ecx, eax
0x47F483: call    NiPixelData__NiPixelData
0x47F488: mov     esi, eax
0x47F48A: mov     [esp+9Ch+var_7C], eax
0x47F48E: jmp     short loc_47F494
0x47F490: mov     [esp+9Ch+var_7C], esi
0x47F494: mov     eax, [esp+9Ch+var_78]
0x47F498: mov     ecx, [esp+9Ch+Src]
0x47F49C: cdq
0x47F49D: and     edx, 3
0x47F4A0: add     eax, edx
0x47F4A2: mov     edx, [esi+5Ch]
0x47F4A5: mov     edi, [edx]
0x47F4A7: add     edi, [esi+50h]
0x47F4AA: sar     eax, 2
0x47F4AD: cmp     [esp+9Ch+arg_8], 0
0x47F4B5: mov     [esp+9Ch+var_4], 0FFFFFFFFh
0x47F4C0: movzx   eax, ax
0x47F4C3: mov     [esp+9Ch+var_84], ecx
0x47F4C7: jz      short loc_47F4E0
0x47F4C9: movzx   eax, ax
0x47F4CC: imul    eax, ebp
0x47F4CF: add     eax, eax
0x47F4D1: add     eax, eax
0x47F4D3: push    eax; Size
0x47F4D4: push    ecx; Src
0x47F4D5: push    edi; Dst
0x47F4D6: call    _memcpy
0x47F4DB: add     esp, 0Ch
0x47F4DE: jmp     short loc_47F537
0x47F4E0: test    ebp, ebp
0x47F4E2: jbe     short loc_47F537
0x47F4E4: movzx   edx, ax
0x47F4E7: test    edx, edx
0x47F4E9: jle     short loc_47F522
0x47F4EB: mov     eax, [esp+9Ch+var_84]
0x47F4EF: lea     ecx, [edi+2]
0x47F4F2: add     eax, 2
0x47F4F5: mov     esi, edx
0x47F4F7: jmp     short loc_47F500
0x47F4F9: align 10h
0x47F500: movzx   ebx, byte ptr [eax-2]
0x47F504: mov     [ecx-2], bl
0x47F507: movzx   ebx, byte ptr [eax-1]
0x47F50B: mov     [ecx-1], bl
0x47F50E: movzx   ebx, byte ptr [eax]
0x47F511: mov     [ecx], bl
0x47F513: add     eax, 4
0x47F516: add     ecx, 3
0x47F519: sub     esi, 1
0x47F51C: jnz     short loc_47F500
0x47F51E: mov     esi, [esp+9Ch+var_7C]
0x47F522: lea     eax, [edx+edx*2]
0x47F525: add     edi, eax
0x47F527: lea     eax, ds:0[edx*4]
0x47F52E: add     [esp+9Ch+var_84], eax
0x47F532: sub     ebp, 1
0x47F535: jnz     short loc_47F4E7
0x47F537: mov     eax, [esp+9Ch+var_88]
0x47F53B: mov     ecx, [eax]
0x47F53D: mov     edx, [ecx+38h]
0x47F540: push    eax
0x47F541: call    edx
0x47F543: mov     eax, [esp+9Ch+var_88]
0x47F547: mov     ecx, [eax]
0x47F549: mov     edx, [ecx+8]
0x47F54C: push    eax
0x47F54D: call    edx
0x47F54F: mov     eax, [esp+9Ch+var_80]
0x47F553: mov     ecx, [eax]
0x47F555: mov     edx, [ecx+8]
0x47F558: push    eax
0x47F559: call    edx
0x47F55B: push    offset dword_B256D0; a2
0x47F560: push    esi; a1
0x47F561: call    NiSourceTexture__LoadTexturePixelData
0x47F566: add     esp, 8
0x47F569: mov     byte ptr ds:0B256CDh, 0
0x47F570: jmp     short loc_47F574
0x47F572: xor     eax, eax
0x47F574: mov     ecx, [esp+9Ch+var_C]
0x47F57B: mov     large fs:0, ecx
0x47F582: pop     ecx
0x47F583: pop     edi
0x47F584: pop     esi
0x47F585: pop     ebp
0x47F586: pop     ebx
0x47F587: add     esp, 88h
0x47F58D: retn
