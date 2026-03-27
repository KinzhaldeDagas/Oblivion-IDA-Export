0x591A80: push    0FFFFFFFFh
0x591A82: push    offset SEH_7E5B50
0x591A87: mov     eax, large fs:0
0x591A8D: push    eax
0x591A8E: push    ebx
0x591A8F: push    ebp
0x591A90: push    esi
0x591A91: push    edi
0x591A92: mov     eax, ds:0B30AACh
0x591A97: xor     eax, esp
0x591A99: push    eax
0x591A9A: lea     eax, [esp+20h+var_C]
0x591A9E: mov     large fs:0, eax
0x591AA4: mov     esi, ecx
0x591AA6: push    offset EmptyString
0x591AAB: push    0FE6h
0x591AB0: mov     [esp+28h+var_4], 0
0x591AB8: call    Tile_SetString
0x591ABD: mov     edi, [esi+44h]
0x591AC0: mov     ebx, [esp+20h+arg_0]
0x591AC4: cmp     edi, ebx
0x591AC6: mov     ebp, ds:0A2807Ch
0x591ACC: jz      short loc_591AFB
0x591ACE: test    edi, edi
0x591AD0: jz      short loc_591AEA
0x591AD2: lea     eax, [edi+4]
0x591AD5: push    eax; lpAddend
0x591AD6: call    ebp ; InterlockedDecrement
0x591AD8: test    eax, eax
0x591ADA: jnz     short loc_591AEA
0x591ADC: test    edi, edi
0x591ADE: jz      short loc_591AEA
0x591AE0: mov     edx, [edi]
0x591AE2: mov     eax, [edx]
0x591AE4: push    1
0x591AE6: mov     ecx, edi
0x591AE8: call    eax
0x591AEA: test    ebx, ebx
0x591AEC: mov     [esi+44h], ebx
0x591AEF: jz      short loc_591AFB
0x591AF1: lea     ecx, [ebx+4]
0x591AF4: push    ecx; lpAddend
0x591AF5: call    dword ptr ds:0A28078h
0x591AFB: or      dword ptr [esi+2Ch], 30h
0x591AFF: test    ebx, ebx
0x591B01: mov     [esp+20h+var_4], 0FFFFFFFFh
0x591B09: jz      short loc_591B1F
0x591B0B: lea     edx, [ebx+4]
0x591B0E: push    edx; lpAddend
0x591B0F: call    ebp ; InterlockedDecrement
0x591B11: test    eax, eax
0x591B13: jnz     short loc_591B1F
0x591B15: mov     eax, [ebx]
0x591B17: mov     edx, [eax]
0x591B19: push    1
0x591B1B: mov     ecx, ebx
0x591B1D: call    edx
0x591B1F: mov     ecx, dword ptr [esp+20h+var_C]
0x591B23: mov     large fs:0, ecx
0x591B2A: pop     ecx
0x591B2B: pop     edi
0x591B2C: pop     esi
0x591B2D: pop     ebp
0x591B2E: pop     ebx
0x591B2F: add     esp, 0Ch
0x591B32: retn    4
