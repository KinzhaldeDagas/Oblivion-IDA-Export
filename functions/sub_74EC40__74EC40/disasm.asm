0x74EC40: push    esi
0x74EC41: push    edi
0x74EC42: push    0F8h ; 'ø'; Size
0x74EC47: mov     edi, ecx
0x74EC49: call    FormHeapAlloc
0x74EC4E: mov     esi, eax
0x74EC50: add     esp, 4
0x74EC53: test    esi, esi
0x74EC55: jz      short loc_74EC75
0x74EC57: mov     ecx, esi
0x74EC59: call    sub_749EE0
0x74EC5E: fldz
0x74EC60: fstp    dword ptr [esi+0F0h]
0x74EC66: mov     dword ptr [esi], offset ??_7NiMeshParticleSystem@@6B@; const NiMeshParticleSystem::`vftable'
0x74EC6C: mov     byte ptr [esi+0F4h], 1
0x74EC73: jmp     short loc_74EC77
0x74EC75: xor     esi, esi
0x74EC77: mov     eax, [esp+8+arg_0]
0x74EC7B: push    eax
0x74EC7C: push    esi
0x74EC7D: mov     ecx, edi
0x74EC7F: call    sub_749A70
0x74EC84: fld     dword ptr [edi+0F0h]
0x74EC8A: fstp    dword ptr [esi+0F0h]
0x74EC90: mov     cl, [edi+0F4h]
0x74EC96: pop     edi
0x74EC97: mov     [esi+0F4h], cl
0x74EC9D: mov     eax, esi
0x74EC9F: pop     esi
0x74ECA0: retn    4
