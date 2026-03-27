0x77F680: push    esi
0x77F681: push    14h; Size
0x77F683: call    FormHeapAlloc
0x77F688: mov     esi, eax
0x77F68A: add     esp, 4
0x77F68D: test    esi, esi
0x77F68F: jz      short loc_77F6E4
0x77F691: xor     ecx, ecx
0x77F693: mov     eax, 25h ; '%'
0x77F698: mov     [esi+4], eax
0x77F69B: mov     edx, 4
0x77F6A0: mul     edx
0x77F6A2: seto    cl
0x77F6A5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiD3DShaderProgramCreator@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiD3DShaderProgramCreator *>::`vftable'
0x77F6AB: mov     dword ptr [esi+0Ch], 0
0x77F6B2: neg     ecx
0x77F6B4: or      ecx, eax
0x77F6B6: push    ecx; Size
0x77F6B7: call    FormHeapAlloc
0x77F6BC: mov     ecx, [esi+4]
0x77F6BF: add     ecx, ecx
0x77F6C1: add     ecx, ecx
0x77F6C3: push    ecx
0x77F6C4: push    0
0x77F6C6: push    eax
0x77F6C7: mov     [esi+8], eax
0x77F6CA: call    __memset
0x77F6CF: mov     byte ptr [esi+10h], 1
0x77F6D3: mov     dword ptr [esi], offset ??_7?$NiTStringPointerMap@PAVNiD3DShaderProgramCreator@@@@6B@; const NiTStringPointerMap<NiD3DShaderProgramCreator *>::`vftable'
0x77F6D9: add     esp, 10h
0x77F6DC: mov     ds:0B428ACh, esi
0x77F6E2: pop     esi
0x77F6E3: retn
0x77F6E4: mov     dword ptr ds:0B428ACh, 0
0x77F6EE: pop     esi
0x77F6EF: retn
