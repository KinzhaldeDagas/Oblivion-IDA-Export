0x747C70: push    esi
0x747C71: mov     esi, ecx
0x747C73: call    NiBinaryStream_constr
0x747C78: push    0
0x747C7A: mov     ecx, esi
0x747C7C: mov     dword ptr [esi], offset ??_7NiFile@@6B@; const NiFile::`vftable'
0x747C82: call    NiFile_SetByteSwap
0x747C87: mov     eax, [esp+4+arg_4]
0x747C8B: test    eax, eax
0x747C8D: mov     [esi+20h], eax
0x747C90: jnz     short loc_747C99
0x747C92: mov     eax, offset aRb; "rb"
0x747C97: jmp     short loc_747CA8
0x747C99: cmp     eax, 1
0x747C9C: mov     eax, offset aWb; "wb"
0x747CA1: jz      short loc_747CA8
0x747CA3: mov     eax, offset aAb
0x747CA8: push    edi
0x747CA9: push    eax; Mode
0x747CAA: mov     eax, [esp+0Ch+Filename]
0x747CAE: push    eax; Filename
0x747CAF: lea     edi, [esi+1Ch]
0x747CB2: push    edi; File
0x747CB3: call    _fopen_s
0x747CB8: add     esp, 0Ch
0x747CBB: test    eax, eax
0x747CBD: jnz     short loc_747CCA
0x747CBF: cmp     [edi], eax
0x747CC1: jz      short loc_747CCA
0x747CC3: mov     eax, 1
0x747CC8: jmp     short loc_747CCC
0x747CCA: xor     eax, eax
0x747CCC: test    al, al
0x747CCE: mov     ecx, [esp+8+Size]
0x747CD2: mov     [esi+24h], al
0x747CD5: mov     [esi+0Ch], ecx
0x747CD8: mov     dword ptr [esi+10h], 0
0x747CDF: mov     dword ptr [esi+14h], 0
0x747CE6: pop     edi
0x747CE7: jz      short loc_747CFF
0x747CE9: test    ecx, ecx
0x747CEB: jbe     short loc_747CFF
0x747CED: push    ecx; Size
0x747CEE: call    FormHeapAlloc
0x747CF3: mov     [esi+18h], eax
0x747CF6: add     esp, 4
0x747CF9: mov     eax, esi
0x747CFB: pop     esi
0x747CFC: retn    0Ch
0x747CFF: mov     dword ptr [esi+18h], 0
0x747D06: mov     eax, esi
0x747D08: pop     esi
0x747D09: retn    0Ch
