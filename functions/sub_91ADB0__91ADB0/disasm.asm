0x91ADB0: push    ebp
0x91ADB1: mov     ebp, esp
0x91ADB3: and     esp, 0FFFFFFF0h
0x91ADB6: sub     esp, 2D4h
0x91ADBC: mov     eax, ds:0B30AACh
0x91ADC1: mov     [esp+2D4h+var_4], eax
0x91ADC8: mov     eax, [ebp+arg_0]
0x91ADCB: mov     edx, [eax+14h]
0x91ADCE: test    edx, edx
0x91ADD0: push    ebx
0x91ADD1: push    esi
0x91ADD2: push    edi
0x91ADD3: mov     [esp+2E0h+var_2C0], ecx
0x91ADD7: jz      loc_91B0F7
0x91ADDD: mov     edi, [eax+8]
0x91ADE0: mov     edx, [ecx+0Ch]
0x91ADE3: xor     eax, eax
0x91ADE5: test    edx, edx
0x91ADE7: jle     loc_91B0F7
0x91ADED: mov     esi, [ecx+8]
0x91ADF0: mov     ebx, [esi]
0x91ADF2: cmp     [ebx], edi
0x91ADF4: jz      short loc_91AE13
0x91ADF6: inc     eax
0x91ADF7: add     esi, 4
0x91ADFA: cmp     eax, edx
0x91ADFC: jl      short loc_91ADF0
0x91ADFE: mov     ecx, [esp+2E0h+var_4]
0x91AE05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x91AE0A: pop     edi
0x91AE0B: pop     esi
0x91AE0C: pop     ebx
0x91AE0D: mov     esp, ebp
0x91AE0F: pop     ebp
0x91AE10: retn    4
0x91AE13: xor     ebx, ebx
0x91AE15: cmp     eax, ebx
0x91AE17: jl      loc_91B0F7
0x91AE1D: mov     ecx, [ecx+8]
0x91AE20: mov     edx, [ecx+eax*4]
0x91AE23: lea     ecx, [esp+2E0h+var_2AC]
0x91AE27: mov     [esp+2E0h+var_2BC], edx
0x91AE2B: mov     [esp+2E0h+var_2CC], ebx
0x91AE2F: mov     [esp+2E0h+var_2C8], ebx
0x91AE33: mov     [esp+2E0h+var_2C4], 80000000h
0x91AE3B: call    sub_94A520
0x91AE40: lea     eax, [esp+2E0h+var_2AC]
0x91AE44: push    eax
0x91AE45: lea     ecx, [esp+2E4h+var_2A4]
0x91AE49: call    sub_94A530
0x91AE4E: mov     edi, [ebp+arg_0]
0x91AE51: mov     edx, [edi+14h]
0x91AE54: lea     ecx, [esp+2E0h+var_2CC]
0x91AE58: push    ecx
0x91AE59: push    edx
0x91AE5A: lea     ecx, [esp+2E8h+var_2A4]
0x91AE5E: call    sub_94B7E0
0x91AE63: mov     esi, [esp+2E0h+var_2C8]
0x91AE67: dec     esi
0x91AE68: cmp     esi, ebx
0x91AE6A: jl      loc_91AEF2
0x91AE70: mov     ebx, 6
0x91AE75: mov     eax, [esp+2E0h+var_2CC]
0x91AE79: mov     eax, [eax+esi*4]
0x91AE7C: cmp     [eax+54h], ebx
0x91AE7F: jnz     short loc_91AEEF
0x91AE81: mov     ecx, [eax+50h]
0x91AE84: test    ecx, ecx
0x91AE86: jnz     short loc_91AEEF
0x91AE88: push    ecx
0x91AE89: mov     eax, esp
0x91AE8B: push    200h
0x91AE90: lea     ecx, [esp+2E8h+var_208]
0x91AE97: push    ecx
0x91AE98: lea     ecx, [esp+2ECh+var_2B8]
0x91AE9C: mov     byte ptr [eax], 1
0x91AE9F: call    sub_8BBFB0
0x91AEA4: push    offset aUnableToBuildD; "Unable to build display geometry from h"...
0x91AEA9: lea     ecx, [esp+2E4h+var_2B8]
0x91AEAD: call    sub_8BBDB0
0x91AEB2: mov     ecx, ds:0BA7FB0h
0x91AEB8: mov     edx, [ecx]
0x91AEBA: push    0A8h ; '¨'
0x91AEBF: push    offset a_Visualdebugge; ".\\visualdebugger\\viewer\\hkSweptTrans"...
0x91AEC4: lea     eax, [esp+2E8h+var_208]
0x91AECB: push    eax
0x91AECC: push    0FFFFFFFFh
0x91AECE: push    0
0x91AED0: call    dword ptr [edx+8]
0x91AED3: lea     ecx, [esp+2E0h+var_2B8]
0x91AED7: call    sub_8BC000
0x91AEDC: mov     eax, [esp+2E0h+var_2C8]
0x91AEE0: mov     ecx, [esp+2E0h+var_2CC]
0x91AEE4: dec     eax
0x91AEE5: mov     [esp+2E0h+var_2C8], eax
0x91AEE9: mov     edx, [ecx+eax*4]
0x91AEEC: mov     [ecx+esi*4], edx
0x91AEEF: dec     esi
0x91AEF0: jns     short loc_91AE75
0x91AEF2: mov     eax, [esp+2E0h+var_2C8]
0x91AEF6: test    eax, eax
0x91AEF8: jle     loc_91B08F
0x91AEFE: mov     al, [edi+91h]
0x91AF04: test    al, al
0x91AF06: jnz     loc_91B08F
0x91AF0C: mov     esi, [esp+2E0h+var_2BC]
0x91AF10: mov     eax, [esi+0Ch]
0x91AF13: mov     ecx, [esi+8]
0x91AF16: add     esi, 4
0x91AF19: and     eax, 3FFFFFFFh
0x91AF1E: cmp     ecx, eax
0x91AF20: lea     ebx, [edi+15h]
0x91AF23: jnz     short loc_91AF30
0x91AF25: push    4
0x91AF27: push    esi
0x91AF28: call    sub_8A6EE0
0x91AF2D: add     esp, 8
0x91AF30: mov     ecx, [esi+4]
0x91AF33: mov     edx, [esi]
0x91AF35: mov     [edx+ecx*4], ebx
0x91AF38: inc     dword ptr [esi+4]
0x91AF3B: mov     edi, [edi+50h]
0x91AF3E: add     edi, 50h ; 'P'
0x91AF41: lea     eax, [edi+20h]
0x91AF44: push    eax
0x91AF45: lea     ecx, [esp+2E4h+var_294+4]
0x91AF49: call    sub_8B1DD0
0x91AF4E: movaps  xmm0, xmmword ptr [edi+40h]
0x91AF52: movaps  xmm2, [esp+2E0h+anonymous_0]
0x91AF57: movaps  xmm3, xmmword ptr [esp+2E0h+var_284+4]
0x91AF5C: mov     ecx, [ebp+arg_0]
0x91AF5F: movaps  xmm1, xmm0
0x91AF62: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x91AF66: mulps   xmm2, xmm1
0x91AF69: movaps  xmm1, xmm0
0x91AF6C: shufps  xmm1, xmm0, 55h ; 'U'
0x91AF70: mulps   xmm3, xmm1
0x91AF73: movaps  xmm1, xmm0
0x91AF76: shufps  xmm1, xmm0, 0
0x91AF7A: movaps  xmm0, [esp+2E0h+var_294+4]
0x91AF7F: mulps   xmm0, xmm1
0x91AF82: movaps  xmm1, xmmword ptr [edi]
0x91AF85: mov     edi, [ecx+50h]
0x91AF88: add     edi, 50h ; 'P'
0x91AF8B: addps   xmm0, xmm3
0x91AF8E: lea     edx, [edi+30h]
0x91AF91: addps   xmm0, xmm2
0x91AF94: subps   xmm1, xmm0
0x91AF97: push    edx
0x91AF98: lea     ecx, [esp+94h]
0x91AF9F: movaps  [esp+2E4h+anonymous_1], xmm1
0x91AFA7: call    sub_8B1DD0
0x91AFAC: movaps  xmm0, xmmword ptr [edi+40h]
0x91AFB0: movaps  xmm2, [esp+2E0h+anonymous_2]
0x91AFB8: movaps  xmm3, xmmword ptr [esp+2E0h+var_244+4]
0x91AFC0: mov     edx, ds:0BA8420h
0x91AFC6: movaps  xmm1, xmm0
0x91AFC9: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x91AFCD: mulps   xmm2, xmm1
0x91AFD0: movaps  xmm1, xmm0
0x91AFD3: shufps  xmm1, xmm0, 55h ; 'U'
0x91AFD7: mulps   xmm3, xmm1
0x91AFDA: movaps  xmm1, xmm0
0x91AFDD: shufps  xmm1, xmm0, 0
0x91AFE1: movaps  xmm0, xmmword ptr [esp+90h]
0x91AFE9: push    edx
0x91AFEA: mulps   xmm0, xmm1
0x91AFED: movaps  xmm1, xmmword ptr [edi+10h]
0x91AFF1: mov     edi, [esp+2E4h+var_2C0]
0x91AFF5: mov     ecx, [edi-10h]
0x91AFF8: push    ebx
0x91AFF9: lea     edx, [esp+2E8h+var_294+4]
0x91AFFD: addps   xmm0, xmm3
0x91B000: push    edx
0x91B001: addps   xmm0, xmm2
0x91B004: subps   xmm1, xmm0
0x91B007: lea     edx, [esp+2ECh+var_2CC]
0x91B00B: movaps  [esp+2ECh+var_220], xmm1
0x91B013: mov     eax, [ecx]
0x91B015: push    edx
0x91B016: call    dword ptr [eax+4]
0x91B019: mov     edx, ds:0BA8420h
0x91B01F: mov     ecx, [edi-10h]
0x91B022: mov     eax, [ecx]
0x91B024: push    edx
0x91B025: mov     edx, ds:0BA8428h
0x91B02B: push    ebx
0x91B02C: push    edx
0x91B02D: call    dword ptr [eax+8]
0x91B030: mov     eax, [esi+8]
0x91B033: mov     ebx, [ebp+arg_0]
0x91B036: mov     ecx, [esi+4]
0x91B039: and     eax, 3FFFFFFFh
0x91B03E: add     ebx, 16h
0x91B041: cmp     ecx, eax
0x91B043: jnz     short loc_91B050
0x91B045: push    4
0x91B047: push    esi
0x91B048: call    sub_8A6EE0
0x91B04D: add     esp, 8
0x91B050: mov     ecx, [esi+4]
0x91B053: mov     edx, [esi]
0x91B055: mov     [edx+ecx*4], ebx
0x91B058: inc     dword ptr [esi+4]
0x91B05B: mov     edx, ds:0BA8420h
0x91B061: mov     ecx, [edi-10h]
0x91B064: mov     eax, [ecx]
0x91B066: push    edx
0x91B067: push    ebx
0x91B068: lea     edx, [esp+98h]
0x91B06F: push    edx
0x91B070: lea     edx, [esp+2ECh+var_2CC]
0x91B074: push    edx
0x91B075: call    dword ptr [eax+4]
0x91B078: mov     edx, ds:0BA8420h
0x91B07E: mov     ecx, [edi-10h]
0x91B081: mov     eax, [ecx]
0x91B083: push    edx
0x91B084: mov     edx, ds:0BA8424h
0x91B08A: push    ebx
0x91B08B: push    edx
0x91B08C: call    dword ptr [eax+8]
0x91B08F: mov     eax, [esp+2E0h+var_2C8]
0x91B093: xor     esi, esi
0x91B095: test    eax, eax
0x91B097: jle     short loc_91B0BA
0x91B099: lea     esp, [esp+0]
0x91B0A0: mov     eax, [esp+2E0h+var_2CC]
0x91B0A4: mov     ecx, [eax+esi*4]
0x91B0A7: test    ecx, ecx
0x91B0A9: jz      short loc_91B0B1
0x91B0AB: mov     edx, [ecx]
0x91B0AD: push    1
0x91B0AF: call    dword ptr [edx]
0x91B0B1: mov     eax, [esp+2E0h+var_2C8]
0x91B0B5: inc     esi
0x91B0B6: cmp     esi, eax
0x91B0B8: jl      short loc_91B0A0
0x91B0BA: mov     eax, [esp+2E0h+var_2C4]
0x91B0BE: test    eax, eax
0x91B0C0: js      short loc_91B0F7
0x91B0C2: mov     ecx, ds:0BA9DE4h
0x91B0C8: mov     edx, large fs:2Ch
0x91B0CF: mov     ecx, [edx+ecx*4]
0x91B0D2: mov     ecx, [ecx+19Ch]
0x91B0D8: test    ecx, ecx
0x91B0DA: jnz     short loc_91B0E2
0x91B0DC: mov     ecx, ds:0BA7D9Ch
0x91B0E2: mov     edx, [esp+2E0h+var_2CC]
0x91B0E6: and     eax, 3FFFFFFFh
0x91B0EB: push    14h
0x91B0ED: shl     eax, 2
0x91B0F0: push    eax
0x91B0F1: push    edx
0x91B0F2: call    sub_8A75D0
0x91B0F7: mov     ecx, [esp+2E0h+var_4]
0x91B0FE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x91B103: pop     edi
0x91B104: pop     esi
0x91B105: pop     ebx
0x91B106: mov     esp, ebp
0x91B108: pop     ebp
0x91B109: retn    4
