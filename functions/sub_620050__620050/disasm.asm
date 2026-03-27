0x620050: sub     esp, 7Ch
0x620053: push    ebx
0x620054: push    esi
0x620055: mov     esi, [esp+84h+a3]
0x62005C: push    edi; a5
0x62005D: mov     edi, [esp+88h+a2]; a1
0x620064: xor     ebx, ebx
0x620066: push    ebx; a4
0x620067: push    esi; a3
0x620068: push    edi; a2
0x620069: call    TESObjectREFR_GetDistanceBetween?
0x62006E: fstp    [esp+94h+var_78]
0x620072: push    2
0x620074: lea     eax, [esp+98h+var_74]
0x620078: push    eax
0x620079: push    esi
0x62007A: push    edi
0x62007B: call    sub_61DDF0
0x620080: fstp    [esp+0A4h+var_6C]
0x620084: mov     esi, [esp+0A4h+arg_8]
0x62008B: add     esp, 1Ch
0x62008E: test    esi, esi
0x620090: jz      loc_62027B
0x620096: mov     ecx, [esi+58h]
0x620099: test    ecx, ecx
0x62009B: jz      loc_62027B
0x6200A1: cmp     esi, edi
0x6200A3: jz      loc_62027B
0x6200A9: mov     edx, [ecx]
0x6200AB: mov     eax, [edx+8]
0x6200AE: call    eax
0x6200B0: test    eax, eax
0x6200B2: jnz     loc_62027B
0x6200B8: cmp     [esp+88h+arg_C], bl
0x6200BF: jz      short loc_6200D7
0x6200C1: mov     edx, [esi]
0x6200C3: mov     eax, [edx+334h]
0x6200C9: push    1
0x6200CB: mov     ecx, esi
0x6200CD: call    eax
0x6200CF: test    al, al
0x6200D1: jz      loc_62027B
0x6200D7: push    0; a4
0x6200D9: push    esi; a3
0x6200DA: push    edi; a2
0x6200DB: call    TESObjectREFR_GetDistanceBetween?
0x6200E0: fstp    dword ptr [esp+94h+var_80+4]
0x6200E4: fld     dword ptr [esp+94h+var_80+4]
0x6200E8: add     esp, 0Ch
0x6200EB: fld     [esp+88h+var_78]
0x6200EF: fcompp
0x6200F1: fnstsw  ax
0x6200F3: test    ah, 41h
0x6200F6: jnz     loc_62027B
0x6200FC: push    2
0x6200FE: lea     ecx, [esp+8Ch+var_74]
0x620102: push    ecx
0x620103: push    esi
0x620104: push    edi
0x620105: call    sub_61DDF0
0x62010A: fstp    [esp+98h+var_78]
0x62010E: mov     edx, [esi]
0x620110: mov     edx, [edx+15Ch]
0x620116: add     esp, 10h
0x620119: lea     eax, [esp+88h+var_60]
0x62011D: push    eax
0x62011E: mov     ecx, esi
0x620120: call    edx
0x620122: fld     dword ptr [eax]
0x620124: mov     eax, [esi]
0x620126: fstp    [esp+88h+var_74]
0x62012A: mov     edx, [eax+158h]
0x620130: lea     ecx, [esp+88h+var_54]
0x620134: push    ecx
0x620135: mov     ecx, esi
0x620137: call    edx
0x620139: fld     dword ptr [eax]
0x62013B: fsubr   [esp+88h+var_74]
0x62013F: mov     eax, [esi]
0x620141: mov     edx, [eax+15Ch]
0x620147: lea     ecx, [esp+88h+var_48]
0x62014B: push    ecx
0x62014C: fstp    [esp+8Ch+var_68]
0x620150: mov     ecx, esi
0x620152: call    edx
0x620154: fld     dword ptr [eax+4]
0x620157: mov     eax, [esi]
0x620159: fstp    [esp+88h+var_74]
0x62015D: mov     edx, [eax+158h]
0x620163: lea     ecx, [esp+88h+var_3C]
0x620167: push    ecx
0x620168: mov     ecx, esi
0x62016A: call    edx
0x62016C: fld     dword ptr [eax+4]
0x62016F: fsubr   [esp+88h+var_74]
0x620173: fcomp   [esp+88h+var_68]
0x620177: fnstsw  ax
0x620179: test    ah, 5
0x62017C: mov     eax, [esi]
0x62017E: mov     edx, [eax+15Ch]
0x620184: jp      short loc_6201AE
0x620186: lea     ecx, [esp+88h+var_30]
0x62018A: push    ecx
0x62018B: mov     ecx, esi
0x62018D: call    edx
0x62018F: fld     dword ptr [eax]
0x620191: mov     eax, [esi]
0x620193: fstp    [esp+88h+var_68]
0x620197: mov     edx, [eax+158h]
0x62019D: lea     ecx, [esp+88h+var_24]
0x6201A1: push    ecx
0x6201A2: mov     ecx, esi
0x6201A4: call    edx
0x6201A6: fld     dword ptr [eax]
0x6201A8: fsubr   [esp+88h+var_68]
0x6201AC: jmp     short loc_6201D6
0x6201AE: lea     ecx, [esp+88h+var_18]
0x6201B2: push    ecx
0x6201B3: mov     ecx, esi
0x6201B5: call    edx
0x6201B7: fld     dword ptr [eax+4]
0x6201BA: mov     eax, [esi]
0x6201BC: fstp    [esp+88h+var_68]
0x6201C0: mov     edx, [eax+158h]
0x6201C6: lea     ecx, [esp+88h+var_C]
0x6201CA: push    ecx
0x6201CB: mov     ecx, esi
0x6201CD: call    edx
0x6201CF: fld     dword ptr [eax+4]
0x6201D2: fsubr   [esp+88h+var_68]
0x6201D6: fldz
0x6201D8: fld     dword ptr [esp+88h+var_80+4]
0x6201DC: fucom   st(1)
0x6201DE: fnstsw  ax
0x6201E0: fstp    st(1)
0x6201E2: test    ah, 44h
0x6201E5: jp      short loc_6201F3
0x6201E7: fstp    st(1)
0x6201E9: fstp    st
0x6201EB: fld     dword ptr ds:0A70EA8h
0x6201F1: jmp     short loc_620216
0x6201F3: fxch    st(1)
0x6201F5: fstp    dword ptr [esp+88h+var_74]
0x6201F9: fld     dword ptr [esp+88h+var_74]
0x6201FD: fadd    st, st
0x6201FF: fdivrp  st(1), st
0x620201: fstp    dword ptr [esp+88h+var_74]
0x620205: fld     dword ptr [esp+88h+var_74]
0x620209: call    __CIatan
0x62020E: fstp    dword ptr [esp+88h+var_74]
0x620212: fld     dword ptr [esp+88h+var_74]
0x620216: fstp    dword ptr [esp+88h+var_80+4]
0x62021A: fld     [esp+88h+var_6C]
0x62021E: fsub    [esp+88h+var_78]
0x620222: fstp    [esp+88h+var_6C]
0x620226: fld     [esp+88h+var_6C]
0x62022A: fabs
0x62022C: fstp    [esp+88h+var_6C]
0x620230: fld     [esp+88h+var_6C]
0x620234: fld     dword ptr [esp+88h+var_80+4]
0x620238: fcompp
0x62023A: fnstsw  ax
0x62023C: test    ah, 1
0x62023F: jnz     short loc_62027B
0x620241: mov     eax, [esi]
0x620243: mov     edx, [eax+334h]
0x620249: push    1
0x62024B: mov     ecx, esi
0x62024D: call    edx
0x62024F: test    al, al
0x620251: jz      short loc_620272
0x620253: mov     eax, [esi]
0x620255: mov     edx, [eax+330h]
0x62025B: mov     ecx, esi
0x62025D: call    edx
0x62025F: test    eax, eax
0x620261: jz      short loc_620272
0x620263: cmp     [eax+15Ah], bl
0x620269: jnz     short loc_620272
0x62026B: mov     ecx, eax
0x62026D: call    sub_612CF0
0x620272: pop     edi
0x620273: mov     eax, esi
0x620275: pop     esi
0x620276: pop     ebx
0x620277: add     esp, 7Ch
0x62027A: retn
0x62027B: pop     edi
0x62027C: pop     esi
0x62027D: mov     eax, ebx
0x62027F: pop     ebx
0x620280: add     esp, 7Ch
0x620283: retn
