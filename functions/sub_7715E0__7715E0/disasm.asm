0x7715E0: sub     esp, 8
0x7715E3: push    esi
0x7715E4: mov     esi, [esp+0Ch+arg_0]
0x7715E8: mov     eax, ds:0B42130h[esi*8]
0x7715EF: push    edi
0x7715F0: push    0
0x7715F2: mov     edi, ecx
0x7715F4: mov     ecx, ds:0B42134h[esi*8]
0x7715FB: push    0
0x7715FD: push    eax
0x7715FE: mov     [esp+1Ch+var_4], ecx
0x771602: mov     ecx, [edi+0Ch]
0x771605: push    1
0x771607: call    sub_773100
0x77160C: mov     edx, ds:0B42130h[esi*8]
0x771613: mov     esi, ds:0B42134h[esi*8]
0x77161A: mov     ecx, [edi+0Ch]
0x77161D: push    0
0x77161F: push    0
0x771621: push    esi
0x771622: push    2
0x771624: mov     [esp+20h+var_8], edx
0x771628: call    sub_773100
0x77162D: pop     edi
0x77162E: pop     esi
0x77162F: add     esp, 8
0x771632: retn    4
