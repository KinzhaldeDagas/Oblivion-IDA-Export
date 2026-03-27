0x648120: mov     eax, [esp+arg_4]
0x648124: push    esi
0x648125: mov     esi, ecx
0x648127: add     [esi+4], eax
0x64812A: push    edi
0x64812B: mov     edi, [esi+8]
0x64812E: jns     short loc_648137
0x648130: mov     dword ptr [esi+4], 0
0x648137: test    edi, edi
0x648139: jz      short loc_64819D
0x64813B: mov     eax, [edi+18h]
0x64813E: push    ebx
0x64813F: push    eax
0x648140: call    sub_673980
0x648145: mov     edx, [esi]
0x648147: mov     ebx, eax
0x648149: mov     eax, [edx+180h]
0x64814F: add     esp, 4
0x648152: mov     ecx, esi
0x648154: call    eax
0x648156: cmp     eax, ebx
0x648158: jl      short loc_64819C
0x64815A: mov     edx, [esi]
0x64815C: mov     eax, [edx+17Ch]
0x648162: add     ebx, 0FFFFFFFFh
0x648165: push    ebx
0x648166: mov     ecx, esi
0x648168: call    eax
0x64816A: mov     edx, [esi]
0x64816C: mov     eax, [edx+180h]
0x648172: mov     ebx, [edi+18h]
0x648175: mov     ecx, esi
0x648177: call    eax
0x648179: mov     ecx, ds:0B152B0h[ebx*4]
0x648180: cmp     dword ptr [ecx+eax*4], 2Ch ; ','
0x648184: jnz     short loc_64819C
0x648186: mov     edx, [esp+0Ch+arg_0]
0x64818A: push    400h
0x64818F: add     edx, 44h ; 'D'
0x648192: push    edx
0x648193: push    edi
0x648194: call    Script_AddEventToExtraScript
0x648199: add     esp, 0Ch
0x64819C: pop     ebx
0x64819D: pop     edi
0x64819E: pop     esi
0x64819F: retn    8
