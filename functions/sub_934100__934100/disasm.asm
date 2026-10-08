0x934100: push    ecx
0x934101: push    ebx
0x934102: push    ebp
0x934103: mov     ebp, [esp+0Ch+arg_0]
0x934107: mov     eax, [ebp+0]
0x93410A: push    esi
0x93410B: push    edi
0x93410C: mov     edi, [eax]
0x93410E: mov     ecx, [edi]
0x934110: lea     ebx, [ecx+edi+10h]
0x934114: mov     [esp+14h+var_4], 4
0x93411C: lea     esi, [edi+10h]
0x93411F: nop
0x934120: movzx   ecx, byte ptr [esi]
0x934123: cmp     ecx, 6; switch 7 cases
0x934126: mov     eax, esi
0x934128: ja      short def_93412A
0x93412A: jmp     ds:jpt_93412A[ecx*4]; switch jump
0x934131: lea     ecx, [esi+10h]; jumptable 0093412A cases 2,3,6
0x934134: movzx   edx, byte ptr [esi+3]
0x934138: mov     ebp, [esp+14h+arg_8]
0x93413C: add     esi, edx
0x93413E: movzx   edx, byte ptr [eax+1]
0x934142: imul    edx, 34h ; '4'
0x934145: push    ebp
0x934146: push    ecx
0x934147: push    eax
0x934148: mov     eax, [esp+20h+arg_4]
0x93414C: call    dword ptr [edx+eax+1698h]
0x934153: mov     ebp, [esp+20h+arg_0]
0x934157: add     esp, 0Ch
0x93415A: jmp     short def_93412A
0x93415C: lea     ecx, [esi+20h]; jumptable 0093412A cases 4,5
0x93415F: jmp     short loc_934134
0x934161: movzx   ecx, byte ptr [esi+3]; jumptable 0093412A case 0
0x934165: add     esi, ecx
0x9341C8: mov     eax, large fs:2Ch; jumptable 0093412A case 1
0x9341CE: mov     ecx, ds:0BA9DE4h
0x9341D4: mov     esi, [eax+ecx*4]
0x9341D7: mov     eax, [esi+19Ch]
0x9341DD: mov     ecx, [eax+0A8h]
0x9341E3: cmp     ecx, [eax+30h]
0x9341E6: jge     short loc_9341F9
0x9341E8: mov     edx, [eax+64h]
0x9341EB: inc     ecx
0x9341EC: mov     [eax+0A8h], ecx
0x9341F2: mov     [edi], edx
0x9341F4: mov     [eax+64h], edi
0x9341F7: jmp     short loc_934209
0x9341F9: mov     ecx, ds:0BA7D98h
0x9341FF: mov     eax, [ecx]
0x934201: push    1Ch
0x934203: push    0Ch
0x934205: push    edi
0x934206: call    dword ptr [eax+1Ch]
0x934209: mov     eax, [ebp+8]
0x93420C: test    eax, eax
0x93420E: js      short loc_93422A
0x934210: mov     ecx, [ebp+0]
0x934213: and     eax, 3FFFFFFFh
0x934218: push    14h
0x93421A: shl     eax, 2
0x93421D: push    eax
0x93421E: push    ecx
0x93421F: mov     ecx, [esi+19Ch]
0x934225: call    sub_8A75D0
0x93422A: mov     edx, [ebp+8]
0x93422D: pop     edi
0x93422E: and     edx, 0C0000000h
0x934234: or      edx, 80000000h
0x93423A: pop     esi
0x93423B: mov     dword ptr [ebp+0], 0
0x934242: mov     dword ptr [ebp+4], 0
0x934249: mov     [ebp+8], edx
0x93424C: pop     ebp
0x93424D: pop     ebx
0x93424E: pop     ecx
0x93424F: retn
