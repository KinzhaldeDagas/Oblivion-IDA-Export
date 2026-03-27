0x681182: cmp     byte ptr [esi+0Ch], 5; jumptable 0068110C default case
0x681186: jz      loc_6812A4
0x68118C: mov     ecx, [esi+2Ch]
0x68118F: test    ecx, ecx
0x681191: jz      loc_68147B
0x681197: cmp     ecx, edi
0x681199: jz      loc_68147B
0x68119F: xor     bl, bl
0x6811A1: mov     byte ptr [esp+arg_8+2], bl
0x6811A5: mov     byte ptr [esp+arg_8+3], bl
0x6811A9: call    sub_5E05B0
0x6811AE: test    al, al
0x6811B0: jz      short loc_6811F9
0x6811B2: mov     edx, [edi]
0x6811B4: mov     eax, [edx+1E0h]
0x6811BA: mov     ecx, edi
0x6811BC: mov     byte ptr [esp+arg_8+3], 1
0x6811C1: call    eax
0x6811C3: fstp    [esp+arg_10]
0x6811C7: mov     ecx, [esi+2Ch]
0x6811CA: mov     edx, [ecx]
0x6811CC: mov     eax, [edx+1E0h]
0x6811D2: call    eax
0x6811D4: fsubr   [esp+arg_10]
0x6811D8: fstp    dword ptr [esp+arg_10]
0x6811DC: fld     dword ptr [esp+arg_10]
0x6811E0: fabs
0x6811E2: fstp    dword ptr [esp+arg_10]
0x6811E6: fld     dword ptr [esp+arg_10]
0x6811EA: fcomp   dword ptr ds:0A74AE0h
0x6811F0: fnstsw  ax
0x6811F2: test    ah, 41h
0x6811F5: jnz     short loc_6811F9
0x6811F7: mov     bl, 1
0x6811F9: mov     ecx, edi
0x6811FB: call    sub_5E0380
0x681200: test    eax, eax
0x681202: jz      short loc_68123B
0x681204: movsx   eax, byte ptr [eax+20h]
0x681208: sub     eax, 1
0x68120B: jz      short loc_681222
0x68120D: sub     eax, 1
0x681210: jnz     short loc_68123B
0x681212: mov     ecx, edi
0x681214: call    sub_5E2E00
0x681219: cmp     eax, [esi+2Ch]
0x68121C: jnz     short loc_68123B
0x68121E: xor     bl, bl
0x681220: jmp     short loc_681236
0x681222: mov     ecx, edi
0x681224: call    sub_5E2E00
0x681229: cmp     eax, [esi+2Ch]
0x68122C: jnz     short loc_68123B
0x68122E: cmp     byte ptr [esp+arg_8+3], 0
0x681233: setz    bl
0x681236: mov     byte ptr [esp+arg_8+2], 1
0x68123B: mov     ecx, edi
0x68123D: call    sub_5E0510
0x681242: test    al, al
0x681244: jnz     short loc_6812B9
0x681246: mov     edx, [edi]
0x681248: mov     eax, [edx+334h]
0x68124E: push    1
0x681250: mov     ecx, edi
0x681252: call    eax
0x681254: test    al, al
0x681256: jnz     short loc_6812B9
0x681258: test    bl, bl
0x68125A: jz      short loc_6812B9
0x68125C: cmp     ds:0B333B4h, edi
0x681262: jnz     short loc_68129B
0x681264: mov     ecx, [esi+2Ch]
0x681267: mov     edx, [ecx]
0x681269: mov     eax, [edx+0D4h]
0x68126F: call    eax
0x681271: mov     edx, [edi]
0x681273: push    eax
0x681274: mov     eax, [edx+0D4h]
0x68127A: mov     ecx, edi
0x68127C: call    eax
0x68127E: push    eax
0x68127F: lea     ecx, [esp+0Ch+Format]
0x681283: push    offset aActorSWaitingF; "Actor '%s' waiting for Actor '%s'."
0x681288: push    ecx
0x681289: call    __sprintf
0x68128E: lea     edx, [esp+14h+Format]
0x681292: push    edx; Format
0x681293: call    Interface_ConsolePrint
0x681298: add     esp, 14h
0x68129B: fldz
0x68129D: mov     byte ptr [esi+0Ch], 5
0x6812A1: fstp    dword ptr [esi+1Ch]
0x6812A4: push    3Fh ; '?'
0x6812A6: mov     ecx, edi
0x6812A8: call    sub_5E05F0
0x6812AD: fldz
0x6812AF: fstp    dword ptr [esi+10h]
0x6812B2: mov     al, 1
0x6812B4: jmp     loc_68147D
0x6812B9: mov     ecx, [esi+2Ch]
0x6812BC: mov     eax, [ecx]
0x6812BE: mov     edx, [eax+334h]
0x6812C4: push    1
0x6812C6: call    edx
0x6812C8: test    al, al
0x6812CA: jnz     loc_68147B
0x6812D0: mov     ecx, [edi+58h]
0x6812D3: mov     eax, [ecx]
0x6812D5: mov     edx, [eax+410h]
0x6812DB: mov     bl, 1
0x6812DD: call    edx
0x6812DF: test    eax, eax
0x6812E1: jz      short loc_68131B
0x6812E3: mov     ecx, [esi+2Ch]
0x6812E6: add     ecx, 2Ch ; ','
0x6812E9: push    ecx
0x6812EA: lea     ecx, [esp+0Ch+arg_8]
0x6812EE: push    ecx
0x6812EF: mov     ecx, eax
0x6812F1: call    sub_68B3F0
0x6812F6: mov     ecx, eax
0x6812F8: call    sub_4121A0
0x6812FD: fldz
0x6812FF: lea     ecx, [esp+8+arg_8]
0x681303: fstp    dword ptr [esp+8+arg_10]
0x681307: call    sub_404C90
0x68130C: fcomp   qword ptr ds:0A309F0h
0x681312: fnstsw  ax
0x681314: test    ah, 41h
0x681317: jnz     short loc_68131B
0x681319: xor     bl, bl
0x68131B: cmp     [esp+8+arg_2], 0
0x681320: jnz     loc_68147B
0x681326: cmp     [esp+8+arg_3], 0
0x68132B: jnz     loc_68147B
0x681331: test    bl, bl
0x681333: jnz     loc_68147B
0x681339: cmp     ds:0B333B4h, edi
0x68133F: jnz     short loc_681378
0x681341: mov     ecx, [esi+2Ch]
0x681344: mov     edx, [ecx]
0x681346: mov     eax, [edx+0D4h]
0x68134C: call    eax
0x68134E: mov     edx, [edi]
0x681350: push    eax
0x681351: mov     eax, [edx+0D4h]
0x681357: mov     ecx, edi
0x681359: call    eax
0x68135B: push    eax
0x68135C: lea     ecx, [esp+10h+arg_20]
0x681360: push    offset aActorSAnglingA; "Actor '%s' angling away from Actor '%s'"...
0x681365: push    ecx
0x681366: call    __sprintf
0x68136B: lea     edx, [esp+18h+arg_20]
0x68136F: push    edx; Format
0x681370: call    Interface_ConsolePrint
0x681375: add     esp, 14h
0x681378: mov     eax, [edi]
0x68137A: mov     edx, [eax+174h]
0x681380: push    ebp
0x681381: mov     ebp, [esi+2Ch]
0x681384: mov     ecx, edi
0x681386: call    edx
0x681388: mov     edx, [ebp+0]
0x68138B: push    eax
0x68138C: lea     eax, [esp+10h+arg_10+4]
0x681390: push    eax
0x681391: mov     eax, [edx+174h]
0x681397: mov     ecx, ebp
0x681399: call    eax
0x68139B: mov     ecx, eax
0x68139D: call    sub_4121A0
0x6813A2: lea     ecx, [esp+0Ch+arg_10+4]
0x6813A6: push    ecx
0x6813A7: call    sub_683CB0
0x6813AC: fstp    [esp+10h+arg_8]
0x6813B0: fld     dword ptr ds:0A30634h
0x6813B6: add     esp, 4
0x6813B9: fstp    [esp+0Ch+arg_4]
0x6813BD: mov     byte ptr [esi+0Ch], 3
0x6813C1: fld     [esp+0Ch+arg_8]
0x6813C5: pop     ebp
0x6813C6: fld     dword ptr [esi+18h]
0x6813C9: fcomp   st(1)
0x6813CB: fnstsw  ax
0x6813CD: fld1
0x6813CF: test    ah, 41h
0x6813D2: jnz     short loc_6813DC
0x6813D4: fst     [esp+8+arg_4]
0x6813D8: mov     byte ptr [esi+0Ch], 4
0x6813DC: fld     dword ptr [esi+18h]
0x6813DF: fsubp   st(2), st
0x6813E1: fxch    st(1)
0x6813E3: fstp    [esp+8+arg_8]
0x6813E7: fld     [esp+8+arg_8]
0x6813EB: fabs
0x6813ED: fstp    [esp+8+arg_8]
0x6813F1: fld     [esp+8+arg_8]
0x6813F5: fcomp   qword ptr ds:0A3D5B8h
0x6813FB: fnstsw  ax
0x6813FD: test    ah, 41h
0x681400: jnz     short loc_681414
0x681402: fld     [esp+8+arg_4]
0x681406: mov     byte ptr [esi+0Ch], 3
0x68140A: fmul    qword ptr ds:0A3D360h
0x681410: fstp    [esp+8+arg_4]
0x681414: mov     ecx, [esi+2Ch]
0x681417: fstp    [esp+8+arg_8]
0x68141B: call    sub_5E3290
0x681420: test    al, al
0x681422: jz      short loc_68142E
0x681424: fld     dword ptr ds:0A35AA4h
0x68142A: fstp    [esp+8+arg_8]
0x68142E: fld     [esp+8+arg_4]
0x681432: push    ecx
0x681433: fmul    qword ptr ds:0A74A88h
0x681439: mov     ecx, esi
0x68143B: fmul    [esp+0Ch+arg_8]
0x68143F: fadd    dword ptr [esi+18h]
0x681442: fstp    [esp+0Ch+arg_4]
0x681446: fld     [esp+0Ch+arg_4]
0x68144A: fstp    [esp+0Ch+var_C]; float
0x68144D: call    sub_680E70
0x681452: fld     [esp+8+arg_4]
0x681456: mov     ecx, offset flt_B3A4A8
0x68145B: fstp    dword ptr [esi+10h]
0x68145E: call    GameSetting_GetSafeFloatPointer
0x681463: fld     dword ptr [eax]
0x681465: mov     al, 1
0x681467: fmul    qword ptr ds:0A2FAA0h
0x68146D: fmul    [esp+8+arg_8]
0x681471: fstp    dword ptr [esi+20h]
0x681474: fldz
0x681476: fstp    dword ptr [esi+1Ch]
0x681479: jmp     short loc_68147D
0x68147B: xor     al, al
0x68147D: mov     ecx, [esp+4+arg_128]
0x681484: pop     edi
0x681485: pop     esi
0x681486: pop     ebx
0x681487: xor     ecx, esp
0x681489: call    @__security_check_cookie@4; __security_check_cookie(x)
0x68148E: add     esp, 128h
0x681494: retn    4
