0x4A3020: sub     esp, 0Ch
0x4A3023: mov     ecx, ds:0B33B00h
0x4A3029: push    ebx
0x4A302A: push    2; Size
0x4A302C: lea     eax, [esp+14h+Src]
0x4A3030: mov     [esp+14h+Src], 0
0x4A3038: mov     ebx, [ecx+14h]
0x4A303B: push    eax; Src
0x4A303C: call    SaveLoad_SaveData
0x4A3041: mov     ecx, ds:0B33A98h
0x4A3047: mov     eax, [ecx+0BCh]
0x4A304D: test    eax, eax
0x4A304F: jz      loc_4A30E8
0x4A3055: push    esi
0x4A3056: lea     esi, [eax+4]
0x4A3059: test    esi, esi
0x4A305B: jz      loc_4A30DA
0x4A3061: cmp     dword ptr [esi+4], 0
0x4A3065: jnz     short loc_4A306C
0x4A3067: cmp     dword ptr [esi], 0
0x4A306A: jz      short loc_4A30CC
0x4A306C: mov     eax, [esi]
0x4A306E: fldz
0x4A3070: test    eax, eax
0x4A3072: fstp    [esp+14h+var_4]
0x4A3076: mov     [esp+14h+var_8], 0
0x4A307E: jz      short loc_4A308E
0x4A3080: mov     edx, [eax+0Ch]
0x4A3083: mov     [esp+14h+var_8], edx
0x4A3087: fld     dword ptr [eax+28h]
0x4A308A: fstp    [esp+14h+var_4]
0x4A308E: mov     ecx, ds:0B33B00h
0x4A3094: push    4
0x4A3096: lea     eax, [esp+18h+var_8]
0x4A309A: push    eax
0x4A309B: call    SaveLoad_SaveFormID
0x4A30A0: push    4; Size
0x4A30A2: lea     ecx, [esp+18h+var_4]
0x4A30A6: push    ecx; Src
0x4A30A7: mov     ecx, ds:0B33B00h
0x4A30AD: call    SaveLoad_SaveData
0x4A30B2: add     [esp+14h+Src], 1
0x4A30B7: mov     esi, [esi+4]
0x4A30BA: test    esi, esi
0x4A30BC: jnz     short loc_4A3061
0x4A30BE: mov     dx, word ptr [esp+14h+Src]
0x4A30C3: pop     esi
0x4A30C4: mov     [ebx], dx
0x4A30C7: pop     ebx
0x4A30C8: add     esp, 0Ch
0x4A30CB: retn
0x4A30CC: mov     ax, word ptr [esp+14h+Src]
0x4A30D1: pop     esi
0x4A30D2: mov     [ebx], ax
0x4A30D5: pop     ebx
0x4A30D6: add     esp, 0Ch
0x4A30D9: retn
0x4A30DA: mov     cx, word ptr [esp+14h+Src]
0x4A30DF: pop     esi
0x4A30E0: mov     [ebx], cx
0x4A30E3: pop     ebx
0x4A30E4: add     esp, 0Ch
0x4A30E7: retn
0x4A30E8: mov     dx, word ptr [esp+10h+Src]
0x4A30ED: mov     [ebx], dx
0x4A30F0: pop     ebx
0x4A30F1: add     esp, 0Ch
0x4A30F4: retn
