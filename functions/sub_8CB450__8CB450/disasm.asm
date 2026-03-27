0x8CB450: push    esi
0x8CB451: push    edi
0x8CB452: mov     edi, [esp+8+arg_4]
0x8CB456: mov     ecx, edi
0x8CB458: call    sub_8D9A50
0x8CB45D: mov     esi, [esp+8+arg_0]
0x8CB461: mov     eax, [esi+88h]
0x8CB467: test    eax, eax
0x8CB469: push    edi
0x8CB46A: push    esi
0x8CB46B: jz      short loc_8CB48C
0x8CB46D: call    sub_91EF50
0x8CB472: mov     eax, [esp+10h+arg_8]
0x8CB476: add     esp, 8
0x8CB479: test    eax, eax
0x8CB47B: jz      short loc_8CB4D3
0x8CB47D: push    edi
0x8CB47E: push    esi
0x8CB47F: call    sub_8DC6E0
0x8CB484: add     esp, 8
0x8CB487: mov     eax, edi
0x8CB489: pop     edi
0x8CB48A: pop     esi
0x8CB48B: retn
0x8CB48C: mov     dword ptr [esi+88h], 1
0x8CB496: call    sub_91EF50
0x8CB49B: mov     eax, [esp+10h+arg_8]
0x8CB49F: add     esp, 8
0x8CB4A2: test    eax, eax
0x8CB4A4: jz      short loc_8CB4B0
0x8CB4A6: push    edi
0x8CB4A7: push    esi
0x8CB4A8: call    sub_8DC6E0
0x8CB4AD: add     esp, 8
0x8CB4B0: dec     dword ptr [esi+88h]
0x8CB4B6: jnz     short loc_8CB4D3
0x8CB4B8: mov     eax, [esi+84h]
0x8CB4BE: test    eax, eax
0x8CB4C0: jz      short loc_8CB4D3
0x8CB4C2: mov     al, [esi+90h]
0x8CB4C8: test    al, al
0x8CB4CA: jnz     short loc_8CB4D3
0x8CB4CC: mov     ecx, esi
0x8CB4CE: call    sub_899210
0x8CB4D3: mov     eax, edi
0x8CB4D5: pop     edi
0x8CB4D6: pop     esi
0x8CB4D7: retn
