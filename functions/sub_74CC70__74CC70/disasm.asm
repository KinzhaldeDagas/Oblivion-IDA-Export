0x74CC70: push    esi
0x74CC71: push    5Ch ; '\'; Size
0x74CC73: call    FormHeapAlloc
0x74CC78: mov     esi, eax
0x74CC7A: add     esp, 4
0x74CC7D: test    esi, esi
0x74CC7F: jz      short loc_74CC9A
0x74CC81: mov     ecx, esi
0x74CC83: call    sub_752FD0
0x74CC88: fldz
0x74CC8A: fst     dword ptr [esi+54h]
0x74CC8D: mov     dword ptr [esi], offset ??_7NiPSysCylinderEmitter@@6B@; const NiPSysCylinderEmitter::`vftable'
0x74CC93: fstp    dword ptr [esi+58h]
0x74CC96: mov     eax, esi
0x74CC98: pop     esi
0x74CC99: retn
0x74CC9A: xor     eax, eax
0x74CC9C: pop     esi
0x74CC9D: retn
