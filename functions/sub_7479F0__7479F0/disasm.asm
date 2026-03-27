0x7479F0: sub     esp, 80Ch
0x7479F6: mov     eax, ds:0B30AACh
0x7479FB: xor     eax, esp
0x7479FD: mov     [esp+80Ch+var_4], eax
0x747A04: push    ebx
0x747A05: mov     ebx, [esp+810h+arg_0]
0x747A0C: push    esi
0x747A0D: mov     esi, ecx
0x747A0F: push    edi; Src
0x747A10: lea     edi, [esi+8]
0x747A13: push    edi; FullPath
0x747A14: lea     ecx, [esp+81Ch+Dir]; Dir
0x747A18: call    sub_748760
0x747A1D: mov     eax, [esi+4]
0x747A20: cmp     eax, 4; switch 5 cases
0x747A23: ja      def_747A29
0x747A29: jmp     ds:jpt_747A29[eax*4]; switch jump
0x747A30: push    offset EmptyString; jumptable 00747A29 case 1
0x747A35: lea     eax, [esp+81Ch+Dst]
0x747A3C: push    3; SizeInBytes
0x747A3E: push    eax; Dst
0x747A3F: call    _strcpy_s
0x747A44: push    offset EmptyString
0x747A49: push    100h
0x747A4E: lea     ecx, [esp+82Ch+Dir]
0x747A52: push    ecx
0x747A53: jmp     loc_747B23
0x747A58: push    offset EmptyString; jumptable 00747A29 case 2
0x747A5D: lea     edx, [esp+81Ch+Dst]
0x747A64: push    3; SizeInBytes
0x747A66: push    edx; Dst
0x747A67: call    _strcpy_s
0x747A6C: lea     eax, [esi+10Ch]
0x747A72: push    eax; Src
0x747A73: lea     ecx, [esp+828h+Dir]
0x747A77: push    100h; SizeInBytes
0x747A7C: push    ecx; Dst
0x747A7D: call    _strcpy_s
0x747A82: add     esp, 18h
0x747A85: push    edi; FullPath
0x747A86: lea     ecx, [esp+81Ch+Src]; Dir
0x747A8D: call    sub_748760
0x747A92: lea     edx, [esp+818h+Src]
0x747A99: push    edx; Src
0x747A9A: lea     eax, [esp+81Ch+var_509]
0x747AA1: push    100h; SizeInBytes
0x747AA6: push    eax; Dst
0x747AA7: call    _strcpy_s
0x747AAC: add     esp, 0Ch
0x747AAF: jmp     short loc_747B2B; jumptable 00747A29 case 0
0x747AB1: push    offset EmptyString; jumptable 00747A29 case 3
0x747AB6: lea     ecx, [esp+81Ch+Dst]
0x747ABD: push    3; SizeInBytes
0x747ABF: push    ecx; Dst
0x747AC0: call    _strcpy_s
0x747AC5: lea     edx, [esi+10Ch]
0x747ACB: push    edx; Src
0x747ACC: lea     eax, [esp+828h+Dir]
0x747AD0: push    100h; SizeInBytes
0x747AD5: push    eax; Dst
0x747AD6: call    _strcpy_s
0x747ADB: push    offset EmptyString; Src
0x747AE0: lea     ecx, [esp+834h+var_509]
0x747AE7: push    100h; SizeInBytes
0x747AEC: push    ecx; Dst
0x747AED: call    _strcpy_s
0x747AF2: add     esp, 24h
0x747AF5: jmp     short loc_747B2B; jumptable 00747A29 case 0
0x747AF7: cmp     byte ptr ds:0B40230h, 0; jumptable 00747A29 case 4
0x747AFE: jz      short def_747A29
0x747B00: push    offset EmptyString; Src
0x747B05: lea     edx, [esp+81Ch+Dst]
0x747B0C: push    3; SizeInBytes
0x747B0E: push    edx; Dst
0x747B0F: call    _strcpy_s
0x747B14: push    offset byte_B40230; Src
0x747B19: push    100h; SizeInBytes
0x747B1E: lea     eax, [esp+82Ch+Dir]
0x747B22: push    eax; Dst
0x747B23: call    _strcpy_s
0x747B28: add     esp, 18h
0x747B2B: mov     ecx, [esp+818h+arg_4]; jumptable 00747A29 case 0
0x747B32: push    ecx; int
0x747B33: push    ebx; int
0x747B34: lea     ecx, [esp+820h+Dir]; Src
0x747B38: call    sub_7487B0
0x747B3D: push    ebx
0x747B3E: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x747B43: mov     eax, 1
0x747B48: add     esp, 4
0x747B4B: add     [esi+4], eax
0x747B4E: jmp     short loc_747B52
