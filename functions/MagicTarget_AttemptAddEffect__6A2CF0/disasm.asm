0x6A2CF0: push    ebx
0x6A2CF1: mov     ebx, [esp+4+arg_4]
0x6A2CF5: push    ebp
0x6A2CF6: mov     ebp, [esp+8+arg_0]
0x6A2CFA: push    esi
0x6A2CFB: push    edi
0x6A2CFC: mov     edi, [esp+10h+arg_8]
0x6A2D00: mov     eax, [edi+0Ch]
0x6A2D03: cmp     dword ptr [eax+10h], 0
0x6A2D07: mov     esi, ecx
0x6A2D09: jz      short MagicTarget_AttemptAddEffect___AddEffect
0x6A2D0B: mov     eax, [eax+1Ch]
0x6A2D0E: cmp     dword ptr [eax+98h], 46464553h
0x6A2D18: jnz     short loc_6A2D27
0x6A2D1A: mov     edx, [ebx]
0x6A2D1C: mov     eax, [edx+1Ch]
0x6A2D1F: mov     ecx, ebx
0x6A2D21: call    eax
0x6A2D23: test    al, al
0x6A2D25: jnz     short MagicTarget_AttemptAddEffect___AddEffect
0x6A2D27: mov     edx, [ebx]
0x6A2D29: mov     eax, [edx+20h]
0x6A2D2C: mov     ecx, ebx
0x6A2D2E: call    eax
0x6A2D30: test    al, al
0x6A2D32: jnz     short MagicTarget_AttemptAddEffect___AddEffect
0x6A2D34: mov     edx, [esi]
0x6A2D36: mov     eax, [edx+28h]
0x6A2D39: push    edi
0x6A2D3A: push    ebx
0x6A2D3B: push    ebp
0x6A2D3C: mov     ecx, esi
0x6A2D3E: call    eax
0x6A2D40: test    al, al
0x6A2D42: mov     edx, [esi]
0x6A2D44: mov     ecx, esi
0x6A2D46: jz      short loc_6A2D58
0x6A2D48: mov     eax, [edx+18h]
0x6A2D4B: push    edi
0x6A2D4C: push    ebp
0x6A2D4D: call    eax
0x6A2D4F: pop     edi
0x6A2D50: pop     esi
0x6A2D51: pop     ebp
0x6A2D52: xor     al, al
0x6A2D54: pop     ebx
0x6A2D55: retn    10h
0x6A2D58: mov     eax, [edx+24h]
0x6A2D5B: push    0
0x6A2D5D: push    edi
0x6A2D5E: push    ebx
0x6A2D5F: push    ebp
0x6A2D60: call    eax
0x6A2D62: test    al, al
0x6A2D64: jz      short MagicTarget_AttemptAddEffect___AddEffect
0x6A2D66: mov     edx, [esi]
0x6A2D68: mov     eax, [edx+1Ch]
0x6A2D6B: push    edi
0x6A2D6C: push    ebp
0x6A2D6D: mov     ecx, esi
0x6A2D6F: call    eax
0x6A2D71: pop     edi
0x6A2D72: pop     esi
0x6A2D73: pop     ebp
0x6A2D74: xor     al, al
0x6A2D76: pop     ebx
0x6A2D77: retn    10h
0x6A2D7A: push    edi
0x6A2D7B: push    ebx
0x6A2D7C: push    ebp
0x6A2D7D: mov     ecx, esi
0x6A2D7F: call    MagicTarget_AddEffect
0x6A2D84: pop     edi
0x6A2D85: pop     esi
0x6A2D86: pop     ebp
0x6A2D87: pop     ebx
0x6A2D88: retn    10h
