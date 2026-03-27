0x804BC9: mov     edx, [ebx]; jumptable 0080494C default case
0x804BCB: mov     eax, [edx+0B8h]
0x804BD1: mov     ecx, ebx
0x804BD3: call    eax
0x804BD5: mov     edi, [esp+arg_10]
0x804BD9: mov     edx, [ebx+38h]
0x804BDC: lea     ecx, [esp+arg_18]
0x804BE0: push    ecx
0x804BE1: push    edx
0x804BE2: lea     ecx, [ebx+40h]
0x804BE5: call    sub_76CE40
0x804BEA: add     dword ptr [ebx+38h], 1
0x804BEE: or      esi, 0FFFFFFFFh
0x804BF1: test    edi, edi
0x804BF3: mov     byte ptr [esp+arg_28], 0
0x804BF8: jz      short loc_804C06
0x804BFA: add     [edi+5Ch], esi
0x804BFD: jnz     short loc_804C06
0x804BFF: mov     ecx, edi
0x804C01: call    sub_772560
0x804C06: test    ebp, ebp
0x804C08: mov     [esp+arg_28], esi
0x804C0C: jz      short loc_804C1A
0x804C0E: add     [ebp+60h], esi
0x804C11: jnz     short loc_804C1A
0x804C13: mov     ecx, ebp
0x804C15: call    sub_7604D0
0x804C1A: xor     eax, eax
0x804C1C: mov     ecx, [esp+arg_20]
0x804C20: mov     large fs:0, ecx
0x804C27: pop     ecx
0x804C28: pop     edi
0x804C29: pop     esi
0x804C2A: pop     ebp
0x804C2B: pop     ebx
0x804C2C: add     esp, 1Ch
0x804C2F: retn    1Ch
