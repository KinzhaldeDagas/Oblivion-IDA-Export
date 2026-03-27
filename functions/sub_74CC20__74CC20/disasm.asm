0x74CC20: push    esi
0x74CC21: push    edi
0x74CC22: push    5Ch ; '\'; Size
0x74CC24: mov     edi, ecx
0x74CC26: call    FormHeapAlloc
0x74CC2B: mov     esi, eax
0x74CC2D: add     esp, 4
0x74CC30: test    esi, esi
0x74CC32: jz      short loc_74CC4B
0x74CC34: mov     ecx, esi
0x74CC36: call    sub_752FD0
0x74CC3B: fldz
0x74CC3D: fst     dword ptr [esi+54h]
0x74CC40: mov     dword ptr [esi], offset ??_7NiPSysCylinderEmitter@@6B@; const NiPSysCylinderEmitter::`vftable'
0x74CC46: fstp    dword ptr [esi+58h]
0x74CC49: jmp     short loc_74CC4D
0x74CC4B: xor     esi, esi
0x74CC4D: mov     eax, [esp+8+arg_0]
0x74CC51: push    eax
0x74CC52: push    esi
0x74CC53: mov     ecx, edi
0x74CC55: call    sub_753000
0x74CC5A: fld     dword ptr [edi+54h]
0x74CC5D: fstp    dword ptr [esi+54h]
0x74CC60: mov     eax, esi
0x74CC62: fld     dword ptr [edi+58h]
0x74CC65: pop     edi
0x74CC66: fstp    dword ptr [esi+58h]
0x74CC69: pop     esi
0x74CC6A: retn    4
