0x79C2E0: push    ebp
0x79C2E1: mov     ebp, esp
0x79C2E3: push    0FFFFFFFFh
0x79C2E5: push    offset SEH_79C2E0
0x79C2EA: mov     eax, large fs:0
0x79C2F0: push    eax
0x79C2F1: sub     esp, 8
0x79C2F4: push    ebx
0x79C2F5: push    esi
0x79C2F6: push    edi
0x79C2F7: mov     eax, ds:0B30AACh
0x79C2FC: xor     eax, ebp
0x79C2FE: push    eax
0x79C2FF: lea     eax, [ebp+var_C]
0x79C302: mov     large fs:0, eax
0x79C308: mov     [ebp+var_10], esp
0x79C30B: mov     edi, [ebp+arg_8]
0x79C30E: mov     ebx, [ebp+arg_4]
0x79C311: mov     esi, [ebp+arg_0]
0x79C314: mov     [ebp+var_14], edi
0x79C317: mov     [ebp+var_4], 0
0x79C31E: mov     edi, edi
0x79C320: cmp     esi, ebx
0x79C322: jz      short loc_79C35E
0x79C324: push    esi
0x79C325: push    edi
0x79C326: call    sub_79B7D0
0x79C32B: add     edi, 30h ; '0'
0x79C32E: add     esp, 8
0x79C331: mov     [ebp+arg_8], edi
0x79C334: add     esi, 30h ; '0'
0x79C337: jmp     short loc_79C320
0x79C339: mov     esi, [ebp+var_14]
0x79C33C: mov     edi, [ebp+arg_8]
0x79C33F: cmp     esi, edi
0x79C341: jz      short loc_79C355
0x79C343: mov     ebx, [ebp+arg_C]
0x79C346: push    esi
0x79C347: mov     ecx, ebx
0x79C349: call    sub_79BFF0
0x79C34E: add     esi, 30h ; '0'
0x79C351: cmp     esi, edi
0x79C353: jnz     short loc_79C346
0x79C355: push    0
0x79C357: push    0
0x79C359: call    ThrowException??
0x79C35E: mov     eax, edi
0x79C360: mov     ecx, [ebp+var_C]
0x79C363: mov     large fs:0, ecx
0x79C36A: pop     ecx
0x79C36B: pop     edi
0x79C36C: pop     esi
0x79C36D: pop     ebx
0x79C36E: mov     esp, ebp
0x79C370: pop     ebp
0x79C371: retn
