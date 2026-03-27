0x55CF00: push    ebx
0x55CF01: push    esi
0x55CF02: mov     ebx, ecx
0x55CF04: mov     esi, [ebx+0DCh]
0x55CF0A: push    edi
0x55CF0B: mov     edi, [esp+0Ch+arg_0]
0x55CF0F: cmp     esi, edi
0x55CF11: jz      short loc_55CF47
0x55CF13: test    esi, esi
0x55CF15: jz      short loc_55CF33
0x55CF17: lea     eax, [esi+4]
0x55CF1A: push    eax; lpAddend
0x55CF1B: call    dword ptr ds:0A2807Ch
0x55CF21: test    eax, eax
0x55CF23: jnz     short loc_55CF33
0x55CF25: test    esi, esi
0x55CF27: jz      short loc_55CF33
0x55CF29: mov     edx, [esi]
0x55CF2B: mov     eax, [edx]
0x55CF2D: push    1
0x55CF2F: mov     ecx, esi
0x55CF31: call    eax
0x55CF33: test    edi, edi
0x55CF35: mov     [ebx+0DCh], edi
0x55CF3B: jz      short loc_55CF47
0x55CF3D: add     edi, 4
0x55CF40: push    edi; lpAddend
0x55CF41: call    dword ptr ds:0A28078h
0x55CF47: pop     edi
0x55CF48: pop     esi
0x55CF49: pop     ebx
0x55CF4A: retn    4
