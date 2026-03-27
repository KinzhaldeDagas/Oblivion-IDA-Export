0x4E4F70: push    edi
0x4E4F71: mov     edi, ecx
0x4E4F73: xor     al, al
0x4E4F75: cmp     dword ptr [edi+24h], 0
0x4E4F79: jz      short loc_4E4FD3
0x4E4F7B: push    ebp
0x4E4F7C: mov     ebp, [esp+8+arg_0]
0x4E4F80: test    ebp, ebp
0x4E4F82: jz      short loc_4E4FD2
0x4E4F84: push    esi
0x4E4F85: lea     esi, [edi+28h]
0x4E4F88: test    esi, esi
0x4E4F8A: jz      short loc_4E4FD1
0x4E4F8C: push    ebx
0x4E4F8D: mov     ebx, [esp+10h+arg_4]
0x4E4F91: cmp     dword ptr [esi+4], 0
0x4E4F95: jnz     short loc_4E4F9C
0x4E4F97: cmp     dword ptr [esi], 0
0x4E4F9A: jz      short loc_4E4FCE
0x4E4F9C: mov     eax, [esi]
0x4E4F9E: movzx   ecx, word ptr [eax]
0x4E4FA1: mov     edx, [edi+24h]
0x4E4FA4: mov     edx, [edx+4]
0x4E4FA7: cmp     [edx+ecx*4], ebp
0x4E4FAA: jnz     short loc_4E4FC7
0x4E4FAC: fld     dword ptr ds:0A379B4h
0x4E4FB2: push    ecx
0x4E4FB3: fstp    [esp+14h+var_14]; float
0x4E4FB6: add     eax, 4
0x4E4FB9: push    ebx; int
0x4E4FBA: push    eax; int
0x4E4FBB: call    sub_47D810
0x4E4FC0: add     esp, 0Ch
0x4E4FC3: test    al, al
0x4E4FC5: jnz     short loc_4E4FD7
0x4E4FC7: mov     esi, [esi+4]
0x4E4FCA: test    esi, esi
0x4E4FCC: jnz     short loc_4E4F91
0x4E4FCE: xor     al, al
0x4E4FD0: pop     ebx
0x4E4FD1: pop     esi
0x4E4FD2: pop     ebp
0x4E4FD3: pop     edi
0x4E4FD4: retn    8
0x4E4FD7: pop     ebx
0x4E4FD8: pop     esi
0x4E4FD9: pop     ebp
0x4E4FDA: mov     al, 1
0x4E4FDC: pop     edi
0x4E4FDD: retn    8
