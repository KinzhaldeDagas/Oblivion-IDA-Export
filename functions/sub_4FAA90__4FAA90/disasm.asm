0x4FAA90: push    ebx
0x4FAA91: push    esi
0x4FAA92: lea     esi, [ecx+48h]
0x4FAA95: test    esi, esi
0x4FAA97: push    edi
0x4FAA98: jz      short loc_4FAABE
0x4FAA9A: mov     ebx, [esp+0Ch+Str2]
0x4FAA9E: mov     edi, edi
0x4FAAA0: mov     edi, [esi]
0x4FAAA2: test    edi, edi
0x4FAAA4: jz      short loc_4FAABE
0x4FAAA6: mov     eax, [edi+18h]
0x4FAAA9: mov     esi, [esi+4]
0x4FAAAC: push    ebx; Str2
0x4FAAAD: push    eax; Str1
0x4FAAAE: call    __strcmp
0x4FAAB3: add     esp, 8
0x4FAAB6: test    eax, eax
0x4FAAB8: jz      short loc_4FAAD0
0x4FAABA: test    esi, esi
0x4FAABC: jnz     short loc_4FAAA0
0x4FAABE: mov     edx, [esp+0Ch+indexOut]
0x4FAAC2: pop     edi
0x4FAAC3: pop     esi
0x4FAAC4: mov     dword ptr [edx], 0
0x4FAACA: xor     al, al
0x4FAACC: pop     ebx
0x4FAACD: retn    8
0x4FAAD0: mov     eax, [edi]
0x4FAAD2: mov     ecx, [esp+0Ch+indexOut]
0x4FAAD6: mov     [ecx], eax
0x4FAAD8: mov     al, [edi+10h]
0x4FAADB: neg     al
0x4FAADD: sbb     al, al
0x4FAADF: pop     edi
0x4FAAE0: and     al, 0Dh
0x4FAAE2: pop     esi
0x4FAAE3: add     al, 66h ; 'f'
0x4FAAE5: pop     ebx
0x4FAAE6: retn    8
