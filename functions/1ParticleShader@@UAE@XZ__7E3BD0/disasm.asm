0x7E3BD0: push    0FFFFFFFFh
0x7E3BD2: push    offset ??1ParticleShader@@UAE@XZ_SEH
0x7E3BD7: mov     eax, large fs:0
0x7E3BDD: push    eax
0x7E3BDE: push    ecx
0x7E3BDF: push    ebx
0x7E3BE0: push    ebp
0x7E3BE1: push    esi
0x7E3BE2: push    edi
0x7E3BE3: mov     eax, ds:0B30AACh
0x7E3BE8: xor     eax, esp
0x7E3BEA: push    eax
0x7E3BEB: lea     eax, [esp+24h+var_C]
0x7E3BEF: mov     large fs:0, eax
0x7E3BF5: mov     esi, ecx
0x7E3BF7: mov     [esp+24h+var_10], esi
0x7E3BFB: mov     dword ptr [esi], offset ??_7ParticleShader@@6B@; const ParticleShader::`vftable'
0x7E3C01: mov     eax, ds:0B46014h
0x7E3C06: mov     ebp, ds:0A2807Ch
0x7E3C0C: xor     ebx, ebx
0x7E3C0E: cmp     eax, ebx
0x7E3C10: mov     [esp+24h+var_4], 3
0x7E3C18: jz      short loc_7E3C3A
0x7E3C1A: mov     edi, eax
0x7E3C1C: add     eax, 4
0x7E3C1F: push    eax; lpAddend
0x7E3C20: call    ebp ; InterlockedDecrement
0x7E3C22: test    eax, eax
0x7E3C24: jnz     short loc_7E3C34
0x7E3C26: cmp     edi, ebx
0x7E3C28: jz      short loc_7E3C34
0x7E3C2A: mov     eax, [edi]
0x7E3C2C: mov     edx, [eax]
0x7E3C2E: push    1
0x7E3C30: mov     ecx, edi
0x7E3C32: call    edx
0x7E3C34: mov     ds:0B46014h, ebx
0x7E3C3A: mov     eax, [esi+80h]
0x7E3C40: push    eax
0x7E3C41: call    FormHeapFree
0x7E3C46: mov     [esi+80h], ebx
0x7E3C4C: mov     ecx, [esi+84h]
0x7E3C52: add     esp, 4
0x7E3C55: cmp     ecx, ebx
0x7E3C57: jz      short loc_7E3C6A
0x7E3C59: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7E3C5D: jnz     short loc_7E3C64
0x7E3C5F: call    sub_7604D0
0x7E3C64: mov     [esi+84h], ebx
0x7E3C6A: mov     edi, [esi+88h]
0x7E3C70: cmp     edi, ebx
0x7E3C72: jz      short loc_7E3C92
0x7E3C74: lea     eax, [edi+4]
0x7E3C77: push    eax; lpAddend
0x7E3C78: call    ebp ; InterlockedDecrement
0x7E3C7A: test    eax, eax
0x7E3C7C: jnz     short loc_7E3C8C
0x7E3C7E: cmp     edi, ebx
0x7E3C80: jz      short loc_7E3C8C
0x7E3C82: mov     edx, [edi]
0x7E3C84: mov     eax, [edx]
0x7E3C86: push    1
0x7E3C88: mov     ecx, edi
0x7E3C8A: call    eax
0x7E3C8C: mov     [esi+88h], ebx
0x7E3C92: mov     edi, [esi+8Ch]
0x7E3C98: cmp     edi, ebx
0x7E3C9A: jz      short loc_7E3CBA
0x7E3C9C: lea     ecx, [edi+4]
0x7E3C9F: push    ecx; lpAddend
0x7E3CA0: call    ebp ; InterlockedDecrement
0x7E3CA2: test    eax, eax
0x7E3CA4: jnz     short loc_7E3CB4
0x7E3CA6: cmp     edi, ebx
0x7E3CA8: jz      short loc_7E3CB4
0x7E3CAA: mov     edx, [edi]
0x7E3CAC: mov     eax, [edx]
0x7E3CAE: push    1
0x7E3CB0: mov     ecx, edi
0x7E3CB2: call    eax
0x7E3CB4: mov     [esi+8Ch], ebx
0x7E3CBA: mov     edi, [esi+8Ch]
0x7E3CC0: cmp     edi, ebx
0x7E3CC2: mov     byte ptr [esp+24h+var_4], 2
0x7E3CC7: jz      short loc_7E3CE1
0x7E3CC9: lea     ecx, [edi+4]
0x7E3CCC: push    ecx; lpAddend
0x7E3CCD: call    ebp ; InterlockedDecrement
0x7E3CCF: test    eax, eax
0x7E3CD1: jnz     short loc_7E3CE1
0x7E3CD3: cmp     edi, ebx
0x7E3CD5: jz      short loc_7E3CE1
0x7E3CD7: mov     edx, [edi]
0x7E3CD9: mov     eax, [edx]
0x7E3CDB: push    1
0x7E3CDD: mov     ecx, edi
0x7E3CDF: call    eax
0x7E3CE1: mov     edi, [esi+88h]
0x7E3CE7: cmp     edi, ebx
0x7E3CE9: mov     byte ptr [esp+24h+var_4], 1
0x7E3CEE: jz      short loc_7E3D08
0x7E3CF0: lea     ecx, [edi+4]
0x7E3CF3: push    ecx; lpAddend
0x7E3CF4: call    ebp ; InterlockedDecrement
0x7E3CF6: test    eax, eax
0x7E3CF8: jnz     short loc_7E3D08
0x7E3CFA: cmp     edi, ebx
0x7E3CFC: jz      short loc_7E3D08
0x7E3CFE: mov     edx, [edi]
0x7E3D00: mov     eax, [edx]
0x7E3D02: push    1
0x7E3D04: mov     ecx, edi
0x7E3D06: call    eax
0x7E3D08: mov     ecx, [esi+84h]
0x7E3D0E: cmp     ecx, ebx
0x7E3D10: mov     byte ptr [esp+24h+var_4], bl
0x7E3D14: jz      short loc_7E3D21
0x7E3D16: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7E3D1A: jnz     short loc_7E3D21
0x7E3D1C: call    sub_7604D0
0x7E3D21: mov     ecx, esi; this
0x7E3D23: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7E3D2B: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x7E3D30: mov     ecx, dword ptr [esp+24h+var_C]
0x7E3D34: mov     large fs:0, ecx
0x7E3D3B: pop     ecx
0x7E3D3C: pop     edi
0x7E3D3D: pop     esi
0x7E3D3E: pop     ebp
0x7E3D3F: pop     ebx
0x7E3D40: add     esp, 10h
0x7E3D43: retn
