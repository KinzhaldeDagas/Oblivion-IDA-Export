0x846DC0: push    0FFFFFFFFh
0x846DC2: push    offset SEH_846F90
0x846DC7: mov     eax, large fs:0
0x846DCD: push    eax
0x846DCE: sub     esp, 18h
0x846DD1: push    ebx
0x846DD2: push    ebp
0x846DD3: push    esi
0x846DD4: push    edi
0x846DD5: mov     eax, ds:0B30AACh
0x846DDA: xor     eax, esp
0x846DDC: push    eax
0x846DDD: lea     eax, [esp+38h+var_C]
0x846DE1: mov     large fs:0, eax
0x846DE7: mov     [esp+38h+var_20], ecx
0x846DEB: mov     eax, ds:0B42EB8h
0x846DF0: fld1
0x846DF2: movzx   ebx, byte ptr [eax+9]
0x846DF6: mov     esi, [esp+38h+arg_C]
0x846DFA: mov     eax, [esi+0C8h]
0x846E00: movzx   eax, byte ptr [eax+ebx]
0x846E04: mov     ecx, ds:0B25AD0h
0x846E0A: mov     edx, ds:0B25AD8h
0x846E10: mov     edi, ds:0B45B48h
0x846E16: mov     [esp+38h+var_1C], ecx
0x846E1A: mov     ecx, ds:0B25AD4h
0x846E20: mov     [esp+38h+arg_C], eax
0x846E24: fstp    [esp+38h+var_1C]
0x846E28: mov     ebp, [esp+38h+var_1C]
0x846E2C: sub     esp, 10h
0x846E2F: fild    [esp+48h+arg_C]
0x846E33: mov     eax, esp
0x846E35: mov     [eax], ebp
0x846E37: mov     [esp+48h+var_14], edx
0x846E3B: mov     edx, ds:0B25ADCh
0x846E41: mov     [eax+4], ecx
0x846E44: fstp    [esp+48h+var_14]
0x846E48: mov     ecx, [esp+48h+var_14]
0x846E4C: mov     [eax+8], ecx
0x846E4F: push    1Fh; slot
0x846E51: mov     [eax+0Ch], edx
0x846E54: call    OB_BSShader_SetSharedFloat4Constant_010201A0; Shader global table helper: store four dwords at dword_B46498 + 0x10 * index.
0x846E59: mov     edx, [edi+24h]
0x846E5C: mov     ebp, [edx]
0x846E5E: mov     eax, [esi]
0x846E60: mov     edx, [eax+88h]
0x846E66: add     esp, 14h
0x846E69: push    ebx
0x846E6A: mov     ecx, esi
0x846E6C: mov     [esp+3Ch+arg_C], ebp
0x846E70: call    edx
0x846E72: mov     ebp, [ebp+4]
0x846E75: cmp     ebp, eax
0x846E77: mov     [esp+38h+var_24], eax
0x846E7B: jz      short loc_846EB7
0x846E7D: test    ebp, ebp
0x846E7F: jz      short loc_846EA2
0x846E81: lea     eax, [ebp+4]
0x846E84: push    eax; lpAddend
0x846E85: call    dword ptr ds:0A2807Ch
0x846E8B: test    eax, eax
0x846E8D: jnz     short loc_846E9E
0x846E8F: test    ebp, ebp
0x846E91: jz      short loc_846E9E
0x846E93: mov     edx, [ebp+0]
0x846E96: mov     eax, [edx]
0x846E98: push    1
0x846E9A: mov     ecx, ebp
0x846E9C: call    eax
0x846E9E: mov     eax, [esp+38h+var_24]
0x846EA2: test    eax, eax
0x846EA4: mov     ecx, [esp+38h+arg_C]
0x846EA8: mov     [ecx+4], eax
0x846EAB: jz      short loc_846EB7
0x846EAD: add     eax, 4
0x846EB0: push    eax; lpAddend
0x846EB1: call    dword ptr ds:0A28078h
0x846EB7: mov     edx, [esp+38h+arg_C]
0x846EBB: mov     ebp, [esp+38h+var_20]
0x846EBF: push    esi
0x846EC0: push    edx
0x846EC1: mov     ecx, ebp
0x846EC3: call    sub_848FA0
0x846EC8: mov     eax, [edi+24h]
0x846ECB: mov     ecx, [eax+4]
0x846ECE: push    ebx
0x846ECF: mov     [esp+3Ch+arg_C], ecx
0x846ED3: push    esi
0x846ED4: mov     ecx, ebp
0x846ED6: call    sub_848FD0
0x846EDB: mov     edx, [esp+38h+arg_C]
0x846EDF: mov     ebx, [edx+4]
0x846EE2: cmp     ebx, eax
0x846EE4: mov     [esp+38h+var_24], eax
0x846EE8: jz      short loc_846F23
0x846EEA: test    ebx, ebx
0x846EEC: jz      short loc_846F0E
0x846EEE: lea     eax, [ebx+4]
0x846EF1: push    eax; lpAddend
0x846EF2: call    dword ptr ds:0A2807Ch
0x846EF8: test    eax, eax
0x846EFA: jnz     short loc_846F0A
0x846EFC: test    ebx, ebx
0x846EFE: jz      short loc_846F0A
0x846F00: mov     edx, [ebx]
0x846F02: mov     eax, [edx]
0x846F04: push    1
0x846F06: mov     ecx, ebx
0x846F08: call    eax
0x846F0A: mov     eax, [esp+38h+var_24]
0x846F0E: test    eax, eax
0x846F10: mov     ecx, [esp+38h+arg_C]
0x846F14: mov     [ecx+4], eax
0x846F17: jz      short loc_846F23
0x846F19: add     eax, 4
0x846F1C: push    eax; lpAddend
0x846F1D: call    dword ptr ds:0A28078h
0x846F23: mov     edx, [esp+38h+arg_C]
0x846F27: push    esi
0x846F28: push    edx
0x846F29: mov     ecx, ebp
0x846F2B: call    sub_848FA0
0x846F30: cmp     byte ptr [esp+38h+value], 0
0x846F35: jz      short loc_846F72
0x846F37: mov     esi, 1
0x846F3C: add     [edi+60h], esi
0x846F3F: mov     [esp+38h+value], edi
0x846F43: mov     ecx, [ebp+38h]
0x846F46: lea     eax, [esp+38h+value]
0x846F4A: push    eax; value
0x846F4B: push    ecx; index
0x846F4C: lea     ecx, [ebp+40h]; this
0x846F4F: mov     [esp+40h+var_4], 0
0x846F57: call    NiTArray_NiD3DPass_SetAt; Oblivion render decode: refcounted NiTArray<NiD3DPass*>::SetAt used by Lighting30Shader_SetupRenderPass. Replaces the indexed pass pointer, updates end/numObjs, and AddRef/Releases the stored pass.
0x846F5C: or      eax, 0FFFFFFFFh
0x846F5F: add     [edi+60h], eax
0x846F62: mov     [esp+38h+var_4], eax
0x846F66: jnz     short loc_846F6F
0x846F68: mov     ecx, edi
0x846F6A: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x846F6F: add     [ebp+38h], esi
0x846F72: mov     ecx, dword ptr [esp+38h+var_C]
0x846F76: mov     large fs:0, ecx
0x846F7D: pop     ecx
0x846F7E: pop     edi
0x846F7F: pop     esi
0x846F80: pop     ebp
0x846F81: pop     ebx
0x846F82: add     esp, 24h
0x846F85: retn    14h
0x9D3300: lea     ecx, [ebp+14h]; void *
0x9D3303: jmp     sub_4027D0
0x9D3308: mov     edx, [esp+arg_4]
0x9D330C: lea     eax, [edx-28h]
0x9D330F: mov     ecx, [edx-2Ch]
0x9D3312: xor     ecx, eax
0x9D3314: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3319: mov     eax, offset stru_AFB73C
0x9D331E: jmp     ___CxxFrameHandler3
