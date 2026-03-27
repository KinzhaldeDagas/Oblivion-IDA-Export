0x5233D0: push    esi
0x5233D1: mov     esi, [esp+4+arg_0]
0x5233D5: test    esi, esi
0x5233D7: push    edi
0x5233D8: mov     edi, ecx
0x5233DA: jz      short loc_52342A
0x5233DC: cmp     dword ptr [edi+1ECh], 0
0x5233E3: jz      short loc_52342A
0x5233E5: push    0
0x5233E7: push    0
0x5233E9: mov     ecx, esi
0x5233EB: call    TESFile_OpenBSFileWrapper??
0x5233F0: test    al, al
0x5233F2: jz      short loc_52342A
0x5233F4: mov     eax, [edi+1ECh]
0x5233FA: push    eax; Buffer
0x5233FB: mov     ecx, esi
0x5233FD: call    TESFIle_JumpToRecord
0x523402: test    al, al
0x523404: jz      short loc_52342A
0x523406: mov     ecx, esi
0x523408: call    TESFile_GetRecordType
0x52340D: movzx   ecx, byte ptr ds:0B05FA4h
0x523414: cmp     eax, ecx
0x523416: jnz     short loc_52342A
0x523418: mov     edx, [esi+248h]
0x52341E: cmp     edx, [edi+0Ch]
0x523421: jnz     short loc_52342A
0x523423: pop     edi
0x523424: mov     al, 1
0x523426: pop     esi
0x523427: retn    4
0x52342A: pop     edi
0x52342B: xor     al, al
0x52342D: pop     esi
0x52342E: retn    4
