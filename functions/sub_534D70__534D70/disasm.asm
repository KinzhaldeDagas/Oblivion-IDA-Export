0x534D70: sub     esp, 0A4h
0x534D76: mov     eax, ds:0B30AACh
0x534D7B: xor     eax, esp
0x534D7D: mov     [esp+0A4h+var_4], eax
0x534D84: mov     eax, [esp+0A4h+FullPath]
0x534D8B: push    ebx
0x534D8C: push    ebp
0x534D8D: mov     ebx, ecx
0x534D8F: cmp     dword ptr [ebx+0Ch], 0
0x534D93: push    esi
0x534D94: push    edi
0x534D95: jz      loc_534E28
0x534D9B: lea     ecx, [esp+0B4h+Ext]
0x534D9F: push    ecx; Ext
0x534DA0: lea     edx, [esp+0B8h+Filename]
0x534DA4: push    edx; Filename
0x534DA5: push    0; Dir
0x534DA7: push    0; Drive
0x534DA9: push    eax; FullPath
0x534DAA: call    __splitpath
0x534DAF: lea     eax, [esp+0C8h+Ext]
0x534DB3: add     esp, 14h
0x534DB6: mov     edx, eax
0x534DB8: mov     cl, [eax]
0x534DBA: add     eax, 1
0x534DBD: test    cl, cl
0x534DBF: jnz     short loc_534DB8
0x534DC1: lea     edi, [esp+0B4h+Filename]
0x534DC5: sub     eax, edx
0x534DC7: add     edi, 0FFFFFFFFh
0x534DCA: lea     ebx, [ebx+0]
0x534DD0: mov     cl, [edi+1]
0x534DD3: add     edi, 1
0x534DD6: test    cl, cl
0x534DD8: jnz     short loc_534DD0
0x534DDA: mov     ecx, eax
0x534DDC: shr     ecx, 2
0x534DDF: mov     esi, edx
0x534DE1: rep movsd
0x534DE3: mov     ecx, eax
0x534DE5: and     ecx, 3
0x534DE8: rep movsb
0x534DEA: xor     esi, esi
0x534DEC: cmp     [ebx+0Ch], esi
0x534DEF: jle     short loc_534E28
0x534DF1: mov     ebp, [esp+0B4h+arg_4]
0x534DF8: jmp     short loc_534E00
0x534DFA: align 10h
0x534E00: mov     eax, [ebx+8]
0x534E03: mov     ecx, [eax+esi*8]
0x534E06: mov     edi, [eax+esi*8+4]
0x534E0A: push    ecx
0x534E0B: lea     eax, [esp+0B8h+Filename]
0x534E0F: push    eax
0x534E10: call    sub_8B17C0
0x534E15: add     esp, 8
0x534E18: test    eax, eax
0x534E1A: jnz     short loc_534E20
0x534E1C: cmp     ebp, edi
0x534E1E: jz      short loc_534E45
0x534E20: add     esi, 1
0x534E23: cmp     esi, [ebx+0Ch]
0x534E26: jl      short loc_534E00
0x534E28: mov     al, 1
0x534E2A: mov     ecx, [esp+0B4h+var_4]
0x534E31: pop     edi
0x534E32: pop     esi
0x534E33: pop     ebp
0x534E34: pop     ebx
0x534E35: xor     ecx, esp
0x534E37: call    @__security_check_cookie@4; __security_check_cookie(x)
0x534E3C: add     esp, 0A4h
0x534E42: retn    8
0x534E45: xor     al, al
0x534E47: jmp     short loc_534E2A
