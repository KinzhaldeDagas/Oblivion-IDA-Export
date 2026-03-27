0x68C1B0: push    ecx
0x68C1B1: push    ebx
0x68C1B2: mov     ebx, [ecx]
0x68C1B4: test    ebx, ebx
0x68C1B6: mov     [esp+8+var_4], ecx
0x68C1BA: jz      loc_68C279
0x68C1C0: push    ebp
0x68C1C1: push    esi
0x68C1C2: push    edi
0x68C1C3: mov     ecx, ebx
0x68C1C5: xor     ebp, ebp
0x68C1C7: call    NiDX92DBufferData__GetSurfaceData
0x68C1CC: mov     esi, eax
0x68C1CE: test    esi, esi
0x68C1D0: jz      loc_68C265
0x68C1D6: mov     ecx, ebx
0x68C1D8: call    sub_6899C0
0x68C1DD: mov     ecx, esi
0x68C1DF: mov     edi, eax
0x68C1E1: call    sub_6899C0
0x68C1E6: mov     ecx, eax
0x68C1E8: fld     dword ptr [ecx]
0x68C1EA: fld     dword ptr [edi]
0x68C1EC: fucompp
0x68C1EE: fnstsw  ax
0x68C1F0: test    ah, 44h
0x68C1F3: jp      short loc_68C215
0x68C1F5: fld     dword ptr [ecx+4]
0x68C1F8: fld     dword ptr [edi+4]
0x68C1FB: fucompp
0x68C1FD: fnstsw  ax
0x68C1FF: test    ah, 44h
0x68C202: jp      short loc_68C215
0x68C204: fld     dword ptr [ecx+8]
0x68C207: fld     dword ptr [edi+8]
0x68C20A: fucompp
0x68C20C: fnstsw  ax
0x68C20E: test    ah, 44h
0x68C211: jp      short loc_68C215
0x68C213: mov     ebp, esi
0x68C215: mov     ecx, esi
0x68C217: call    NiDX92DBufferData__GetSurfaceData
0x68C21C: mov     esi, eax
0x68C21E: test    esi, esi
0x68C220: jnz     short loc_68C1D6
0x68C222: test    ebp, ebp
0x68C224: jz      short loc_68C265
0x68C226: mov     ecx, ebx
0x68C228: call    NiDX92DBufferData__GetSurfaceData
0x68C22D: mov     ecx, ebp
0x68C22F: mov     esi, eax
0x68C231: call    NiDX92DBufferData__GetSurfaceData
0x68C236: push    eax
0x68C237: mov     ecx, ebx
0x68C239: call    sub_6A2FD0
0x68C23E: mov     ecx, ebp
0x68C240: call    NiDX92DBufferData__GetSurfaceData
0x68C245: test    eax, eax
0x68C247: jnz     short loc_68C25A
0x68C249: push    esi
0x68C24A: mov     esi, [esp+18h+var_4]
0x68C24E: mov     ecx, esi
0x68C250: call    sub_68C0F0
0x68C255: mov     [esi+4], ebx
0x68C258: jmp     short loc_68C265
0x68C25A: mov     ecx, [esp+14h+var_4]
0x68C25E: push    ebp
0x68C25F: push    esi
0x68C260: call    sub_68BDA0
0x68C265: mov     ecx, ebx
0x68C267: call    NiDX92DBufferData__GetSurfaceData
0x68C26C: mov     ebx, eax
0x68C26E: test    ebx, ebx
0x68C270: jnz     loc_68C1C3
0x68C276: pop     edi
0x68C277: pop     esi
0x68C278: pop     ebp
0x68C279: pop     ebx
0x68C27A: pop     ecx
0x68C27B: retn
