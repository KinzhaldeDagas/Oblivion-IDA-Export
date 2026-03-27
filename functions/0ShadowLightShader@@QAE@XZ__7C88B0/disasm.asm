0x7C88B0: push    0FFFFFFFFh
0x7C88B2: push    offset ??0Lighting30Shader@@QAE@XZ_SEH
0x7C88B7: mov     eax, large fs:0
0x7C88BD: push    eax
0x7C88BE: push    ecx
0x7C88BF: push    ebx
0x7C88C0: push    ebp
0x7C88C1: push    esi
0x7C88C2: push    edi
0x7C88C3: mov     eax, ds:0B30AACh
0x7C88C8: xor     eax, esp
0x7C88CA: push    eax
0x7C88CB: lea     eax, [esp+24h+var_C]
0x7C88CF: mov     large fs:0, eax
0x7C88D5: mov     esi, ecx
0x7C88D7: mov     [esp+24h+var_10], esi
0x7C88DB: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x7C88E0: xor     ebp, ebp
0x7C88E2: mov     dword ptr [esi], offset ??_7ShadowLightShader@@6B@; const ShadowLightShader::`vftable'
0x7C88E8: mov     [esp+24h+var_4], ebp
0x7C88EC: mov     [esi+7Ch], ebp
0x7C88EF: mov     [esi+80h], ebp
0x7C88F5: mov     [esi+84h], ebp
0x7C88FB: mov     [esi+88h], ebp
0x7C8901: mov     [esi+8Ch], ebp
0x7C8907: mov     [esi+90h], ebp
0x7C890D: mov     [esi+94h], ebp
0x7C8913: mov     [esi+98h], ebp
0x7C8919: mov     edi, [esi+24h]
0x7C891C: mov     ebx, [esp+24h+arg_0]
0x7C8920: cmp     edi, ebx
0x7C8922: mov     byte ptr [esp+24h+var_4], 8
0x7C8927: jz      short loc_7C895A
0x7C8929: cmp     edi, ebp
0x7C892B: jz      short loc_7C8949
0x7C892D: lea     eax, [edi+4]
0x7C8930: push    eax; lpAddend
0x7C8931: call    dword ptr ds:0A2807Ch
0x7C8937: test    eax, eax
0x7C8939: jnz     short loc_7C8949
0x7C893B: cmp     edi, ebp
0x7C893D: jz      short loc_7C8949
0x7C893F: mov     edx, [edi]
0x7C8941: mov     eax, [edx]
0x7C8943: push    1
0x7C8945: mov     ecx, edi
0x7C8947: call    eax
0x7C8949: cmp     ebx, ebp
0x7C894B: mov     [esi+24h], ebx
0x7C894E: jz      short loc_7C895A
0x7C8950: lea     ecx, [ebx+4]
0x7C8953: push    ecx; lpAddend
0x7C8954: call    dword ptr ds:0A28078h
0x7C895A: mov     edi, [esi+7Ch]
0x7C895D: cmp     edi, ebx
0x7C895F: jz      short loc_7C8992
0x7C8961: cmp     edi, ebp
0x7C8963: jz      short loc_7C8981
0x7C8965: lea     edx, [edi+4]
0x7C8968: push    edx; lpAddend
0x7C8969: call    dword ptr ds:0A2807Ch
0x7C896F: test    eax, eax
0x7C8971: jnz     short loc_7C8981
0x7C8973: cmp     edi, ebp
0x7C8975: jz      short loc_7C8981
0x7C8977: mov     eax, [edi]
0x7C8979: mov     edx, [eax]
0x7C897B: push    1
0x7C897D: mov     ecx, edi
0x7C897F: call    edx
0x7C8981: cmp     ebx, ebp
0x7C8983: mov     [esi+7Ch], ebx
0x7C8986: jz      short loc_7C8992
0x7C8988: add     ebx, 4
0x7C898B: push    ebx; lpAddend
0x7C898C: call    dword ptr ds:0A28078h
0x7C8992: mov     edi, [esi+80h]
0x7C8998: mov     ebx, [esp+24h+arg_4]
0x7C899C: cmp     edi, ebx
0x7C899E: jz      short loc_7C89D4
0x7C89A0: cmp     edi, ebp
0x7C89A2: jz      short loc_7C89C0
0x7C89A4: lea     eax, [edi+4]
0x7C89A7: push    eax; lpAddend
0x7C89A8: call    dword ptr ds:0A2807Ch
0x7C89AE: test    eax, eax
0x7C89B0: jnz     short loc_7C89C0
0x7C89B2: cmp     edi, ebp
0x7C89B4: jz      short loc_7C89C0
0x7C89B6: mov     edx, [edi]
0x7C89B8: mov     eax, [edx]
0x7C89BA: push    1
0x7C89BC: mov     ecx, edi
0x7C89BE: call    eax
0x7C89C0: cmp     ebx, ebp
0x7C89C2: mov     [esi+80h], ebx
0x7C89C8: jz      short loc_7C89D4
0x7C89CA: add     ebx, 4
0x7C89CD: push    ebx; lpAddend
0x7C89CE: call    dword ptr ds:0A28078h
0x7C89D4: mov     edi, [esi+84h]
0x7C89DA: mov     ebx, [esp+24h+arg_8]
0x7C89DE: cmp     edi, ebx
0x7C89E0: jz      short loc_7C8A16
0x7C89E2: cmp     edi, ebp
0x7C89E4: jz      short loc_7C8A02
0x7C89E6: lea     ecx, [edi+4]
0x7C89E9: push    ecx; lpAddend
0x7C89EA: call    dword ptr ds:0A2807Ch
0x7C89F0: test    eax, eax
0x7C89F2: jnz     short loc_7C8A02
0x7C89F4: cmp     edi, ebp
0x7C89F6: jz      short loc_7C8A02
0x7C89F8: mov     edx, [edi]
0x7C89FA: mov     eax, [edx]
0x7C89FC: push    1
0x7C89FE: mov     ecx, edi
0x7C8A00: call    eax
0x7C8A02: cmp     ebx, ebp
0x7C8A04: mov     [esi+84h], ebx
0x7C8A0A: jz      short loc_7C8A16
0x7C8A0C: add     ebx, 4
0x7C8A0F: push    ebx; lpAddend
0x7C8A10: call    dword ptr ds:0A28078h
0x7C8A16: mov     edi, [esi+88h]
0x7C8A1C: mov     ebx, [esp+24h+arg_C]
0x7C8A20: cmp     edi, ebx
0x7C8A22: jz      short loc_7C8A58
0x7C8A24: cmp     edi, ebp
0x7C8A26: jz      short loc_7C8A44
0x7C8A28: lea     ecx, [edi+4]
0x7C8A2B: push    ecx; lpAddend
0x7C8A2C: call    dword ptr ds:0A2807Ch
0x7C8A32: test    eax, eax
0x7C8A34: jnz     short loc_7C8A44
0x7C8A36: cmp     edi, ebp
0x7C8A38: jz      short loc_7C8A44
0x7C8A3A: mov     edx, [edi]
0x7C8A3C: mov     eax, [edx]
0x7C8A3E: push    1
0x7C8A40: mov     ecx, edi
0x7C8A42: call    eax
0x7C8A44: cmp     ebx, ebp
0x7C8A46: mov     [esi+88h], ebx
0x7C8A4C: jz      short loc_7C8A58
0x7C8A4E: add     ebx, 4
0x7C8A51: push    ebx; lpAddend
0x7C8A52: call    dword ptr ds:0A28078h
0x7C8A58: mov     edi, [esi+90h]
0x7C8A5E: cmp     edi, ebp
0x7C8A60: mov     ebx, ds:0A2807Ch
0x7C8A66: jz      short loc_7C8A86
0x7C8A68: lea     ecx, [edi+4]
0x7C8A6B: push    ecx; lpAddend
0x7C8A6C: call    ebx ; InterlockedDecrement
0x7C8A6E: test    eax, eax
0x7C8A70: jnz     short loc_7C8A80
0x7C8A72: cmp     edi, ebp
0x7C8A74: jz      short loc_7C8A80
0x7C8A76: mov     edx, [edi]
0x7C8A78: mov     eax, [edx]
0x7C8A7A: push    1
0x7C8A7C: mov     ecx, edi
0x7C8A7E: call    eax
0x7C8A80: mov     [esi+90h], ebp
0x7C8A86: mov     edi, [esi+8Ch]
0x7C8A8C: cmp     edi, ebp
0x7C8A8E: jz      short loc_7C8AAE
0x7C8A90: lea     ecx, [edi+4]
0x7C8A93: push    ecx; lpAddend
0x7C8A94: call    ebx ; InterlockedDecrement
0x7C8A96: test    eax, eax
0x7C8A98: jnz     short loc_7C8AA8
0x7C8A9A: cmp     edi, ebp
0x7C8A9C: jz      short loc_7C8AA8
0x7C8A9E: mov     edx, [edi]
0x7C8AA0: mov     eax, [edx]
0x7C8AA2: push    1
0x7C8AA4: mov     ecx, edi
0x7C8AA6: call    eax
0x7C8AA8: mov     [esi+8Ch], ebp
0x7C8AAE: mov     edi, [esi+98h]
0x7C8AB4: cmp     edi, ebp
0x7C8AB6: jz      short loc_7C8AD6
0x7C8AB8: lea     ecx, [edi+4]
0x7C8ABB: push    ecx; lpAddend
0x7C8ABC: call    ebx ; InterlockedDecrement
0x7C8ABE: test    eax, eax
0x7C8AC0: jnz     short loc_7C8AD0
0x7C8AC2: cmp     edi, ebp
0x7C8AC4: jz      short loc_7C8AD0
0x7C8AC6: mov     edx, [edi]
0x7C8AC8: mov     eax, [edx]
0x7C8ACA: push    1
0x7C8ACC: mov     ecx, edi
0x7C8ACE: call    eax
0x7C8AD0: mov     [esi+98h], ebp
0x7C8AD6: mov     edi, [esi+94h]
0x7C8ADC: cmp     edi, ebp
0x7C8ADE: jz      short loc_7C8AFE
0x7C8AE0: lea     ecx, [edi+4]
0x7C8AE3: push    ecx; lpAddend
0x7C8AE4: call    ebx ; InterlockedDecrement
0x7C8AE6: test    eax, eax
0x7C8AE8: jnz     short loc_7C8AF8
0x7C8AEA: cmp     edi, ebp
0x7C8AEC: jz      short loc_7C8AF8
0x7C8AEE: mov     edx, [edi]
0x7C8AF0: mov     eax, [edx]
0x7C8AF2: push    1
0x7C8AF4: mov     ecx, edi
0x7C8AF6: call    eax
0x7C8AF8: mov     [esi+94h], ebp
0x7C8AFE: mov     eax, esi
0x7C8B00: mov     dword ptr [esi+74h], 0FFFFFFFFh
0x7C8B07: mov     ecx, dword ptr [esp+24h+var_C]
0x7C8B0B: mov     large fs:0, ecx
0x7C8B12: pop     ecx
0x7C8B13: pop     edi
0x7C8B14: pop     esi
0x7C8B15: pop     ebp
0x7C8B16: pop     ebx
0x7C8B17: add     esp, 10h
0x7C8B1A: retn    10h
