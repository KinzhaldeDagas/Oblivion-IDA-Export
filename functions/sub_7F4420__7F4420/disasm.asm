0x7F4420: push    edi
0x7F4421: mov     edi, [esp+4+arg_0]
0x7F4425: test    edi, edi
0x7F4427: jz      loc_7F4535
0x7F442D: cmp     [esp+4+arg_4], 0
0x7F4432: jz      loc_7F4535
0x7F4438: push    ebx
0x7F4439: xor     ebx, ebx
0x7F443B: cmp     [edi+0B8h], bx
0x7F4442: push    esi
0x7F4443: jbe     loc_7F44E8
0x7F4449: lea     esp, [esp+0]
0x7F4450: movzx   eax, word ptr [edi+0B6h]
0x7F4457: cmp     eax, ebx
0x7F4459: jbe     short loc_7F4477
0x7F445B: mov     ecx, [edi+0B0h]
0x7F4461: mov     ecx, [ecx+ebx*4]
0x7F4464: test    ecx, ecx
0x7F4466: jz      short loc_7F4477
0x7F4468: push    4
0x7F446A: call    NiNode_GetNiPropertyByID
0x7F446F: mov     esi, eax
0x7F4471: test    esi, esi
0x7F4473: jnz     short loc_7F447D
0x7F4475: jmp     short loc_7F4490
0x7F4477: xor     esi, esi
0x7F4479: xor     eax, eax
0x7F447B: jmp     short loc_7F4490
0x7F447D: mov     edx, [esi]
0x7F447F: mov     eax, [edx+54h]
0x7F4482: mov     ecx, esi
0x7F4484: call    eax
0x7F4486: xor     ecx, ecx
0x7F4488: cmp     eax, 0Dh
0x7F448B: setz    cl
0x7F448E: mov     eax, ecx
0x7F4490: neg     eax
0x7F4492: sbb     eax, eax
0x7F4494: and     eax, esi
0x7F4496: jz      short loc_7F44D6
0x7F4498: cmp     eax, [esp+0Ch+arg_4]
0x7F449C: jnz     short loc_7F44D6
0x7F449E: mov     edx, [edi]
0x7F44A0: mov     edx, [edx+8Ch]
0x7F44A6: push    ebx
0x7F44A7: lea     eax, [esp+10h+arg_0]
0x7F44AB: push    eax
0x7F44AC: mov     ecx, edi
0x7F44AE: call    edx
0x7F44B0: mov     eax, [esp+0Ch+arg_0]
0x7F44B4: test    eax, eax
0x7F44B6: jz      short loc_7F44D6
0x7F44B8: mov     esi, eax
0x7F44BA: add     eax, 4
0x7F44BD: push    eax; lpAddend
0x7F44BE: call    dword ptr ds:0A2807Ch
0x7F44C4: test    eax, eax
0x7F44C6: jnz     short loc_7F44D6
0x7F44C8: test    esi, esi
0x7F44CA: jz      short loc_7F44D6
0x7F44CC: mov     eax, [esi]
0x7F44CE: mov     edx, [eax]
0x7F44D0: push    1
0x7F44D2: mov     ecx, esi
0x7F44D4: call    edx
0x7F44D6: movzx   eax, word ptr [edi+0B8h]
0x7F44DD: add     ebx, 1
0x7F44E0: cmp     ebx, eax
0x7F44E2: jb      loc_7F4450
0x7F44E8: mov     eax, ds:0B46900h
0x7F44ED: sub     eax, 1
0x7F44F0: test    eax, eax
0x7F44F2: mov     ds:0B46900h, eax
0x7F44F7: jg      short loc_7F4533
0x7F44F9: mov     esi, ds:0B4690Ch
0x7F44FF: test    esi, esi
0x7F4501: jz      short loc_7F4529
0x7F4503: lea     ecx, [esi+4]
0x7F4506: push    ecx; lpAddend
0x7F4507: call    dword ptr ds:0A2807Ch
0x7F450D: test    eax, eax
0x7F450F: jnz     short loc_7F451F
0x7F4511: test    esi, esi
0x7F4513: jz      short loc_7F451F
0x7F4515: mov     edx, [esi]
0x7F4517: mov     eax, [edx]
0x7F4519: push    1
0x7F451B: mov     ecx, esi
0x7F451D: call    eax
0x7F451F: mov     dword ptr ds:0B4690Ch, 0
0x7F4529: mov     dword ptr ds:0B46900h, 0
0x7F4533: pop     esi
0x7F4534: pop     ebx
0x7F4535: pop     edi
0x7F4536: retn
