0x4EB370: push    ebx
0x4EB371: xor     bl, bl
0x4EB373: cmp     ds:0B06AB8h, bl
0x4EB379: push    ebp
0x4EB37A: mov     ebp, ecx
0x4EB37C: jz      short loc_4EB3DD
0x4EB37E: push    esi
0x4EB37F: push    edi
0x4EB380: mov     edi, [esp+10h+arg_0]
0x4EB384: fld     dword ptr [edi]
0x4EB386: fmul    qword ptr ds:0A47A28h
0x4EB38C: call    Double_To_SInt32
0x4EB391: fld     dword ptr [edi+4]
0x4EB394: fmul    qword ptr ds:0A47A20h
0x4EB39A: or      esi, 0FFFFFFFFh
0x4EB39D: sub     esi, eax
0x4EB39F: call    Double_To_SInt32
0x4EB3A4: push    0
0x4EB3A6: push    eax
0x4EB3A7: push    esi
0x4EB3A8: mov     ecx, ebp
0x4EB3AA: call    sub_4EA580
0x4EB3AF: mov     ecx, eax
0x4EB3B1: test    ecx, ecx
0x4EB3B3: jz      short loc_4EB3D4
0x4EB3B5: mov     ecx, [ecx]
0x4EB3B7: xor     al, al
0x4EB3B9: test    ecx, ecx
0x4EB3BB: jz      short loc_4EB3CD
0x4EB3BD: mov     eax, [esp+10h+arg_8]
0x4EB3C1: mov     edx, [esp+10h+arg_4]
0x4EB3C5: push    eax
0x4EB3C6: push    edx
0x4EB3C7: push    edi
0x4EB3C8: call    sub_4EC990
0x4EB3CD: pop     edi
0x4EB3CE: pop     esi
0x4EB3CF: pop     ebp
0x4EB3D0: pop     ebx
0x4EB3D1: retn    0Ch
0x4EB3D4: pop     edi
0x4EB3D5: pop     esi
0x4EB3D6: pop     ebp
0x4EB3D7: mov     al, bl
0x4EB3D9: pop     ebx
0x4EB3DA: retn    0Ch
0x4EB3DD: pop     ebp
0x4EB3DE: mov     al, bl
0x4EB3E0: pop     ebx
0x4EB3E1: retn    0Ch
