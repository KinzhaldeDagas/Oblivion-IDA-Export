0x768890: push    ebx
0x768891: push    edi
0x768892: mov     edi, [esp+8+arg_0]
0x768896: mov     eax, [edi+0B4h]
0x76889C: cmp     dword ptr [eax+38h], 0
0x7688A0: mov     ebx, ecx
0x7688A2: jz      short loc_7688AB
0x7688A4: pop     edi
0x7688A5: xor     al, al
0x7688A7: pop     ebx
0x7688A8: retn    8
0x7688AB: mov     eax, [edi+0B8h]
0x7688B1: test    eax, eax
0x7688B3: jz      short loc_7688A4
0x7688B5: mov     eax, [eax+0Ch]
0x7688B8: test    eax, eax
0x7688BA: jz      short loc_7688A4
0x7688BC: mov     ecx, [eax+0Ch]
0x7688BF: cmp     dword ptr [ecx+28h], 0
0x7688C3: jz      short loc_7688CC
0x7688C5: pop     edi
0x7688C6: mov     al, 1
0x7688C8: pop     ebx
0x7688C9: retn    8
0x7688CC: mov     edx, [ebx]
0x7688CE: mov     eax, [edx+54h]
0x7688D1: mov     ecx, ebx
0x7688D3: call    eax
0x7688D5: test    al, 2
0x7688D7: jnz     short loc_7688C5
0x7688D9: push    esi
0x7688DA: mov     esi, [esp+0Ch+arg_4]
0x7688DE: test    esi, esi
0x7688E0: jnz     short loc_7688F8
0x7688E2: mov     eax, [edi+0BCh]
0x7688E8: push    eax
0x7688E9: push    offset NiD3DShaderInterfaceString
0x7688EE: call    NiRTTI_Cast
0x7688F3: add     esp, 8
0x7688F6: mov     esi, eax
0x7688F8: cmp     dword ptr [ebx+6E4h], 0FFFE0000h
0x768902: jbe     short loc_768915
0x768904: test    esi, esi
0x768906: jz      short loc_768915
0x768908: mov     edx, [esi]
0x76890A: mov     eax, [edx+68h]
0x76890D: mov     ecx, esi
0x76890F: call    eax
0x768911: test    al, al
0x768913: jnz     short loc_768945
0x768915: cmp     byte ptr [ebx+5C9h], 0
0x76891C: jz      short loc_76894D
0x76891E: test    esi, esi
0x768920: jz      short loc_76894D
0x768922: mov     edx, [esi]
0x768924: mov     eax, [edx+50h]
0x768927: mov     ecx, esi
0x768929: call    eax
0x76892B: test    eax, eax
0x76892D: jz      short loc_76894D
0x76892F: mov     edx, [esi]
0x768931: mov     eax, [edx+50h]
0x768934: mov     ecx, esi
0x768936: call    eax
0x768938: mov     edx, [eax]
0x76893A: mov     ecx, eax
0x76893C: mov     eax, [edx+68h]
0x76893F: call    eax
0x768941: test    al, al
0x768943: jz      short loc_76894D
0x768945: pop     esi
0x768946: pop     edi
0x768947: mov     al, 1
0x768949: pop     ebx
0x76894A: retn    8
0x76894D: pop     esi
0x76894E: pop     edi
0x76894F: xor     al, al
0x768951: pop     ebx
0x768952: retn    8
