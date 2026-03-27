0x717710: push    0FFFFFFFFh
0x717712: push    offset SEH_8C8970
0x717717: mov     eax, large fs:0
0x71771D: push    eax
0x71771E: push    ecx
0x71771F: push    esi
0x717720: push    edi
0x717721: mov     eax, ds:0B30AACh
0x717726: xor     eax, esp
0x717728: push    eax
0x717729: lea     eax, [esp+1Ch+var_C]
0x71772D: mov     large fs:0, eax
0x717733: mov     edi, ecx
0x717735: push    0C0h ; 'À'; Size
0x71773A: call    FormHeapAlloc
0x71773F: mov     esi, eax
0x717741: add     esp, 4
0x717744: mov     [esp+1Ch+var_10], esi
0x717748: test    esi, esi
0x71774A: mov     [esp+1Ch+var_4], 0
0x717752: jz      short loc_717763
0x717754: mov     ecx, esi
0x717756: call    sub_7226C0
0x71775B: mov     dword ptr [esi], offset ??_7NiTriShape@@6B@; const NiTriShape::`vftable'
0x717761: jmp     short loc_717765
0x717763: xor     esi, esi
0x717765: mov     eax, [esp+1Ch+arg_0]
0x717769: push    eax
0x71776A: push    esi
0x71776B: mov     ecx, edi
0x71776D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x717775: call    sub_722700
0x71777A: mov     eax, esi
0x71777C: mov     ecx, [esp+1Ch+var_C]
0x717780: mov     large fs:0, ecx
0x717787: pop     ecx
0x717788: pop     edi
0x717789: pop     esi
0x71778A: add     esp, 10h
0x71778D: retn    4
