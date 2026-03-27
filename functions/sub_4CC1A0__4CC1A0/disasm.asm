0x4CC1A0: sub     esp, 10h
0x4CC1A3: push    ebx
0x4CC1A4: push    esi
0x4CC1A5: push    1
0x4CC1A7: mov     esi, ecx
0x4CC1A9: call    sub_4C9B40
0x4CC1AE: test    eax, eax
0x4CC1B0: jz      short loc_4CC1BB
0x4CC1B2: lea     ebx, [eax+4]
0x4CC1B5: mov     [esp+18h+var_10], ebx
0x4CC1B9: jmp     short loc_4CC1C7
0x4CC1BB: mov     [esp+18h+var_10], 0
0x4CC1C3: mov     ebx, [esp+18h+var_10]
0x4CC1C7: test    byte ptr [esi+24h], 1
0x4CC1CB: jnz     loc_4CC532
0x4CC1D1: test    ebx, ebx
0x4CC1D3: jz      loc_4CC532
0x4CC1D9: fld     dword ptr ds:0A32048h
0x4CC1DF: push    ebp
0x4CC1E0: mov     ebp, [esp+1Ch+arg_8]
0x4CC1E4: fstp    [esp+1Ch+var_8]
0x4CC1E8: push    edi
0x4CC1E9: or      edi, 0FFFFFFFFh
0x4CC1EC: mov     [esp+20h+var_4], edi
0x4CC1F0: jmp     short loc_4CC1FA
0x4CC1F2: mov     ebx, [esp+20h+var_10]
0x4CC1F6: mov     edi, [esp+20h+var_4]
0x4CC1FA: mov     eax, [ebx]
0x4CC1FC: fldz
0x4CC1FE: test    eax, eax
0x4CC200: jz      loc_4CC322
0x4CC206: mov     ecx, [eax+8]
0x4CC209: shr     ecx, 5
0x4CC20C: test    cl, 1
0x4CC20F: jz      short loc_4CC21F
0x4CC211: mov     edx, [ebx+4]
0x4CC214: fstp    st
0x4CC216: mov     [esp+20h+var_10], edx
0x4CC21A: jmp     loc_4CC315
0x4CC21F: mov     ecx, [esp+20h+arg_4]
0x4CC223: fstp    [esp+20h+var_C]
0x4CC227: mov     eax, [eax+18h]
0x4CC22A: push    ecx
0x4CC22B: mov     ecx, eax
0x4CC22D: call    sub_4A4460
0x4CC232: mov     esi, eax
0x4CC234: test    esi, esi
0x4CC236: jz      loc_4CC30E
0x4CC23C: mov     edx, [esi]
0x4CC23E: mov     eax, [edx+1Ch]
0x4CC241: mov     ecx, esi
0x4CC243: call    eax
0x4CC245: test    al, al
0x4CC247: jz      loc_4CC30E
0x4CC24D: cmp     byte ptr [esi+4], 0
0x4CC251: jz      short loc_4CC267
0x4CC253: movzx   ecx, byte ptr [esi+6]
0x4CC257: cmp     ecx, edi
0x4CC259: jg      short loc_4CC26F
0x4CC25B: mov     edx, [ebx+4]
0x4CC25E: mov     [esp+20h+var_10], edx
0x4CC262: jmp     loc_4CC315
0x4CC267: test    edi, edi
0x4CC269: jge     loc_4CC30E
0x4CC26F: mov     ecx, [ebx]
0x4CC271: mov     edi, [ecx+1Ch]
0x4CC274: test    edi, edi
0x4CC276: jz      loc_4CC30E
0x4CC27C: lea     esp, [esp+0]
0x4CC280: mov     ebx, [edi]
0x4CC282: test    ebx, ebx
0x4CC284: jz      short loc_4CC2FD
0x4CC286: fldz
0x4CC288: fcomp   [esp+20h+var_C]
0x4CC28C: fnstsw  ax
0x4CC28E: test    ah, 5
0x4CC291: jnp     loc_4CC347
0x4CC297: mov     ecx, ebx
0x4CC299: call    TESObject_GetNextObject
0x4CC29E: test    eax, eax
0x4CC2A0: mov     [esp+20h+arg_8], eax
0x4CC2A4: fild    [esp+20h+arg_8]
0x4CC2A8: jge     short loc_4CC2B0
0x4CC2AA: fadd    dword ptr ds:0A2FC78h
0x4CC2B0: mov     edx, [esp+20h+arg_0]
0x4CC2B4: push    ecx
0x4CC2B5: fstp    [esp+24h+var_24]; float
0x4CC2B8: push    edx; int
0x4CC2B9: mov     ecx, ebx
0x4CC2BB: call    sub_4A74E0
0x4CC2C0: fstp    [esp+20h+arg_8]
0x4CC2C4: fld1
0x4CC2C6: fld     [esp+20h+arg_8]
0x4CC2CA: fcom    st(1)
0x4CC2CC: fnstsw  ax
0x4CC2CE: test    ah, 41h
0x4CC2D1: jnz     short loc_4CC2DF
0x4CC2D3: fstp    st
0x4CC2D5: fstp    [esp+20h+arg_8]
0x4CC2D9: fld     [esp+20h+arg_8]
0x4CC2DD: jmp     short loc_4CC2E1
0x4CC2DF: fstp    st(1)
0x4CC2E1: fld     [esp+20h+var_C]
0x4CC2E5: fcomp   st(1)
0x4CC2E7: fnstsw  ax
0x4CC2E9: test    ah, 41h
0x4CC2EC: jz      short loc_4CC2F4
0x4CC2EE: fstp    [esp+20h+var_C]
0x4CC2F2: jmp     short loc_4CC2F6
0x4CC2F4: fstp    st
0x4CC2F6: mov     edi, [edi+4]
0x4CC2F9: test    edi, edi
0x4CC2FB: jnz     short loc_4CC280
0x4CC2FD: fldz
0x4CC2FF: fcomp   [esp+20h+var_C]
0x4CC303: fnstsw  ax
0x4CC305: test    ah, 1
0x4CC308: jnz     short loc_4CC347
0x4CC30A: mov     ebx, [esp+20h+var_10]
0x4CC30E: mov     eax, [ebx+4]
0x4CC311: mov     [esp+20h+var_10], eax
0x4CC315: cmp     [esp+20h+var_10], 0
0x4CC31A: jnz     loc_4CC1F2
0x4CC320: fldz
0x4CC322: fld     [esp+20h+var_8]
0x4CC326: pop     edi
0x4CC327: fcom    st(1)
0x4CC329: pop     ebp
0x4CC32A: fnstsw  ax
0x4CC32C: test    ah, 5
0x4CC32F: jp      loc_4CC515
0x4CC335: fstp    st
0x4CC337: fstp    [esp+18h+var_8]
0x4CC33B: pop     esi
0x4CC33C: fld     [esp+14h+var_8]
0x4CC340: pop     ebx
0x4CC341: add     esp, 10h
0x4CC344: retn    0Ch
0x4CC347: cmp     byte ptr [esi+4], 0
0x4CC34B: jz      short loc_4CC35F
0x4CC34D: movzx   ecx, byte ptr [esi+6]
0x4CC351: fld     dword ptr ds:0A32048h
0x4CC357: fstp    [esp+20h+var_8]
0x4CC35B: mov     [esp+20h+var_4], ecx
0x4CC35F: mov     edx, [esi]
0x4CC361: mov     eax, [edx+0Ch]
0x4CC364: mov     ecx, esi
0x4CC366: call    eax
0x4CC368: cmp     eax, 2
0x4CC36B: jnz     short loc_4CC3CD
0x4CC36D: test    ebp, ebp
0x4CC36F: jz      short loc_4CC3CD
0x4CC371: mov     edx, [ebp+0]
0x4CC374: mov     eax, [edx+4]
0x4CC377: mov     ecx, ebp
0x4CC379: call    eax
0x4CC37B: test    eax, eax
0x4CC37D: jz      short loc_4CC3CD
0x4CC37F: mov     edx, [ebp+0]
0x4CC382: mov     eax, [edx]
0x4CC384: mov     ecx, ebp
0x4CC386: call    eax
0x4CC388: test    eax, eax
0x4CC38A: jnz     short loc_4CC3CD
0x4CC38C: mov     ecx, ds:0B33A98h
0x4CC392: mov     ecx, [ecx+0CD8h]
0x4CC398: mov     edx, [ecx]
0x4CC39A: mov     eax, [edx+8]
0x4CC39D: push    esi
0x4CC39E: call    eax
0x4CC3A0: mov     edx, [eax]
0x4CC3A2: push    0
0x4CC3A4: push    1
0x4CC3A6: mov     ecx, eax
0x4CC3A8: mov     eax, [edx+28h]
0x4CC3AB: push    ebp
0x4CC3AC: call    eax
0x4CC3AE: mov     ecx, eax
0x4CC3B0: call    sub_4A6860
0x4CC3B5: test    al, al
0x4CC3B7: jnz     loc_4CC46B
0x4CC3BD: mov     ecx, [esp+20h+var_10]
0x4CC3C1: mov     edx, [ecx+4]
0x4CC3C4: mov     [esp+20h+var_10], edx
0x4CC3C8: jmp     loc_4CC315
0x4CC3CD: mov     eax, [esi]
0x4CC3CF: mov     edx, [eax+0Ch]
0x4CC3D2: mov     ecx, esi
0x4CC3D4: call    edx
0x4CC3D6: cmp     eax, 6
0x4CC3D9: jnz     loc_4CC46B
0x4CC3DF: test    ebp, ebp
0x4CC3E1: jz      loc_4CC46B
0x4CC3E7: mov     eax, [ebp+0]
0x4CC3EA: mov     edx, [eax+4]
0x4CC3ED: mov     ecx, ebp
0x4CC3EF: call    edx
0x4CC3F1: test    eax, eax
0x4CC3F3: jz      short loc_4CC46B
0x4CC3F5: mov     eax, [ebp+0]
0x4CC3F8: mov     edx, [eax]
0x4CC3FA: mov     ecx, ebp
0x4CC3FC: call    edx
0x4CC3FE: cmp     eax, 1
0x4CC401: jnz     short loc_4CC46B
0x4CC403: mov     eax, ds:0B33A98h
0x4CC408: mov     ecx, [eax+0CD8h]
0x4CC40E: mov     edx, [ecx]
0x4CC410: mov     eax, [edx+18h]
0x4CC413: push    esi
0x4CC414: call    eax
0x4CC416: mov     edx, [ebp+0]
0x4CC419: mov     esi, eax
0x4CC41B: mov     eax, [edx+0Ch]
0x4CC41E: mov     ecx, ebp
0x4CC420: call    eax
0x4CC422: test    eax, eax
0x4CC424: jz      short loc_4CC435
0x4CC426: mov     edx, [ebp+0]
0x4CC429: mov     eax, [edx+0Ch]
0x4CC42C: mov     ecx, ebp
0x4CC42E: call    eax
0x4CC430: mov     ebx, [eax+0Ch]
0x4CC433: jmp     short loc_4CC438
0x4CC435: or      ebx, 0FFFFFFFFh
0x4CC438: mov     edx, [ebp+0]
0x4CC43B: mov     eax, [edx+4]
0x4CC43E: mov     ecx, ebp
0x4CC440: call    eax
0x4CC442: mov     eax, [eax+0Ch]
0x4CC445: mov     edx, [esi]
0x4CC447: push    ebx
0x4CC448: push    eax
0x4CC449: mov     eax, [edx+24h]
0x4CC44C: mov     ecx, esi
0x4CC44E: call    eax
0x4CC450: mov     ecx, eax
0x4CC452: call    sub_4A6070
0x4CC457: test    eax, eax
0x4CC459: jnz     short loc_4CC46B
0x4CC45B: mov     ecx, [esp+20h+var_10]
0x4CC45F: mov     edx, [ecx+4]
0x4CC462: mov     [esp+20h+var_10], edx
0x4CC466: jmp     loc_4CC315
0x4CC46B: test    edi, edi
0x4CC46D: jz      short loc_4CC4DC
0x4CC46F: nop
0x4CC470: mov     esi, [edi]
0x4CC472: test    esi, esi
0x4CC474: jz      short loc_4CC4DC
0x4CC476: mov     ecx, esi
0x4CC478: call    TESObject_GetNextObject
0x4CC47D: test    eax, eax
0x4CC47F: mov     [esp+20h+arg_8], eax
0x4CC483: fild    [esp+20h+arg_8]
0x4CC487: jge     short loc_4CC48F
0x4CC489: fadd    dword ptr ds:0A2FC78h
0x4CC48F: mov     eax, [esp+20h+arg_0]
0x4CC493: push    ecx
0x4CC494: fstp    [esp+24h+var_24]; float
0x4CC497: push    eax; int
0x4CC498: mov     ecx, esi
0x4CC49A: call    sub_4A74E0
0x4CC49F: fstp    [esp+20h+arg_8]
0x4CC4A3: fld1
0x4CC4A5: fld     [esp+20h+arg_8]
0x4CC4A9: fcom    st(1)
0x4CC4AB: fnstsw  ax
0x4CC4AD: test    ah, 41h
0x4CC4B0: jnz     short loc_4CC4BE
0x4CC4B2: fstp    st
0x4CC4B4: fstp    [esp+20h+arg_8]
0x4CC4B8: fld     [esp+20h+arg_8]
0x4CC4BC: jmp     short loc_4CC4C0
0x4CC4BE: fstp    st(1)
0x4CC4C0: fld     [esp+20h+var_C]
0x4CC4C4: fcomp   st(1)
0x4CC4C6: fnstsw  ax
0x4CC4C8: test    ah, 41h
0x4CC4CB: jz      short loc_4CC4D3
0x4CC4CD: fstp    [esp+20h+var_C]
0x4CC4D1: jmp     short loc_4CC4D5
0x4CC4D3: fstp    st
0x4CC4D5: mov     edi, [edi+4]
0x4CC4D8: test    edi, edi
0x4CC4DA: jnz     short loc_4CC470
0x4CC4DC: fld     [esp+20h+var_8]
0x4CC4E0: fld     [esp+20h+var_C]
0x4CC4E4: fcom    st(1)
0x4CC4E6: fnstsw  ax
0x4CC4E8: fstp    st(1)
0x4CC4EA: test    ah, 41h
0x4CC4ED: jz      short loc_4CC503
0x4CC4EF: mov     ecx, [esp+20h+var_10]
0x4CC4F3: fstp    [esp+20h+var_8]
0x4CC4F7: mov     edx, [ecx+4]
0x4CC4FA: mov     [esp+20h+var_10], edx
0x4CC4FE: jmp     loc_4CC315
0x4CC503: mov     ecx, [esp+20h+var_10]
0x4CC507: fstp    st
0x4CC509: mov     edx, [ecx+4]
0x4CC50C: mov     [esp+20h+var_10], edx
0x4CC510: jmp     loc_4CC315
0x4CC515: fld1
0x4CC517: fcompp
0x4CC519: fnstsw  ax
0x4CC51B: test    ah, 5
0x4CC51E: jnp     loc_4CC337
0x4CC524: pop     esi
0x4CC525: fstp    st
0x4CC527: fld     [esp+14h+var_8]
0x4CC52B: pop     ebx
0x4CC52C: add     esp, 10h
0x4CC52F: retn    0Ch
0x4CC532: fldz
0x4CC534: pop     esi
0x4CC535: pop     ebx
0x4CC536: add     esp, 10h
0x4CC539: retn    0Ch
