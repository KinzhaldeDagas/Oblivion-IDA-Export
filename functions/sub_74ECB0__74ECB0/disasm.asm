0x74ECB0: push    esi
0x74ECB1: push    0F8h ; 'ø'; Size
0x74ECB6: call    FormHeapAlloc
0x74ECBB: mov     esi, eax
0x74ECBD: add     esp, 4
0x74ECC0: test    esi, esi
0x74ECC2: jz      short loc_74ECE4
0x74ECC4: mov     ecx, esi
0x74ECC6: call    sub_749EE0
0x74ECCB: fldz
0x74ECCD: fstp    dword ptr [esi+0F0h]
0x74ECD3: mov     dword ptr [esi], offset ??_7NiMeshParticleSystem@@6B@; const NiMeshParticleSystem::`vftable'
0x74ECD9: mov     byte ptr [esi+0F4h], 1
0x74ECE0: mov     eax, esi
0x74ECE2: pop     esi
0x74ECE3: retn
0x74ECE4: xor     eax, eax
0x74ECE6: pop     esi
0x74ECE7: retn
