0x8D6B30: mov     eax, [esp+arg_4]
0x8D6B34: sub     esp, 28h
0x8D6B37: push    esi
0x8D6B38: mov     esi, 1
0x8D6B3D: cmp     eax, esi
0x8D6B3F: push    edi
0x8D6B40: mov     edi, ecx
0x8D6B42: jnz     short loc_8D6B5E
0x8D6B44: mov     ecx, [edi+8]
0x8D6B47: mov     edx, [esp+30h+arg_0]
0x8D6B4B: mov     eax, [edi]
0x8D6B4D: push    ecx
0x8D6B4E: push    0
0x8D6B50: push    edx
0x8D6B51: mov     ecx, edi
0x8D6B53: call    dword ptr [eax+8]
0x8D6B56: pop     edi
0x8D6B57: pop     esi
0x8D6B58: add     esp, 28h
0x8D6B5B: retn    8
0x8D6B5E: push    ebp
0x8D6B5F: mov     ebp, [esp+34h+arg_0]
0x8D6B63: fld     dword ptr [ebp+18h]
0x8D6B66: fld     dword ptr [ebp+0Ch]
0x8D6B69: fst     [esp+34h+var_28]
0x8D6B6D: fld     st(1)
0x8D6B6F: fstp    [esp+34h+var_24]
0x8D6B73: fxch    st(1)
0x8D6B75: fsub    st, st(1)
0x8D6B77: fstp    [esp+34h+var_20]
0x8D6B7B: fstp    st
0x8D6B7D: fld     dword ptr ds:0A2FAA8h
0x8D6B83: fld     [esp+34h+var_20]
0x8D6B87: fucompp
0x8D6B89: fnstsw  ax
0x8D6B8B: test    ah, 44h
0x8D6B8E: jp      short loc_8D6B9A
0x8D6B90: mov     [esp+34h+var_1C], 0
0x8D6B98: jmp     short loc_8D6BA8
0x8D6B9A: fld     dword ptr ds:0A2F948h
0x8D6BA0: fdiv    [esp+34h+var_20]
0x8D6BA4: fstp    [esp+34h+var_1C]
0x8D6BA8: mov     eax, [edi+18h]
0x8D6BAB: dec     eax
0x8D6BAC: push    ebx
0x8D6BAD: js      loc_8D6C4A
0x8D6BB3: mov     ebx, eax
0x8D6BB5: shl     ebx, 6
0x8D6BB8: inc     eax
0x8D6BB9: mov     [esp+38h+arg_0], eax
0x8D6BBD: lea     ecx, [ecx+0]
0x8D6BC0: mov     esi, [edi+14h]
0x8D6BC3: mov     ecx, [esi+ebx+8]
0x8D6BC7: mov     eax, [esi+ebx+4]
0x8D6BCB: mov     edx, [esi+ebx+18h]
0x8D6BCF: add     esi, ebx
0x8D6BD1: mov     [esp+38h+var_C], ecx
0x8D6BD5: lea     ecx, [esp+38h+var_18]
0x8D6BD9: mov     word ptr [esp+38h+var_18], 0FFFFh
0x8D6BE0: mov     [esp+38h+var_14], 0
0x8D6BE8: mov     [esp+38h+var_10], eax
0x8D6BEC: mov     [esp+38h+var_4], edx
0x8D6BF0: mov     edx, [eax+8]
0x8D6BF3: push    ecx
0x8D6BF4: push    edx
0x8D6BF5: call    sub_8DC920
0x8D6BFA: mov     eax, [esi+4]
0x8D6BFD: mov     ecx, [eax+98h]
0x8D6C03: add     esp, 8
0x8D6C06: test    ecx, ecx
0x8D6C08: jz      short loc_8D6C18
0x8D6C0A: lea     ecx, [esp+38h+var_18]
0x8D6C0E: push    ecx
0x8D6C0F: push    eax
0x8D6C10: call    sub_8DC0A0
0x8D6C15: add     esp, 8
0x8D6C18: mov     esi, [esi+8]
0x8D6C1B: mov     eax, [esi+98h]
0x8D6C21: test    eax, eax
0x8D6C23: jz      short loc_8D6C33
0x8D6C25: lea     edx, [esp+38h+var_18]
0x8D6C29: push    edx
0x8D6C2A: push    esi
0x8D6C2B: call    sub_8DC0A0
0x8D6C30: add     esp, 8
0x8D6C33: mov     eax, [esp+38h+arg_0]
0x8D6C37: sub     ebx, 40h ; '@'
0x8D6C3A: dec     eax
0x8D6C3B: mov     [esp+38h+arg_0], eax
0x8D6C3F: jnz     loc_8D6BC0
0x8D6C45: mov     esi, 1
0x8D6C4A: push    esi
0x8D6C4B: push    0
0x8D6C4D: mov     ecx, ebp
0x8D6C4F: mov     dword ptr [edi+18h], 0
0x8D6C56: call    sub_89BF50
0x8D6C5B: mov     eax, ds:0BA7D98h
0x8D6C60: cmp     [eax+4], esi
0x8D6C63: jnz     short loc_8D6C74
0x8D6C65: pop     ebx
0x8D6C66: pop     ebp
0x8D6C67: pop     edi
0x8D6C68: mov     eax, 2
0x8D6C6D: pop     esi
0x8D6C6E: add     esp, 28h
0x8D6C71: retn    8
0x8D6C74: lea     ecx, [esp+38h+var_28]
0x8D6C78: push    ecx
0x8D6C79: push    ebp
0x8D6C7A: mov     ecx, edi
0x8D6C7C: call    sub_8D5B20
0x8D6C81: mov     edx, ds:0BA7D98h
0x8D6C87: cmp     [edx+4], esi
0x8D6C8A: jz      short loc_8D6C65
0x8D6C8C: cmp     dword ptr [edi+0Ch], 2
0x8D6C90: mov     eax, [edi+10h]
0x8D6C93: mov     dword ptr [edi+10h], 0
0x8D6C9A: jnz     loc_8D6D59
0x8D6CA0: cmp     eax, esi
0x8D6CA2: jnz     loc_8D6D59
0x8D6CA8: mov     eax, [ebp+110h]
0x8D6CAE: test    eax, eax
0x8D6CB0: jz      loc_8D6D4D
0x8D6CB6: mov     esi, large fs:2Ch
0x8D6CBD: mov     edi, ds:0BA9DE4h
0x8D6CC3: mov     eax, [esi+edi*4]
0x8D6CC6: mov     ecx, [eax+1A4h]
0x8D6CCC: cmp     ecx, [eax+1A8h]
0x8D6CD2: jnb     short loc_8D6CF8
0x8D6CD4: mov     ebx, eax
0x8D6CD6: mov     ecx, [ebx+1A4h]
0x8D6CDC: mov     dword ptr [ecx], offset aTtpostsimulate; "TtPostSimulateCb"
0x8D6CE2: rdtsc
0x8D6CE4: mov     [esp+38h+arg_0], eax
0x8D6CE8: mov     edx, [esp+38h+arg_0]
0x8D6CEC: mov     [ecx+4], edx
0x8D6CEF: add     ecx, 0Ch
0x8D6CF2: mov     [ebx+1A4h], ecx
0x8D6CF8: mov     eax, [ebp+10h]
0x8D6CFB: mov     ecx, eax
0x8D6CFD: push    eax; float
0x8D6CFE: push    ecx; int
0x8D6CFF: lea     ecx, [esp+40h+var_18]
0x8D6D03: call    sub_8D2C90
0x8D6D08: lea     edx, [esp+38h+var_18]
0x8D6D0C: push    edx
0x8D6D0D: push    ebp
0x8D6D0E: call    sub_8DCD60
0x8D6D13: mov     eax, [esi+edi*4]
0x8D6D16: mov     ecx, [eax+1A4h]
0x8D6D1C: mov     edx, [eax+1A8h]
0x8D6D22: add     esp, 8
0x8D6D25: cmp     ecx, edx
0x8D6D27: jnb     short loc_8D6D4D
0x8D6D29: mov     esi, eax
0x8D6D2B: mov     ecx, [esi+1A4h]
0x8D6D31: mov     dword ptr [ecx], offset aEt; "Et"
0x8D6D37: rdtsc
0x8D6D39: mov     [esp+38h+arg_0], eax
0x8D6D3D: mov     edx, [esp+38h+arg_0]
0x8D6D41: mov     [ecx+4], edx
0x8D6D44: add     ecx, 0Ch
0x8D6D47: mov     [esi+1A4h], ecx
0x8D6D4D: pop     ebx
0x8D6D4E: pop     ebp
0x8D6D4F: pop     edi
0x8D6D50: xor     eax, eax
0x8D6D52: pop     esi
0x8D6D53: add     esp, 28h
0x8D6D56: retn    8
0x8D6D59: mov     ecx, [edi+8]
0x8D6D5C: mov     eax, [edi]
0x8D6D5E: push    ecx
0x8D6D5F: push    0
0x8D6D61: push    ebp
0x8D6D62: mov     ecx, edi
0x8D6D64: call    dword ptr [eax+8]
0x8D6D67: pop     ebx
0x8D6D68: pop     ebp
0x8D6D69: pop     edi
0x8D6D6A: pop     esi
0x8D6D6B: add     esp, 28h
0x8D6D6E: retn    8
