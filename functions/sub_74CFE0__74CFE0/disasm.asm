0x74CFE0: push    esi
0x74CFE1: push    58h ; 'X'; Size
0x74CFE3: call    FormHeapAlloc
0x74CFE8: mov     esi, eax
0x74CFEA: add     esp, 4
0x74CFED: test    esi, esi
0x74CFEF: jz      short loc_74D007
0x74CFF1: mov     ecx, esi
0x74CFF3: call    sub_752FD0
0x74CFF8: fldz
0x74CFFA: fstp    dword ptr [esi+54h]
0x74CFFD: mov     dword ptr [esi], offset ??_7NiPSysSphereEmitter@@6B@; const NiPSysSphereEmitter::`vftable'
0x74D003: mov     eax, esi
0x74D005: pop     esi
0x74D006: retn
0x74D007: xor     eax, eax
0x74D009: pop     esi
0x74D00A: retn
