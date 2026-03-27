0x6EE1C0: push    ebp
0x6EE1C1: mov     ebp, esp
0x6EE1C3: push    0FFFFFFFFh
0x6EE1C5: push    offset SEH_6EE1C0
0x6EE1CA: mov     eax, large fs:0
0x6EE1D0: push    eax
0x6EE1D1: sub     esp, 0Ch
0x6EE1D4: push    ebx
0x6EE1D5: push    esi
0x6EE1D6: push    edi
0x6EE1D7: mov     eax, ds:0B30AACh
0x6EE1DC: xor     eax, ebp
0x6EE1DE: push    eax
0x6EE1DF: lea     eax, [ebp+var_C]
0x6EE1E2: mov     large fs:0, eax
0x6EE1E8: mov     [ebp+var_10], esp
0x6EE1EB: mov     esi, [ebp+arg_8]
0x6EE1EE: mov     edi, [ebp+arg_0]
0x6EE1F1: xor     ebx, ebx
0x6EE1F3: mov     [ebp+var_14], esi
0x6EE1F6: mov     [ebp+var_4], ebx
0x6EE1F9: lea     esp, [esp+0]
0x6EE200: cmp     edi, [ebp+arg_4]
0x6EE203: jz      short loc_6EE24E
0x6EE205: mov     [ebp+arg_0], esi
0x6EE208: mov     [ebp+var_18], esi
0x6EE20B: cmp     esi, ebx
0x6EE20D: mov     byte ptr [ebp+var_4], 1
0x6EE211: jz      short loc_6EE21B
0x6EE213: push    edi
0x6EE214: mov     ecx, esi
0x6EE216: call    sub_6EDC20
0x6EE21B: add     esi, 34h ; '4'
0x6EE21E: mov     byte ptr [ebp+var_4], bl
0x6EE221: mov     [ebp+arg_8], esi
0x6EE224: add     edi, 34h ; '4'
0x6EE227: jmp     short loc_6EE200
0x6EE229: mov     esi, [ebp+var_14]
0x6EE22C: mov     edi, [ebp+arg_8]
0x6EE22F: cmp     esi, edi
0x6EE231: jz      short loc_6EE245
0x6EE233: mov     ebx, [ebp+arg_C]
0x6EE236: push    esi
0x6EE237: mov     ecx, ebx
0x6EE239: call    sub_552090
0x6EE23E: add     esi, 34h ; '4'
0x6EE241: cmp     esi, edi
0x6EE243: jnz     short loc_6EE236
0x6EE245: xor     ebx, ebx
0x6EE247: push    ebx
0x6EE248: push    ebx
0x6EE249: call    ThrowException??
0x6EE24E: mov     eax, esi
0x6EE250: mov     ecx, [ebp+var_C]
0x6EE253: mov     large fs:0, ecx
0x6EE25A: pop     ecx
0x6EE25B: pop     edi
0x6EE25C: pop     esi
0x6EE25D: pop     ebx
0x6EE25E: mov     esp, ebp
0x6EE260: pop     ebp
0x6EE261: retn
