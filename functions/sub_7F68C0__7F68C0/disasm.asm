0x7F68C0: push    ecx
0x7F68C1: push    ebx
0x7F68C2: push    ebp
0x7F68C3: movzx   ebp, word ptr [esp+0Ch+arg_0]
0x7F68C8: add     ebp, ebp
0x7F68CA: mov     eax, ss:dword_B43490[ebp+ebp]
0x7F68D1: mov     ebx, ss:dword_B43B20[ebp+ebp]
0x7F68D8: add     ebp, ebp
0x7F68DA: push    esi
0x7F68DB: push    edi
0x7F68DC: mov     [esp+14h+arg_0], eax
0x7F68E0: mov     esi, 2
0x7F68E5: mov     edi, offset dword_B4501C
0x7F68EA: mov     [esp+14h+var_4], 9
0x7F68F2: mov     edx, [edi-4]
0x7F68F5: test    edx, edx
0x7F68F7: jz      short loc_7F6927
0x7F68F9: lea     ecx, [esi-1]
0x7F68FC: mov     eax, 1
0x7F6901: shl     eax, cl
0x7F6903: test    ebx, eax
0x7F6905: jz      short loc_7F6927
0x7F6907: mov     ecx, [esp+14h+arg_0]
0x7F690B: test    ecx, eax
0x7F690D: jnz     short loc_7F6927
0x7F690F: cmp     [esp+14h+arg_4], 0
0x7F6914: jz      short loc_7F6922
0x7F6916: mov     ecx, [esp+14h+arg_8]
0x7F691A: test    ecx, eax
0x7F691C: jnz     short loc_7F6922
0x7F691E: xor     al, al
0x7F6920: jmp     short loc_7F6924
0x7F6922: mov     al, 1
0x7F6924: mov     [edx+8], al
0x7F6927: mov     edx, [edi]
0x7F6929: test    edx, edx
0x7F692B: jz      short loc_7F695A
0x7F692D: mov     eax, 1
0x7F6932: mov     ecx, esi
0x7F6934: shl     eax, cl
0x7F6936: test    ebx, eax
0x7F6938: jz      short loc_7F695A
0x7F693A: mov     ecx, [esp+14h+arg_0]
0x7F693E: test    ecx, eax
0x7F6940: jnz     short loc_7F695A
0x7F6942: cmp     [esp+14h+arg_4], 0
0x7F6947: jz      short loc_7F6955
0x7F6949: mov     ecx, [esp+14h+arg_8]
0x7F694D: test    ecx, eax
0x7F694F: jnz     short loc_7F6955
0x7F6951: xor     al, al
0x7F6953: jmp     short loc_7F6957
0x7F6955: mov     al, 1
0x7F6957: mov     [edx+8], al
0x7F695A: mov     edx, [edi+4]
0x7F695D: test    edx, edx
0x7F695F: jz      short loc_7F698F
0x7F6961: lea     ecx, [esi+1]
0x7F6964: mov     eax, 1
0x7F6969: shl     eax, cl
0x7F696B: test    ebx, eax
0x7F696D: jz      short loc_7F698F
0x7F696F: mov     ecx, [esp+14h+arg_0]
0x7F6973: test    ecx, eax
0x7F6975: jnz     short loc_7F698F
0x7F6977: cmp     [esp+14h+arg_4], 0
0x7F697C: jz      short loc_7F698A
0x7F697E: mov     ecx, [esp+14h+arg_8]
0x7F6982: test    ecx, eax
0x7F6984: jnz     short loc_7F698A
0x7F6986: xor     al, al
0x7F6988: jmp     short loc_7F698C
0x7F698A: mov     al, 1
0x7F698C: mov     [edx+8], al
0x7F698F: add     esi, 3
0x7F6992: add     edi, 0Ch
0x7F6995: sub     [esp+14h+var_4], 1
0x7F699A: jnz     loc_7F68F2
0x7F69A0: mov     edx, [esp+14h+arg_10]
0x7F69A4: mov     ecx, [edx+30h]
0x7F69A7: mov     eax, [ecx]
0x7F69A9: mov     edx, [eax+48h]
0x7F69AC: call    edx
0x7F69AE: mov     eax, ss:dword_B44840[ebp]
0x7F69B4: mov     edx, ss:dword_B441B0[ebp]
0x7F69BA: mov     [esp+14h+arg_0], eax
0x7F69BE: mov     ecx, 1
0x7F69C3: mov     esi, offset dword_B45518
0x7F69C8: mov     ebp, 11h
0x7F69CD: lea     ecx, [ecx+0]
0x7F69D0: mov     edi, [esi]
0x7F69D2: test    edi, edi
0x7F69D4: jz      short loc_7F6A01
0x7F69D6: mov     eax, 1
0x7F69DB: shl     eax, cl
0x7F69DD: test    edx, eax
0x7F69DF: jz      short loc_7F6A01
0x7F69E1: mov     ebx, [esp+14h+arg_0]
0x7F69E5: test    ebx, eax
0x7F69E7: jnz     short loc_7F6A01
0x7F69E9: cmp     [esp+14h+arg_4], 0
0x7F69EE: jz      short loc_7F69FC
0x7F69F0: mov     ebx, [esp+14h+arg_C]
0x7F69F4: test    ebx, eax
0x7F69F6: jnz     short loc_7F69FC
0x7F69F8: xor     al, al
0x7F69FA: jmp     short loc_7F69FE
0x7F69FC: mov     al, 1
0x7F69FE: mov     [edi+8], al
0x7F6A01: add     ecx, 1
0x7F6A04: add     esi, 4
0x7F6A07: sub     ebp, 1
0x7F6A0A: jnz     short loc_7F69D0
0x7F6A0C: mov     ecx, [esp+14h+arg_10]
0x7F6A10: mov     ecx, [ecx+2Ch]
0x7F6A13: mov     edx, [ecx]
0x7F6A15: mov     eax, [edx+48h]
0x7F6A18: call    eax
0x7F6A1A: pop     edi
0x7F6A1B: pop     esi
0x7F6A1C: pop     ebp
0x7F6A1D: pop     ebx
0x7F6A1E: pop     ecx
0x7F6A1F: retn    14h
