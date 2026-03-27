0x67B320: push    ebp
0x67B321: push    esi
0x67B322: push    edi
0x67B323: mov     edi, ecx
0x67B325: xor     al, al
0x67B327: xor     ebp, ebp
0x67B329: cmp     edi, offset ActorProcessManager_ptr.actor64
0x67B32F: mov     esi, edi
0x67B331: jnz     short loc_67B353
0x67B333: xor     edx, edx
0x67B335: test    edi, edi
0x67B337: jz      short loc_67B353
0x67B339: lea     esp, [esp+0]
0x67B340: cmp     [ecx], ebp
0x67B342: jz      short loc_67B347
0x67B344: add     edx, 1
0x67B347: mov     ecx, [ecx+4]
0x67B34A: test    ecx, ecx
0x67B34C: jnz     short loc_67B340
0x67B34E: cmp     edx, 2
0x67B351: jz      short loc_67B365
0x67B353: mov     ecx, ds:0B3BD74h
0x67B359: test    ecx, ecx
0x67B35B: jz      short loc_67B36B
0x67B35D: mov     edx, [esp+0Ch+arg_0]
0x67B361: cmp     edx, [ecx]
0x67B363: jnz     short loc_67B36B
0x67B365: mov     ds:0B3BD74h, ebp
0x67B36B: mov     ecx, ds:0B3BD78h
0x67B371: test    ecx, ecx
0x67B373: jz      short loc_67B383
0x67B375: mov     edx, [esp+0Ch+arg_0]
0x67B379: cmp     edx, [ecx]
0x67B37B: jnz     short loc_67B383
0x67B37D: mov     ds:0B3BD78h, ebp
0x67B383: mov     ecx, [esp+0Ch+arg_4]
0x67B387: test    ecx, ecx
0x67B389: jz      short loc_67B38D
0x67B38B: mov     esi, ecx
0x67B38D: xor     edx, edx
0x67B38F: test    esi, esi
0x67B391: jz      loc_67B429
0x67B397: mov     ecx, [esi+4]
0x67B39A: test    ecx, ecx
0x67B39C: jnz     short loc_67B3A2
0x67B39E: cmp     [esi], ecx
0x67B3A0: jz      short loc_67B3B8
0x67B3A2: mov     edx, [esi]
0x67B3A4: cmp     edx, [esp+0Ch+arg_0]
0x67B3A8: jz      short loc_67B3BE
0x67B3AA: mov     ebp, esi
0x67B3AC: mov     esi, ecx
0x67B3AE: test    esi, esi
0x67B3B0: jnz     short loc_67B397
0x67B3B2: pop     edi
0x67B3B3: pop     esi
0x67B3B4: pop     ebp
0x67B3B5: retn    8
0x67B3B8: cmp     edx, [esp+0Ch+arg_0]
0x67B3BC: jnz     short loc_67B429
0x67B3BE: test    ebp, ebp
0x67B3C0: jz      short loc_67B3D8
0x67B3C2: mov     eax, [esp+0Ch+arg_0]
0x67B3C6: push    eax
0x67B3C7: mov     ecx, ebp
0x67B3C9: call    BSSimpleList_Remove
0x67B3CE: cmp     esi, [edi+8]
0x67B3D1: jnz     short loc_67B403
0x67B3D3: mov     [edi+8], ebp
0x67B3D6: jmp     short loc_67B403
0x67B3D8: mov     eax, [edi+4]
0x67B3DB: test    eax, eax
0x67B3DD: jz      short loc_67B3F4
0x67B3DF: mov     ecx, [eax+4]
0x67B3E2: mov     [edi+4], ecx
0x67B3E5: mov     edx, [eax]
0x67B3E7: push    eax
0x67B3E8: mov     [edi], edx
0x67B3EA: call    FormHeapFree
0x67B3EF: add     esp, 4
0x67B3F2: jmp     short loc_67B3FA
0x67B3F4: mov     dword ptr [edi], 0
0x67B3FA: cmp     dword ptr [edi+4], 0
0x67B3FE: jnz     short loc_67B403
0x67B400: mov     [edi+8], edi
0x67B403: mov     esi, [esp+0Ch+arg_0]
0x67B407: mov     eax, [esi+8]
0x67B40A: shr     eax, 5
0x67B40D: test    al, 1
0x67B40F: jz      short loc_67B427
0x67B411: mov     ecx, ds:0B33B00h
0x67B417: call    sub_45A500
0x67B41C: test    al, al
0x67B41E: jnz     short loc_67B427
0x67B420: mov     ecx, esi
0x67B422: call    sub_659BC0
0x67B427: mov     al, 1
0x67B429: pop     edi
0x67B42A: pop     esi
0x67B42B: pop     ebp
0x67B42C: retn    8
