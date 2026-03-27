0x5093B0: push    ecx
0x5093B1: mov     ecx, [esp+4+l]
0x5093B5: fldz
0x5093B7: mov     edx, [esp+4+arg_10]
0x5093BB: fstp    dword ptr [esp+4+var_4]
0x5093BE: push    esi
0x5093BF: mov     esi, [esp+8+a4]
0x5093C3: lea     eax, [esp+8+var_4]
0x5093C7: push    eax; UInt16
0x5093C8: mov     eax, [esp+0Ch+arg_C]
0x5093CC: push    ecx; l
0x5093CD: mov     ecx, [esp+10h+a3]
0x5093D1: push    edx; a6
0x5093D2: mov     edx, [esp+14h+arg_4]
0x5093D6: push    eax; a5
0x5093D7: mov     eax, [esp+18h+a1]
0x5093DB: push    esi; a4
0x5093DC: push    ecx; a3
0x5093DD: push    edx; a2
0x5093DE: push    eax; a1
0x5093DF: call    Script_ExtractArgs
0x5093E4: add     esp, 20h
0x5093E7: test    al, al
0x5093E9: jnz     short loc_5093EE
0x5093EB: pop     esi
0x5093EC: pop     ecx
0x5093ED: retn
0x5093EE: test    esi, esi
0x5093F0: jz      loc_509485
0x5093F6: fld     dword ptr ds:0A379B4h
0x5093FC: fld     dword ptr [esp+8+var_4]
0x509400: fcom    st(1)
0x509402: fnstsw  ax
0x509404: test    ah, 41h
0x509407: jnz     short loc_509411
0x509409: fstp    st
0x50940B: fstp    dword ptr [esp+8+var_4]
0x50940F: jmp     short loc_50942C
0x509411: fstp    st(1)
0x509413: fld     dword ptr ds:0A3D65Ch
0x509419: fcom    st(1)
0x50941B: fnstsw  ax
0x50941D: fstp    st(1)
0x50941F: test    ah, 41h
0x509422: jnz     short loc_50942A
0x509424: fstp    dword ptr [esp+8+var_4]
0x509428: jmp     short loc_50942C
0x50942A: fstp    st
0x50942C: fld     dword ptr [esp+8+var_4]
0x509430: push    ecx
0x509431: mov     ecx, esi
0x509433: fstp    [esp+0Ch+var_C]; float
0x509436: call    sub_4DB520
0x50943B: push    0; int
0x50943D: push    offset ??_R0?AVMobileObject@@@8; struct TypeDescriptor *
0x509442: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x509447: push    0; int
0x509449: push    esi; void *
0x50944A: call    OblivionDynamicCast
0x50944F: add     esp, 14h
0x509452: test    eax, eax
0x509454: jz      short loc_509477
0x509456: push    edi
0x509457: mov     ecx, eax; this
0x509459: call    MobileObject_GetCharProxy
0x50945E: mov     edi, eax
0x509460: test    edi, edi
0x509462: jz      short loc_509476
0x509464: mov     edx, [esi]
0x509466: mov     eax, [edx+0ECh]
0x50946C: mov     ecx, esi
0x50946E: call    eax
0x509470: fstp    dword ptr [edi+334h]
0x509476: pop     edi
0x509477: mov     edx, [esi]
0x509479: mov     eax, [edx+90h]
0x50947F: push    1
0x509481: mov     ecx, esi
0x509483: call    eax
0x509485: mov     al, 1
0x509487: pop     esi
0x509488: pop     ecx
0x509489: retn
