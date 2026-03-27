0x7F4190: push    0FFFFFFFFh
0x7F4192: push    offset SEH_7E3730
0x7F4197: mov     eax, large fs:0
0x7F419D: push    eax
0x7F419E: sub     esp, 0Ch
0x7F41A1: push    ebx
0x7F41A2: push    ebp
0x7F41A3: push    esi
0x7F41A4: push    edi
0x7F41A5: mov     eax, ds:0B30AACh
0x7F41AA: xor     eax, esp
0x7F41AC: push    eax
0x7F41AD: lea     eax, [esp+2Ch+var_C]
0x7F41B1: mov     large fs:0, eax
0x7F41B7: mov     ebx, ecx
0x7F41B9: xor     esi, esi
0x7F41BB: mov     [esp+2Ch+var_14], esi
0x7F41BF: xor     edi, edi
0x7F41C1: mov     [esp+2Ch+var_4], esi
0x7F41C5: mov     [esp+2Ch+var_18], edi
0x7F41C9: mov     eax, [ebx+178h]
0x7F41CF: test    eax, eax
0x7F41D1: mov     byte ptr [esp+2Ch+var_4], 1
0x7F41D6: jz      short loc_7F41E2
0x7F41D8: mov     esi, eax
0x7F41DA: add     dword ptr [esi+60h], 1
0x7F41DE: mov     [esp+2Ch+var_14], esi
0x7F41E2: mov     eax, [esi+18h]
0x7F41E5: cmp     eax, 1
0x7F41E8: jnb     short loc_7F4242
0x7F41EA: lea     eax, [esp+2Ch+var_10]
0x7F41EE: push    eax
0x7F41EF: call    sub_772630
0x7F41F4: add     esp, 4
0x7F41F7: mov     eax, [eax]
0x7F41F9: test    eax, eax
0x7F41FB: jz      short loc_7F4207
0x7F41FD: add     dword ptr [eax+5Ch], 1
0x7F4201: mov     [esp+2Ch+var_18], eax
0x7F4205: mov     edi, eax
0x7F4207: mov     eax, [esp+2Ch+var_10]
0x7F420B: test    eax, eax
0x7F420D: mov     byte ptr [esp+2Ch+var_4], 1
0x7F4212: jz      short loc_7F4227
0x7F4214: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7F4218: mov     ecx, eax
0x7F421A: add     eax, 5Ch ; '\'
0x7F421D: cmp     dword ptr [eax], 0
0x7F4220: jnz     short loc_7F4227
0x7F4222: call    sub_772560
0x7F4227: push    2
0x7F4229: push    1
0x7F422B: push    0
0x7F422D: push    edi
0x7F422E: call    sub_801110
0x7F4233: mov     ecx, [esi+14h]
0x7F4236: add     esp, 10h
0x7F4239: push    edi; a3
0x7F423A: push    ecx; a2
0x7F423B: mov     ecx, esi; this
0x7F423D: call    sub_760010
0x7F4242: mov     ebp, [ebx+19Ch]
0x7F4248: mov     edi, [esi+58h]
0x7F424B: cmp     edi, ebp
0x7F424D: jz      short loc_7F4280
0x7F424F: test    edi, edi
0x7F4251: jz      short loc_7F426F
0x7F4253: lea     edx, [edi+4]
0x7F4256: push    edx; lpAddend
0x7F4257: call    dword ptr ds:0A2807Ch
0x7F425D: test    eax, eax
0x7F425F: jnz     short loc_7F426F
0x7F4261: test    edi, edi
0x7F4263: jz      short loc_7F426F
0x7F4265: mov     eax, [edi]
0x7F4267: mov     edx, [eax]
0x7F4269: push    1
0x7F426B: mov     ecx, edi
0x7F426D: call    edx
0x7F426F: test    ebp, ebp
0x7F4271: mov     [esi+58h], ebp
0x7F4274: jz      short loc_7F4280
0x7F4276: add     ebp, 4
0x7F4279: push    ebp; lpAddend
0x7F427A: call    dword ptr ds:0A28078h
0x7F4280: mov     ebp, [ebx+1A0h]
0x7F4286: mov     edi, [esi+44h]
0x7F4289: cmp     edi, ebp
0x7F428B: jz      short loc_7F42BE
0x7F428D: test    edi, edi
0x7F428F: jz      short loc_7F42AD
0x7F4291: lea     eax, [edi+4]
0x7F4294: push    eax; lpAddend
0x7F4295: call    dword ptr ds:0A2807Ch
0x7F429B: test    eax, eax
0x7F429D: jnz     short loc_7F42AD
0x7F429F: test    edi, edi
0x7F42A1: jz      short loc_7F42AD
0x7F42A3: mov     edx, [edi]
0x7F42A5: mov     eax, [edx]
0x7F42A7: push    1
0x7F42A9: mov     ecx, edi
0x7F42AB: call    eax
0x7F42AD: test    ebp, ebp
0x7F42AF: mov     [esi+44h], ebp
0x7F42B2: jz      short loc_7F42BE
0x7F42B4: add     ebp, 4
0x7F42B7: push    ebp; lpAddend
0x7F42B8: call    dword ptr ds:0A28078h
0x7F42BE: cmp     dword ptr [esi+30h], 0
0x7F42C2: jnz     short loc_7F42CC
0x7F42C4: call    sub_772DF0
0x7F42C9: mov     [esi+30h], eax
0x7F42CC: mov     ecx, [esi+30h]
0x7F42CF: push    0
0x7F42D1: push    1
0x7F42D3: push    16h
0x7F42D5: call    sub_772CD0
0x7F42DA: cmp     dword ptr [esi+30h], 0
0x7F42DE: jnz     short loc_7F42E8
0x7F42E0: call    sub_772DF0
0x7F42E5: mov     [esi+30h], eax
0x7F42E8: mov     ecx, [esi+30h]
0x7F42EB: push    0
0x7F42ED: push    0Fh
0x7F42EF: push    0A8h ; '¨'
0x7F42F4: call    sub_772CD0
0x7F42F9: cmp     dword ptr [esi+30h], 0
0x7F42FD: jnz     short loc_7F4307
0x7F42FF: call    sub_772DF0
0x7F4304: mov     [esi+30h], eax
0x7F4307: mov     ecx, [esi+30h]
0x7F430A: push    0
0x7F430C: push    1
0x7F430E: push    1Bh
0x7F4310: call    sub_772CD0
0x7F4315: cmp     dword ptr [esi+30h], 0
0x7F4319: jnz     short loc_7F4323
0x7F431B: call    sub_772DF0
0x7F4320: mov     [esi+30h], eax
0x7F4323: mov     ecx, [esi+30h]
0x7F4326: push    0
0x7F4328: push    5
0x7F432A: push    13h
0x7F432C: call    sub_772CD0
0x7F4331: cmp     dword ptr [esi+30h], 0
0x7F4335: jnz     short loc_7F433F
0x7F4337: call    sub_772DF0
0x7F433C: mov     [esi+30h], eax
0x7F433F: mov     ecx, [esi+30h]
0x7F4342: push    0
0x7F4344: push    2
0x7F4346: push    14h
0x7F4348: call    sub_772CD0
0x7F434D: cmp     dword ptr [esi+30h], 0
0x7F4351: jnz     short loc_7F435B
0x7F4353: call    sub_772DF0
0x7F4358: mov     [esi+30h], eax
0x7F435B: mov     ecx, [esi+30h]
0x7F435E: push    0
0x7F4360: push    0
0x7F4362: push    0Fh
0x7F4364: call    sub_772CD0
0x7F4369: cmp     dword ptr [esi+30h], 0
0x7F436D: jnz     short loc_7F4377
0x7F436F: call    sub_772DF0
0x7F4374: mov     [esi+30h], eax
0x7F4377: mov     ecx, [esi+30h]
0x7F437A: push    0
0x7F437C: push    0
0x7F437E: push    34h ; '4'
0x7F4380: call    sub_772CD0
0x7F4385: cmp     dword ptr [esi+30h], 0
0x7F4389: jnz     short loc_7F4393
0x7F438B: call    sub_772DF0
0x7F4390: mov     [esi+30h], eax
0x7F4393: mov     ecx, [esi+30h]
0x7F4396: push    0
0x7F4398: push    1
0x7F439A: push    7
0x7F439C: call    sub_772CD0
0x7F43A1: cmp     dword ptr [esi+30h], 0
0x7F43A5: jnz     short loc_7F43AF
0x7F43A7: call    sub_772DF0
0x7F43AC: mov     [esi+30h], eax
0x7F43AF: mov     ecx, [esi+30h]
0x7F43B2: push    0
0x7F43B4: push    4
0x7F43B6: push    17h
0x7F43B8: call    sub_772CD0
0x7F43BD: cmp     dword ptr [esi+30h], 0
0x7F43C1: jnz     short loc_7F43CB
0x7F43C3: call    sub_772DF0
0x7F43C8: mov     [esi+30h], eax
0x7F43CB: mov     ecx, [esi+30h]
0x7F43CE: push    0
0x7F43D0: push    0
0x7F43D2: push    0Eh
0x7F43D4: call    sub_772CD0
0x7F43D9: mov     ecx, [esp+2Ch+var_18]
0x7F43DD: or      edi, 0FFFFFFFFh
0x7F43E0: test    ecx, ecx
0x7F43E2: mov     byte ptr [esp+2Ch+var_4], 0
0x7F43E7: jz      short loc_7F43F3
0x7F43E9: add     [ecx+5Ch], edi
0x7F43EC: jnz     short loc_7F43F3
0x7F43EE: call    sub_772560
0x7F43F3: add     [esi+60h], edi
0x7F43F6: mov     [esp+2Ch+var_4], edi
0x7F43FA: jnz     short loc_7F4403
0x7F43FC: mov     ecx, esi; this
0x7F43FE: call    sub_7604D0
0x7F4403: mov     ecx, [esp+2Ch+var_C]
0x7F4407: mov     large fs:0, ecx
0x7F440E: pop     ecx
0x7F440F: pop     edi
0x7F4410: pop     esi
0x7F4411: pop     ebp
0x7F4412: pop     ebx
0x7F4413: add     esp, 18h
0x7F4416: retn
