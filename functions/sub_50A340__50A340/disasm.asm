0x50A340: fldz
0x50A342: mov     eax, [esp+arg_18]
0x50A346: push    esi
0x50A347: fstp    qword ptr [eax]
0x50A349: mov     esi, [esp+4+arg_8]
0x50A34D: test    esi, esi
0x50A34F: jz      short loc_50A3CD
0x50A351: mov     edx, [esi]
0x50A353: mov     eax, [edx+190h]
0x50A359: mov     ecx, esi
0x50A35B: call    eax
0x50A35D: test    al, al
0x50A35F: jz      short loc_50A3CD
0x50A361: mov     eax, [esi+0Ch]
0x50A364: mov     ecx, ds:0B33A98h
0x50A36A: push    eax; _DWORD
0x50A36B: call    TESDataHandler_IsFormIDCreated?
0x50A370: test    al, al
0x50A372: jz      short loc_50A3CD
0x50A374: mov     edx, [esi]
0x50A376: mov     eax, [edx+170h]
0x50A37C: mov     ecx, esi
0x50A37E: call    eax
0x50A380: mov     eax, [eax+0Ch]
0x50A383: mov     ecx, ds:0B33A98h
0x50A389: push    eax; _DWORD
0x50A38A: call    TESDataHandler_IsFormIDCreated?
0x50A38F: test    al, al
0x50A391: jz      short loc_50A3CD
0x50A393: mov     edx, [esi]
0x50A395: mov     eax, [edx+170h]
0x50A39B: push    edi
0x50A39C: mov     ecx, esi
0x50A39E: call    eax
0x50A3A0: mov     edx, [esi]
0x50A3A2: mov     edi, eax
0x50A3A4: mov     eax, [edx+10h]
0x50A3A7: push    1
0x50A3A9: mov     ecx, esi
0x50A3AB: call    eax
0x50A3AD: mov     ecx, ds:0B33A98h
0x50A3B3: push    edi
0x50A3B4: call    sub_449D20
0x50A3B9: test    edi, edi
0x50A3BB: jz      short loc_50A3C8
0x50A3BD: mov     edx, [edi]
0x50A3BF: mov     eax, [edx+10h]
0x50A3C2: push    1
0x50A3C4: mov     ecx, edi
0x50A3C6: call    eax
0x50A3C8: pop     edi
0x50A3C9: xor     al, al
0x50A3CB: pop     esi
0x50A3CC: retn
0x50A3CD: mov     al, 1
0x50A3CF: pop     esi
0x50A3D0: retn
