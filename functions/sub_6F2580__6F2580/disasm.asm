0x6F2580: push    ebp
0x6F2581: mov     ebp, esp
0x6F2583: push    0FFFFFFFFh
0x6F2585: push    offset SEH_6F2580
0x6F258A: mov     eax, large fs:0
0x6F2590: push    eax
0x6F2591: sub     esp, 8
0x6F2594: push    ebx
0x6F2595: push    esi
0x6F2596: push    edi
0x6F2597: mov     eax, ds:0B30AACh
0x6F259C: xor     eax, ebp
0x6F259E: push    eax
0x6F259F: lea     eax, [ebp+var_C]
0x6F25A2: mov     large fs:0, eax
0x6F25A8: mov     [ebp+var_10], esp
0x6F25AB: mov     edi, [ebp+arg_0]
0x6F25AE: mov     ebx, [ebp+arg_8]
0x6F25B1: mov     esi, [ebp+arg_4]
0x6F25B4: mov     [ebp+var_14], edi
0x6F25B7: mov     [ebp+var_4], 0
0x6F25BE: mov     edi, edi
0x6F25C0: test    esi, esi
0x6F25C2: jbe     short loc_6F25FE
0x6F25C4: push    ebx
0x6F25C5: push    edi
0x6F25C6: call    sub_6F16F0
0x6F25CB: add     esp, 8
0x6F25CE: sub     esi, 1
0x6F25D1: add     edi, 2Ch ; ','
0x6F25D4: mov     [ebp+arg_0], edi
0x6F25D7: jmp     short loc_6F25C0
0x6F25D9: mov     esi, [ebp+var_14]
0x6F25DC: mov     edi, [ebp+arg_0]
0x6F25DF: cmp     esi, edi
0x6F25E1: jz      short loc_6F25F5
0x6F25E3: mov     ebx, [ebp+arg_C]
0x6F25E6: push    esi
0x6F25E7: mov     ecx, ebx
0x6F25E9: call    sub_556F40
0x6F25EE: add     esi, 2Ch ; ','
0x6F25F1: cmp     esi, edi
0x6F25F3: jnz     short loc_6F25E6
0x6F25F5: push    0
0x6F25F7: push    0
0x6F25F9: call    ThrowException??
0x6F25FE: mov     ecx, [ebp+var_C]
0x6F2601: mov     large fs:0, ecx
0x6F2608: pop     ecx
0x6F2609: pop     edi
0x6F260A: pop     esi
0x6F260B: pop     ebx
0x6F260C: mov     esp, ebp
0x6F260E: pop     ebp
0x6F260F: retn
