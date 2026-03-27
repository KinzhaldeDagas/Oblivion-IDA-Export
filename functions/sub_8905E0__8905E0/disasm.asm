0x8905E0: push    0FFFFFFFFh
0x8905E2: push    offset SEH_8C8900
0x8905E7: mov     eax, large fs:0
0x8905ED: push    eax
0x8905EE: push    ecx
0x8905EF: mov     eax, ds:0B30AACh
0x8905F4: xor     eax, esp
0x8905F6: push    eax
0x8905F7: lea     eax, [esp+14h+var_C]
0x8905FB: mov     large fs:0, eax
0x890601: push    14h; Size
0x890603: call    FormHeapAlloc
0x890608: add     esp, 4
0x89060B: mov     [esp+14h+var_10], eax
0x89060F: test    eax, eax
0x890611: mov     [esp+14h+var_4], 0
0x890619: jz      short loc_890644
0x89061B: fld     [esp+14h+arg_8]
0x89061F: mov     edx, [esp+14h+arg_0]
0x890623: push    ecx
0x890624: mov     ecx, [esp+18h+arg_4]
0x890628: fstp    [esp+18h+var_18]; float
0x89062B: push    ecx; int
0x89062C: push    edx; int
0x89062D: mov     ecx, eax
0x89062F: call    sub_8B6A40
0x890634: mov     ecx, [esp+14h+var_C]
0x890638: mov     large fs:0, ecx
0x89063F: pop     ecx
0x890640: add     esp, 10h
0x890643: retn
0x890644: xor     eax, eax
0x890646: mov     ecx, [esp+14h+var_C]
0x89064A: mov     large fs:0, ecx
0x890651: pop     ecx
0x890652: add     esp, 10h
0x890655: retn
