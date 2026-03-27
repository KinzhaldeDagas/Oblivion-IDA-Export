0x464320: sub     esp, 28h
0x464323: push    ebx
0x464324: push    edi
0x464325: mov     edi, ecx
0x464327: mov     ebx, [edi+6Ch]
0x46432A: test    ebx, ebx
0x46432C: mov     [esp+30h+var_25], 0
0x464331: jnz     short loc_464340
0x464333: call    sub_45D450
0x464338: mov     ebx, [edi+6Ch]
0x46433B: mov     [esp+30h+var_25], 1
0x464340: test    ebx, ebx
0x464342: mov     [esp+30h+var_1C], 0
0x46434A: jz      loc_46440E
0x464350: push    ebp
0x464351: push    esi
0x464352: cmp     dword ptr [ebx+4], 0
0x464356: jnz     short loc_464361
0x464358: cmp     dword ptr [ebx], 0
0x46435B: jz      loc_46440C
0x464361: mov     ebp, [ebx]
0x464363: push    0; Str
0x464365: push    0; int
0x464367: lea     eax, [esp+40h+var_20]
0x46436B: push    eax; int
0x46436C: push    ebp; int
0x46436D: mov     ecx, edi
0x46436F: call    sub_459570
0x464374: test    al, al
0x464376: jnz     short loc_4643F3
0x464378: push    2
0x46437A: push    0
0x46437C: push    ebp
0x46437D: mov     ecx, edi
0x46437F: call    Savegame_Rename
0x464384: mov     esi, eax
0x464386: test    esi, esi
0x464388: jz      short loc_46439E
0x46438A: cmp     byte ptr [esi+24h], 0
0x46438E: jz      short loc_46439E
0x464390: push    0
0x464392: push    esi
0x464393: mov     ecx, edi
0x464395: call    sub_45DBC0
0x46439A: test    eax, eax
0x46439C: jnz     short loc_4643B3
0x46439E: test    esi, esi
0x4643A0: mov     [esp+38h+var_20], 0
0x4643A8: jz      short loc_464401
0x4643AA: mov     ecx, esi
0x4643AC: call    BSFile_Flush
0x4643B1: jmp     short loc_464401
0x4643B3: push    0; int
0x4643B5: lea     ecx, [esp+3Ch+var_18]
0x4643B9: push    ecx; int
0x4643BA: lea     edx, [esp+40h+var_10]
0x4643BE: push    edx; int
0x4643BF: lea     ecx, [esp+44h+var_14]
0x4643C3: push    ecx; int
0x4643C4: push    0; void *
0x4643C6: lea     edx, [esp+4Ch+var_24]
0x4643CA: push    edx; int
0x4643CB: push    0; Dst
0x4643CD: lea     ecx, [esp+54h+var_20]
0x4643D1: push    ecx; int
0x4643D2: push    eax; int
0x4643D3: push    ebp; int
0x4643D4: mov     ecx, edi
0x4643D6: call    sub_45D5F0
0x4643DB: mov     eax, ds:0A853D0h
0x4643E0: mov     edx, [esi]
0x4643E2: mov     edx, [edx+0Ch]
0x4643E5: push    eax
0x4643E6: push    0
0x4643E8: mov     ecx, esi
0x4643EA: call    edx
0x4643EC: mov     ecx, esi
0x4643EE: call    BSFile_Flush
0x4643F3: mov     eax, [esp+38h+var_20]
0x4643F7: cmp     eax, [esp+38h+var_1C]
0x4643FB: jbe     short loc_464401
0x4643FD: mov     [esp+38h+var_1C], eax
0x464401: mov     ebx, [ebx+4]
0x464404: test    ebx, ebx
0x464406: jnz     loc_464352
0x46440C: pop     esi
0x46440D: pop     ebp
0x46440E: cmp     [esp+30h+var_25], 0
0x464413: jz      short loc_46441C
0x464415: mov     ecx, edi
0x464417: call    sub_459400
0x46441C: mov     al, 7Dh ; '}'
0x46441E: mov     [edi+71h], al
0x464421: mov     [edi+7Ch], al
0x464424: mov     eax, [esp+30h+var_1C]
0x464428: add     eax, 1
0x46442B: mov     byte ptr [edi+70h], 0
0x46442F: mov     [edi+88h], eax
0x464435: pop     edi
0x464436: pop     ebx
0x464437: add     esp, 28h
0x46443A: retn
