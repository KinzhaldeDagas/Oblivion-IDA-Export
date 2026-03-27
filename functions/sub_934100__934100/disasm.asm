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
