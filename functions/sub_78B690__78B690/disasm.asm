0x78B690: mov     ecx, [esp+positionOut3]; Static CSpeedTreeRT::GetCamera. Copies the process-global camera position and direction vectors to non-NULL output arrays; otherwise records the SDK error.
0x78B694: sub     esp, 0Ch
0x78B697: test    ecx, ecx
0x78B699: jz      short loc_78B6EB
0x78B69B: mov     eax, [esp+0Ch+directionOut3]
0x78B69F: test    eax, eax
0x78B6A1: jz      short loc_78B6EB
0x78B6A3: mov     edx, ds:0B429ACh
0x78B6A9: push    ebx
0x78B6AA: mov     ebx, ds:0B2B6D8h
0x78B6B0: push    ebp
0x78B6B1: mov     ebp, ds:0B2B6DCh
0x78B6B7: push    esi
0x78B6B8: mov     esi, ds:0B429B0h
0x78B6BE: push    edi
0x78B6BF: mov     edi, ds:0B429B4h
0x78B6C5: mov     [esp+1Ch+var_8], ebp
0x78B6C9: mov     ebp, ds:0B2B6E0h
0x78B6CF: mov     [ecx], edx
0x78B6D1: mov     [ecx+4], esi
0x78B6D4: mov     [ecx+8], edi
0x78B6D7: mov     ecx, [esp+1Ch+var_8]
0x78B6DB: pop     edi
0x78B6DC: mov     [eax], ebx
0x78B6DE: pop     esi
0x78B6DF: mov     [eax+4], ecx
0x78B6E2: mov     [eax+8], ebp
0x78B6E5: pop     ebp
0x78B6E6: pop     ebx
0x78B6E7: add     esp, 0Ch
0x78B6EA: retn
0x78B6EB: push    3Bh ; ';'; count
0x78B6ED: push    offset aGetcameraRequi; "GetCamera() requires non-NULL position "...
0x78B6F2: mov     ecx, offset OB_g_strError_010201A0; this
0x78B6F7: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78B6FC: add     esp, 0Ch
0x78B6FF: retn
