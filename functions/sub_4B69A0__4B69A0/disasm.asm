0x4B69A0: jz      loc_4B6A58
0x4B69A6: mov     ebx, [esp+arg_C]
0x4B69AA: cmp     dword ptr [ebx+70h], 0
0x4B69AE: jz      loc_4B6A50
0x4B69B4: test    edi, edi
0x4B69B6: jz      loc_4B6A50
0x4B69BC: mov     edx, [edi]
0x4B69BE: mov     eax, [edx+154h]
0x4B69C4: mov     ecx, edi
0x4B69C6: call    eax
0x4B69C8: test    eax, eax
0x4B69CA: jz      loc_4B6A50
0x4B69D0: mov     ecx, ds:0B33398h
0x4B69D6: mov     ecx, [ecx+24h]
0x4B69D9: test    ecx, ecx
0x4B69DB: jz      short loc_4B6A50
0x4B69DD: mov     edx, [ebx+70h]
0x4B69E0: mov     eax, [edx+0Ch]
0x4B69E3: push    0
0x4B69E5: push    102h
0x4B69EA: push    eax
0x4B69EB: call    OSGLobals_PlaySound
0x4B69F0: mov     ebx, eax
0x4B69F2: test    ebx, ebx
0x4B69F4: jz      short loc_4B6A50
0x4B69F6: mov     eax, [edi]
0x4B69F8: mov     edx, [eax+174h]
0x4B69FE: mov     ecx, edi
0x4B6A00: call    edx
0x4B6A02: mov     ecx, [eax]
0x4B6A04: mov     edx, [eax+4]
0x4B6A07: mov     eax, [eax+8]
0x4B6A0A: sub     esp, 0Ch
0x4B6A0D: mov     [esp+0Ch+arg_18], eax
0x4B6A11: fld     [esp+0Ch+arg_18]
0x4B6A15: fstp    [esp+0Ch+var_4]; float
0x4B6A19: mov     [esp+0Ch+arg_14], edx
0x4B6A1D: fld     [esp+0Ch+arg_14]
0x4B6A21: mov     [esp+0Ch+arg_10], ecx
0x4B6A25: fstp    [esp+0Ch+var_8]; float
0x4B6A29: mov     ecx, ebx
0x4B6A2B: fld     [esp+0Ch+arg_10]
0x4B6A2F: fstp    [esp+0Ch+var_C]; float
0x4B6A32: call    sub_6B7360
0x4B6A37: push    0
0x4B6A39: mov     ecx, ebx
0x4B6A3B: call    sub_6B7190
0x4B6A40: mov     ecx, ebx; this
0x4B6A42: call    sub_6B73E0
0x4B6A47: push    ebx
0x4B6A48: call    FormHeapFree
0x4B6A4D: add     esp, 4
0x4B6A50: cmp     esi, ds:0B333C4h
0x4B6A56: jnz     short loc_4B6A73
0x4B6A58: push    0
0x4B6A5A: push    1
0x4B6A5C: push    0
0x4B6A5E: push    edi
0x4B6A5F: call    sub_57A8D0
0x4B6A64: add     esp, 10h
0x4B6A67: pop     edi
0x4B6A68: pop     ebp
0x4B6A69: pop     ebx
0x4B6A6A: mov     al, 1
0x4B6A6C: pop     esi
0x4B6A6D: add     esp, 10h
0x4B6A70: retn    14h
0x4B6A73: mov     ebx, [esp+arg_2C]
0x4B6A77: test    ebx, ebx
0x4B6A79: mov     ebp, [esp+arg_30]
0x4B6A7D: jz      short loc_4B6A9C
0x4B6A7F: mov     edx, [edi]
0x4B6A81: mov     eax, [edx+100h]
0x4B6A87: push    0
0x4B6A89: push    1
0x4B6A8B: push    0
0x4B6A8D: push    0
0x4B6A8F: push    esi
0x4B6A90: push    0
0x4B6A92: push    0
0x4B6A94: push    ebp
0x4B6A95: push    0
0x4B6A97: push    ebx
0x4B6A98: mov     ecx, edi
0x4B6A9A: call    eax
0x4B6A9C: mov     ecx, esi
0x4B6A9E: call    sub_5E32D0
0x4B6AA3: test    al, al
0x4B6AA5: jz      loc_4B67CE
0x4B6AAB: push    1
0x4B6AAD: push    esi
0x4B6AAE: mov     ecx, edi
0x4B6AB0: call    TESOBjectREFR_IsOwnedBy
0x4B6AB5: test    al, al
0x4B6AB7: jnz     loc_4B67CE
0x4B6ABD: mov     ecx, edi; this
0x4B6ABF: call    TESObjectREFR_GetOwner
0x4B6AC4: test    eax, eax
0x4B6AC6: jz      loc_4B67CE
0x4B6ACC: mov     edx, [esi]
0x4B6ACE: mov     eax, [edx+238h]
0x4B6AD4: push    0
0x4B6AD6: push    1
0x4B6AD8: push    ebp
0x4B6AD9: push    ebx
0x4B6ADA: push    edi
0x4B6ADB: mov     ecx, esi
0x4B6ADD: call    eax
0x4B6ADF: pop     edi
0x4B6AE0: pop     ebp
0x4B6AE1: pop     ebx
0x4B6AE2: mov     al, 1
0x4B6AE4: pop     esi
0x4B6AE5: add     esp, 10h
0x4B6AE8: retn    14h
