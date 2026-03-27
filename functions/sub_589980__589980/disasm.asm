0x589980: push    0FFFFFFFFh
0x589982: push    offset SEH_8094D0
0x589987: mov     eax, large fs:0
0x58998D: push    eax
0x58998E: push    ebx
0x58998F: push    ebp
0x589990: push    esi
0x589991: push    edi
0x589992: mov     eax, ds:0B30AACh
0x589997: xor     eax, esp
0x589999: push    eax
0x58999A: lea     eax, [esp+20h+var_C]
0x58999E: mov     large fs:0, eax
0x5899A4: mov     ebp, ecx
0x5899A6: mov     ecx, [ebp+28h]
0x5899A9: test    ecx, ecx
0x5899AB: mov     ebx, [esp+20h+arg_0]
0x5899AF: jz      short loc_589A2D
0x5899B1: cmp     [ecx+4], ebx
0x5899B4: jnz     short loc_589A26
0x5899B6: fld     dword ptr [ecx+0Ch]
0x5899B9: fstp    [esp+20h+arg_0]
0x5899BD: fld     [esp+20h+arg_8]
0x5899C1: fld     [esp+20h+arg_0]
0x5899C5: fucompp
0x5899C7: fnstsw  ax
0x5899C9: test    ah, 44h
0x5899CC: jnp     loc_589A7F
0x5899D2: mov     esi, [ecx]
0x5899D4: mov     edi, [esi+28h]
0x5899D7: mov     eax, edi
0x5899D9: xor     edx, edx
0x5899DB: test    eax, eax
0x5899DD: jz      short loc_5899ED
0x5899DF: nop
0x5899E0: cmp     eax, ecx
0x5899E2: jz      short loc_5899F1
0x5899E4: mov     edx, eax
0x5899E6: mov     eax, [eax+14h]
0x5899E9: test    eax, eax
0x5899EB: jnz     short loc_5899E0
0x5899ED: mov     ecx, edi
0x5899EF: jmp     short loc_589A29
0x5899F1: test    eax, eax
0x5899F3: jz      short loc_5899ED
0x5899F5: test    edx, edx
0x5899F7: jz      short loc_589A0E
0x5899F9: mov     ecx, [eax+14h]
0x5899FC: push    eax
0x5899FD: mov     [edx+14h], ecx
0x589A00: mov     esi, ecx
0x589A02: call    FormHeapFree
0x589A07: add     esp, 4
0x589A0A: mov     ecx, esi
0x589A0C: jmp     short loc_589A29
0x589A0E: mov     edx, [eax+14h]
0x589A11: mov     [esi+28h], edx
0x589A14: mov     ecx, [ecx]
0x589A16: mov     esi, [ecx+28h]
0x589A19: push    eax
0x589A1A: call    FormHeapFree
0x589A1F: add     esp, 4
0x589A22: mov     ecx, esi
0x589A24: jmp     short loc_589A29
0x589A26: mov     ecx, [ecx+14h]
0x589A29: test    ecx, ecx
0x589A2B: jnz     short loc_5899B1
0x589A2D: push    ebx
0x589A2E: mov     ecx, ebp
0x589A30: call    Tile_GetFloat
0x589A35: fld     [esp+20h+arg_8]
0x589A39: fucompp
0x589A3B: fnstsw  ax
0x589A3D: test    ah, 44h
0x589A40: jnp     short loc_589A7F
0x589A42: push    18h; Size
0x589A44: call    FormHeapAlloc
0x589A49: add     esp, 4
0x589A4C: mov     [esp+20h+arg_0], eax
0x589A50: test    eax, eax
0x589A52: mov     [esp+20h+var_4], 0
0x589A5A: jz      short loc_589A7F
0x589A5C: fld     [esp+20h+arg_C]
0x589A60: sub     esp, 0Ch
0x589A63: fstp    [esp+2Ch+var_24]; float
0x589A67: mov     ecx, eax; int
0x589A69: fld     [esp+2Ch+arg_8]
0x589A6D: fstp    [esp+2Ch+var_28]; float
0x589A71: fld     [esp+2Ch+arg_4]
0x589A75: fstp    [esp+2Ch+var_2C]; float
0x589A78: push    ebx; int
0x589A79: push    ebp; int
0x589A7A: call    sub_588A70
0x589A7F: mov     ecx, [esp+20h+var_C]
0x589A83: mov     large fs:0, ecx
0x589A8A: pop     ecx
0x589A8B: pop     edi
0x589A8C: pop     esi
0x589A8D: pop     ebp
0x589A8E: pop     ebx
0x589A8F: add     esp, 0Ch
0x589A92: retn    10h
