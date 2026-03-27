0x6F04D0: push    ebp
0x6F04D1: mov     ebp, esp
0x6F04D3: push    0FFFFFFFFh
0x6F04D5: push    offset SEH_6F04D0
0x6F04DA: mov     eax, large fs:0
0x6F04E0: push    eax
0x6F04E1: sub     esp, 8
0x6F04E4: push    ebx
0x6F04E5: push    esi
0x6F04E6: push    edi
0x6F04E7: mov     eax, ds:0B30AACh
0x6F04EC: xor     eax, ebp
0x6F04EE: push    eax
0x6F04EF: lea     eax, [ebp+var_C]
0x6F04F2: mov     large fs:0, eax
0x6F04F8: mov     [ebp+var_10], esp
0x6F04FB: mov     esi, [ebp+arg_0]
0x6F04FE: mov     edi, [ebp+arg_4]
0x6F0501: xor     ebx, ebx
0x6F0503: mov     [ebp+var_14], esi
0x6F0506: mov     [ebp+var_4], ebx
0x6F0509: lea     esp, [esp+0]
0x6F0510: cmp     edi, ebx
0x6F0512: jbe     short loc_6F0568
0x6F0514: mov     [ebp+arg_4], esi
0x6F0517: cmp     esi, ebx
0x6F0519: mov     byte ptr [ebp+var_4], 1
0x6F051D: jz      short loc_6F0532
0x6F051F: mov     eax, [ebp+arg_8]
0x6F0522: fld     dword ptr [eax]
0x6F0524: add     eax, 4
0x6F0527: push    eax
0x6F0528: fstp    dword ptr [esi]
0x6F052A: lea     ecx, [esi+4]
0x6F052D: call    sub_557250
0x6F0532: sub     edi, 1
0x6F0535: add     esi, 14h
0x6F0538: mov     byte ptr [ebp+var_4], bl
0x6F053B: mov     [ebp+arg_0], esi
0x6F053E: jmp     short loc_6F0510
0x6F0540: mov     esi, [ebp+var_14]
0x6F0543: mov     edi, [ebp+arg_0]
0x6F0546: cmp     esi, edi
0x6F0548: jz      short loc_6F055F
0x6F054A: mov     ebx, [ebp+arg_C]
0x6F054D: lea     ecx, [ecx+0]
0x6F0550: push    esi
0x6F0551: mov     ecx, ebx
0x6F0553: call    sub_557180
0x6F0558: add     esi, 14h
0x6F055B: cmp     esi, edi
0x6F055D: jnz     short loc_6F0550
0x6F055F: xor     ebx, ebx
0x6F0561: push    ebx
0x6F0562: push    ebx
0x6F0563: call    ThrowException??
0x6F0568: mov     ecx, [ebp+var_C]
0x6F056B: mov     large fs:0, ecx
0x6F0572: pop     ecx
0x6F0573: pop     edi
0x6F0574: pop     esi
0x6F0575: pop     ebx
0x6F0576: mov     esp, ebp
0x6F0578: pop     ebp
0x6F0579: retn
