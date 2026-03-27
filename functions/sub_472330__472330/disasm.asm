0x472330: mov     edx, [esp+arg_0]
0x472334: mov     ecx, [ecx+9Ch]
0x47233A: lea     eax, [esp+arg_0]
0x47233E: push    eax
0x47233F: push    edx
0x472340: call    sub_470960
0x472345: test    al, al
0x472347: jnz     short loc_47234F
0x472349: xor     ax, ax
0x47234C: retn    4
0x47234F: push    esi
0x472350: mov     esi, [esp+4+arg_0]
0x472354: mov     eax, [esi]
0x472356: mov     edx, [eax+0Ch]
0x472359: mov     ecx, esi
0x47235B: call    edx
0x47235D: test    al, al
0x47235F: jz      short loc_47238C
0x472361: mov     eax, [esi]
0x472363: mov     edx, [eax+10h]
0x472366: push    0FFFFFFFFh
0x472368: mov     ecx, esi
0x47236A: call    edx
0x47236C: test    eax, eax
0x47236E: jz      short loc_47238C
0x472370: mov     eax, [esi]
0x472372: mov     edx, [eax+10h]
0x472375: push    0FFFFFFFFh
0x472377: mov     ecx, esi
0x472379: call    edx
0x47237B: mov     ecx, [eax+68h]
0x47237E: call    sub_51AED0
0x472383: call    Double_To_SInt32
0x472388: pop     esi
0x472389: retn    4
0x47238C: xor     ax, ax
0x47238F: pop     esi
0x472390: retn    4
