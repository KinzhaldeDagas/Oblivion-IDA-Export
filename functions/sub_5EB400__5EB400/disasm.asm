0x5EB400: sub     esp, 0Ch
0x5EB403: push    ebx
0x5EB404: push    ebp
0x5EB405: push    esi
0x5EB406: push    edi
0x5EB407: mov     esi, ecx
0x5EB409: xor     bl, bl
0x5EB40B: call    IsWeaponReady
0x5EB410: test    al, al
0x5EB412: jz      loc_5EB507
0x5EB418: mov     ecx, esi
0x5EB41A: call    sub_5E1E90
0x5EB41F: test    al, al
0x5EB421: jnz     loc_5EB507
0x5EB427: mov     eax, [esi+58h]
0x5EB42A: test    eax, eax
0x5EB42C: jz      short loc_5EB49B
0x5EB42E: mov     edi, [eax+8]
0x5EB431: test    edi, edi
0x5EB433: jz      short loc_5EB49B
0x5EB435: fld     dword ptr ds:0A30634h
0x5EB43B: push    ecx
0x5EB43C: fstp    [esp+20h+var_20]; float
0x5EB43F: push    0; char
0x5EB441: push    esi; int
0x5EB442: mov     ecx, edi
0x5EB444: call    sub_566DC0
0x5EB449: test    al, al
0x5EB44B: jz      short loc_5EB49B
0x5EB44D: cmp     byte ptr [edi+20h], 6
0x5EB451: jnz     short loc_5EB47F
0x5EB453: push    esi
0x5EB454: mov     ecx, edi
0x5EB456: call    sub_566D00
0x5EB45B: test    eax, eax
0x5EB45D: jz      short loc_5EB47F
0x5EB45F: push    esi
0x5EB460: mov     ecx, edi
0x5EB462: call    sub_566D00
0x5EB467: mov     edx, [eax]
0x5EB469: mov     ecx, eax
0x5EB46B: mov     eax, [edx+170h]
0x5EB471: call    eax
0x5EB473: cmp     eax, ds:0B35EB0h
0x5EB479: jz      loc_5EB507
0x5EB47F: mov     ecx, [edi+24h]
0x5EB482: test    ecx, ecx
0x5EB484: jz      short loc_5EB49B
0x5EB486: call    sub_569740
0x5EB48B: cmp     eax, 3
0x5EB48E: jnz     short loc_5EB49B
0x5EB490: mov     ecx, edi
0x5EB492: call    sub_566DB0
0x5EB497: test    eax, eax
0x5EB499: jz      short loc_5EB507
0x5EB49B: mov     edx, [esi]
0x5EB49D: mov     eax, [edx+174h]
0x5EB4A3: mov     ecx, esi
0x5EB4A5: call    eax
0x5EB4A7: mov     edi, [eax]
0x5EB4A9: mov     ebx, [eax+4]
0x5EB4AC: mov     ebp, [eax+8]
0x5EB4AF: mov     ecx, esi; this
0x5EB4B1: call    TESObjectREFR_GetParentCell
0x5EB4B6: test    eax, eax
0x5EB4B8: jz      short loc_5EB4E9
0x5EB4BA: push    0; a4
0x5EB4BC: push    0; a3
0x5EB4BE: push    0; a2
0x5EB4C0: mov     ecx, esi; this
0x5EB4C2: call    TESObjectREFR_GetParentCell
0x5EB4C7: push    eax; int
0x5EB4C8: sub     esp, 0Ch
0x5EB4CB: mov     eax, esp
0x5EB4CD: lea     ecx, [esp+38h+var_C]
0x5EB4D1: mov     [eax], edi
0x5EB4D3: push    ecx; int
0x5EB4D4: mov     [eax+4], ebx
0x5EB4D7: mov     ecx, esi
0x5EB4D9: mov     [eax+8], ebp
0x5EB4DC: call    sub_5E2E20
0x5EB4E1: mov     edi, [eax]
0x5EB4E3: mov     ebx, [eax+4]
0x5EB4E6: mov     ebp, [eax+8]
0x5EB4E9: sub     esp, 0Ch
0x5EB4EC: mov     eax, esp
0x5EB4EE: mov     [eax], edi
0x5EB4F0: mov     [eax+4], ebx
0x5EB4F3: mov     ecx, esi; this
0x5EB4F5: mov     [eax+8], ebp
0x5EB4F8: call    TESObjectREFR_SetPosition
0x5EB4FD: mov     al, 1
0x5EB4FF: pop     edi
0x5EB500: pop     esi
0x5EB501: pop     ebp
0x5EB502: pop     ebx
0x5EB503: add     esp, 0Ch
0x5EB506: retn
0x5EB507: pop     edi
0x5EB508: pop     esi
0x5EB509: pop     ebp
0x5EB50A: mov     al, bl
0x5EB50C: pop     ebx
0x5EB50D: add     esp, 0Ch
0x5EB510: retn
