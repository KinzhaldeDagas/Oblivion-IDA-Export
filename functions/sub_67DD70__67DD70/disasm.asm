0x67DD70: sub     esp, 0Ch
0x67DD73: push    esi
0x67DD74: mov     esi, [esp+10h+arg_4]
0x67DD78: push    edi
0x67DD79: xor     edi, edi
0x67DD7B: test    esi, esi
0x67DD7D: mov     [esp+14h+var_C], edi
0x67DD81: jz      loc_67DE85
0x67DD87: mov     ecx, esi; this
0x67DD89: call    sub_4D8B90
0x67DD8E: test    al, al
0x67DD90: jz      short loc_67DDB4
0x67DD92: mov     ecx, esi; this
0x67DD94: call    TESObjectREFR_GetParentCell
0x67DD99: mov     ecx, eax
0x67DD9B: call    sub_4AF170
0x67DDA0: test    eax, eax
0x67DDA2: jz      loc_67DE85
0x67DDA8: pop     edi
0x67DDA9: mov     ecx, eax
0x67DDAB: pop     esi
0x67DDAC: add     esp, 0Ch
0x67DDAF: jmp     sub_4E5A10
0x67DDB4: mov     esi, [esp+14h+arg_0]
0x67DDB8: mov     ecx, ds:0B333A0h
0x67DDBE: push    esi
0x67DDBF: call    sub_43F840
0x67DDC4: test    al, al
0x67DDC6: jz      loc_67DE85
0x67DDCC: fld     dword ptr [esi]
0x67DDCE: push    ebx
0x67DDCF: fstp    [esp+18h+var_8]
0x67DDD3: push    ebp
0x67DDD4: fld     [esp+1Ch+var_8]
0x67DDD8: fistp   [esp+1Ch+arg_4]
0x67DDDC: fld     dword ptr [esi+4]
0x67DDDF: fstp    [esp+1Ch+var_4]
0x67DDE3: fld     [esp+1Ch+var_4]
0x67DDE7: fistp   [esp+1Ch+var_8]
0x67DDEB: mov     ebp, [esp+1Ch+var_8]
0x67DDEF: mov     ebx, [esp+1Ch+arg_4]
0x67DDF3: mov     ecx, ds:0B333A0h; this
0x67DDF9: sar     ebp, 0Ch
0x67DDFC: push    ebp; a3
0x67DDFD: sar     ebx, 0Ch
0x67DE00: push    ebx; a2
0x67DE01: call    TES_GetCellFromCoords
0x67DE06: test    eax, eax
0x67DE08: jz      short loc_67DE24
0x67DE0A: mov     ecx, eax
0x67DE0C: call    sub_4AF170
0x67DE11: test    eax, eax
0x67DE13: jz      short loc_67DE24
0x67DE15: mov     ecx, eax
0x67DE17: call    sub_4E5A10
0x67DE1C: test    eax, eax
0x67DE1E: mov     [esp+1Ch+var_C], eax
0x67DE22: jnz     short loc_67DE7D
0x67DE24: or      edi, 0FFFFFFFFh
0x67DE27: or      esi, 0FFFFFFFFh
0x67DE2A: lea     ebx, [ebx+0]
0x67DE30: test    edi, edi
0x67DE32: jnz     short loc_67DE38
0x67DE34: test    esi, esi
0x67DE36: jz      short loc_67DE65
0x67DE38: lea     eax, [esi+ebp]
0x67DE3B: push    eax; a3
0x67DE3C: lea     ecx, [edi+ebx]
0x67DE3F: push    ecx; a2
0x67DE40: mov     ecx, ds:0B333A0h; this
0x67DE46: call    TES_GetCellFromCoords
0x67DE4B: test    eax, eax
0x67DE4D: jz      short loc_67DE65
0x67DE4F: mov     ecx, eax
0x67DE51: call    sub_4AF170
0x67DE56: test    eax, eax
0x67DE58: jz      short loc_67DE65
0x67DE5A: mov     ecx, eax
0x67DE5C: call    sub_4E5A10
0x67DE61: mov     [esp+1Ch+var_C], eax
0x67DE65: mov     eax, [esp+1Ch+var_C]
0x67DE69: test    eax, eax
0x67DE6B: jnz     short loc_67DE7D
0x67DE6D: add     esi, 1
0x67DE70: cmp     esi, 2
0x67DE73: jl      short loc_67DE30
0x67DE75: add     edi, 1
0x67DE78: cmp     edi, 2
0x67DE7B: jl      short loc_67DE27
0x67DE7D: pop     ebp
0x67DE7E: pop     ebx
0x67DE7F: pop     edi
0x67DE80: pop     esi
0x67DE81: add     esp, 0Ch
0x67DE84: retn
0x67DE85: mov     eax, edi
0x67DE87: pop     edi
0x67DE88: pop     esi
0x67DE89: add     esp, 0Ch
0x67DE8C: retn
