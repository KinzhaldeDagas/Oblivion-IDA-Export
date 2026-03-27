0x728F90: sub     esp, 8
0x728F93: push    ebp
0x728F94: mov     ebp, [esp+0Ch+a2]
0x728F98: push    edi
0x728F99: mov     edi, ecx
0x728F9B: push    ebp; a2
0x728F9C: mov     [esp+14h+var_8], edi
0x728FA0: call    sub_700670
0x728FA5: test    al, al
0x728FA7: jnz     short loc_728FB3
0x728FA9: pop     edi
0x728FAA: xor     al, al
0x728FAC: pop     ebp
0x728FAD: add     esp, 8
0x728FB0: retn    4
0x728FB3: movzx   eax, word ptr [edi+8]
0x728FB7: cmp     ax, [ebp+8]
0x728FBB: jnz     short loc_728FA9
0x728FBD: push    esi
0x728FBE: mov     esi, [edi+1Ch]
0x728FC1: test    esi, esi
0x728FC3: jz      short loc_728FCF
0x728FC5: cmp     dword ptr [ebp+1Ch], 0
0x728FC9: jz      short loc_728FE5
0x728FCB: test    esi, esi
0x728FCD: jnz     short loc_728FD5
0x728FCF: cmp     dword ptr [ebp+1Ch], 0
0x728FD3: jnz     short loc_728FE5
0x728FD5: mov     cl, [edi+30h]
0x728FD8: cmp     cl, [ebp+30h]
0x728FDB: jnz     short loc_728FE5
0x728FDD: mov     dl, [edi+31h]
0x728FE0: cmp     dl, [ebp+31h]
0x728FE3: jz      short loc_728FF0
0x728FE5: pop     esi
0x728FE6: pop     edi
0x728FE7: xor     al, al
0x728FE9: pop     ebp
0x728FEA: add     esp, 8
0x728FED: retn    4
0x728FF0: test    esi, esi
0x728FF2: push    ebx
0x728FF3: jz      short loc_729034
0x728FF5: movzx   ebx, ax
0x728FF8: xor     edi, edi
0x728FFA: test    ebx, ebx
0x728FFC: jbe     short loc_729030
0x728FFE: mov     eax, [ebp+1Ch]
0x729001: sub     eax, esi
0x729003: mov     [esp+18h+var_4], eax
0x729007: jmp     short loc_729014
0x729009: align 10h
0x729010: mov     eax, [esp+18h+var_4]
0x729014: add     eax, esi
0x729016: push    eax
0x729017: mov     ecx, esi
0x729019: call    sub_8AA390
0x72901E: test    al, al
0x729020: jnz     loc_7291C5
0x729026: add     edi, 1
0x729029: add     esi, 0Ch
0x72902C: cmp     edi, ebx
0x72902E: jb      short loc_729010
0x729030: mov     edi, [esp+18h+var_8]
0x729034: mov     esi, [edi+20h]
0x729037: test    esi, esi
0x729039: jz      short loc_729049
0x72903B: cmp     dword ptr [ebp+20h], 0
0x72903F: jz      loc_7291C5
0x729045: test    esi, esi
0x729047: jnz     short loc_729057
0x729049: cmp     dword ptr [ebp+20h], 0
0x72904D: jnz     loc_7291C5
0x729053: test    esi, esi
0x729055: jz      short loc_7290B5
0x729057: mov     ax, [edi+2Ch]
0x72905B: mov     cx, [ebp+2Ch]
0x72905F: and     ax, 0F000h
0x729063: and     cx, 0F000h
0x729068: cmp     ax, cx
0x72906B: jnz     loc_7291C5
0x729071: test    ax, ax
0x729074: movzx   eax, word ptr [edi+8]
0x729078: jnz     short loc_72907F
0x72907A: movzx   ebx, ax
0x72907D: jmp     short loc_729085
0x72907F: movzx   eax, ax
0x729082: lea     ebx, [eax+eax*2]
0x729085: xor     edi, edi
0x729087: test    ebx, ebx
0x729089: jbe     short loc_7290B1
0x72908B: mov     ebp, [ebp+20h]
0x72908E: sub     ebp, esi
0x729090: lea     edx, [esi+ebp]
0x729093: push    edx
0x729094: mov     ecx, esi
0x729096: call    sub_8AA390
0x72909B: test    al, al
0x72909D: jnz     loc_7291C5
0x7290A3: add     edi, 1
0x7290A6: add     esi, 0Ch
0x7290A9: cmp     edi, ebx
0x7290AB: jb      short loc_729090
0x7290AD: mov     ebp, [esp+18h+a2]
0x7290B1: mov     edi, [esp+18h+var_8]
0x7290B5: lea     eax, [ebp+0Ch]
0x7290B8: push    eax
0x7290B9: lea     ecx, [edi+0Ch]
0x7290BC: call    sub_72A0A0
0x7290C1: test    al, al
0x7290C3: jz      loc_7291C5
0x7290C9: mov     esi, [edi+24h]
0x7290CC: test    esi, esi
0x7290CE: jz      short loc_7290DA
0x7290D0: cmp     dword ptr [ebp+24h], 0
0x7290D4: jz      loc_7291C5
0x7290DA: cmp     dword ptr [edi+28h], 0
0x7290DE: jnz     short loc_7290EA
0x7290E0: cmp     dword ptr [ebp+28h], 0
0x7290E4: jnz     loc_7291C5
0x7290EA: test    esi, esi
0x7290EC: jz      short loc_729127
0x7290EE: movzx   edi, word ptr [edi+8]
0x7290F2: xor     ebx, ebx
0x7290F4: test    edi, edi
0x7290F6: jbe     short loc_729123
0x7290F8: mov     eax, [ebp+24h]
0x7290FB: sub     eax, esi
0x7290FD: mov     [esp+18h+a2], eax
0x729101: jmp     short loc_729107
0x729103: mov     eax, [esp+18h+a2]
0x729107: add     eax, esi
0x729109: push    eax
0x72910A: mov     ecx, esi
0x72910C: call    sub_632310
0x729111: test    al, al
0x729113: jnz     loc_7291C5
0x729119: add     ebx, 1
0x72911C: add     esi, 10h
0x72911F: cmp     ebx, edi
0x729121: jb      short loc_729103
0x729123: mov     edi, [esp+18h+var_8]
0x729127: mov     ecx, [edi+28h]
0x72912A: test    ecx, ecx
0x72912C: jz      short loc_72913C
0x72912E: cmp     dword ptr [ebp+28h], 0
0x729132: jz      loc_7291C5
0x729138: test    ecx, ecx
0x72913A: jnz     short loc_72914A
0x72913C: cmp     dword ptr [ebp+28h], 0
0x729140: jnz     loc_7291C5
0x729146: test    ecx, ecx
0x729148: jz      short loc_729197
0x72914A: movzx   eax, word ptr [edi+2Ch]
0x72914E: mov     dl, [ebp+2Ch]
0x729151: xor     dl, al
0x729153: test    dl, 3Fh
0x729156: jnz     short loc_7291C5
0x729158: movzx   edx, word ptr [edi+8]
0x72915C: and     eax, 3Fh
0x72915F: imul    eax, edx
0x729162: mov     ebx, eax
0x729164: xor     esi, esi
0x729166: test    ebx, ebx
0x729168: jbe     short loc_729197
0x72916A: mov     eax, [ebp+28h]
0x72916D: sub     eax, ecx
0x72916F: mov     edi, ecx
0x729171: mov     [esp+18h+a2], eax
0x729175: jmp     short loc_72917B
0x729177: mov     eax, [esp+18h+a2]
0x72917B: add     eax, edi
0x72917D: push    eax
0x72917E: mov     ecx, edi
0x729180: call    sub_4B9D10
0x729185: test    al, al
0x729187: jnz     short loc_7291C5
0x729189: add     esi, 1
0x72918C: add     edi, 8
0x72918F: cmp     esi, ebx
0x729191: jb      short loc_729177
0x729193: mov     edi, [esp+18h+var_8]
0x729197: mov     ecx, [edi+34h]
0x72919A: test    ecx, ecx
0x72919C: jz      short loc_7291A8
0x72919E: cmp     dword ptr [ebp+34h], 0
0x7291A2: jz      short loc_7291C5
0x7291A4: test    ecx, ecx
0x7291A6: jnz     short loc_7291B2
0x7291A8: cmp     dword ptr [ebp+34h], 0
0x7291AC: jnz     short loc_7291C5
0x7291AE: test    ecx, ecx
0x7291B0: jz      short loc_7291D1
0x7291B2: mov     eax, [ebp+34h]
0x7291B5: test    eax, eax
0x7291B7: jz      short loc_7291D1
0x7291B9: mov     edx, [ecx]
0x7291BB: push    eax
0x7291BC: mov     eax, [edx+2Ch]
0x7291BF: call    eax
0x7291C1: test    al, al
0x7291C3: jnz     short loc_7291D1
0x7291C5: pop     ebx
0x7291C6: pop     esi
0x7291C7: pop     edi
0x7291C8: xor     al, al
0x7291CA: pop     ebp
0x7291CB: add     esp, 8
0x7291CE: retn    4
0x7291D1: pop     ebx
0x7291D2: pop     esi
0x7291D3: pop     edi
0x7291D4: mov     al, 1
0x7291D6: pop     ebp
0x7291D7: add     esp, 8
0x7291DA: retn    4
