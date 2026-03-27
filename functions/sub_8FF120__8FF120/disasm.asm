0x8FF120: push    ebx
0x8FF121: mov     ebx, [esp+4+arg_0]
0x8FF125: mov     ecx, [ebx+4]
0x8FF128: mov     eax, [ebx]
0x8FF12A: push    ebp
0x8FF12B: mov     ebp, [eax]
0x8FF12D: push    esi
0x8FF12E: mov     esi, [ecx]
0x8FF130: mov     edx, [esi]
0x8FF132: push    edi
0x8FF133: mov     edi, [esp+10h+arg_8]
0x8FF137: mov     ecx, esi
0x8FF139: call    dword ptr [edx+8]
0x8FF13C: add     ebx, 10h
0x8FF13F: cmp     eax, 6
0x8FF142: push    ebx
0x8FF143: push    esi
0x8FF144: mov     ecx, edi
0x8FF146: push    ebp
0x8FF147: jnz     short loc_8FF150
0x8FF149: call    sub_93EF30
0x8FF14E: jmp     short loc_8FF155
0x8FF150: call    sub_93EE40
0x8FF155: mov     ecx, [esp+10h+arg_4]
0x8FF159: xor     eax, eax
0x8FF15B: mov     [ecx+2], al
0x8FF15E: mov     [edi+0Ch], eax
0x8FF161: movzx   edx, byte ptr [edi+0Eh]
0x8FF165: movzx   eax, byte ptr [edi+0Dh]
0x8FF169: movzx   ecx, byte ptr [edi+0Ch]
0x8FF16D: lea     eax, [eax+edx*4]
0x8FF170: add     eax, ecx
0x8FF172: lea     eax, [eax+eax+1Fh]
0x8FF176: and     eax, 0FFFFFFF0h
0x8FF179: add     eax, edi
0x8FF17B: pop     edi
0x8FF17C: pop     esi
0x8FF17D: pop     ebp
0x8FF17E: pop     ebx
0x8FF17F: retn
