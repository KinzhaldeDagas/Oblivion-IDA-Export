0x8D95A0: push    ebp
0x8D95A1: mov     ebp, esp
0x8D95A3: and     esp, 0FFFFFFF0h
0x8D95A6: sub     esp, 24h
0x8D95A9: push    ebx
0x8D95AA: mov     ebx, large fs:2Ch
0x8D95B1: push    esi
0x8D95B2: mov     esi, ds:0BA9DE4h
0x8D95B8: mov     eax, [ebx+esi*4]
0x8D95BB: mov     edx, [eax+1A4h]
0x8D95C1: push    edi
0x8D95C2: cmp     edx, [eax+1A8h]
0x8D95C8: jnb     short loc_8D95F4
0x8D95CA: mov     edi, eax
0x8D95CC: mov     esi, [edi+1A4h]
0x8D95D2: mov     dword ptr [esi], offset aTtraycstcchsim; "TtRayCstCchSim"
0x8D95D8: rdtsc
0x8D95DA: mov     [esp+30h+var_24], eax
0x8D95DE: mov     eax, [esp+30h+var_24]
0x8D95E2: mov     [esi+4], eax
0x8D95E5: add     esi, 0Ch
0x8D95E8: mov     [edi+1A4h], esi
0x8D95EE: mov     esi, ds:0BA9DE4h
0x8D95F4: mov     edi, [ebp+a4]
0x8D95F7: test    edi, edi
0x8D95F9: mov     eax, [ebp+a3]
0x8D95FC: mov     edx, [ebp+a6]
0x8D95FF: mov     [ecx+4], eax
0x8D9602: mov     [ecx+0Ch], edx
0x8D9605: jz      short loc_8D960C
0x8D9607: lea     edx, [edi+14h]
0x8D960A: jmp     short loc_8D960E
0x8D960C: xor     edx, edx
0x8D960E: mov     [ecx+8], edx
0x8D9611: mov     dl, [eax+20h]
0x8D9614: test    dl, dl
0x8D9616: jz      short loc_8D962B
0x8D9618: test    edi, edi
0x8D961A: jz      short loc_8D9624
0x8D961C: add     edi, 10h
0x8D961F: mov     [ecx+34h], edi
0x8D9622: jmp     short loc_8D9632
0x8D9624: xor     edi, edi
0x8D9626: mov     [ecx+34h], edi
0x8D9629: jmp     short loc_8D9632
0x8D962B: mov     dword ptr [ecx+34h], 0
0x8D9632: movaps  xmm0, xmmword ptr [eax]
0x8D9635: add     eax, 10h
0x8D9638: mov     [esp+30h+var_C], eax
0x8D963C: mov     eax, [ebp+a5]
0x8D963F: push    0
0x8D9641: push    ecx
0x8D9642: mov     [esp+38h+var_4], eax
0x8D9646: mov     eax, [ebp+a2]
0x8D9649: mov     edx, [eax]
0x8D964B: lea     ecx, [esp+38h+var_20]
0x8D964F: push    ecx
0x8D9650: mov     ecx, eax
0x8D9652: mov     [esp+3Ch+var_10], 1
0x8D965A: mov     [esp+3Ch+var_8], 10h
0x8D9662: movaps  [esp+3Ch+var_20], xmm0
0x8D9667: call    dword ptr [edx+38h]
0x8D966A: mov     eax, [ebx+esi*4]
0x8D966D: mov     edx, [eax+1A4h]
0x8D9673: cmp     edx, [eax+1A8h]
0x8D9679: jnb     short loc_8D969F
0x8D967B: mov     esi, eax
0x8D967D: mov     ecx, [esi+1A4h]
0x8D9683: mov     dword ptr [ecx], offset aEt; "Et"
0x8D9689: rdtsc
0x8D968B: mov     [esp+30h+var_24], eax
0x8D968F: mov     eax, [esp+30h+var_24]
0x8D9693: mov     [ecx+4], eax
0x8D9696: add     ecx, 0Ch
0x8D9699: mov     [esi+1A4h], ecx
0x8D969F: pop     edi
0x8D96A0: pop     esi
0x8D96A1: pop     ebx
0x8D96A2: mov     esp, ebp
0x8D96A4: pop     ebp
0x8D96A5: retn    14h
