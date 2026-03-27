0x68C040: sub     esp, 10h
0x68C043: push    esi
0x68C044: mov     esi, ecx
0x68C046: mov     dword ptr [esi], 0
0x68C04C: mov     dword ptr [esi+4], 0
0x68C053: cmp     dword ptr ds:0B3C09Ch, 0
0x68C05A: jnz     short loc_68C0DA
0x68C05C: fldz
0x68C05E: push    ebx
0x68C05F: fst     [esp+18h+var_10]
0x68C063: lea     eax, [esp+18h+var_10]
0x68C067: fld1
0x68C069: push    eax; int
0x68C06A: fst     [esp+1Ch+var_C]
0x68C06E: push    ecx
0x68C06F: fstp    [esp+20h+var_4]
0x68C073: fstp    [esp+20h+var_8]
0x68C077: fld     dword ptr ds:0A31C80h
0x68C07D: fstp    [esp+20h+var_20]; float
0x68C080: call    sub_47FD30
0x68C085: mov     ebx, eax
0x68C087: mov     eax, ds:0B3C0A0h
0x68C08C: add     esp, 8
0x68C08F: cmp     eax, ebx
0x68C091: jz      short loc_68C0CB
0x68C093: test    eax, eax
0x68C095: jz      short loc_68C0B7
0x68C097: push    edi
0x68C098: mov     edi, eax
0x68C09A: add     eax, 4
0x68C09D: push    eax; lpAddend
0x68C09E: call    dword ptr ds:0A2807Ch
0x68C0A4: test    eax, eax
0x68C0A6: jnz     short loc_68C0B6
0x68C0A8: test    edi, edi
0x68C0AA: jz      short loc_68C0B6
0x68C0AC: mov     edx, [edi]
0x68C0AE: mov     eax, [edx]
0x68C0B0: push    1
0x68C0B2: mov     ecx, edi
0x68C0B4: call    eax
0x68C0B6: pop     edi
0x68C0B7: test    ebx, ebx
0x68C0B9: mov     ds:0B3C0A0h, ebx
0x68C0BF: jz      short loc_68C0CB
0x68C0C1: add     ebx, 4
0x68C0C4: push    ebx; lpAddend
0x68C0C5: call    dword ptr ds:0A28078h
0x68C0CB: add     dword ptr ds:0B3C09Ch, 1
0x68C0D2: pop     ebx
0x68C0D3: mov     eax, esi
0x68C0D5: pop     esi
0x68C0D6: add     esp, 10h
0x68C0D9: retn
0x68C0DA: add     dword ptr ds:0B3C09Ch, 1
0x68C0E1: mov     eax, esi
0x68C0E3: pop     esi
0x68C0E4: add     esp, 10h
0x68C0E7: retn
