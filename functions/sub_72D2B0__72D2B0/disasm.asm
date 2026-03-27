0x72D2B0: sub     esp, 18h
0x72D2B3: mov     eax, ds:0B30AACh
0x72D2B8: xor     eax, esp
0x72D2BA: mov     [esp+18h+var_4], eax
0x72D2BE: mov     eax, [esp+18h+arg_0]
0x72D2C2: mov     [esp+18h+var_C], ecx
0x72D2C6: mov     ecx, [ecx]
0x72D2C8: mov     dx, [ecx]
0x72D2CB: mov     [esp+18h+var_8], eax
0x72D2CF: mov     eax, [eax]
0x72D2D1: mov     cx, [eax]
0x72D2D4: push    esi
0x72D2D5: xor     esi, esi
0x72D2D7: push    edi
0x72D2D8: mov     [esp+20h+var_14], esi
0x72D2DC: mov     [esp+20h+var_18], esi
0x72D2E0: mov     [esp+20h+var_10], dx
0x72D2E5: mov     [esp+20h+var_E], cx
0x72D2EA: mov     edi, 0FFFFh
0x72D2EF: nop
0x72D2F0: cmp     [esp+20h+var_10], di
0x72D2F5: jnz     short loc_72D2FE
0x72D2F7: cmp     [esp+20h+var_E], di
0x72D2FC: jz      short loc_72D30C
0x72D2FE: lea     ecx, [esp+20h+var_18]
0x72D302: call    sub_72CEC0
0x72D307: add     esi, 1
0x72D30A: jmp     short loc_72D2F0
0x72D30C: mov     ecx, [esp+20h+var_4]
0x72D310: pop     edi
0x72D311: mov     eax, esi
0x72D313: pop     esi
0x72D314: xor     ecx, esp
0x72D316: call    @__security_check_cookie@4; __security_check_cookie(x)
0x72D31B: add     esp, 18h
0x72D31E: retn    4
