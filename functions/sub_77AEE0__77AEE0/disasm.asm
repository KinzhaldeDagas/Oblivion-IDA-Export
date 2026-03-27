0x77AEE0: push    esi
0x77AEE1: mov     esi, [esp+4+arg_0]
0x77AEE5: push    edi
0x77AEE6: mov     edi, ecx
0x77AEE8: mov     ecx, [esi+24h]
0x77AEEB: test    ecx, ecx
0x77AEED: jz      short loc_77AEFE
0x77AEEF: mov     eax, [ecx]
0x77AEF1: mov     edx, [eax+0Ch]
0x77AEF4: call    edx
0x77AEF6: mov     eax, [eax+10h]
0x77AEF9: pop     edi
0x77AEFA: pop     esi
0x77AEFB: retn    4
0x77AEFE: push    esi
0x77AEFF: push    offset dword_B3F95C
0x77AF04: call    NiRTTI_Cast
0x77AF09: add     esp, 8
0x77AF0C: test    eax, eax
0x77AF0E: jz      short loc_77AF38
0x77AF10: mov     ecx, [edi+0Ch]
0x77AF13: mov     edx, [ecx]
0x77AF15: push    eax
0x77AF16: mov     eax, [edx+104h]
0x77AF1C: call    eax
0x77AF1E: test    al, al
0x77AF20: jz      short loc_77AF38
0x77AF22: mov     ecx, [esi+24h]
0x77AF25: test    ecx, ecx
0x77AF27: jz      short loc_77AF38
0x77AF29: mov     edx, [ecx]
0x77AF2B: mov     eax, [edx+0Ch]
0x77AF2E: call    eax
0x77AF30: mov     eax, [eax+10h]
0x77AF33: pop     edi
0x77AF34: pop     esi
0x77AF35: retn    4
0x77AF38: pop     edi
0x77AF39: mov     eax, 16h
0x77AF3E: pop     esi
0x77AF3F: retn    4
