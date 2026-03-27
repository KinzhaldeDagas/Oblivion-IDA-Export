0x54C090: fldz
0x54C092: sub     esp, 50h
0x54C095: fld     [esp+50h+arg_0]
0x54C099: push    esi
0x54C09A: fcom    st(1)
0x54C09C: mov     esi, ecx
0x54C09E: fnstsw  ax
0x54C0A0: fstp    st(1)
0x54C0A2: test    ah, 41h
0x54C0A5: jp      short loc_54C0B2
0x54C0A7: fstp    st
0x54C0A9: xor     al, al
0x54C0AB: pop     esi
0x54C0AC: add     esp, 50h
0x54C0AF: retn    4
0x54C0B2: mov     ecx, [esi+0Ch]
0x54C0B5: mov     eax, [esi+10h]
0x54C0B8: mov     edx, [eax+3Ch]
0x54C0BB: push    ebx
0x54C0BC: push    ebp
0x54C0BD: push    edi
0x54C0BE: lea     edi, [esi+10h]
0x54C0C1: push    ecx
0x54C0C2: push    ecx
0x54C0C3: mov     ecx, edi
0x54C0C5: fstp    [esp+68h+var_68]
0x54C0C8: mov     byte ptr [esi+1D7h], 0
0x54C0CF: call    edx
0x54C0D1: fld     [esp+5Ch+arg_4]
0x54C0D5: push    1; int
0x54C0D7: mov     [esp+60h+var_4B], al
0x54C0DB: lea     ebx, [esi+34h]
0x54C0DE: push    ebx; int
0x54C0DF: lea     eax, [esi+24h]
0x54C0E2: push    eax; int
0x54C0E3: push    ecx
0x54C0E4: fstp    [esp+6Ch+var_6C]; float
0x54C0E7: call    sub_54BA90
0x54C0EC: add     esp, 10h
0x54C0EF: test    al, al
0x54C0F1: mov     [esp+5Ch+var_4C], al
0x54C0F5: jnz     short loc_54C110
0x54C0F7: cmp     [esp+5Ch+var_4B], al
0x54C0FB: jnz     short loc_54C117
0x54C0FD: mov     edx, [esi]
0x54C0FF: mov     eax, [edx+0D4h]
0x54C105: mov     ecx, esi
0x54C107: call    eax
0x54C109: mov     [esp+5Ch+var_4A], 0
0x54C10E: jmp     short loc_54C169
0x54C110: cmp     [esp+5Ch+var_4B], 0
0x54C115: jz      short loc_54C156
0x54C117: mov     edx, [esi+48h]
0x54C11A: mov     eax, [edx+28h]
0x54C11D: lea     ebp, [esi+48h]
0x54C120: push    edi
0x54C121: mov     ecx, ebp
0x54C123: call    eax
0x54C125: cmp     [esp+5Ch+var_4C], 0
0x54C12A: jz      short loc_54C141
0x54C12C: fld1
0x54C12E: mov     edx, [ebp+0]
0x54C131: mov     eax, [edx+1Ch]
0x54C134: push    0
0x54C136: push    0
0x54C138: push    ecx
0x54C139: fstp    [esp+68h+var_68]
0x54C13C: push    ebx
0x54C13D: mov     ecx, ebp
0x54C13F: call    eax
0x54C141: cmp     [esp+5Ch+var_4B], 0
0x54C146: jnz     short loc_54C164
0x54C148: cmp     [esp+5Ch+var_4C], 0
0x54C14D: jnz     short loc_54C164
0x54C14F: mov     [esp+5Ch+var_4A], 0
0x54C154: jmp     short loc_54C169
0x54C156: mov     edx, [esi+48h]
0x54C159: mov     eax, [edx+28h]
0x54C15C: lea     ecx, [esi+48h]
0x54C15F: push    ebx
0x54C160: call    eax
0x54C162: jmp     short loc_54C148
0x54C164: mov     [esp+5Ch+var_4A], 1
0x54C169: fld     [esp+5Ch+arg_4]
0x54C16D: push    0; int
0x54C16F: lea     ebp, [esi+6Ch]
0x54C172: lea     ecx, [esi+5Ch]
0x54C175: push    ebp; int
0x54C176: push    ecx; int
0x54C177: push    ecx
0x54C178: fstp    [esp+6Ch+var_6C]; float
0x54C17B: call    sub_54BA90
0x54C180: fld     [esp+6Ch+arg_4]
0x54C184: add     esp, 10h
0x54C187: push    1; int
0x54C189: lea     ebx, [esi+90h]
0x54C18F: push    ebx; int
0x54C190: lea     edx, [esi+80h]
0x54C196: push    edx; int
0x54C197: push    ecx
0x54C198: fstp    [esp+6Ch+var_6C]; float
0x54C19B: mov     [esp+6Ch+var_4B], al
0x54C19F: call    sub_54BA90
0x54C1A4: add     esp, 10h
0x54C1A7: cmp     [esp+5Ch+var_4B], 0
0x54C1AC: mov     [esp+5Ch+var_4C], al
0x54C1B0: jz      loc_54C317
0x54C1B6: mov     eax, [esi+0A4h]
0x54C1BC: mov     edx, [eax+28h]
0x54C1BF: lea     edi, [esi+0A4h]
0x54C1C5: push    ebp
0x54C1C6: mov     ecx, edi
0x54C1C8: call    edx
0x54C1CA: cmp     [esp+5Ch+var_4C], 0
0x54C1CF: jz      short loc_54C1E5
0x54C1D1: fld1
0x54C1D3: mov     eax, [edi]
0x54C1D5: mov     edx, [eax+1Ch]
0x54C1D8: push    0
0x54C1DA: push    0
0x54C1DC: push    ecx
0x54C1DD: fstp    [esp+68h+var_68]
0x54C1E0: push    ebx
0x54C1E1: mov     ecx, edi
0x54C1E3: call    edx
0x54C1E5: mov     [esp+5Ch+var_49], 1
0x54C1EA: fld     [esp+5Ch+arg_4]
0x54C1EE: push    0; int
0x54C1F0: lea     ebp, [esi+0C8h]
0x54C1F6: push    ebp; int
0x54C1F7: lea     eax, [esi+0B8h]
0x54C1FD: push    eax; int
0x54C1FE: push    ecx
0x54C1FF: fstp    [esp+6Ch+var_6C]; float
0x54C202: call    sub_54BA90
0x54C207: fld     [esp+6Ch+arg_4]
0x54C20B: add     esp, 10h
0x54C20E: push    1; int
0x54C210: lea     ebx, [esi+0ECh]
0x54C216: lea     ecx, [esi+0DCh]
0x54C21C: push    ebx; int
0x54C21D: push    ecx; int
0x54C21E: push    ecx
0x54C21F: fstp    [esp+6Ch+var_6C]; float
0x54C222: mov     [esp+6Ch+var_4B], al
0x54C226: call    sub_54BA90
0x54C22B: add     esp, 10h
0x54C22E: cmp     [esp+5Ch+var_4B], 0
0x54C233: mov     [esp+5Ch+var_4C], al
0x54C237: jz      loc_54C33C
0x54C23D: mov     edx, [esi+100h]
0x54C243: mov     eax, [edx+28h]
0x54C246: lea     edi, [esi+100h]
0x54C24C: push    ebp
0x54C24D: mov     ecx, edi
0x54C24F: call    eax
0x54C251: cmp     [esp+5Ch+var_4C], 0
0x54C256: jz      short loc_54C26C
0x54C258: fld1
0x54C25A: mov     edx, [edi]
0x54C25C: mov     eax, [edx+1Ch]
0x54C25F: push    0
0x54C261: push    0
0x54C263: push    ecx
0x54C264: fstp    [esp+68h+var_68]
0x54C267: push    ebx
0x54C268: mov     ecx, edi
0x54C26A: call    eax
0x54C26C: mov     [esp+5Ch+var_4B], 1
0x54C271: fld     [esp+5Ch+arg_4]
0x54C275: push    0; int
0x54C277: lea     eax, [esi+124h]
0x54C27D: push    eax; int
0x54C27E: lea     ecx, [esi+114h]
0x54C284: push    ecx; int
0x54C285: push    ecx
0x54C286: fstp    [esp+6Ch+var_6C]; float
0x54C289: call    sub_54BA90
0x54C28E: fld     [esp+6Ch+arg_4]
0x54C292: add     esp, 10h
0x54C295: push    1; int
0x54C297: lea     ebp, [esi+148h]
0x54C29D: push    ebp; int
0x54C29E: lea     edx, [esi+138h]
0x54C2A4: push    edx; int
0x54C2A5: push    ecx
0x54C2A6: fstp    [esp+6Ch+var_6C]; float
0x54C2A9: mov     bl, al
0x54C2AB: call    sub_54BA90
0x54C2B0: add     esp, 10h
0x54C2B3: test    bl, bl
0x54C2B5: mov     [esp+5Ch+var_4C], al
0x54C2B9: jz      loc_54C361
0x54C2BF: mov     edx, [esi+15Ch]
0x54C2C5: lea     edi, [esi+15Ch]
0x54C2CB: lea     eax, [esi+124h]
0x54C2D1: push    eax
0x54C2D2: mov     eax, [edx+28h]
0x54C2D5: mov     ecx, edi
0x54C2D7: call    eax
0x54C2D9: cmp     [esp+5Ch+var_4C], 0
0x54C2DE: jz      short loc_54C2F4
0x54C2E0: fld1
0x54C2E2: mov     edx, [edi]
0x54C2E4: mov     eax, [edx+1Ch]
0x54C2E7: push    0
0x54C2E9: push    0
0x54C2EB: push    ecx
0x54C2EC: fstp    [esp+68h+var_68]
0x54C2EF: push    ebp
0x54C2F0: mov     ecx, edi
0x54C2F2: call    eax
0x54C2F4: mov     al, 1
0x54C2F6: cmp     [esp+5Ch+var_4A], 0
0x54C2FB: jnz     loc_54C383
0x54C301: cmp     [esp+5Ch+var_49], 0
0x54C306: jnz     short loc_54C383
0x54C308: cmp     [esp+5Ch+var_4B], 0
0x54C30D: jnz     short loc_54C383
0x54C30F: test    al, al
0x54C311: jnz     short loc_54C383
0x54C313: xor     eax, eax
0x54C315: jmp     short loc_54C388
0x54C317: test    al, al
0x54C319: jz      short loc_54C332
0x54C31B: mov     eax, [esi+0A4h]
0x54C321: mov     edx, [eax+28h]
0x54C324: lea     ecx, [esi+0A4h]
0x54C32A: push    ebx
0x54C32B: call    edx
0x54C32D: jmp     loc_54C1E5
0x54C332: mov     [esp+5Ch+var_49], 0
0x54C337: jmp     loc_54C1EA
0x54C33C: test    al, al
0x54C33E: jz      short loc_54C357
0x54C340: mov     edx, [esi+100h]
0x54C346: mov     eax, [edx+28h]
0x54C349: lea     ecx, [esi+100h]
0x54C34F: push    ebx
0x54C350: call    eax
0x54C352: jmp     loc_54C26C
0x54C357: mov     [esp+5Ch+var_4B], 0
0x54C35C: jmp     loc_54C271
0x54C361: test    al, al
0x54C363: jz      short loc_54C37C
0x54C365: mov     edx, [esi+15Ch]
0x54C36B: mov     eax, [edx+28h]
0x54C36E: lea     ecx, [esi+15Ch]
0x54C374: push    ebp
0x54C375: call    eax
0x54C377: jmp     loc_54C2F4
0x54C37C: xor     al, al
0x54C37E: jmp     loc_54C2F6
0x54C383: mov     eax, 1
0x54C388: cmp     byte ptr [esi+1DAh], 0
0x54C38F: mov     [esi+1D7h], al
0x54C395: jnz     loc_54C512
0x54C39B: cmp     dword ptr [esi+68h], 0
0x54C39F: jnz     loc_54C512
0x54C3A5: fldz
0x54C3A7: fcom    dword ptr ds:0B39AD0h
0x54C3AD: fnstsw  ax
0x54C3AF: test    ah, 5
0x54C3B2: jp      loc_54C510
0x54C3B8: fcomp   dword ptr ds:0B39AD8h
0x54C3BE: fnstsw  ax
0x54C3C0: test    ah, 5
0x54C3C3: jp      loc_54C512
0x54C3C9: mov     ecx, offset unk_B39AE0
0x54C3CE: call    GameSetting_GetSafeFloatPointer
0x54C3D3: fldz
0x54C3D5: fcomp   dword ptr [eax]
0x54C3D7: fnstsw  ax
0x54C3D9: test    ah, 5
0x54C3DC: jp      loc_54C512
0x54C3E2: mov     ecx, offset unk_B39AE8
0x54C3E7: call    GameSetting_GetSafeFloatPointer
0x54C3EC: fld     dword ptr [eax]
0x54C3EE: mov     ecx, offset unk_B39AE0
0x54C3F3: fstp    [esp+5Ch+var_48]
0x54C3F7: call    GameSetting_GetSafeFloatPointer
0x54C3FC: fld     dword ptr [eax]
0x54C3FE: fcomp   [esp+5Ch+var_48]
0x54C402: fnstsw  ax
0x54C404: test    ah, 41h
0x54C407: jp      loc_54C512
0x54C40D: mov     ecx, offset unk_B39AE8
0x54C412: call    GameSetting_GetSafeFloatPointer
0x54C417: fld     dword ptr [eax]
0x54C419: mov     ecx, offset unk_B39AE0
0x54C41E: fstp    [esp+5Ch+var_48]
0x54C422: call    GameSetting_GetSafeFloatPointer
0x54C427: fld     dword ptr [eax]
0x54C429: fsubr   [esp+5Ch+var_48]
0x54C42D: push    0
0x54C42F: lea     ecx, [esp+60h+var_40]
0x54C433: push    11h
0x54C435: push    ecx
0x54C436: fstp    dword ptr [esp+68h+var_48]
0x54C43A: call    sub_54F630
0x54C43F: fldz
0x54C441: mov     edi, [esi]
0x54C443: fst     [esp+68h+var_40]
0x54C447: push    0; Seed
0x54C449: fstp    [esp+6Ch+var_3C]
0x54C44D: call    GetRandomLargeInteger?
0x54C452: mov     [esp+6Ch+arg_4], eax
0x54C456: fild    [esp+6Ch+arg_4]
0x54C45A: add     esp, 10h
0x54C45D: mov     ecx, offset unk_B39AE0
0x54C462: fmul    dword ptr [esp+5Ch+var_48]
0x54C466: fdiv    qword ptr ds:0A3D5A8h
0x54C46C: fstp    [esp+5Ch+var_48]
0x54C470: call    GameSetting_GetSafeFloatPointer
0x54C475: fld     dword ptr [eax]
0x54C477: fadd    [esp+5Ch+var_48]
0x54C47B: mov     eax, [edi+0A4h]
0x54C481: push    ecx
0x54C482: lea     edx, [esp+60h+var_40]
0x54C486: mov     ecx, esi
0x54C488: fstp    [esp+60h+arg_4]
0x54C48C: fld     [esp+60h+arg_4]
0x54C490: fstp    [esp+60h+var_60]
0x54C493: push    edx
0x54C494: call    eax
0x54C496: push    0
0x54C498: lea     ecx, [esp+60h+var_40]
0x54C49C: push    11h
0x54C49E: push    ecx
0x54C49F: call    sub_54F630
0x54C4A4: fld1
0x54C4A6: mov     edi, [esi]
0x54C4A8: fst     [esp+68h+var_40]
0x54C4AC: add     esp, 0Ch
0x54C4AF: fstp    [esp+5Ch+var_3C]
0x54C4B3: mov     ecx, offset flt_B39AD0
0x54C4B8: call    GameSetting_GetSafeFloatPointer
0x54C4BD: fld     dword ptr [eax]
0x54C4BF: mov     eax, [edi+0A4h]
0x54C4C5: push    ecx
0x54C4C6: lea     edx, [esp+60h+var_40]
0x54C4CA: fstp    [esp+60h+var_60]
0x54C4CD: push    edx
0x54C4CE: mov     ecx, esi
0x54C4D0: call    eax
0x54C4D2: push    0
0x54C4D4: lea     ecx, [esp+60h+var_40]
0x54C4D8: push    11h
0x54C4DA: push    ecx
0x54C4DB: call    sub_54F630
0x54C4E0: fldz
0x54C4E2: mov     edi, [esi]
0x54C4E4: fst     [esp+68h+var_40]
0x54C4E8: add     esp, 0Ch
0x54C4EB: fstp    [esp+5Ch+var_3C]
0x54C4EF: mov     ecx, offset flt_B39AD8
0x54C4F4: call    GameSetting_GetSafeFloatPointer
0x54C4F9: fld     dword ptr [eax]
0x54C4FB: mov     eax, [edi+0A4h]
0x54C501: push    ecx
0x54C502: lea     edx, [esp+60h+var_40]
0x54C506: fstp    [esp+60h+var_60]
0x54C509: push    edx
0x54C50A: mov     ecx, esi
0x54C50C: call    eax
0x54C50E: jmp     short loc_54C512
0x54C510: fstp    st
0x54C512: mov     edx, [esi+15Ch]
0x54C518: mov     eax, [edx+48h]
0x54C51B: lea     ecx, [esi+15Ch]
0x54C521: push    0
0x54C523: call    eax
0x54C525: fld     dword ptr [esi+1DCh]
0x54C52B: fdiv    qword ptr ds:0A309F0h
0x54C531: pop     edi
0x54C532: pop     ebp
0x54C533: pop     ebx
0x54C534: fucompp
0x54C536: fnstsw  ax
0x54C538: test    ah, 44h
0x54C53B: jp      short loc_54C565
0x54C53D: mov     edx, [esi+124h]
0x54C543: mov     eax, [edx+48h]
0x54C546: lea     ecx, [esi+124h]
0x54C54C: push    0
0x54C54E: call    eax
0x54C550: fld     dword ptr [esi+1DCh]
0x54C556: fdiv    qword ptr ds:0A309F0h
0x54C55C: fucompp
0x54C55E: fnstsw  ax
0x54C560: test    ah, 44h
0x54C563: jnp     short loc_54C5B7
0x54C565: mov     edx, [esi]
0x54C567: mov     eax, [edx+0B0h]
0x54C56D: push    1
0x54C56F: push    0
0x54C571: push    0
0x54C573: push    0
0x54C575: mov     ecx, esi
0x54C577: call    eax
0x54C579: push    0
0x54C57B: lea     ecx, [esp+58h+arg_0]
0x54C57F: push    1
0x54C581: push    ecx
0x54C582: call    sub_54F630
0x54C587: fld     dword ptr [esi+1DCh]
0x54C58D: fdiv    qword ptr ds:0A309F0h
0x54C593: mov     edx, [esi]
0x54C595: mov     edx, [edx+0C4h]
0x54C59B: add     esp, 8
0x54C59E: lea     eax, [esp+58h+arg_0]
0x54C5A2: mov     ecx, esi
0x54C5A4: fstp    [esp+58h+arg_0]
0x54C5A8: fldz
0x54C5AA: fstp    dword ptr [esp+58h+var_58]
0x54C5AD: push    eax
0x54C5AE: call    edx
0x54C5B0: mov     byte ptr [esi+1D7h], 1
0x54C5B7: mov     al, [esi+1D7h]
0x54C5BD: pop     esi
0x54C5BE: add     esp, 50h
0x54C5C1: retn    4
