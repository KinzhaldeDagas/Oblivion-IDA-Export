0x42C1D0: sub     esp, 138h
0x42C1D6: mov     eax, ___security_cookie
0x42C1DB: xor     eax, esp
0x42C1DD: mov     [esp+138h+var_4], eax
0x42C1E4: cmp     bInvalidateOlderFiles_Archive, 0
0x42C1EB: mov     eax, [esp+138h+arg_4]
0x42C1F2: push    ebx
0x42C1F3: push    ebp
0x42C1F4: mov     ebp, [esp+140h+arg_0]
0x42C1FB: push    esi
0x42C1FC: push    edi
0x42C1FD: mov     ebx, ecx
0x42C1FF: jz      loc_42C2A7
0x42C205: mov     ecx, [ebp+8]
0x42C208: shr     ecx, 1Fh
0x42C20B: test    cl, 1
0x42C20E: jnz     loc_42C2A7
0x42C214: test    eax, eax
0x42C216: jz      loc_42C2A0
0x42C21C: mov     edx, dword ptr ds:aData; "Data\\"
0x42C222: mov     cx, word ptr ds:aData+4; "\\"
0x42C229: mov     dword ptr [esp+148h+FileName], edx
0x42C22D: mov     [esp+148h+var_104], cx
0x42C232: mov     edx, eax
0x42C234: mov     cl, [eax]
0x42C236: add     eax, 1
0x42C239: test    cl, cl
0x42C23B: jnz     short loc_42C234
0x42C23D: lea     edi, [esp+148h+FileName]
0x42C241: sub     eax, edx
0x42C243: add     edi, 0FFFFFFFFh
0x42C246: mov     cl, [edi+1]
0x42C249: add     edi, 1
0x42C24C: test    cl, cl
0x42C24E: jnz     short loc_42C246
0x42C250: mov     ecx, eax
0x42C252: shr     ecx, 2
0x42C255: mov     esi, edx
0x42C257: rep movsd
0x42C259: mov     ecx, eax
0x42C25B: lea     edx, [esp+148h+var_138]
0x42C25F: and     ecx, 3
0x42C262: push    edx; int
0x42C263: lea     eax, [esp+14Ch+FileName]
0x42C267: rep movsb
0x42C269: mov     edi, [ebx+180h]
0x42C26F: mov     esi, [ebx+184h]
0x42C275: push    eax; lpFileName
0x42C276: call    __stat64i32
0x42C27B: add     esp, 8
0x42C27E: cmp     eax, 0FFFFFFFFh
0x42C281: jz      short loc_42C2A0
0x42C283: mov     ecx, dword ptr [esp+148h+var_118+4]
0x42C287: cmp     ecx, esi
0x42C289: jl      short loc_42C2A0
0x42C28B: jg      short loc_42C295
0x42C28D: mov     edx, dword ptr [esp+148h+var_118]
0x42C291: cmp     edx, edi
0x42C293: jbe     short loc_42C2A0
0x42C295: and     dword ptr [ebp+0Ch], 80000000h
0x42C29C: mov     al, 1
0x42C29E: jmp     short loc_42C2A9
0x42C2A0: or      dword ptr [ebp+8], 80000000h
0x42C2A7: xor     al, al
0x42C2A9: mov     ecx, [esp+148h+var_4]
0x42C2B0: pop     edi
0x42C2B1: pop     esi
0x42C2B2: pop     ebp
0x42C2B3: pop     ebx
0x42C2B4: xor     ecx, esp
0x42C2B6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42C2BB: add     esp, 138h
0x42C2C1: retn    8
