0x588FC0: sub     esp, 104h
0x588FC6: mov     eax, ds:0B30AACh
0x588FCB: xor     eax, esp
0x588FCD: mov     [esp+104h+var_4], eax
0x588FD4: mov     edx, [esp+104h+arg_4]
0x588FDB: push    ebx
0x588FDC: push    edi
0x588FDD: mov     edi, [esp+10Ch+arg_0]
0x588FE4: xor     ebx, ebx
0x588FE6: cmp     edi, ebx
0x588FE8: jz      short loc_589064
0x588FEA: cmp     [edi], bl
0x588FEC: jz      short loc_589064
0x588FEE: cmp     edx, ebx
0x588FF0: jz      short loc_589064
0x588FF2: push    esi
0x588FF3: or      esi, 0FFFFFFFFh
0x588FF6: mov     [edx], bl
0x588FF8: mov     [esp+110h+var_104], bl
0x588FFC: xor     eax, eax
0x588FFE: mov     edi, edi
0x589000: cmp     [eax+edi], bl
0x589003: jz      short loc_58903F
0x589005: mov     [edx+eax+1], bl
0x589009: mov     cl, [eax+edi]
0x58900C: cmp     cl, 28h ; '('
0x58900F: mov     [esp+eax+110h+var_103], bl
0x589013: jnz     short loc_589019
0x589015: xor     esi, esi
0x589017: jmp     short loc_589035
0x589019: cmp     cl, 29h ; ')'
0x58901C: jnz     short loc_589025
0x58901E: mov     eax, 100h
0x589023: jmp     short loc_589035
0x589025: cmp     esi, ebx
0x589027: jl      short loc_589031
0x589029: mov     [edx+esi], cl
0x58902C: add     esi, 1
0x58902F: jmp     short loc_589035
0x589031: mov     [esp+eax+110h+var_104], cl
0x589035: add     eax, 1
0x589038: cmp     eax, 0FFh
0x58903D: jl      short loc_589000
0x58903F: lea     eax, [esp+110h+var_104]
0x589043: push    eax; unsigned __int8 *
0x589044: call    TileStringToStringID
0x589049: add     esp, 4
0x58904C: pop     esi
0x58904D: pop     edi
0x58904E: pop     ebx
0x58904F: mov     ecx, [esp+104h+var_4]
0x589056: xor     ecx, esp
0x589058: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58905D: add     esp, 104h
0x589063: retn
0x589064: mov     ecx, [esp+10Ch+var_4]
0x58906B: pop     edi
0x58906C: pop     ebx
0x58906D: xor     ecx, esp
0x58906F: xor     eax, eax
0x589071: call    @__security_check_cookie@4; __security_check_cookie(x)
0x589076: add     esp, 104h
0x58907C: retn
