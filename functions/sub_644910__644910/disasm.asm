0x644910: fld     dword ptr ds:0A30634h
0x644916: sub     esp, 18h
0x644919: push    ebx
0x64491A: push    ebp
0x64491B: push    esi
0x64491C: push    edi; int
0x64491D: mov     edi, [esp+28h+arg_0]
0x644921: push    ecx
0x644922: fstp    [esp+2Ch+var_30+4]; float
0x644925: mov     esi, ecx
0x644927: mov     ecx, [esi+8]
0x64492A: push    0; char
0x64492C: push    edi; int
0x64492D: call    sub_566DC0
0x644932: test    al, al
0x644934: jnz     loc_644A53
0x64493A: cmp     dword ptr [esi+34h], 0
0x64493E: jnz     short loc_64498E
0x644940: mov     ecx, [esi+8]
0x644943: mov     ebp, [esi]
0x644945: push    edi
0x644946: lea     eax, [esp+2Ch+var_18]
0x64494A: push    eax
0x64494B: call    sub_566B30
0x644950: mov     ecx, [esi+8]
0x644953: push    edi
0x644954: mov     ebx, eax
0x644956: call    sub_566940
0x64495B: mov     ecx, [esi+8]
0x64495E: push    eax
0x64495F: push    edi
0x644960: call    sub_566A40
0x644965: mov     ecx, [ebx]
0x644967: mov     edx, [ebx+4]
0x64496A: push    eax
0x64496B: sub     esp, 0Ch
0x64496E: mov     eax, esp
0x644970: mov     [eax], ecx
0x644972: mov     ecx, [ebx+8]
0x644975: mov     [eax+4], edx
0x644978: mov     edx, [ebp+3DCh]
0x64497E: mov     [eax+8], ecx
0x644981: push    edi
0x644982: mov     ecx, esi
0x644984: call    edx
0x644986: test    al, al
0x644988: jz      loc_644A5A
0x64498E: push    3Ah ; ':'; a1
0x644990: call    TESForm_LookupByFormID
0x644995: add     esp, 4
0x644998: mov     ecx, offset TimeGlobals
0x64499D: mov     ebx, eax
0x64499F: call    TimeGlobals_GetGameHour
0x6449A4: fstp    [esp+28h+arg_0]
0x6449A8: fld     [esp+28h+arg_0]
0x6449AC: mov     ecx, edi; this
0x6449AE: fstp    [esp+28h+var_18]
0x6449B2: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x6449B7: fcomp   [esp+28h+var_18]
0x6449BB: fnstsw  ax
0x6449BD: test    ah, 41h
0x6449C0: jnz     short loc_6449D0
0x6449C2: fld     [esp+28h+arg_0]
0x6449C6: fadd    qword ptr ds:0A2F920h
0x6449CC: fstp    [esp+28h+arg_0]
0x6449D0: fld     [esp+28h+arg_0]
0x6449D4: mov     ecx, edi; this
0x6449D6: fstp    [esp+28h+var_18]
0x6449DA: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x6449DF: fsubr   [esp+28h+var_18]
0x6449E3: mov     ecx, [esi+8]
0x6449E6: push    1
0x6449E8: push    edi
0x6449E9: fstp    dword ptr [esp+30h+var_18]
0x6449ED: fld     dword ptr [ebx+24h]
0x6449F0: mov     ebx, [esi]
0x6449F2: fstp    [esp+30h+arg_0]
0x6449F6: call    sub_5677B0
0x6449FB: sub     esp, 8
0x6449FE: fstp    [esp+30h+var_30+4]
0x644A02: mov     ecx, [esi+8]
0x644A05: fld     [esp+30h+arg_0]
0x644A09: fdivr   qword ptr ds:0A2F938h
0x644A0F: fmul    dword ptr [esp+30h+var_18]
0x644A13: fstp    [esp+30h+arg_0]
0x644A17: fld     [esp+30h+arg_0]
0x644A1B: fstp    [esp+30h+var_30]
0x644A1E: push    edi
0x644A1F: call    sub_566940
0x644A24: mov     ecx, [esi+8]
0x644A27: push    eax
0x644A28: push    edi
0x644A29: call    sub_566A40
0x644A2E: mov     ecx, [esi+8]
0x644A31: push    eax
0x644A32: push    edi
0x644A33: lea     eax, [esp+3Ch+var_C]
0x644A37: push    eax
0x644A38: call    sub_566B30
0x644A3D: mov     edx, [ebx+418h]
0x644A43: push    eax
0x644A44: push    edi
0x644A45: mov     ecx, esi
0x644A47: call    edx
0x644A49: pop     edi
0x644A4A: pop     esi
0x644A4B: pop     ebp
0x644A4C: pop     ebx
0x644A4D: add     esp, 18h
0x644A50: retn    4
0x644A53: mov     ecx, edi; int
0x644A55: call    sub_5EAE70
0x644A5A: pop     edi
0x644A5B: pop     esi
0x644A5C: pop     ebp
0x644A5D: pop     ebx
0x644A5E: add     esp, 18h
0x644A61: retn    4
