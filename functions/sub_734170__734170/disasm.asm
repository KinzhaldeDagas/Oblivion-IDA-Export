0x734170: sub     esp, 1Ch
0x734173: mov     eax, ds:0B30AACh
0x734178: xor     eax, esp
0x73417A: mov     [esp+1Ch+var_4], eax
0x73417E: push    ebx
0x73417F: push    ebp
0x734180: push    esi
0x734181: push    edi
0x734182: mov     edi, ecx
0x734184: mov     eax, [edi+8]
0x734187: movzx   dx, byte ptr [eax+1]
0x73418C: movzx   esi, byte ptr [eax]
0x73418F: add     eax, 2
0x734192: shl     dx, 8
0x734196: add     dx, si
0x734199: mov     [edi+8], eax
0x73419C: movzx   esi, byte ptr [eax+1]
0x7341A0: movzx   bx, byte ptr [eax]
0x7341A4: movzx   edx, dx
0x7341A7: mov     ecx, [esp+2Ch+arg_0]
0x7341AB: mov     [esp+2Ch+var_18], edx
0x7341AF: add     eax, 2
0x7341B2: shl     si, 8
0x7341B6: add     si, bx
0x7341B9: mov     ebx, edx
0x7341BB: add     dl, dl
0x7341BD: mov     [edi+8], eax
0x7341C0: add     dl, dl
0x7341C2: add     dl, dl
0x7341C4: movzx   esi, si
0x7341C7: mov     al, dh
0x7341C9: and     al, 0F8h
0x7341CB: mov     [esp+2Ch+var_14], al
0x7341CF: mov     [esp+2Ch+var_12], dl
0x7341D3: mov     edx, esi
0x7341D5: mov     al, dh
0x7341D7: and     al, 0F8h
0x7341D9: mov     [esp+2Ch+var_10], al
0x7341DD: mov     eax, edx
0x7341DF: shr     eax, 3
0x7341E2: and     al, 0FEh
0x7341E4: add     dl, dl
0x7341E6: shr     ebx, 3
0x7341E9: add     dl, dl
0x7341EB: mov     [esp+2Ch+var_F], al
0x7341EF: and     bl, 0FEh
0x7341F2: add     dl, dl
0x7341F4: mov     ax, si
0x7341F7: cmp     word ptr [esp+2Ch+var_18], ax
0x7341FC: mov     [esp+2Ch+var_1C], esi
0x734200: mov     [esp+2Ch+var_13], bl
0x734204: mov     [esp+2Ch+var_11], 0FFh
0x734209: mov     [esp+2Ch+var_E], dl
0x73420D: mov     [esp+2Ch+var_D], 0FFh
0x734212: mov     [esp+2Ch+var_9], 0FFh
0x734217: jbe     loc_7342B0
0x73421D: movzx   esi, [esp+2Ch+var_14]
0x734222: movzx   ebp, [esp+2Ch+var_10]
0x734227: lea     edx, [ebp+esi*2+0]
0x73422B: mov     eax, 0AAAAAAABh
0x734230: mul     edx
0x734232: movzx   eax, [esp+2Ch+var_F]
0x734237: shr     edx, 1
0x734239: mov     [esp+2Ch+var_C], dl
0x73423D: movzx   ebx, bl
0x734240: lea     edx, [eax+ebx*2]
0x734243: mov     eax, 0AAAAAAABh
0x734248: mul     edx
0x73424A: movzx   eax, [esp+2Ch+var_12]
0x73424F: shr     edx, 1
0x734251: mov     [esp+2Ch+var_B], dl
0x734255: movzx   edx, [esp+2Ch+var_E]
0x73425A: lea     edx, [edx+eax*2]
0x73425D: mov     eax, 0AAAAAAABh
0x734262: mul     edx
0x734264: shr     edx, 1
0x734266: mov     [esp+2Ch+var_A], dl
0x73426A: lea     edx, [esi+ebp*2]
0x73426D: mov     eax, 0AAAAAAABh
0x734272: mul     edx
0x734274: movzx   eax, [esp+2Ch+var_F]
0x734279: shr     edx, 1
0x73427B: mov     [esp+2Ch+var_8], dl
0x73427F: lea     edx, [ebx+eax*2]
0x734282: mov     eax, 0AAAAAAABh
0x734287: mul     edx
0x734289: movzx   eax, [esp+2Ch+var_12]
0x73428E: shr     edx, 1
0x734290: mov     byte ptr [esp+2Ch+var_7], dl
0x734294: movzx   edx, [esp+2Ch+var_E]
0x734299: lea     edx, [eax+edx*2]
0x73429C: mov     eax, 0AAAAAAABh
0x7342A1: mul     edx
0x7342A3: shr     edx, 1
0x7342A5: mov     byte ptr [esp+2Ch+var_7+1], dl
0x7342A9: mov     [esp+2Ch+var_5], 0FFh
0x7342AE: jmp     short loc_7342F5
0x7342B0: movzx   edx, [esp+2Ch+var_14]
0x7342B5: movzx   eax, [esp+2Ch+var_10]
0x7342BA: add     eax, edx
0x7342BC: movzx   edx, [esp+2Ch+var_F]
0x7342C1: movzx   esi, bl
0x7342C4: movzx   ebx, [esp+2Ch+var_E]
0x7342C9: add     edx, esi
0x7342CB: movzx   esi, [esp+2Ch+var_12]
0x7342D0: shr     eax, 1
0x7342D2: shr     edx, 1
0x7342D4: add     ebx, esi
0x7342D6: shr     ebx, 1
0x7342D8: mov     [esp+2Ch+var_C], al
0x7342DC: mov     [esp+2Ch+var_B], dl
0x7342E0: mov     [esp+2Ch+var_A], bl
0x7342E4: mov     [esp+2Ch+var_8], al
0x7342E8: mov     byte ptr [esp+2Ch+var_7], dl
0x7342EC: mov     byte ptr [esp+2Ch+var_7+1], bl
0x7342F0: mov     [esp+2Ch+var_5], 0
0x7342F5: mov     ebp, 4
0x7342FA: lea     ebx, [ebx+0]
0x734300: mov     eax, [edi+8]
0x734303: mov     dl, [eax]
0x734305: movzx   eax, dl
0x734308: and     eax, 3
0x73430B: movzx   ebx, [esp+eax*4+2Ch+var_14]
0x734310: lea     eax, [esp+eax*4+2Ch+var_14]
0x734314: add     eax, 1
0x734317: add     eax, 1
0x73431A: mov     [ecx], bl
0x73431C: movzx   ebx, byte ptr [eax-1]
0x734320: mov     [ecx+1], bl
0x734323: movzx   ebx, byte ptr [eax]
0x734326: movzx   eax, byte ptr [eax+1]
0x73432A: mov     [ecx+3], al
0x73432D: shr     dl, 2
0x734330: movzx   eax, dl
0x734333: and     eax, 3
0x734336: lea     eax, [esp+eax*4+2Ch+var_14]
0x73433A: add     eax, 1
0x73433D: mov     [ecx+2], bl
0x734340: movzx   ebx, byte ptr [eax-1]
0x734344: shr     dl, 2
0x734347: add     eax, 1
0x73434A: movzx   esi, dl
0x73434D: mov     [ecx+4], bl
0x734350: movzx   ebx, byte ptr [eax-1]
0x734354: mov     [ecx+5], bl
0x734357: movzx   ebx, byte ptr [eax]
0x73435A: movzx   eax, byte ptr [eax+1]
0x73435E: mov     [ecx+7], al
0x734361: mov     edx, esi
0x734363: and     edx, 3
0x734366: lea     eax, [esp+edx*4+2Ch+var_14]
0x73436A: movzx   edx, byte ptr [eax]
0x73436D: add     eax, 1
0x734370: mov     [ecx+8], dl
0x734373: movzx   edx, byte ptr [eax]
0x734376: add     eax, 1
0x734379: mov     [ecx+9], dl
0x73437C: movzx   edx, byte ptr [eax]
0x73437F: movzx   eax, byte ptr [eax+1]
0x734383: mov     [ecx+0Bh], al
0x734386: shr     esi, 2
0x734389: mov     [ecx+0Ah], dl
0x73438C: and     esi, 3
0x73438F: movzx   edx, [esp+esi*4+2Ch+var_14]
0x734394: lea     eax, [esp+esi*4+2Ch+var_14]
0x734398: add     eax, 1
0x73439B: mov     [ecx+0Ch], dl
0x73439E: movzx   edx, byte ptr [eax]
0x7343A1: add     eax, 1
0x7343A4: mov     [ecx+0Dh], dl
0x7343A7: movzx   edx, byte ptr [eax]
0x7343AA: movzx   eax, byte ptr [eax+1]
0x7343AE: mov     [ecx+6], bl
0x7343B1: mov     [ecx+0Eh], dl
0x7343B4: mov     [ecx+0Fh], al
0x7343B7: add     dword ptr [edi+8], 1
0x7343BB: add     ecx, 10h
0x7343BE: sub     ebp, 1
0x7343C1: jnz     loc_734300
0x7343C7: mov     ecx, [esp+2Ch+var_4]
0x7343CB: pop     edi
0x7343CC: pop     esi
0x7343CD: pop     ebp
0x7343CE: pop     ebx
0x7343CF: xor     ecx, esp
0x7343D1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7343D6: add     esp, 1Ch
0x7343D9: retn    4
