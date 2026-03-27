0x480770: push    ebx
0x480771: push    ebp
0x480772: mov     ebp, [esp+8+arg_0]
0x480776: test    ebp, ebp
0x480778: push    esi
0x480779: push    edi
0x48077A: jz      short loc_4807DB
0x48077C: lea     esp, [esp+0]
0x480780: xor     ebx, ebx
0x480782: movzx   eax, word ptr [ebp+0B6h]
0x480789: cmp     eax, ebx
0x48078B: jbe     short loc_4807DB
0x48078D: mov     eax, [ebp+0B0h]
0x480793: mov     esi, [eax+ebx*4]
0x480796: test    esi, esi
0x480798: jz      short loc_4807C7
0x48079A: mov     edi, [esi+8]
0x48079D: test    edi, edi
0x48079F: jz      short loc_4807C7
0x4807A1: push    offset off_A3CE0C; Str2
0x4807A6: push    edi; Str1
0x4807A7: call    __strcmp
0x4807AC: add     esp, 8
0x4807AF: test    eax, eax
0x4807B1: jz      short loc_4807E2
0x4807B3: push    9; MaxCount
0x4807B5: push    offset aFadenode; "FadeNode "
0x4807BA: push    edi; Str1
0x4807BB: call    __strnicmp
0x4807C0: add     esp, 0Ch
0x4807C3: test    eax, eax
0x4807C5: jz      short loc_4807CC
0x4807C7: add     ebx, 1
0x4807CA: jmp     short loc_480782
0x4807CC: mov     edx, [esi]
0x4807CE: mov     eax, [edx+8]
0x4807D1: mov     ecx, esi
0x4807D3: call    eax
0x4807D5: mov     ebp, eax
0x4807D7: test    ebp, ebp
0x4807D9: jnz     short loc_480780
0x4807DB: pop     edi
0x4807DC: pop     esi
0x4807DD: pop     ebp
0x4807DE: xor     al, al
0x4807E0: pop     ebx
0x4807E1: retn
0x4807E2: mov     edx, [ebp+0]
0x4807E5: mov     edx, [edx+8Ch]
0x4807EB: push    ebx
0x4807EC: lea     eax, [esp+14h+arg_0]
0x4807F0: push    eax
0x4807F1: mov     ecx, ebp
0x4807F3: call    edx
0x4807F5: mov     esi, [esp+10h+arg_0]
0x4807F9: test    esi, esi
0x4807FB: jz      short loc_480819
0x4807FD: lea     eax, [esi+4]
0x480800: push    eax; lpAddend
0x480801: call    dword ptr ds:0A2807Ch
0x480807: test    eax, eax
0x480809: jnz     short loc_480819
0x48080B: test    esi, esi
0x48080D: jz      short loc_480819
0x48080F: mov     edx, [esi]
0x480811: mov     eax, [edx]
0x480813: push    1
0x480815: mov     ecx, esi
0x480817: call    eax
0x480819: pop     edi
0x48081A: pop     esi
0x48081B: pop     ebp
0x48081C: mov     al, 1
0x48081E: pop     ebx
0x48081F: retn
