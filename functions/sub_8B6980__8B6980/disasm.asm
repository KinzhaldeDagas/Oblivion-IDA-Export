0x8B6980: push    0FFFFFFFFh
0x8B6982: push    offset SEH_8C82D0
0x8B6987: mov     eax, large fs:0
0x8B698D: push    eax
0x8B698E: push    ecx
0x8B698F: push    esi
0x8B6990: push    edi
0x8B6991: mov     eax, ds:0B30AACh
0x8B6996: xor     eax, esp
0x8B6998: push    eax
0x8B6999: lea     eax, [esp+1Ch+var_C]
0x8B699D: mov     large fs:0, eax
0x8B69A3: mov     edi, ecx
0x8B69A5: mov     ecx, ds:0BA7D98h
0x8B69AB: mov     eax, [ecx]
0x8B69AD: mov     edx, [eax+10h]
0x8B69B0: push    24h ; '$'
0x8B69B2: push    30h ; '0'
0x8B69B4: call    edx
0x8B69B6: mov     word ptr [eax+4], 30h ; '0'
0x8B69BC: mov     [esp+1Ch+var_10], eax
0x8B69C0: fld     [esp+1Ch+arg_8]
0x8B69C4: mov     edx, [esp+1Ch+arg_0]
0x8B69C8: push    ecx
0x8B69C9: mov     ecx, [esp+20h+arg_4]
0x8B69CD: fstp    [esp+20h+var_20]
0x8B69D0: push    ecx
0x8B69D1: push    edx
0x8B69D2: mov     ecx, eax
0x8B69D4: mov     [esp+28h+var_4], 0
0x8B69DC: call    sub_8F3490
0x8B69E1: mov     esi, eax
0x8B69E3: mov     eax, [edi]
0x8B69E5: mov     edx, [eax+4Ch]
0x8B69E8: push    esi
0x8B69E9: mov     ecx, edi
0x8B69EB: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8B69F3: call    edx
0x8B69F5: cmp     word ptr [esi+4], 0
0x8B69FA: jz      short loc_8B6A14
0x8B69FC: add     word ptr [esi+6], 0FFFFh
0x8B6A01: movzx   eax, word ptr [esi+6]
0x8B6A05: test    ax, ax
0x8B6A08: jnz     short loc_8B6A14
0x8B6A0A: mov     eax, [esi]
0x8B6A0C: mov     edx, [eax]
0x8B6A0E: push    1
0x8B6A10: mov     ecx, esi
0x8B6A12: call    edx
0x8B6A14: mov     ecx, [esp+1Ch+var_C]
0x8B6A18: mov     large fs:0, ecx
0x8B6A1F: pop     ecx
0x8B6A20: pop     edi
0x8B6A21: pop     esi
0x8B6A22: add     esp, 10h
0x8B6A25: retn    0Ch
