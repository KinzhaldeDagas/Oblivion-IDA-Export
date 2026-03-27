0x6B8E00: push    0FFFFFFFFh
0x6B8E02: push    offset SEH_6B8E00
0x6B8E07: mov     eax, large fs:0
0x6B8E0D: push    eax
0x6B8E0E: push    ecx
0x6B8E0F: push    ebx
0x6B8E10: push    ebp
0x6B8E11: push    esi
0x6B8E12: push    edi
0x6B8E13: mov     eax, ds:0B30AACh
0x6B8E18: xor     eax, esp
0x6B8E1A: push    eax
0x6B8E1B: lea     eax, [esp+24h+var_C]
0x6B8E1F: mov     large fs:0, eax
0x6B8E25: mov     esi, ecx
0x6B8E27: mov     [esp+24h+var_10], esi
0x6B8E2B: xor     ebx, ebx
0x6B8E2D: mov     [esi], ebx
0x6B8E2F: mov     [esi+4], bx
0x6B8E33: mov     [esi+6], bx
0x6B8E37: mov     ebp, [esp+24h+arg_4]
0x6B8E3B: mov     [esi+0Ch], ebx
0x6B8E3E: mov     [esi+10h], ebx
0x6B8E41: mov     [esi+1Ch], ebx
0x6B8E44: mov     [esi+14h], ebx
0x6B8E47: mov     [esi+24h], ebx
0x6B8E4A: mov     [esi+18h], ebx
0x6B8E4D: cmp     dword ptr [ebp+0Ch], 0D7h ; '×'
0x6B8E54: mov     [esp+24h+var_4], ebx
0x6B8E58: jnz     short loc_6B8E63
0x6B8E5A: mov     byte ptr [esi+20h], 1
0x6B8E5E: mov     [esi+8], bl
0x6B8E61: jmp     short loc_6B8E66
0x6B8E63: mov     [esi+20h], bl
0x6B8E66: mov     eax, [esp+24h+arg_0]
0x6B8E6A: mov     [esp+24h+arg_4], eax
0x6B8E6E: mov     eax, [esp+24h+arg_8]
0x6B8E72: cmp     eax, ebx
0x6B8E74: mov     edi, ebp
0x6B8E76: mov     [esp+24h+arg_0], edi
0x6B8E7A: jz      loc_6B8F24
0x6B8E80: cmp     [eax+22h], bl
0x6B8E83: mov     [esi+18h], eax
0x6B8E86: setz    cl
0x6B8E89: cmp     [esp+24h+arg_10], bl
0x6B8E8D: mov     [esi+21h], cl
0x6B8E90: jz      short loc_6B8ED4
0x6B8E92: movzx   edx, byte ptr [eax+25h]
0x6B8E96: shr     edx, 4
0x6B8E99: test    dl, 1
0x6B8E9C: jnz     short loc_6B8ED4
0x6B8E9E: push    ebx
0x6B8E9F: push    6
0x6B8EA1: call    TESTopic__GEtTopic
0x6B8EA6: mov     ecx, [esp+2Ch+arg_C]
0x6B8EAA: mov     edi, eax
0x6B8EAC: mov     eax, ds:0B333C4h
0x6B8EB1: add     esp, 8
0x6B8EB4: push    eax
0x6B8EB5: push    ecx
0x6B8EB6: mov     ecx, edi
0x6B8EB8: call    sub_530020
0x6B8EBD: cmp     eax, ebx
0x6B8EBF: jz      short loc_6B8ED4
0x6B8EC1: push    eax
0x6B8EC2: mov     ecx, edi
0x6B8EC4: mov     [esi+18h], eax
0x6B8EC7: mov     [esp+28h+arg_0], edi
0x6B8ECB: call    sub_52F570
0x6B8ED0: mov     [esp+24h+arg_4], eax
0x6B8ED4: mov     eax, [ebp+1Ch]
0x6B8ED7: cmp     eax, ebx
0x6B8ED9: jnz     short loc_6B8EE0
0x6B8EDB: mov     eax, offset EmptyString
0x6B8EE0: push    ebx; a3
0x6B8EE1: push    eax; a2
0x6B8EE2: mov     ecx, esi; this
0x6B8EE4: call    BSStringT_Set
0x6B8EE9: cmp     [esi+20h], bl
0x6B8EEC: jnz     short loc_6B8F0A
0x6B8EEE: mov     edx, [esi+18h]
0x6B8EF1: mov     eax, [edx+30h]
0x6B8EF4: cmp     eax, ebx
0x6B8EF6: jz      short loc_6B8F07
0x6B8EF8: cmp     [eax+0Ch], ebx
0x6B8EFB: jnz     short loc_6B8F02
0x6B8EFD: cmp     [eax+8], ebx
0x6B8F00: jz      short loc_6B8F07
0x6B8F02: mov     ebx, 1
0x6B8F07: mov     [esi+8], bl
0x6B8F0A: mov     eax, [esp+24h+arg_C]
0x6B8F0E: mov     ecx, [esi+18h]
0x6B8F11: mov     edi, [esp+24h+arg_0]
0x6B8F15: mov     edx, [esp+24h+arg_4]
0x6B8F19: push    eax
0x6B8F1A: push    ecx
0x6B8F1B: push    edi
0x6B8F1C: push    edx
0x6B8F1D: mov     ecx, esi
0x6B8F1F: call    sub_6B8CF0
0x6B8F24: mov     eax, [esp+24h+arg_4]
0x6B8F28: mov     [esi+14h], eax
0x6B8F2B: mov     [esi+24h], edi
0x6B8F2E: mov     eax, esi
0x6B8F30: mov     ecx, [esp+24h+var_C]
0x6B8F34: mov     large fs:0, ecx
0x6B8F3B: pop     ecx
0x6B8F3C: pop     edi
0x6B8F3D: pop     esi
0x6B8F3E: pop     ebp
0x6B8F3F: pop     ebx
0x6B8F40: add     esp, 10h
0x6B8F43: retn    14h
