0x809680: push    0FFFFFFFFh
0x809682: push    offset ??0SkinShader@@QAE@XZ_SEH
0x809687: mov     eax, large fs:0
0x80968D: push    eax
0x80968E: push    ecx
0x80968F: push    ebx
0x809690: push    ebp
0x809691: push    esi
0x809692: push    edi
0x809693: mov     eax, ds:0B30AACh
0x809698: xor     eax, esp
0x80969A: push    eax
0x80969B: lea     eax, [esp+24h+var_C]
0x80969F: mov     large fs:0, eax
0x8096A5: mov     ebp, ecx
0x8096A7: mov     [esp+24h+var_10], ebp
0x8096AB: mov     dword ptr [ebp+0], offset ??_7SkinShader@@6B@; const SkinShader::`vftable'
0x8096B2: mov     [esp+24h+var_4], 2
0x8096BA: lea     edi, [ebp+9Ch]
0x8096C0: mov     ebx, 14h
0x8096C5: mov     esi, [edi]
0x8096C7: test    esi, esi
0x8096C9: jz      short loc_8096ED
0x8096CB: lea     eax, [esi+4]
0x8096CE: push    eax; lpAddend
0x8096CF: call    dword ptr ds:0A2807Ch
0x8096D5: test    eax, eax
0x8096D7: jnz     short loc_8096E7
0x8096D9: test    esi, esi
0x8096DB: jz      short loc_8096E7
0x8096DD: mov     edx, [esi]
0x8096DF: mov     eax, [edx]
0x8096E1: push    1
0x8096E3: mov     ecx, esi
0x8096E5: call    eax
0x8096E7: mov     dword ptr [edi], 0
0x8096ED: add     edi, 4
0x8096F0: sub     ebx, 1
0x8096F3: jnz     short loc_8096C5
0x8096F5: add     ebp, 0ECh ; 'ì'
0x8096FB: mov     edi, ebp
0x8096FD: mov     ebx, 0Ah
0x809702: mov     esi, [edi]
0x809704: test    esi, esi
0x809706: jz      short loc_80972A
0x809708: lea     ecx, [esi+4]
0x80970B: push    ecx; lpAddend
0x80970C: call    dword ptr ds:0A2807Ch
0x809712: test    eax, eax
0x809714: jnz     short loc_809724
0x809716: test    esi, esi
0x809718: jz      short loc_809724
0x80971A: mov     edx, [esi]
0x80971C: mov     eax, [edx]
0x80971E: push    1
0x809720: mov     ecx, esi
0x809722: call    eax
0x809724: mov     dword ptr [edi], 0
0x80972A: add     edi, 4
0x80972D: sub     ebx, 1
0x809730: jnz     short loc_809702
0x809732: mov     esi, offset dword_B47718
0x809737: or      edi, 0FFFFFFFFh
0x80973A: lea     ebx, [ebx+0]
0x809740: mov     ecx, [esi]
0x809742: test    ecx, ecx
0x809744: jz      short loc_809756
0x809746: add     [ecx+60h], edi
0x809749: jnz     short loc_809750
0x80974B: call    sub_7604D0
0x809750: mov     dword ptr [esi], 0
0x809756: add     esi, 4
0x809759: cmp     esi, offset unk_B47768
0x80975F: jl      short loc_809740
0x809761: push    offset sub_7016A0; void (__thiscall *)(void *)
0x809766: push    0Ah; int
0x809768: push    4; unsigned int
0x80976A: push    ebp; void *
0x80976B: mov     byte ptr [esp+34h+var_4], 1
0x809770: call    $LN21
0x809775: mov     eax, [esp+24h+var_10]
0x809779: push    offset sub_7016A0; void (__thiscall *)(void *)
0x80977E: push    14h; int
0x809780: push    4; unsigned int
0x809782: add     eax, 9Ch ; 'œ'
0x809787: push    eax; void *
0x809788: mov     byte ptr [esp+34h+var_4], 0
0x80978D: call    $LN21
0x809792: mov     ecx, [esp+24h+var_10]; this
0x809796: mov     [esp+24h+var_4], edi
0x80979A: call    ??1ShadowLightShader@@UAE@XZ; ShadowLightShader::~ShadowLightShader(void)
0x80979F: mov     ecx, [esp+24h+var_C]
0x8097A3: mov     large fs:0, ecx
0x8097AA: pop     ecx
0x8097AB: pop     edi
0x8097AC: pop     esi
0x8097AD: pop     ebp
0x8097AE: pop     ebx
0x8097AF: add     esp, 10h
0x8097B2: retn
