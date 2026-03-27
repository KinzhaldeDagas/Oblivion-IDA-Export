0x8BBDB0: push    ebx
0x8BBDB1: mov     ebx, [esp+4+arg_0]
0x8BBDB5: test    ebx, ebx
0x8BBDB7: push    esi
0x8BBDB8: push    edi
0x8BBDB9: mov     edi, ecx
0x8BBDBB: mov     esi, [edi+8]
0x8BBDBE: jz      short loc_8BBDDC
0x8BBDC0: push    ebp
0x8BBDC1: mov     ebp, [esi]
0x8BBDC3: push    ebx
0x8BBDC4: call    sub_8B1860
0x8BBDC9: add     esp, 4
0x8BBDCC: push    eax
0x8BBDCD: push    ebx
0x8BBDCE: mov     ecx, esi
0x8BBDD0: call    dword ptr [ebp+0Ch]
0x8BBDD3: pop     ebp
0x8BBDD4: mov     eax, edi
0x8BBDD6: pop     edi
0x8BBDD7: pop     esi
0x8BBDD8: pop     ebx
0x8BBDD9: retn    4
0x8BBDDC: mov     eax, [esi]
0x8BBDDE: push    6
0x8BBDE0: push    offset aNull_0; "(null)"
0x8BBDE5: mov     ecx, esi
0x8BBDE7: call    dword ptr [eax+0Ch]
0x8BBDEA: mov     eax, edi
0x8BBDEC: pop     edi
0x8BBDED: pop     esi
0x8BBDEE: pop     ebx
0x8BBDEF: retn    4
