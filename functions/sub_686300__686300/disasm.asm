0x686300: sub     esp, 1Ch
0x686303: push    ebx
0x686304: mov     ebx, [esp+20h+arg_0]
0x686308: test    ebx, ebx
0x68630A: push    esi
0x68630B: mov     esi, ecx
0x68630D: jz      loc_686444
0x686313: mov     ecx, ebx; this
0x686315: call    MobileObject_GetCharProxy
0x68631A: test    eax, eax
0x68631C: jz      loc_686444
0x686322: fld     dword ptr ds:0A2FF44h
0x686328: push    ecx
0x686329: mov     ecx, ds:0B333C4h
0x68632F: fstp    [esp+28h+var_28]; float
0x686332: mov     eax, [ecx]
0x686334: mov     edx, [eax+174h]
0x68633A: call    edx
0x68633C: push    eax; int
0x68633D: mov     eax, [ebx]
0x68633F: mov     edx, [eax+174h]
0x686345: mov     ecx, ebx
0x686347: call    edx
0x686349: push    eax; int
0x68634A: call    sub_480520
0x68634F: add     esp, 0Ch
0x686352: test    eax, eax
0x686354: jge     loc_686444
0x68635A: mov     ecx, [ebx+30h]
0x68635D: mov     eax, [ebx+2Ch]
0x686360: mov     edx, [ebx+34h]
0x686363: push    ebp
0x686364: mov     [esp+28h+var_14], ecx
0x686368: push    edi
0x686369: mov     ecx, ebx
0x68636B: mov     [esp+2Ch+var_18], eax
0x68636F: mov     [esp+2Ch+var_10], edx
0x686373: call    sub_5E0660
0x686378: fmul    qword ptr ds:0A2FAA0h
0x68637E: lea     ecx, [esi+14h]
0x686381: xor     ebp, ebp
0x686383: fadd    [esp+2Ch+var_10]
0x686387: mov     [esp+2Ch+var_1C], ecx
0x68638B: fstp    [esp+2Ch+var_10]
0x68638F: call    sub_42B410
0x686394: mov     edi, eax
0x686396: test    edi, edi
0x686398: jz      loc_686442
0x68639E: mov     ecx, edi
0x6863A0: call    NiDX92DBufferData__GetSurfaceData
0x6863A5: mov     esi, eax
0x6863A7: test    esi, esi
0x6863A9: jz      loc_686442
0x6863AF: mov     ecx, esi
0x6863B1: call    sub_6899C0
0x6863B6: mov     ecx, [eax]
0x6863B8: mov     [esp+2Ch+var_C], ecx
0x6863BC: mov     edx, [eax+4]
0x6863BF: lea     ecx, [esp+2Ch+var_C]
0x6863C3: mov     [esp+2Ch+var_8], edx
0x6863C7: mov     eax, [eax+8]
0x6863CA: push    ecx
0x6863CB: mov     ecx, ebx
0x6863CD: mov     [esp+30h+var_4], eax
0x6863D1: call    sub_4D7E30
0x6863D6: fstp    [esp+2Ch+arg_0]
0x6863DA: fld     [esp+2Ch+arg_0]
0x6863DE: fcomp   qword ptr ds:0A6E6F8h
0x6863E4: fnstsw  ax
0x6863E6: test    ah, 5
0x6863E9: jp      short loc_686442
0x6863EB: mov     ecx, edi
0x6863ED: call    sub_68CA50
0x6863F2: test    al, al
0x6863F4: jnz     short loc_686442
0x6863F6: fld     [esp+2Ch+arg_0]
0x6863FA: fcomp   qword ptr ds:0A3F3D0h
0x686400: fnstsw  ax
0x686402: test    ah, 5
0x686405: jnp     short loc_68641D
0x686407: lea     edx, [esp+2Ch+var_C]
0x68640B: push    edx
0x68640C: lea     eax, [esp+30h+var_18]
0x686410: push    eax
0x686411: call    sub_6859A0
0x686416: add     esp, 8
0x686419: test    al, al
0x68641B: jz      short loc_686442
0x68641D: mov     ecx, [esp+2Ch+var_1C]
0x686421: push    edi
0x686422: call    sub_68C170
0x686427: mov     ecx, esi
0x686429: mov     edi, esi
0x68642B: call    NiDX92DBufferData__GetSurfaceData
0x686430: add     ebp, 1
0x686433: cmp     ebp, 2
0x686436: mov     esi, eax
0x686438: jge     short loc_686442
0x68643A: test    edi, edi
0x68643C: jnz     loc_6863A7
0x686442: pop     edi
0x686443: pop     ebp
0x686444: pop     esi
0x686445: pop     ebx
0x686446: add     esp, 1Ch
0x686449: retn    4
