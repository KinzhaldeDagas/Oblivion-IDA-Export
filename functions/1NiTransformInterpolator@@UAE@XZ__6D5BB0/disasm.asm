0x6D5BB0: push    0FFFFFFFFh
0x6D5BB2: push    offset ??1NiPoint3Interpolator@@UAE@XZ_SEH
0x6D5BB7: mov     eax, large fs:0
0x6D5BBD: push    eax
0x6D5BBE: push    ecx
0x6D5BBF: push    esi
0x6D5BC0: push    edi
0x6D5BC1: mov     eax, ds:0B30AACh
0x6D5BC6: xor     eax, esp
0x6D5BC8: push    eax
0x6D5BC9: lea     eax, [esp+1Ch+var_C]
0x6D5BCD: mov     large fs:0, eax
0x6D5BD3: mov     edi, ecx
0x6D5BD5: mov     [esp+1Ch+var_10], edi
0x6D5BD9: mov     esi, [edi+2Ch]
0x6D5BDC: test    esi, esi
0x6D5BDE: mov     [esp+1Ch+var_4], 0
0x6D5BE6: jz      short loc_6D5C04
0x6D5BE8: lea     eax, [esi+4]
0x6D5BEB: push    eax; lpAddend
0x6D5BEC: call    dword ptr ds:0A2807Ch
0x6D5BF2: test    eax, eax
0x6D5BF4: jnz     short loc_6D5C04
0x6D5BF6: test    esi, esi
0x6D5BF8: jz      short loc_6D5C04
0x6D5BFA: mov     edx, [esi]
0x6D5BFC: mov     eax, [edx]
0x6D5BFE: push    1
0x6D5C00: mov     ecx, esi
0x6D5C02: call    eax
0x6D5C04: mov     ecx, edi
0x6D5C06: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6D5C0E: call    sub_6EC250
0x6D5C13: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6D5C17: mov     large fs:0, ecx
0x6D5C1E: pop     ecx
0x6D5C1F: pop     edi
0x6D5C20: pop     esi
0x6D5C21: add     esp, 10h
0x6D5C24: retn
