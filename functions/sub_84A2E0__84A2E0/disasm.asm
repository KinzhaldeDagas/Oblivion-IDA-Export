0x84A2E0: push    0FFFFFFFFh
0x84A2E2: push    offset SEH_879360
0x84A2E7: mov     eax, large fs:0
0x84A2ED: push    eax
0x84A2EE: push    ecx
0x84A2EF: push    ebx
0x84A2F0: push    ebp
0x84A2F1: push    esi
0x84A2F2: push    edi
0x84A2F3: mov     eax, ds:0B30AACh
0x84A2F8: xor     eax, esp
0x84A2FA: push    eax
0x84A2FB: lea     eax, [esp+24h+var_C]
0x84A2FF: mov     large fs:0, eax
0x84A305: mov     [esp+24h+var_10], ecx
0x84A309: mov     eax, [esp+24h+arg_8]
0x84A30D: mov     eax, [eax+10h]
0x84A310: mov     ebx, ds:0B4560Ch
0x84A316: push    eax
0x84A317: call    sub_848DA0
0x84A31C: mov     ecx, [ebx+24h]
0x84A31F: mov     esi, [esp+24h+arg_C]
0x84A323: mov     edi, [ecx]
0x84A325: mov     edx, [esi]
0x84A327: mov     eax, [edx+88h]
0x84A32D: push    0
0x84A32F: mov     ecx, esi
0x84A331: mov     [esp+28h+arg_8], edi
0x84A335: call    eax
0x84A337: mov     edi, [edi+4]
0x84A33A: mov     ebp, eax
0x84A33C: cmp     edi, ebp
0x84A33E: jz      short loc_84A377
0x84A340: test    edi, edi
0x84A342: jz      short loc_84A360
0x84A344: lea     ecx, [edi+4]
0x84A347: push    ecx; lpAddend
0x84A348: call    dword ptr ds:0A2807Ch
0x84A34E: test    eax, eax
0x84A350: jnz     short loc_84A360
0x84A352: test    edi, edi
0x84A354: jz      short loc_84A360
0x84A356: mov     edx, [edi]
0x84A358: mov     eax, [edx]
0x84A35A: push    1
0x84A35C: mov     ecx, edi
0x84A35E: call    eax
0x84A360: test    ebp, ebp
0x84A362: mov     edi, [esp+24h+arg_8]
0x84A366: mov     [edi+4], ebp
0x84A369: jz      short loc_84A37B
0x84A36B: add     ebp, 4
0x84A36E: push    ebp; lpAddend
0x84A36F: call    dword ptr ds:0A28078h
0x84A375: jmp     short loc_84A37B
0x84A377: mov     edi, [esp+24h+arg_8]
0x84A37B: test    edi, edi
0x84A37D: jz      short loc_84A399
0x84A37F: cmp     byte ptr ds:0B42CDDh, 0
0x84A386: jz      short loc_84A399
0x84A388: mov     edx, [esi]
0x84A38A: mov     eax, [edx+78h]
0x84A38D: mov     ecx, esi
0x84A38F: call    eax
0x84A391: push    eax
0x84A392: mov     ecx, edi
0x84A394: call    sub_7715E0
0x84A399: mov     ecx, [ebx+24h]
0x84A39C: mov     edi, [ecx+4]
0x84A39F: mov     edx, [esi]
0x84A3A1: mov     eax, [edx+8Ch]
0x84A3A7: push    0
0x84A3A9: mov     ecx, esi
0x84A3AB: mov     [esp+28h+arg_8], edi
0x84A3AF: call    eax
0x84A3B1: test    eax, eax
0x84A3B3: jz      short loc_84A3C7
0x84A3B5: mov     edx, [esi]
0x84A3B7: mov     eax, [edx+8Ch]
0x84A3BD: push    0
0x84A3BF: mov     ecx, esi
0x84A3C1: call    eax
0x84A3C3: mov     ebp, eax
0x84A3C5: jmp     short loc_84A3DC
0x84A3C7: test    dword ptr [esi+1Ch], 80h
0x84A3CE: mov     ebp, ds:0B430F0h
0x84A3D4: ja      short loc_84A3DC
0x84A3D6: mov     ebp, ds:0B430DCh
0x84A3DC: mov     edi, [edi+4]
0x84A3DF: cmp     edi, ebp
0x84A3E1: jz      short loc_84A41A
0x84A3E3: test    edi, edi
0x84A3E5: jz      short loc_84A403
0x84A3E7: lea     ecx, [edi+4]
0x84A3EA: push    ecx; lpAddend
0x84A3EB: call    dword ptr ds:0A2807Ch
0x84A3F1: test    eax, eax
0x84A3F3: jnz     short loc_84A403
0x84A3F5: test    edi, edi
0x84A3F7: jz      short loc_84A403
0x84A3F9: mov     edx, [edi]
0x84A3FB: mov     eax, [edx]
0x84A3FD: push    1
0x84A3FF: mov     ecx, edi
0x84A401: call    eax
0x84A403: test    ebp, ebp
0x84A405: mov     edi, [esp+24h+arg_8]
0x84A409: mov     [edi+4], ebp
0x84A40C: jz      short loc_84A41E
0x84A40E: add     ebp, 4
0x84A411: push    ebp; lpAddend
0x84A412: call    dword ptr ds:0A28078h
0x84A418: jmp     short loc_84A41E
0x84A41A: mov     edi, [esp+24h+arg_8]
0x84A41E: test    edi, edi
0x84A420: jz      short loc_84A43C
0x84A422: cmp     byte ptr ds:0B42CDDh, 0
0x84A429: jz      short loc_84A43C
0x84A42B: mov     edx, [esi]
0x84A42D: mov     eax, [edx+78h]
0x84A430: mov     ecx, esi
0x84A432: call    eax
0x84A434: push    eax
0x84A435: mov     ecx, edi
0x84A437: call    sub_7715E0
0x84A43C: mov     ecx, [ebx+24h]
0x84A43F: mov     edi, [ecx+8]
0x84A442: mov     edx, [esi]
0x84A444: mov     eax, [edx+90h]
0x84A44A: push    0
0x84A44C: mov     ecx, esi
0x84A44E: mov     [esp+28h+arg_8], edi
0x84A452: call    eax
0x84A454: mov     edi, [edi+4]
0x84A457: mov     ebp, eax
0x84A459: cmp     edi, ebp
0x84A45B: jz      short loc_84A494
0x84A45D: test    edi, edi
0x84A45F: jz      short loc_84A47D
0x84A461: lea     ecx, [edi+4]
0x84A464: push    ecx; lpAddend
0x84A465: call    dword ptr ds:0A2807Ch
0x84A46B: test    eax, eax
0x84A46D: jnz     short loc_84A47D
0x84A46F: test    edi, edi
0x84A471: jz      short loc_84A47D
0x84A473: mov     edx, [edi]
0x84A475: mov     eax, [edx]
0x84A477: push    1
0x84A479: mov     ecx, edi
0x84A47B: call    eax
0x84A47D: test    ebp, ebp
0x84A47F: mov     edi, [esp+24h+arg_8]
0x84A483: mov     [edi+4], ebp
0x84A486: jz      short loc_84A498
0x84A488: add     ebp, 4
0x84A48B: push    ebp; lpAddend
0x84A48C: call    dword ptr ds:0A28078h
0x84A492: jmp     short loc_84A498
0x84A494: mov     edi, [esp+24h+arg_8]
0x84A498: test    edi, edi
0x84A49A: jz      short loc_84A4B6
0x84A49C: cmp     byte ptr ds:0B42CDDh, 0
0x84A4A3: jz      short loc_84A4B6
0x84A4A5: mov     edx, [esi]
0x84A4A7: mov     eax, [edx+78h]
0x84A4AA: mov     ecx, esi
0x84A4AC: call    eax
0x84A4AE: push    eax
0x84A4AF: mov     ecx, edi
0x84A4B1: call    sub_7715E0
0x84A4B6: mov     edi, 1
0x84A4BB: add     [ebx+60h], edi
0x84A4BE: mov     [esp+24h+arg_8], ebx
0x84A4C2: mov     esi, [esp+24h+var_10]
0x84A4C6: mov     edx, [esi+38h]
0x84A4C9: lea     ecx, [esp+24h+arg_8]
0x84A4CD: push    ecx
0x84A4CE: push    edx
0x84A4CF: lea     ecx, [esi+40h]
0x84A4D2: mov     [esp+2Ch+var_4], 0
0x84A4DA: call    sub_76CE40
0x84A4DF: or      eax, 0FFFFFFFFh
0x84A4E2: add     [ebx+60h], eax
0x84A4E5: mov     [esp+24h+var_4], eax
0x84A4E9: jnz     short loc_84A4F2
0x84A4EB: mov     ecx, ebx
0x84A4ED: call    sub_7604D0
0x84A4F2: add     [esi+38h], edi
0x84A4F5: mov     ecx, dword ptr [esp+24h+var_C]
0x84A4F9: mov     large fs:0, ecx
0x84A500: pop     ecx
0x84A501: pop     edi
0x84A502: pop     esi
0x84A503: pop     ebp
0x84A504: pop     ebx
0x84A505: add     esp, 10h
0x84A508: retn    10h
