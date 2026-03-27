0x6C9E00: fldz
0x6C9E02: push    ebx
0x6C9E03: push    esi
0x6C9E04: push    edi
0x6C9E05: push    1; char
0x6C9E07: push    ecx
0x6C9E08: fstp    [esp+14h+var_14]; float
0x6C9E0B: mov     edi, ecx
0x6C9E0D: call    sub_6C9CB0
0x6C9E12: fld     [esp+0Ch+arg_4]
0x6C9E16: mov     esi, [esp+0Ch+a2]
0x6C9E1A: mov     ebx, [esp+0Ch+arg_8]
0x6C9E1E: push    1; int
0x6C9E20: push    esi; int
0x6C9E21: sub     esp, 8
0x6C9E24: fstp    [esp+1Ch+var_18]; float
0x6C9E28: mov     ecx, edi
0x6C9E2A: fld     [esp+1Ch+arg_C]
0x6C9E2E: fstp    [esp+1Ch+var_1C]; float
0x6C9E31: push    0; char
0x6C9E33: push    ebx; int
0x6C9E34: call    sub_6C9BA0
0x6C9E39: test    al, al
0x6C9E3B: jz      loc_6C9F07
0x6C9E41: cmp     dword ptr [esi+44h], 0
0x6C9E45: jnz     loc_6C9F07
0x6C9E4B: push    ebx
0x6C9E4C: mov     ecx, esi
0x6C9E4E: mov     dword ptr [esi+58h], 0
0x6C9E55: call    sub_6C6A50
0x6C9E5A: fld     [esp+0Ch+arg_10]
0x6C9E5E: fstp    dword ptr [esi+1Ch]
0x6C9E61: fldz
0x6C9E63: fcomp   [esp+0Ch+arg_4]
0x6C9E67: fnstsw  ax
0x6C9E69: test    ah, 5
0x6C9E6C: jp      short loc_6C9EA8
0x6C9E6E: cmp     dword ptr [esi+44h], 0
0x6C9E72: mov     dword ptr [esi+44h], 5
0x6C9E79: setz    al
0x6C9E7C: test    al, al
0x6C9E7E: jz      short loc_6C9E94
0x6C9E80: mov     ecx, [esi+40h]
0x6C9E83: lea     eax, [esp+0Ch+a2]
0x6C9E87: push    eax; a2
0x6C9E88: add     ecx, 4Ch ; 'L'; this
0x6C9E8B: mov     [esp+10h+a2], esi
0x6C9E8F: call    sub_73A5E0
0x6C9E94: fld     dword ptr ds:0A7DEB4h
0x6C9E9A: fchs
0x6C9E9C: fstp    dword ptr [esi+4Ch]
0x6C9E9F: fld     [esp+0Ch+arg_4]
0x6C9EA3: fstp    dword ptr [esi+50h]
0x6C9EA6: jmp     short loc_6C9ECE
0x6C9EA8: cmp     dword ptr [esi+44h], 0
0x6C9EAC: mov     dword ptr [esi+44h], 1
0x6C9EB3: setz    al
0x6C9EB6: test    al, al
0x6C9EB8: jz      short loc_6C9ECE
0x6C9EBA: lea     ecx, [esp+0Ch+arg_4]
0x6C9EBE: push    ecx; a2
0x6C9EBF: mov     ecx, [esi+40h]
0x6C9EC2: add     ecx, 4Ch ; 'L'; this
0x6C9EC5: mov     [esp+10h+arg_4], esi
0x6C9EC9: call    sub_73A5E0
0x6C9ECE: fld     dword ptr ds:0A7DEB4h
0x6C9ED4: fchs
0x6C9ED6: fstp    dword ptr [esi+48h]
0x6C9ED9: cmp     dword ptr [edi+44h], 0
0x6C9EDD: mov     dword ptr [edi+44h], 6
0x6C9EE4: setz    al
0x6C9EE7: test    al, al
0x6C9EE9: jz      short loc_6C9EFF
0x6C9EEB: mov     ecx, [edi+40h]
0x6C9EEE: lea     edx, [esp+0Ch+arg_4]
0x6C9EF2: push    edx; a2
0x6C9EF3: add     ecx, 4Ch ; 'L'; this
0x6C9EF6: mov     [esp+10h+arg_4], edi
0x6C9EFA: call    sub_73A5E0
0x6C9EFF: pop     edi
0x6C9F00: pop     esi
0x6C9F01: mov     al, 1
0x6C9F03: pop     ebx
0x6C9F04: retn    14h
0x6C9F07: pop     edi
0x6C9F08: pop     esi
0x6C9F09: xor     al, al
0x6C9F0B: pop     ebx
0x6C9F0C: retn    14h
