0x88E1D0: push    ebp
0x88E1D1: mov     ebp, esp
0x88E1D3: and     esp, 0FFFFFFF0h
0x88E1D6: sub     esp, 44h
0x88E1D9: mov     eax, ds:0B30AACh
0x88E1DE: xor     eax, esp
0x88E1E0: mov     [esp+44h+var_4], eax
0x88E1E4: mov     edx, ecx
0x88E1E6: mov     ecx, [ebp+arg_0]
0x88E1E9: push    ebx
0x88E1EA: xor     eax, eax
0x88E1EC: cmp     ecx, [edx+0A4h]
0x88E1F2: push    esi
0x88E1F3: push    edi
0x88E1F4: mov     [esp+50h+var_38], edx
0x88E1F8: mov     [esp+50h+var_44], eax
0x88E1FC: jge     loc_88E29D
0x88E202: mov     edx, [edx+90h]
0x88E208: mov     ecx, [edx+ecx*4]
0x88E20B: cmp     ecx, eax
0x88E20D: mov     [esp+50h+var_34], ecx
0x88E211: jz      loc_88E29D
0x88E217: mov     [esp+50h+var_3C], 1
0x88E21F: mov     [esp+50h+var_40], eax
0x88E223: xor     edi, edi
0x88E225: xor     bl, bl
0x88E227: xor     esi, esi
0x88E229: test    bl, bl
0x88E22B: jz      short loc_88E237
0x88E22D: cmp     edi, 2
0x88E230: jnz     short loc_88E259
0x88E232: cmp     esi, 1
0x88E235: jnz     short loc_88E259
0x88E237: mov     eax, [esp+50h+var_40]
0x88E23B: mov     edx, [esp+50h+var_34]
0x88E23F: push    esi
0x88E240: push    edi
0x88E241: push    eax
0x88E242: lea     ecx, [esp+5Ch+var_30]
0x88E246: push    ecx
0x88E247: mov     ecx, [esp+60h+var_38]
0x88E24B: push    edx
0x88E24C: call    sub_88DFD0
0x88E251: test    al, al
0x88E253: jz      short loc_88E259
0x88E255: mov     bl, 1
0x88E257: jmp     short loc_88E25D
0x88E259: test    bl, bl
0x88E25B: jz      short loc_88E265
0x88E25D: mov     eax, [esp+50h+var_3C]
0x88E261: or      [esp+50h+var_44], eax
0x88E265: shl     [esp+50h+var_3C], 1
0x88E269: add     esi, 1
0x88E26C: cmp     esi, 3
0x88E26F: jb      short loc_88E229
0x88E271: add     edi, 1
0x88E274: cmp     edi, 3
0x88E277: jb      short loc_88E225
0x88E279: mov     eax, [esp+50h+var_40]
0x88E27D: add     eax, 1
0x88E280: cmp     eax, 3
0x88E283: mov     [esp+50h+var_40], eax
0x88E287: jb      short loc_88E223
0x88E289: mov     ecx, [esp+50h+var_38]
0x88E28D: mov     edx, [ecx+0A0h]
0x88E293: mov     ecx, [ebp+arg_0]
0x88E296: mov     eax, [esp+50h+var_44]
0x88E29A: mov     [edx+ecx*4], eax
0x88E29D: mov     ecx, [esp+50h+var_4]
0x88E2A1: pop     edi
0x88E2A2: pop     esi
0x88E2A3: pop     ebx
0x88E2A4: xor     ecx, esp
0x88E2A6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88E2AB: mov     esp, ebp
0x88E2AD: pop     ebp
0x88E2AE: retn    4
