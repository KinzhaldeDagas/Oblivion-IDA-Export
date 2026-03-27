0x74A2D0: push    ecx
0x74A2D1: push    ebp
0x74A2D2: mov     ebp, [esp+8+arg_0]
0x74A2D6: test    ebp, ebp
0x74A2D8: mov     [esp+8+var_4], ecx
0x74A2DC: jz      loc_74A37A
0x74A2E2: mov     eax, [ebp+0]
0x74A2E5: mov     edx, [eax+10h]
0x74A2E8: mov     ecx, ebp
0x74A2EA: call    edx
0x74A2EC: test    eax, eax
0x74A2EE: jz      loc_74A37A
0x74A2F4: push    edi
0x74A2F5: mov     edi, [ebp+0B8h]
0x74A2FB: test    edi, edi
0x74A2FD: jz      short loc_74A372
0x74A2FF: push    esi
0x74A300: mov     esi, [edi+0Ch]
0x74A303: test    esi, esi
0x74A305: jnz     short loc_74A35C
0x74A307: mov     eax, [edi+8]
0x74A30A: test    eax, eax
0x74A30C: jz      short loc_74A353
0x74A30E: push    ebx
0x74A30F: mov     ebx, [eax+40h]
0x74A312: cmp     ebx, 4
0x74A315: jnb     short loc_74A31C
0x74A317: mov     ebx, 4
0x74A31C: push    10h; Size
0x74A31E: call    FormHeapAlloc
0x74A323: add     esp, 4
0x74A326: test    eax, eax
0x74A328: jz      short loc_74A335
0x74A32A: mov     ecx, eax; this
0x74A32C: call    ??0NiSkinPartition@@QAE@XZ; NiSkinPartition::NiSkinPartition(void)
0x74A331: mov     esi, eax
0x74A333: jmp     short loc_74A337
0x74A335: xor     esi, esi
0x74A337: mov     eax, [edi+8]
0x74A33A: mov     ecx, [ebp+0B4h]
0x74A340: push    0
0x74A342: push    4
0x74A344: push    ebx
0x74A345: push    eax
0x74A346: push    ecx
0x74A347: mov     ecx, esi
0x74A349: call    sub_72ED50
0x74A34E: test    al, al
0x74A350: pop     ebx
0x74A351: jnz     short loc_74A35C
0x74A353: pop     esi
0x74A354: pop     edi
0x74A355: xor     al, al
0x74A357: pop     ebp
0x74A358: pop     ecx
0x74A359: retn    4
0x74A35C: mov     ecx, [esp+10h+var_4]
0x74A360: push    esi; a2
0x74A361: add     ecx, 8; this
0x74A364: call    NiSmartPointer_Set??
0x74A369: pop     esi
0x74A36A: pop     edi
0x74A36B: mov     al, 1
0x74A36D: pop     ebp
0x74A36E: pop     ecx
0x74A36F: retn    4
0x74A372: pop     edi
0x74A373: xor     al, al
0x74A375: pop     ebp
0x74A376: pop     ecx
0x74A377: retn    4
0x74A37A: xor     al, al
0x74A37C: pop     ebp
0x74A37D: pop     ecx
0x74A37E: retn    4
