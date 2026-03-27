0x4729F0: push    0FFFFFFFFh
0x4729F2: push    offset SEH_4729F0
0x4729F7: mov     eax, large fs:0
0x4729FD: push    eax
0x4729FE: sub     esp, 8
0x472A01: push    ebx
0x472A02: push    ebp
0x472A03: push    esi
0x472A04: push    edi
0x472A05: mov     eax, ds:0B30AACh
0x472A0A: xor     eax, esp
0x472A0C: push    eax
0x472A0D: lea     eax, [esp+28h+var_C]
0x472A11: mov     large fs:0, eax
0x472A17: mov     ebx, ecx
0x472A19: mov     [esp+28h+var_10], ebx
0x472A1D: mov     [esp+28h+var_4], 1
0x472A25: lea     esi, [ebx+1Ch]
0x472A28: mov     ebp, 2
0x472A2D: lea     ecx, [ecx+0]
0x472A30: mov     eax, [esi]
0x472A32: test    eax, eax
0x472A34: jz      loc_472B1C
0x472A3A: push    eax
0x472A3B: push    0
0x472A3D: call    GetShadowSceneNode
0x472A42: add     esp, 4
0x472A45: mov     ecx, eax
0x472A47: call    sub_7C5E70
0x472A4C: mov     ecx, [ebx+28h]
0x472A4F: mov     eax, [ecx]
0x472A51: mov     edx, [eax+164h]
0x472A57: call    edx
0x472A59: mov     eax, [eax+98h]
0x472A5F: mov     eax, [eax+7Ch]
0x472A62: mov     ecx, [esi]
0x472A64: push    eax
0x472A65: push    ecx
0x472A66: call    sub_716620
0x472A6B: mov     ecx, [ebx+28h]
0x472A6E: mov     eax, [ecx]
0x472A70: mov     edx, [eax+164h]
0x472A76: add     esp, 8
0x472A79: call    edx
0x472A7B: test    eax, eax
0x472A7D: jz      short loc_472A90
0x472A7F: mov     eax, [eax+4]
0x472A82: test    eax, eax
0x472A84: mov     ecx, [esi]
0x472A86: jz      short loc_472A90
0x472A88: push    ecx
0x472A89: mov     ecx, eax
0x472A8B: call    sub_47CC80
0x472A90: mov     eax, [esi]
0x472A92: mov     ecx, [eax+1Ch]
0x472A95: mov     edx, [ecx]
0x472A97: mov     edx, [edx+88h]
0x472A9D: push    eax
0x472A9E: lea     eax, [esp+2Ch+var_14]
0x472AA2: push    eax
0x472AA3: call    edx
0x472AA5: mov     eax, [esp+28h+var_14]
0x472AA9: test    eax, eax
0x472AAB: jz      short loc_472ACB
0x472AAD: mov     edi, eax
0x472AAF: add     eax, 4
0x472AB2: push    eax; lpAddend
0x472AB3: call    dword ptr ds:0A2807Ch
0x472AB9: test    eax, eax
0x472ABB: jnz     short loc_472ACB
0x472ABD: test    edi, edi
0x472ABF: jz      short loc_472ACB
0x472AC1: mov     eax, [edi]
0x472AC3: mov     edx, [eax]
0x472AC5: push    1
0x472AC7: mov     ecx, edi
0x472AC9: call    edx
0x472ACB: mov     eax, [esi-8]
0x472ACE: lea     ecx, [eax+18h]
0x472AD1: mov     eax, [ecx]
0x472AD3: mov     edx, [eax+14h]
0x472AD6: call    edx
0x472AD8: mov     ecx, ds:0B33A1Ch
0x472ADE: push    1
0x472AE0: push    1
0x472AE2: push    eax
0x472AE3: call    QueuedModelLoader_RemoveModel
0x472AE8: mov     edi, [esi]
0x472AEA: test    edi, edi
0x472AEC: jz      short loc_472B10
0x472AEE: lea     eax, [edi+4]
0x472AF1: push    eax; lpAddend
0x472AF2: call    dword ptr ds:0A2807Ch
0x472AF8: test    eax, eax
0x472AFA: jnz     short loc_472B0A
0x472AFC: test    edi, edi
0x472AFE: jz      short loc_472B0A
0x472B00: mov     edx, [edi]
0x472B02: mov     eax, [edx]
0x472B04: push    1
0x472B06: mov     ecx, edi
0x472B08: call    eax
0x472B0A: mov     dword ptr [esi], 0
0x472B10: mov     ecx, [ebx+10h]
0x472B13: test    ecx, ecx
0x472B15: jz      short loc_472B1C
0x472B17: call    sub_49F750
0x472B1C: add     esi, 4
0x472B1F: sub     ebp, 1
0x472B22: jnz     loc_472A30
0x472B28: mov     eax, [ebx+8]
0x472B2B: test    eax, eax
0x472B2D: jz      short loc_472B47
0x472B2F: cmp     dword ptr [ebx+4], 0
0x472B33: jz      short loc_472B47
0x472B35: mov     eax, [eax]
0x472B37: mov     ecx, ds:0B33A1Ch
0x472B3D: push    1
0x472B3F: push    eax
0x472B40: call    sub_438540
0x472B45: jmp     short loc_472B58
0x472B47: cmp     dword ptr [ebx], 0
0x472B4A: jnz     short loc_472B58
0x472B4C: mov     ecx, ds:0B33A1Ch
0x472B52: push    ebx
0x472B53: call    sub_439D20
0x472B58: mov     ecx, ds:0B33B00h
0x472B5E: call    sub_45A500
0x472B63: test    al, al
0x472B65: jnz     short loc_472B9B
0x472B67: mov     ecx, [ebx+28h]
0x472B6A: test    ecx, ecx
0x472B6C: jz      short loc_472B9B
0x472B6E: call    Actor_GetCurrentAction
0x472B73: cmp     eax, 0Bh
0x472B76: jnz     short loc_472B9B
0x472B78: mov     ecx, [ebx+28h]
0x472B7B: mov     ecx, [ecx+58h]
0x472B7E: mov     edx, [ecx]
0x472B80: mov     eax, [edx+2D4h]
0x472B86: mov     esi, [ebx+10h]
0x472B89: call    eax
0x472B8B: cmp     eax, esi
0x472B8D: jnz     short loc_472B9B
0x472B8F: mov     ecx, [ebx+28h]
0x472B92: push    0
0x472B94: push    0FFFFFFFFh
0x472B96: call    HighPRocess_DoAction?????
0x472B9B: push    offset sub_7016A0; void (__thiscall *)(void *)
0x472BA0: push    2; int
0x472BA2: push    4; unsigned int
0x472BA4: lea     eax, [ebx+1Ch]
0x472BA7: push    eax; void *
0x472BA8: mov     byte ptr [esp+38h+var_4], 0
0x472BAD: call    $LN21
0x472BB2: mov     ebx, [ebx+10h]
0x472BB5: test    ebx, ebx
0x472BB7: mov     [esp+28h+var_4], 0FFFFFFFFh
0x472BBF: jz      short loc_472BDD
0x472BC1: lea     ecx, [ebx+4]
0x472BC4: push    ecx; lpAddend
0x472BC5: call    dword ptr ds:0A2807Ch
0x472BCB: test    eax, eax
0x472BCD: jnz     short loc_472BDD
0x472BCF: test    ebx, ebx
0x472BD1: jz      short loc_472BDD
0x472BD3: mov     edx, [ebx]
0x472BD5: mov     eax, [edx]
0x472BD7: push    1
0x472BD9: mov     ecx, ebx
0x472BDB: call    eax
0x472BDD: mov     ecx, dword ptr [esp+28h+var_C]
0x472BE1: mov     large fs:0, ecx
0x472BE8: pop     ecx
0x472BE9: pop     edi
0x472BEA: pop     esi
0x472BEB: pop     ebp
0x472BEC: pop     ebx
0x472BED: add     esp, 14h
0x472BF0: retn
