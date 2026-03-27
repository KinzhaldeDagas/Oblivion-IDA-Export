0x87A2D0: push    0FFFFFFFFh
0x87A2D2: push    offset SEH_880560
0x87A2D7: mov     eax, large fs:0
0x87A2DD: push    eax
0x87A2DE: push    ebx
0x87A2DF: push    ebp
0x87A2E0: push    esi
0x87A2E1: push    edi
0x87A2E2: mov     eax, ds:0B30AACh
0x87A2E7: xor     eax, esp
0x87A2E9: push    eax
0x87A2EA: lea     eax, [esp+20h+var_C]
0x87A2EE: mov     large fs:0, eax
0x87A2F4: mov     esi, ecx
0x87A2F6: mov     eax, [esp+20h+arg_8]
0x87A2FA: mov     eax, [eax+10h]
0x87A2FD: mov     edx, [esi]
0x87A2FF: mov     edx, [edx+0BCh]
0x87A305: mov     edi, ds:0B476F8h
0x87A30B: push    eax
0x87A30C: mov     eax, [esp+24h+arg_0]
0x87A310: push    0
0x87A312: push    eax
0x87A313: call    edx
0x87A315: mov     eax, [edi+24h]
0x87A318: mov     ecx, [esp+20h+arg_C]
0x87A31C: mov     ebx, [eax]
0x87A31E: push    0
0x87A320: push    ecx
0x87A321: mov     ecx, esi
0x87A323: mov     [esp+28h+arg_8], ebx
0x87A327: call    sub_848FD0
0x87A32C: mov     ebx, [ebx+4]
0x87A32F: mov     ebp, eax
0x87A331: cmp     ebx, ebp
0x87A333: jz      short loc_87A36A
0x87A335: test    ebx, ebx
0x87A337: jz      short loc_87A355
0x87A339: lea     edx, [ebx+4]
0x87A33C: push    edx; lpAddend
0x87A33D: call    dword ptr ds:0A2807Ch
0x87A343: test    eax, eax
0x87A345: jnz     short loc_87A355
0x87A347: test    ebx, ebx
0x87A349: jz      short loc_87A355
0x87A34B: mov     eax, [ebx]
0x87A34D: mov     edx, [eax]
0x87A34F: push    1
0x87A351: mov     ecx, ebx
0x87A353: call    edx
0x87A355: test    ebp, ebp
0x87A357: mov     eax, [esp+20h+arg_8]
0x87A35B: mov     [eax+4], ebp
0x87A35E: jz      short loc_87A36A
0x87A360: add     ebp, 4
0x87A363: push    ebp; lpAddend
0x87A364: call    dword ptr ds:0A28078h
0x87A36A: mov     ecx, [edi+24h]
0x87A36D: mov     ebx, [ecx+4]
0x87A370: mov     ecx, [esp+20h+arg_C]
0x87A374: mov     edx, [ecx]
0x87A376: mov     eax, [edx+88h]
0x87A37C: push    0
0x87A37E: mov     [esp+24h+arg_8], ebx
0x87A382: call    eax
0x87A384: mov     ebx, [ebx+4]
0x87A387: mov     ebp, eax
0x87A389: cmp     ebx, ebp
0x87A38B: jz      short loc_87A3C2
0x87A38D: test    ebx, ebx
0x87A38F: jz      short loc_87A3AD
0x87A391: lea     ecx, [ebx+4]
0x87A394: push    ecx; lpAddend
0x87A395: call    dword ptr ds:0A2807Ch
0x87A39B: test    eax, eax
0x87A39D: jnz     short loc_87A3AD
0x87A39F: test    ebx, ebx
0x87A3A1: jz      short loc_87A3AD
0x87A3A3: mov     edx, [ebx]
0x87A3A5: mov     eax, [edx]
0x87A3A7: push    1
0x87A3A9: mov     ecx, ebx
0x87A3AB: call    eax
0x87A3AD: test    ebp, ebp
0x87A3AF: mov     ecx, [esp+20h+arg_8]
0x87A3B3: mov     [ecx+4], ebp
0x87A3B6: jz      short loc_87A3C2
0x87A3B8: add     ebp, 4
0x87A3BB: push    ebp; lpAddend
0x87A3BC: call    dword ptr ds:0A28078h
0x87A3C2: mov     ebx, 1
0x87A3C7: add     [edi+60h], ebx
0x87A3CA: mov     [esp+20h+arg_C], edi
0x87A3CE: mov     eax, [esi+38h]
0x87A3D1: lea     edx, [esp+20h+arg_C]
0x87A3D5: push    edx
0x87A3D6: push    eax
0x87A3D7: lea     ecx, [esi+40h]
0x87A3DA: mov     [esp+28h+var_4], 0
0x87A3E2: call    sub_76CE40
0x87A3E7: or      eax, 0FFFFFFFFh
0x87A3EA: add     [edi+60h], eax
0x87A3ED: mov     [esp+20h+var_4], eax
0x87A3F1: jnz     short loc_87A3FA
0x87A3F3: mov     ecx, edi
0x87A3F5: call    sub_7604D0
0x87A3FA: add     [esi+38h], ebx
0x87A3FD: mov     ecx, [esp+20h+var_C]
0x87A401: mov     large fs:0, ecx
0x87A408: pop     ecx
0x87A409: pop     edi
0x87A40A: pop     esi
0x87A40B: pop     ebp
0x87A40C: pop     ebx
0x87A40D: add     esp, 0Ch
0x87A410: retn    10h
