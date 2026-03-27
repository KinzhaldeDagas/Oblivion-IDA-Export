0x74CF90: push    esi
0x74CF91: push    edi
0x74CF92: push    58h ; 'X'; Size
0x74CF94: mov     edi, ecx
0x74CF96: call    FormHeapAlloc
0x74CF9B: mov     esi, eax
0x74CF9D: add     esp, 4
0x74CFA0: test    esi, esi
0x74CFA2: jz      short loc_74CFB8
0x74CFA4: mov     ecx, esi
0x74CFA6: call    sub_752FD0
0x74CFAB: fldz
0x74CFAD: fstp    dword ptr [esi+54h]
0x74CFB0: mov     dword ptr [esi], offset ??_7NiPSysSphereEmitter@@6B@; const NiPSysSphereEmitter::`vftable'
0x74CFB6: jmp     short loc_74CFBA
0x74CFB8: xor     esi, esi
0x74CFBA: mov     eax, [esp+8+arg_0]
0x74CFBE: push    eax
0x74CFBF: push    esi
0x74CFC0: mov     ecx, edi
0x74CFC2: call    sub_753000
0x74CFC7: fld     dword ptr [edi+54h]
0x74CFCA: pop     edi
0x74CFCB: fstp    dword ptr [esi+54h]
0x74CFCE: mov     eax, esi
0x74CFD0: pop     esi
0x74CFD1: retn    4
