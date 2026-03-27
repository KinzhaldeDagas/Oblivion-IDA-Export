0x72CE60: push    ebx
0x72CE61: mov     ebx, [esp+4+Key]
0x72CE65: push    ebp
0x72CE66: mov     ebp, [ebx+8]
0x72CE69: push    esi; PtFuncCompare
0x72CE6A: xor     esi, esi
0x72CE6C: test    ebp, ebp
0x72CE6E: push    edi
0x72CE6F: mov     edi, ecx
0x72CE71: jbe     short loc_72CEA3
0x72CE73: mov     eax, [ebx]
0x72CE75: movzx   ecx, word ptr [eax+esi*8]
0x72CE79: mov     eax, [edi+8]
0x72CE7C: mov     edx, [edi]
0x72CE7E: push    offset PtFuncCompare; SizeOfElements
0x72CE83: push    2; SizeOfElements
0x72CE85: push    eax; NumOfElements
0x72CE86: push    edx; Base
0x72CE87: lea     eax, [esp+20h+Key]
0x72CE8B: push    eax; Key
0x72CE8C: mov     [esp+24h+Key], ecx
0x72CE90: call    _bsearch
0x72CE95: add     esp, 14h
0x72CE98: test    eax, eax
0x72CE9A: jz      short loc_72CEAC
0x72CE9C: add     esi, 1
0x72CE9F: cmp     esi, ebp
0x72CEA1: jb      short loc_72CE73
0x72CEA3: pop     edi
0x72CEA4: pop     esi
0x72CEA5: pop     ebp
0x72CEA6: mov     al, 1
0x72CEA8: pop     ebx
0x72CEA9: retn    4
0x72CEAC: pop     edi
0x72CEAD: pop     esi
0x72CEAE: pop     ebp
0x72CEAF: xor     al, al
0x72CEB1: pop     ebx
0x72CEB2: retn    4
