0x77D450: push    esi
0x77D451: call    sub_782810
0x77D456: mov     esi, ds:0B4289Ch
0x77D45C: test    esi, esi
0x77D45E: jz      short loc_77D47B
0x77D460: push    edi
0x77D461: mov     edi, [esi+3Ch]
0x77D464: mov     ecx, esi
0x77D466: call    sub_7826E0
0x77D46B: push    esi
0x77D46C: call    FormHeapFree
0x77D471: add     esp, 4
0x77D474: test    edi, edi
0x77D476: mov     esi, edi
0x77D478: jnz     short loc_77D461
0x77D47A: pop     edi
0x77D47B: mov     dword ptr ds:0B4289Ch, 0
0x77D485: pop     esi
0x77D486: retn
