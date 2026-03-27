0x67A290: push    ecx
0x67A291: push    ebx
0x67A292: push    esi
0x67A293: mov     esi, ecx
0x67A295: push    edi
0x67A296: lea     ecx, [esi+68h]; this
0x67A299: mov     [esp+10h+var_4], 0
0x67A2A1: call    sub_7616D0
0x67A2A6: mov     ebx, eax
0x67A2A8: mov     eax, [esp+10h+arg_0]
0x67A2AC: mov     edi, [eax+0Ch]
0x67A2AF: test    edi, edi
0x67A2B1: jz      short loc_67A328
0x67A2B3: mov     eax, [edi+8]
0x67A2B6: mov     ecx, eax
0x67A2B8: shr     ecx, 0Bh
0x67A2BB: test    cl, 1
0x67A2BE: jnz     short loc_67A2D9
0x67A2C0: shr     eax, 5
0x67A2C3: test    al, 1
0x67A2C5: jnz     short loc_67A2D9
0x67A2C7: mov     edx, [edi]
0x67A2C9: mov     eax, [edx+198h]
0x67A2CF: push    1
0x67A2D1: mov     ecx, edi
0x67A2D3: call    eax
0x67A2D5: test    al, al
0x67A2D7: jz      short loc_67A2E2
0x67A2D9: pop     edi
0x67A2DA: pop     esi
0x67A2DB: xor     eax, eax
0x67A2DD: pop     ebx
0x67A2DE: pop     ecx
0x67A2DF: retn    4
0x67A2E2: mov     ecx, [edi+58h]
0x67A2E5: mov     edx, [ecx]
0x67A2E7: mov     eax, [edx+444h]
0x67A2ED: call    eax
0x67A2EF: test    eax, eax
0x67A2F1: jle     short loc_67A328
0x67A2F3: push    0
0x67A2F5: push    0Fh
0x67A2F7: push    edi
0x67A2F8: mov     ecx, esi
0x67A2FA: call    sub_6758E0
0x67A2FF: test    eax, eax
0x67A301: jz      short loc_67A318
0x67A303: xor     ecx, ecx
0x67A305: cmp     dword ptr [eax], 0
0x67A308: jz      short loc_67A30D
0x67A30A: add     ecx, 1
0x67A30D: mov     eax, [eax+4]
0x67A310: test    eax, eax
0x67A312: jnz     short loc_67A305
0x67A314: mov     eax, ecx
0x67A316: jmp     short loc_67A31A
0x67A318: xor     eax, eax
0x67A31A: mov     ecx, [edi+58h]
0x67A31D: mov     edx, [ecx]
0x67A31F: push    eax
0x67A320: mov     eax, [edx+234h]
0x67A326: call    eax
0x67A328: test    ebx, ebx
0x67A32A: jz      loc_67A413
0x67A330: cmp     dword ptr [ebx+4], 0
0x67A334: jnz     short loc_67A33F
0x67A336: cmp     dword ptr [ebx], 0
0x67A339: jz      loc_67A3F6
0x67A33F: mov     ecx, [ebx]
0x67A341: mov     edx, [ecx]
0x67A343: mov     eax, [edx+190h]
0x67A349: call    eax
0x67A34B: test    al, al
0x67A34D: jz      loc_67A3EB
0x67A353: mov     esi, [ebx]
0x67A355: test    esi, esi
0x67A357: jz      loc_67A3EB
0x67A35D: mov     ecx, esi; this
0x67A35F: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x67A364: cmp     eax, 3
0x67A367: jz      loc_67A3EB
0x67A36D: mov     edx, [esi]
0x67A36F: mov     eax, [edx+1A0h]
0x67A375: mov     ecx, esi
0x67A377: call    eax
0x67A379: test    al, al
0x67A37B: jnz     short loc_67A3EB
0x67A37D: cmp     esi, edi
0x67A37F: jz      short loc_67A3EB
0x67A381: mov     edx, [esi]
0x67A383: mov     eax, [edx+198h]
0x67A389: push    0
0x67A38B: mov     ecx, esi
0x67A38D: call    eax
0x67A38F: test    al, al
0x67A391: jnz     short loc_67A3EB
0x67A393: mov     ecx, [esi+8]
0x67A396: shr     ecx, 0Bh
0x67A399: test    cl, 1
0x67A39C: jnz     short loc_67A3EB
0x67A39E: push    0; int
0x67A3A0: push    0; int
0x67A3A2: push    0; int
0x67A3A4: lea     edx, [esp+1Ch+arg_0]
0x67A3A8: push    edx; int
0x67A3A9: push    edi; int
0x67A3AA: push    0; int
0x67A3AC: mov     ecx, esi; int
0x67A3AE: call    Actor_GetDetectionLevel
0x67A3B3: test    eax, eax
0x67A3B5: jle     short loc_67A3EB
0x67A3B7: cmp     [esp+10h+var_4], 0
0x67A3BC: jnz     short loc_67A3E1
0x67A3BE: push    8; Size
0x67A3C0: call    FormHeapAlloc
0x67A3C5: add     esp, 4
0x67A3C8: test    eax, eax
0x67A3CA: jz      short loc_67A3DB
0x67A3CC: mov     dword ptr [eax], 0
0x67A3D2: mov     dword ptr [eax+4], 0
0x67A3D9: jmp     short loc_67A3DD
0x67A3DB: xor     eax, eax
0x67A3DD: mov     [esp+10h+var_4], eax
0x67A3E1: mov     ecx, [esp+10h+var_4]
0x67A3E5: push    esi
0x67A3E6: call    BSSimpleList_PushFront
0x67A3EB: mov     ebx, [ebx+4]
0x67A3EE: test    ebx, ebx
0x67A3F0: jnz     loc_67A330
0x67A3F6: mov     esi, [esp+10h+var_4]
0x67A3FA: test    esi, esi
0x67A3FC: jz      short loc_67A417
0x67A3FE: push    offset sub_673B70
0x67A403: mov     ecx, esi
0x67A405: call    sub_5B27A0
0x67A40A: pop     edi
0x67A40B: mov     eax, esi
0x67A40D: pop     esi
0x67A40E: pop     ebx
0x67A40F: pop     ecx
0x67A410: retn    4
0x67A413: mov     esi, [esp+10h+var_4]
0x67A417: pop     edi
0x67A418: mov     eax, esi
0x67A41A: pop     esi
0x67A41B: pop     ebx
0x67A41C: pop     ecx
0x67A41D: retn    4
