0x879AB0: push    0FFFFFFFFh
0x879AB2: push    offset SEH_880560
0x879AB7: mov     eax, large fs:0
0x879ABD: push    eax
0x879ABE: push    ebx
0x879ABF: push    ebp
0x879AC0: push    esi
0x879AC1: push    edi
0x879AC2: mov     eax, ds:0B30AACh
0x879AC7: xor     eax, esp
0x879AC9: push    eax
0x879ACA: lea     eax, [esp+20h+var_C]
0x879ACE: mov     large fs:0, eax
0x879AD4: mov     edi, ecx
0x879AD6: mov     ecx, [esp+20h+arg_0]
0x879ADA: mov     eax, [edi]
0x879ADC: mov     edx, [eax+0BCh]
0x879AE2: mov     esi, ds:0B476E0h
0x879AE8: push    0
0x879AEA: push    0
0x879AEC: push    ecx
0x879AED: mov     ecx, edi
0x879AEF: call    edx
0x879AF1: mov     eax, [esi+24h]
0x879AF4: mov     ecx, [esp+20h+arg_C]
0x879AF8: mov     ebx, [eax]
0x879AFA: push    0
0x879AFC: push    ecx
0x879AFD: mov     ecx, edi
0x879AFF: mov     [esp+28h+arg_0], ebx
0x879B03: call    sub_848FD0
0x879B08: mov     ebx, [ebx+4]
0x879B0B: mov     ebp, eax
0x879B0D: cmp     ebx, ebp
0x879B0F: jz      short loc_879B46
0x879B11: test    ebx, ebx
0x879B13: jz      short loc_879B31
0x879B15: lea     edx, [ebx+4]
0x879B18: push    edx; lpAddend
0x879B19: call    dword ptr ds:0A2807Ch
0x879B1F: test    eax, eax
0x879B21: jnz     short loc_879B31
0x879B23: test    ebx, ebx
0x879B25: jz      short loc_879B31
0x879B27: mov     eax, [ebx]
0x879B29: mov     edx, [eax]
0x879B2B: push    1
0x879B2D: mov     ecx, ebx
0x879B2F: call    edx
0x879B31: test    ebp, ebp
0x879B33: mov     eax, [esp+20h+arg_0]
0x879B37: mov     [eax+4], ebp
0x879B3A: jz      short loc_879B46
0x879B3C: add     ebp, 4
0x879B3F: push    ebp; lpAddend
0x879B40: call    dword ptr ds:0A28078h
0x879B46: mov     ecx, [esi+24h]
0x879B49: mov     ebx, [ecx+4]
0x879B4C: mov     ecx, [esp+20h+arg_C]
0x879B50: mov     edx, [ecx]
0x879B52: mov     eax, [edx+88h]
0x879B58: push    0
0x879B5A: mov     [esp+24h+arg_0], ebx
0x879B5E: call    eax
0x879B60: mov     ebx, [ebx+4]
0x879B63: mov     ebp, eax
0x879B65: cmp     ebx, ebp
0x879B67: jz      short loc_879B9E
0x879B69: test    ebx, ebx
0x879B6B: jz      short loc_879B89
0x879B6D: lea     ecx, [ebx+4]
0x879B70: push    ecx; lpAddend
0x879B71: call    dword ptr ds:0A2807Ch
0x879B77: test    eax, eax
0x879B79: jnz     short loc_879B89
0x879B7B: test    ebx, ebx
0x879B7D: jz      short loc_879B89
0x879B7F: mov     edx, [ebx]
0x879B81: mov     eax, [edx]
0x879B83: push    1
0x879B85: mov     ecx, ebx
0x879B87: call    eax
0x879B89: test    ebp, ebp
0x879B8B: mov     ecx, [esp+20h+arg_0]
0x879B8F: mov     [ecx+4], ebp
0x879B92: jz      short loc_879B9E
0x879B94: add     ebp, 4
0x879B97: push    ebp; lpAddend
0x879B98: call    dword ptr ds:0A28078h
0x879B9E: mov     edx, [esi+24h]
0x879BA1: mov     ebp, [edx+0Ch]
0x879BA4: mov     eax, ds:0B43110h
0x879BA9: mov     ebx, [ebp+4]
0x879BAC: cmp     ebx, eax
0x879BAE: mov     ecx, eax
0x879BB0: mov     [esp+20h+arg_C], ecx
0x879BB4: jz      short loc_879BEB
0x879BB6: test    ebx, ebx
0x879BB8: jz      short loc_879BDA
0x879BBA: lea     eax, [ebx+4]
0x879BBD: push    eax; lpAddend
0x879BBE: call    dword ptr ds:0A2807Ch
0x879BC4: test    eax, eax
0x879BC6: jnz     short loc_879BD6
0x879BC8: test    ebx, ebx
0x879BCA: jz      short loc_879BD6
0x879BCC: mov     edx, [ebx]
0x879BCE: mov     eax, [edx]
0x879BD0: push    1
0x879BD2: mov     ecx, ebx
0x879BD4: call    eax
0x879BD6: mov     ecx, [esp+20h+arg_C]
0x879BDA: test    ecx, ecx
0x879BDC: mov     [ebp+4], ecx
0x879BDF: jz      short loc_879BEB
0x879BE1: add     ecx, 4
0x879BE4: push    ecx; lpAddend
0x879BE5: call    dword ptr ds:0A28078h
0x879BEB: mov     ebx, 1
0x879BF0: add     [esi+60h], ebx
0x879BF3: mov     [esp+20h+arg_C], esi
0x879BF7: mov     edx, [edi+38h]
0x879BFA: lea     ecx, [esp+20h+arg_C]
0x879BFE: push    ecx
0x879BFF: push    edx
0x879C00: lea     ecx, [edi+40h]
0x879C03: mov     [esp+28h+var_4], 0
0x879C0B: call    sub_76CE40
0x879C10: or      eax, 0FFFFFFFFh
0x879C13: add     [esi+60h], eax
0x879C16: mov     [esp+20h+var_4], eax
0x879C1A: jnz     short loc_879C23
0x879C1C: mov     ecx, esi
0x879C1E: call    sub_7604D0
0x879C23: add     [edi+38h], ebx
0x879C26: mov     ecx, [esp+20h+var_C]
0x879C2A: mov     large fs:0, ecx
0x879C31: pop     ecx
0x879C32: pop     edi
0x879C33: pop     esi
0x879C34: pop     ebp
0x879C35: pop     ebx
0x879C36: add     esp, 0Ch
0x879C39: retn    10h
