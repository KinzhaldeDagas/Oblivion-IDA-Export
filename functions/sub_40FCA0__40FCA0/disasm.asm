0x40FCA0: sub     esp, 18h
0x40FCA3: push    ebx
0x40FCA4: push    ebp
0x40FCA5: mov     ebp, [esp+20h+arg_0]
0x40FCA9: push    edi
0x40FCAA: mov     ebx, 1
0x40FCAF: call    ds:_BinkDoFrame@4; BinkDoFrame(x)
0x40FCB5: lea     eax, [esp+20h+var_18]
0x40FCB9: push    eax
0x40FCBA: lea     ecx, [esp+24h+var_14]
0x40FCBE: push    ecx
0x40FCBF: lea     edx, [esp+28h+var_10]
0x40FCC3: push    edx
0x40FCC4: lea     eax, [esp+2Ch+var_C]
0x40FCC8: push    eax
0x40FCC9: lea     ecx, [esp+30h+var_8]
0x40FCCD: push    ecx
0x40FCCE: lea     edx, [esp+34h+var_4]
0x40FCD2: push    edx
0x40FCD3: push    esi
0x40FCD4: call    sub_40F880
0x40FCD9: add     esp, 1Ch
0x40FCDC: test    eax, eax
0x40FCDE: jz      short loc_40FD5F
0x40FCE0: neg     ebp
0x40FCE2: sbb     ebp, ebp
0x40FCE4: and     ebp, 80000000h
0x40FCEA: or      ebp, 3
0x40FCED: lea     ecx, [ecx+0]
0x40FCF0: mov     eax, [esp+20h+var_18]
0x40FCF4: mov     ecx, [esp+20h+var_14]
0x40FCF8: mov     edx, [esp+20h+var_10]
0x40FCFC: push    ebp
0x40FCFD: push    eax
0x40FCFE: mov     eax, [esp+28h+var_C]
0x40FD02: push    ecx
0x40FD03: mov     ecx, [edi+4]
0x40FD06: push    edx
0x40FD07: mov     edx, [esp+30h+var_8]
0x40FD0B: push    eax
0x40FD0C: mov     eax, [esp+34h+var_4]
0x40FD10: push    0
0x40FD12: push    0
0x40FD14: push    ecx
0x40FD15: push    edx
0x40FD16: push    eax
0x40FD17: push    edi
0x40FD18: call    ds:_BinkCopyToBufferRect@44; BinkCopyToBufferRect(x,x,x,x,x,x,x,x,x,x,x)
0x40FD1E: mov     ecx, [esi+14h]
0x40FD21: mov     edx, [esi+40h]
0x40FD24: mov     ebx, eax
0x40FD26: mov     eax, [edx+ecx*4-4]
0x40FD2A: mov     ecx, [eax]
0x40FD2C: mov     edx, [ecx+50h]
0x40FD2F: push    0
0x40FD31: push    eax
0x40FD32: call    edx
0x40FD34: lea     eax, [esp+28h+var_20]
0x40FD38: push    eax
0x40FD39: lea     ecx, [esp+2Ch+var_1C]
0x40FD3D: push    ecx
0x40FD3E: lea     edx, [esp+30h+var_18]
0x40FD42: push    edx
0x40FD43: lea     eax, [esp+34h+var_14]
0x40FD47: push    eax
0x40FD48: lea     ecx, [esp+38h+var_10]
0x40FD4C: push    ecx
0x40FD4D: lea     edx, [esp+3Ch+var_C]
0x40FD51: push    edx
0x40FD52: push    esi
0x40FD53: call    sub_40F880
0x40FD58: add     esp, 1Ch
0x40FD5B: test    eax, eax
0x40FD5D: jnz     short loc_40FCF0
0x40FD5F: test    ebx, ebx
0x40FD61: pop     ebp
0x40FD62: setnz   al
0x40FD65: pop     ebx
0x40FD66: add     esp, 18h
0x40FD69: retn
