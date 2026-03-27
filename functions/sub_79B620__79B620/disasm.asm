0x79B620: push    ebp
0x79B621: mov     ebp, esp
0x79B623: push    0FFFFFFFFh
0x79B625: push    offset SEH_79B620
0x79B62A: mov     eax, large fs:0
0x79B630: push    eax
0x79B631: sub     esp, 8
0x79B634: push    ebx
0x79B635: push    esi
0x79B636: push    edi
0x79B637: mov     eax, ds:0B30AACh
0x79B63C: xor     eax, ebp
0x79B63E: push    eax
0x79B63F: lea     eax, [ebp+var_C]
0x79B642: mov     large fs:0, eax
0x79B648: mov     [ebp+var_10], esp
0x79B64B: mov     edi, [ebp+arg_0]
0x79B64E: mov     ebx, [ebp+arg_8]
0x79B651: mov     esi, [ebp+arg_4]
0x79B654: mov     [ebp+var_14], edi
0x79B657: mov     [ebp+var_4], 0
0x79B65E: mov     edi, edi
0x79B660: test    esi, esi
0x79B662: jbe     short loc_79B69E
0x79B664: push    ebx
0x79B665: push    edi
0x79B666: call    sub_79AC40
0x79B66B: add     esp, 8
0x79B66E: sub     esi, 1
0x79B671: add     edi, 2Ch ; ','
0x79B674: mov     [ebp+arg_0], edi
0x79B677: jmp     short loc_79B660
0x79B679: mov     esi, [ebp+var_14]
0x79B67C: mov     edi, [ebp+arg_0]
0x79B67F: cmp     esi, edi
0x79B681: jz      short loc_79B695
0x79B683: mov     ebx, [ebp+arg_C]
0x79B686: push    esi
0x79B687: mov     ecx, ebx
0x79B689: call    sub_79AC10
0x79B68E: add     esi, 2Ch ; ','
0x79B691: cmp     esi, edi
0x79B693: jnz     short loc_79B686
0x79B695: push    0
0x79B697: push    0
0x79B699: call    ThrowException??
0x79B69E: mov     ecx, [ebp+var_C]
0x79B6A1: mov     large fs:0, ecx
0x79B6A8: pop     ecx
0x79B6A9: pop     edi
0x79B6AA: pop     esi
0x79B6AB: pop     ebx
0x79B6AC: mov     esp, ebp
0x79B6AE: pop     ebp
0x79B6AF: retn
