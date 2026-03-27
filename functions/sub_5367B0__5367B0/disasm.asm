0x5367B0: sub     esp, 8
0x5367B3: push    edi
0x5367B4: mov     edi, [esp+0Ch+arg_0]
0x5367B8: test    edi, edi
0x5367BA: jz      loc_5368A6
0x5367C0: push    ebx
0x5367C1: push    ebp
0x5367C2: push    esi
0x5367C3: push    edi
0x5367C4: call    sub_47FAC0
0x5367C9: mov     ebx, [esp+1Ch+arg_8]
0x5367CD: mov     ebp, [esp+1Ch+arg_4]
0x5367D1: add     esp, 4
0x5367D4: test    eax, eax
0x5367D6: jz      loc_53685F
0x5367DC: mov     eax, [eax+10h]
0x5367DF: test    eax, eax
0x5367E1: jz      short loc_53685F
0x5367E3: mov     eax, [eax+8]
0x5367E6: test    eax, eax
0x5367E8: jz      short loc_5367FA
0x5367EA: add     eax, 14h
0x5367ED: jz      short loc_5367FA
0x5367EF: mov     eax, [eax]
0x5367F1: test    eax, eax
0x5367F3: jz      short loc_5367FA
0x5367F5: mov     eax, [eax+8]
0x5367F8: jmp     short loc_5367FC
0x5367FA: xor     eax, eax
0x5367FC: test    eax, eax
0x5367FE: jz      short loc_53685F
0x536800: mov     esi, [eax+8]
0x536803: test    esi, esi
0x536805: jz      short loc_53685F
0x536807: mov     eax, [esi]
0x536809: mov     edx, [eax+8]
0x53680C: mov     ecx, esi
0x53680E: call    edx
0x536810: cmp     eax, 10h
0x536813: mov     eax, [esi]
0x536815: mov     ecx, esi
0x536817: jnz     short loc_536820
0x536819: mov     edx, [eax+1Ch]
0x53681C: call    edx
0x53681E: jmp     short loc_53685D
0x536820: mov     edx, [eax+8]
0x536823: call    edx
0x536825: cmp     eax, 9
0x536828: jnz     short loc_536841
0x53682A: mov     eax, [esi]
0x53682C: mov     edx, [eax+1Ch]
0x53682F: lea     ecx, [esp+18h+var_8]
0x536833: push    ecx
0x536834: mov     ecx, esi
0x536836: call    edx
0x536838: mov     eax, dword ptr [esp+18h+var_8]
0x53683C: add     [ebp+0], eax
0x53683F: jmp     short loc_53685F
0x536841: mov     edx, [esi]
0x536843: mov     eax, [edx+8]
0x536846: mov     ecx, esi
0x536848: call    eax
0x53684A: cmp     eax, 18h
0x53684D: jnz     short loc_53685F
0x53684F: mov     ecx, [esi+0Ch]
0x536852: test    ecx, ecx
0x536854: jz      short loc_53685F
0x536856: mov     edx, [ecx]
0x536858: mov     eax, [edx+1Ch]
0x53685B: call    eax
0x53685D: add     [ebx], eax
0x53685F: mov     edx, [edi]
0x536861: mov     eax, [edx+8]
0x536864: mov     ecx, edi
0x536866: call    eax
0x536868: test    eax, eax
0x53686A: jz      short loc_5368A3
0x53686C: movzx   eax, word ptr [edi+0B6h]
0x536873: xor     esi, esi
0x536875: test    eax, eax
0x536877: jbe     short loc_5368A3
0x536879: cmp     eax, esi
0x53687B: ja      short loc_536881
0x53687D: xor     eax, eax
0x53687F: jmp     short loc_53688A
0x536881: mov     ecx, [edi+0B0h]
0x536887: mov     eax, [ecx+esi*4]
0x53688A: push    ebx
0x53688B: push    ebp
0x53688C: push    eax
0x53688D: call    sub_5367B0
0x536892: movzx   eax, word ptr [edi+0B6h]
0x536899: add     esi, 1
0x53689C: add     esp, 0Ch
0x53689F: cmp     eax, esi
0x5368A1: ja      short loc_536881
0x5368A3: pop     esi
0x5368A4: pop     ebp
0x5368A5: pop     ebx
0x5368A6: pop     edi
0x5368A7: add     esp, 8
0x5368AA: retn
