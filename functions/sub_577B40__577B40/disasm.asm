0x577B40: push    0FFFFFFFFh
0x577B42: push    offset SEH_5F6020
0x577B47: mov     eax, large fs:0
0x577B4D: push    eax
0x577B4E: push    esi
0x577B4F: push    edi
0x577B50: mov     eax, ds:0B30AACh
0x577B55: xor     eax, esp
0x577B57: push    eax
0x577B58: lea     eax, [esp+18h+var_C]
0x577B5C: mov     large fs:0, eax
0x577B62: mov     esi, ecx
0x577B64: mov     eax, [esi+0Ch]
0x577B67: test    eax, eax
0x577B69: jz      short loc_577B8C
0x577B6B: cmp     byte ptr [esp+18h+arg_8], 0
0x577B70: jnz     short loc_577B8C
0x577B72: mov     eax, [esi+8]
0x577B75: mov     ecx, [esp+18h+arg_4]
0x577B79: mov     edx, [esp+18h+arg_0]
0x577B7D: push    ecx
0x577B7E: mov     ecx, [eax+8]
0x577B81: add     eax, 8
0x577B84: push    edx
0x577B85: call    sub_577840
0x577B8A: jmp     short loc_577BC7
0x577B8C: push    3Ch ; '<'; Size
0x577B8E: call    FormHeapAlloc
0x577B93: add     esp, 4
0x577B96: mov     [esp+18h+arg_8], eax
0x577B9A: test    eax, eax
0x577B9C: mov     [esp+18h+var_4], 0
0x577BA4: jz      short loc_577BBD
0x577BA6: mov     ecx, [esi+14h]
0x577BA9: mov     edx, [esi+10h]
0x577BAC: push    ecx
0x577BAD: mov     ecx, [esp+1Ch+arg_0]
0x577BB1: push    edx
0x577BB2: push    ecx
0x577BB3: push    esi
0x577BB4: mov     ecx, eax
0x577BB6: call    sub_577A10
0x577BBB: jmp     short loc_577BBF
0x577BBD: xor     eax, eax
0x577BBF: mov     [esp+18h+var_4], 0FFFFFFFFh
0x577BC7: mov     edi, eax
0x577BC9: test    edi, edi
0x577BCB: jz      short loc_577BFA
0x577BCD: mov     edx, [esi]
0x577BCF: mov     eax, [edx+4]
0x577BD2: mov     ecx, esi
0x577BD4: call    eax
0x577BD6: mov     [eax+8], edi
0x577BD9: mov     dword ptr [eax], 0
0x577BDF: mov     ecx, [esi+8]
0x577BE2: mov     [eax+4], ecx
0x577BE5: mov     ecx, [esi+8]
0x577BE8: test    ecx, ecx
0x577BEA: jz      short loc_577BF0
0x577BEC: mov     [ecx], eax
0x577BEE: jmp     short loc_577BF3
0x577BF0: mov     [esi+4], eax
0x577BF3: add     dword ptr [esi+0Ch], 1
0x577BF7: mov     [esi+8], eax
0x577BFA: mov     ecx, [esp+18h+var_C]
0x577BFE: mov     large fs:0, ecx
0x577C05: pop     ecx
0x577C06: pop     edi
0x577C07: pop     esi
0x577C08: add     esp, 0Ch
0x577C0B: retn    0Ch
