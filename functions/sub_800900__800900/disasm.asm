0x800900: push    0FFFFFFFFh
0x800902: push    offset SEH_7EF2F0
0x800907: mov     eax, large fs:0
0x80090D: push    eax
0x80090E: sub     esp, 8
0x800911: push    ebx
0x800912: push    ebp
0x800913: push    esi
0x800914: push    edi
0x800915: mov     eax, ds:0B30AACh
0x80091A: xor     eax, esp
0x80091C: push    eax
0x80091D: lea     eax, [esp+28h+var_C]
0x800921: mov     large fs:0, eax
0x800927: mov     edi, ecx
0x800929: xor     esi, esi
0x80092B: mov     [esp+28h+var_10], esi
0x80092F: lea     eax, [esp+28h+var_14]
0x800933: push    eax
0x800934: mov     [esp+2Ch+var_4], esi
0x800938: call    sub_7606A0
0x80093D: add     esp, 4
0x800940: mov     ebp, eax
0x800942: mov     ecx, [edi+9Ch]; this
0x800948: cmp     ecx, [ebp+0]
0x80094B: mov     byte ptr [esp+28h+var_4], 1
0x800950: jz      short loc_800972
0x800952: cmp     ecx, esi
0x800954: jz      short loc_800961
0x800956: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x80095A: jnz     short loc_800961
0x80095C: call    sub_7604D0
0x800961: mov     eax, [ebp+0]
0x800964: cmp     eax, esi
0x800966: mov     [edi+9Ch], eax
0x80096C: jz      short loc_800972
0x80096E: add     dword ptr [eax+60h], 1
0x800972: mov     eax, [esp+28h+var_14]
0x800976: cmp     eax, esi
0x800978: mov     byte ptr [esp+28h+var_4], 0
0x80097D: jz      short loc_800991
0x80097F: add     dword ptr [eax+60h], 0FFFFFFFFh
0x800983: mov     ecx, eax; this
0x800985: add     eax, 60h ; '`'
0x800988: cmp     [eax], esi
0x80098A: jnz     short loc_800991
0x80098C: call    sub_7604D0
0x800991: xor     ebp, ebp
0x800993: lea     ecx, [esp+28h+var_14]
0x800997: push    ecx
0x800998: call    sub_772630
0x80099D: add     esp, 4
0x8009A0: mov     ebx, eax
0x8009A2: cmp     esi, [ebx]
0x8009A4: mov     byte ptr [esp+28h+var_4], 2
0x8009A9: jz      short loc_8009CA
0x8009AB: test    esi, esi
0x8009AD: jz      short loc_8009BC
0x8009AF: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x8009B3: jnz     short loc_8009BC
0x8009B5: mov     ecx, esi
0x8009B7: call    sub_772560
0x8009BC: mov     esi, [ebx]
0x8009BE: test    esi, esi
0x8009C0: mov     [esp+28h+var_10], esi
0x8009C4: jz      short loc_8009CA
0x8009C6: add     dword ptr [esi+5Ch], 1
0x8009CA: mov     eax, [esp+28h+var_14]
0x8009CE: test    eax, eax
0x8009D0: mov     byte ptr [esp+28h+var_4], 0
0x8009D5: jz      short loc_8009EA
0x8009D7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8009DB: mov     ecx, eax
0x8009DD: add     eax, 5Ch ; '\'
0x8009E0: cmp     dword ptr [eax], 0
0x8009E3: jnz     short loc_8009EA
0x8009E5: call    sub_772560
0x8009EA: push    2
0x8009EC: push    3
0x8009EE: push    ebp
0x8009EF: push    esi
0x8009F0: call    sub_801110
0x8009F5: add     esp, 10h
0x8009F8: push    0
0x8009FA: mov     ecx, esi
0x8009FC: call    sub_771640
0x800A01: mov     ecx, [edi+9Ch]; this
0x800A07: mov     edx, [ecx+14h]
0x800A0A: push    esi; a3
0x800A0B: push    edx; a2
0x800A0C: call    sub_760010
0x800A11: add     ebp, 1
0x800A14: cmp     ebp, 2
0x800A17: jl      loc_800993
0x800A1D: mov     ebx, [edi+9Ch]
0x800A23: cmp     dword ptr [ebx+30h], 0
0x800A27: jnz     short loc_800A31
0x800A29: call    sub_772DF0
0x800A2E: mov     [ebx+30h], eax
0x800A31: mov     ecx, [ebx+30h]
0x800A34: push    0
0x800A36: push    0
0x800A38: push    7
0x800A3A: call    sub_772CD0
0x800A3F: mov     ebp, [edi+9Ch]
0x800A45: cmp     dword ptr [ebp+30h], 0
0x800A49: jnz     short loc_800A53
0x800A4B: call    sub_772DF0
0x800A50: mov     [ebp+30h], eax
0x800A53: mov     ecx, [ebp+30h]
0x800A56: push    0
0x800A58: push    0
0x800A5A: push    0Eh
0x800A5C: call    sub_772CD0
0x800A61: mov     ebp, [edi+9Ch]
0x800A67: cmp     dword ptr [ebp+30h], 0
0x800A6B: jnz     short loc_800A75
0x800A6D: call    sub_772DF0
0x800A72: mov     [ebp+30h], eax
0x800A75: mov     ecx, [ebp+30h]
0x800A78: push    0
0x800A7A: push    0
0x800A7C: push    1Bh
0x800A7E: call    sub_772CD0
0x800A83: mov     ebp, [edi+9Ch]
0x800A89: cmp     dword ptr [ebp+30h], 0
0x800A8D: jnz     short loc_800A97
0x800A8F: call    sub_772DF0
0x800A94: mov     [ebp+30h], eax
0x800A97: mov     ecx, [ebp+30h]
0x800A9A: push    0
0x800A9C: push    0
0x800A9E: push    0Fh
0x800AA0: call    sub_772CD0
0x800AA5: mov     ebp, [edi+9Ch]
0x800AAB: cmp     dword ptr [ebp+30h], 0
0x800AAF: jnz     short loc_800AB9
0x800AB1: call    sub_772DF0
0x800AB6: mov     [ebp+30h], eax
0x800AB9: mov     ecx, [ebp+30h]
0x800ABC: push    0
0x800ABE: push    0Fh
0x800AC0: push    0A8h ; '¨'
0x800AC5: call    sub_772CD0
0x800ACA: mov     eax, [edi]
0x800ACC: mov     edx, [eax+0B8h]
0x800AD2: mov     ecx, edi
0x800AD4: call    edx
0x800AD6: or      eax, 0FFFFFFFFh
0x800AD9: test    esi, esi
0x800ADB: mov     [esp+28h+var_4], eax
0x800ADF: jz      short loc_800AED
0x800AE1: add     [esi+5Ch], eax
0x800AE4: jnz     short loc_800AED
0x800AE6: mov     ecx, esi
0x800AE8: call    sub_772560
0x800AED: mov     al, 1
0x800AEF: mov     ecx, [esp+28h+var_C]
0x800AF3: mov     large fs:0, ecx
0x800AFA: pop     ecx
0x800AFB: pop     edi
0x800AFC: pop     esi
0x800AFD: pop     ebp
0x800AFE: pop     ebx
0x800AFF: add     esp, 14h
0x800B02: retn
