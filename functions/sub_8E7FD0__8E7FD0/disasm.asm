0x8E7FD0: push    ebx
0x8E7FD1: push    esi
0x8E7FD2: push    edi
0x8E7FD3: mov     edi, [esp+0Ch+arg_0]
0x8E7FD7: mov     eax, [edi]
0x8E7FD9: mov     edx, [eax+0Ch]
0x8E7FDC: mov     ecx, edi
0x8E7FDE: xor     ebx, ebx
0x8E7FE0: call    edx
0x8E7FE2: push    eax
0x8E7FE3: call    sub_8E7E60
0x8E7FE8: mov     esi, eax
0x8E7FEA: add     esp, 4
0x8E7FED: test    esi, esi
0x8E7FEF: jz      short loc_8E8033
0x8E7FF1: push    edi
0x8E7FF2: mov     ecx, esi
0x8E7FF4: call    sub_8A0200
0x8E7FF9: mov     ecx, [esp+0Ch+arg_4]
0x8E7FFD: mov     eax, [esi]
0x8E7FFF: mov     edx, [eax]
0x8E8001: push    ecx
0x8E8002: push    ebx
0x8E8003: mov     ecx, esi
0x8E8005: call    edx
0x8E8007: mov     edi, [esi+4]
0x8E800A: cmp     [edi+4], bx
0x8E800E: jz      short loc_8E8015
0x8E8010: add     word ptr [edi+6], 1
0x8E8015: push    0
0x8E8017: mov     ecx, esi
0x8E8019: mov     dword ptr [esi], offset ??_7hkConstraintCinfo@@6B@; const hkConstraintCinfo::`vftable'
0x8E801F: call    sub_8A0200
0x8E8024: push    esi
0x8E8025: call    FormHeapFree
0x8E802A: add     esp, 4
0x8E802D: mov     eax, edi
0x8E802F: pop     edi
0x8E8030: pop     esi
0x8E8031: pop     ebx
0x8E8032: retn
0x8E8033: pop     edi
0x8E8034: pop     esi
0x8E8035: mov     eax, ebx
0x8E8037: pop     ebx
0x8E8038: retn
