0x483AA0: push    0FFFFFFFFh
0x483AA2: push    offset ??1GridDistantArray@@UAE@XZ_SEH
0x483AA7: mov     eax, large fs:0
0x483AAD: push    eax
0x483AAE: push    ecx
0x483AAF: push    esi
0x483AB0: push    edi
0x483AB1: mov     eax, ds:0B30AACh
0x483AB6: xor     eax, esp
0x483AB8: push    eax
0x483AB9: lea     eax, [esp+1Ch+var_C]
0x483ABD: mov     large fs:0, eax
0x483AC3: mov     esi, ecx
0x483AC5: mov     [esp+1Ch+var_10], esi
0x483AC9: mov     dword ptr [esi], offset ??_7GridDistantArray@@6B@; const GridDistantArray::`vftable'
0x483ACF: mov     [esp+1Ch+var_4], 0
0x483AD7: call    sub_481E10
0x483ADC: mov     eax, [esi+10h]
0x483ADF: test    eax, eax
0x483AE1: jz      short loc_483B00
0x483AE3: mov     ecx, [eax-4]
0x483AE6: lea     edi, [eax-4]
0x483AE9: push    offset sub_483600; void (__thiscall *)(void *)
0x483AEE: push    ecx; int
0x483AEF: push    10h; unsigned int
0x483AF1: push    eax; void *
0x483AF2: call    $LN21
0x483AF7: push    edi
0x483AF8: call    FormHeapFree
0x483AFD: add     esp, 4
0x483B00: mov     edi, ds:0B34424h
0x483B06: test    edi, edi
0x483B08: jz      short loc_483B30
0x483B0A: lea     edx, [edi+4]
0x483B0D: push    edx; lpAddend
0x483B0E: call    dword ptr ds:0A2807Ch
0x483B14: test    eax, eax
0x483B16: jnz     short loc_483B26
0x483B18: test    edi, edi
0x483B1A: jz      short loc_483B26
0x483B1C: mov     eax, [edi]
0x483B1E: mov     edx, [eax]
0x483B20: push    1
0x483B22: mov     ecx, edi
0x483B24: call    edx
0x483B26: mov     dword ptr ds:0B34424h, 0
0x483B30: mov     ecx, esi
0x483B32: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x483B3A: call    sub_481DF0
0x483B3F: mov     ecx, dword ptr [esp+1Ch+var_C]
0x483B43: mov     large fs:0, ecx
0x483B4A: pop     ecx
0x483B4B: pop     edi
0x483B4C: pop     esi
0x483B4D: add     esp, 10h
0x483B50: retn
