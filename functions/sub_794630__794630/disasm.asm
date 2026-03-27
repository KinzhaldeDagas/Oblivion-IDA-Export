0x794630: push    ebx
0x794631: push    ebp
0x794632: push    esi
0x794633: push    edi
0x794634: mov     ebx, ecx
0x794636: xor     ebp, ebp
0x794638: jmp     short loc_794640
0x79463A: align 10h
0x794640: mov     di, [esp+10h+arg_0]
0x794645: cmp     di, 0FFFFh
0x794649: jle     short loc_794680
0x79464B: mov     ecx, [ebx+4Ch]
0x79464E: test    ecx, ecx
0x794650: movsx   esi, di
0x794653: jz      short loc_794661
0x794655: mov     eax, [ebx+50h]
0x794658: sub     eax, ecx
0x79465A: sar     eax, 4
0x79465D: cmp     esi, eax
0x79465F: jb      short loc_794666
0x794661: call    __invalid_parameter_noinfo
0x794666: shl     esi, 4
0x794669: add     esi, [ebx+4Ch]
0x79466C: mov     eax, [esi+4]
0x79466F: test    eax, eax
0x794671: jz      short loc_794680
0x794673: mov     ecx, [esi+8]
0x794676: sub     ecx, eax
0x794678: sar     ecx, 2
0x79467B: movzx   eax, cx
0x79467E: jmp     short loc_794682
0x794680: xor     eax, eax
0x794682: movzx   edx, ax
0x794685: cmp     ebp, edx
0x794687: jge     loc_79471F
0x79468D: mov     ecx, [ebx+4Ch]
0x794690: test    ecx, ecx
0x794692: movzx   esi, di
0x794695: jz      short loc_7946A3
0x794697: mov     eax, [ebx+50h]
0x79469A: sub     eax, ecx
0x79469C: sar     eax, 4
0x79469F: cmp     esi, eax
0x7946A1: jb      short loc_7946A8
0x7946A3: call    __invalid_parameter_noinfo
0x7946A8: mov     edi, esi
0x7946AA: shl     edi, 4
0x7946AD: add     edi, [ebx+4Ch]
0x7946B0: mov     ecx, [edi+4]
0x7946B3: test    ecx, ecx
0x7946B5: jz      short loc_7946C3
0x7946B7: mov     eax, [edi+8]
0x7946BA: sub     eax, ecx
0x7946BC: sar     eax, 2
0x7946BF: cmp     ebp, eax
0x7946C1: jb      short loc_7946C8
0x7946C3: call    __invalid_parameter_noinfo
0x7946C8: mov     eax, [edi+4]
0x7946CB: mov     ecx, [eax+ebp*4]
0x7946CE: push    ecx
0x7946CF: call    FormHeapFree
0x7946D4: mov     ecx, [ebx+4Ch]
0x7946D7: add     esp, 4
0x7946DA: test    ecx, ecx
0x7946DC: jz      short loc_7946EA
0x7946DE: mov     eax, [ebx+50h]
0x7946E1: sub     eax, ecx
0x7946E3: sar     eax, 4
0x7946E6: cmp     esi, eax
0x7946E8: jb      short loc_7946EF
0x7946EA: call    __invalid_parameter_noinfo
0x7946EF: shl     esi, 4
0x7946F2: add     esi, [ebx+4Ch]
0x7946F5: mov     ecx, [esi+4]
0x7946F8: test    ecx, ecx
0x7946FA: jz      short loc_794708
0x7946FC: mov     eax, [esi+8]
0x7946FF: sub     eax, ecx
0x794701: sar     eax, 2
0x794704: cmp     ebp, eax
0x794706: jb      short loc_79470D
0x794708: call    __invalid_parameter_noinfo
0x79470D: mov     edx, [esi+4]
0x794710: mov     dword ptr [edx+ebp*4], 0
0x794717: add     ebp, 1
0x79471A: jmp     loc_794640
0x79471F: pop     edi
0x794720: pop     esi
0x794721: pop     ebp
0x794722: pop     ebx
0x794723: retn    4
