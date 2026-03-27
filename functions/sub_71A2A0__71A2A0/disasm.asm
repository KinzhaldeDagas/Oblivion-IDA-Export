0x71A2A0: push    ecx
0x71A2A1: push    ebx
0x71A2A2: push    esi
0x71A2A3: push    edi
0x71A2A4: mov     edi, [esp+10h+arg_0]
0x71A2A8: push    edi
0x71A2A9: mov     esi, ecx
0x71A2AB: call    sub_732EB0
0x71A2B0: mov     eax, [edi+220h]
0x71A2B6: mov     edx, [eax+8]
0x71A2B9: push    1
0x71A2BB: lea     ecx, [esp+14h+arg_0]
0x71A2BF: push    ecx
0x71A2C0: push    2
0x71A2C2: lea     ebx, [esi+44h]
0x71A2C5: push    ebx
0x71A2C6: push    eax
0x71A2C7: mov     [esp+24h+arg_0], 2
0x71A2CF: call    edx
0x71A2D1: movzx   ecx, word ptr [ebx]
0x71A2D4: add     esp, 14h
0x71A2D7: test    cx, cx
0x71A2DA: jbe     loc_71A36E
0x71A2E0: mov     eax, [edi+220h]
0x71A2E6: push    1
0x71A2E8: movzx   ecx, cx
0x71A2EB: lea     edx, [esp+14h+var_4]
0x71A2EF: push    edx
0x71A2F0: mov     edx, [esi+48h]
0x71A2F3: add     ecx, ecx
0x71A2F5: push    ecx
0x71A2F6: push    edx
0x71A2F7: push    eax
0x71A2F8: mov     eax, [eax+8]
0x71A2FB: mov     [esp+24h+var_4], 2
0x71A303: call    eax
0x71A305: cmp     dword ptr [esi+4Ch], 0
0x71A309: mov     eax, [edi+220h]
0x71A30F: push    1
0x71A311: setnz   cl
0x71A314: lea     edx, [esp+28h+var_4]
0x71A318: push    edx
0x71A319: mov     byte ptr [esp+2Ch+arg_0], cl
0x71A31D: mov     edx, [eax+8]
0x71A320: push    1
0x71A322: lea     ecx, [esp+30h+arg_0]
0x71A326: push    ecx
0x71A327: push    eax
0x71A328: mov     [esp+38h+var_4], 1
0x71A330: call    edx
0x71A332: add     esp, 28h
0x71A335: cmp     byte ptr [esp+10h+arg_0], 0
0x71A33A: jz      short loc_71A36E
0x71A33C: mov     cx, [ebx]
0x71A33F: mov     edi, [edi+220h]
0x71A345: add     cx, cx
0x71A348: add     cx, [esi+40h]
0x71A34C: push    1
0x71A34E: movzx   edx, cx
0x71A351: mov     ecx, [edi+8]
0x71A354: lea     eax, [esp+14h+var_4]
0x71A358: push    eax
0x71A359: mov     eax, [esi+4Ch]
0x71A35C: add     edx, edx
0x71A35E: push    edx
0x71A35F: push    eax
0x71A360: push    edi
0x71A361: mov     [esp+24h+var_4], 2
0x71A369: call    ecx
0x71A36B: add     esp, 14h
0x71A36E: pop     edi
0x71A36F: pop     esi
0x71A370: pop     ebx
0x71A371: pop     ecx
0x71A372: retn    4
