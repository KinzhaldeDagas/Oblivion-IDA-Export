0x8AD150: sub     esp, 2Ch
0x8AD153: push    ebx
0x8AD154: push    ebp
0x8AD155: push    esi
0x8AD156: mov     esi, ecx
0x8AD158: mov     eax, [esi+90h]
0x8AD15E: push    edi
0x8AD15F: xor     edi, edi
0x8AD161: test    eax, eax
0x8AD163: jle     short loc_8AD18A
0x8AD165: lea     ebx, [esi+8]
0x8AD168: jmp     short loc_8AD170
0x8AD16A: align 10h
0x8AD170: mov     eax, [esi+8Ch]
0x8AD176: mov     ecx, [eax+edi*4]
0x8AD179: push    ebx
0x8AD17A: call    sub_8A6300
0x8AD17F: mov     eax, [esi+90h]
0x8AD185: inc     edi
0x8AD186: cmp     edi, eax
0x8AD188: jl      short loc_8AD170
0x8AD18A: mov     eax, [esi+9Ch]
0x8AD190: xor     edi, edi
0x8AD192: cmp     eax, edi
0x8AD194: mov     [esi+90h], edi
0x8AD19A: jle     short loc_8AD1BA
0x8AD19C: lea     ebx, [esi+0Ch]
0x8AD19F: nop
0x8AD1A0: mov     ecx, [esi+98h]
0x8AD1A6: mov     ecx, [ecx+edi*4]
0x8AD1A9: push    ebx
0x8AD1AA: call    sub_8DE670
0x8AD1AF: mov     eax, [esi+9Ch]
0x8AD1B5: inc     edi
0x8AD1B6: cmp     edi, eax
0x8AD1B8: jl      short loc_8AD1A0
0x8AD1BA: mov     edx, ds:0BA9DE4h
0x8AD1C0: mov     eax, large fs:2Ch
0x8AD1C6: mov     eax, [eax+edx*4]
0x8AD1C9: mov     ebp, [esp+3Ch+arg_0]
0x8AD1CD: mov     dword ptr [esi+9Ch], 0
0x8AD1D7: mov     ecx, [eax+19Ch]
0x8AD1DD: test    ecx, ecx
0x8AD1DF: mov     edi, [ebp+14h]
0x8AD1E2: mov     [esp+3Ch+var_24], 7F7FFFFFh
0x8AD1EA: mov     [esp+3Ch+var_14], eax
0x8AD1EE: jnz     short loc_8AD1F6
0x8AD1F0: mov     ecx, ds:0BA7D9Ch
0x8AD1F6: mov     edx, [ecx+20h]
0x8AD1F9: lea     eax, [edi+edi*2]
0x8AD1FC: shl     eax, 4
0x8AD1FF: add     eax, 10h
0x8AD202: and     eax, 0FFFFFFF0h
0x8AD205: lea     ebx, [edx+eax]
0x8AD208: cmp     ebx, [ecx+2Ch]
0x8AD20B: ja      short loc_8AD214
0x8AD20D: mov     [ecx+20h], ebx
0x8AD210: mov     eax, edx
0x8AD212: jmp     short loc_8AD21A
0x8AD214: mov     edx, [ecx]
0x8AD216: push    eax
0x8AD217: call    dword ptr [edx+0Ch]
0x8AD21A: mov     edx, [ebp+14h]
0x8AD21D: or      edi, 80000000h
0x8AD223: test    edx, edx
0x8AD225: mov     [esp+3Ch+arg_0], eax
0x8AD229: mov     [esp+3Ch+var_8], edi
0x8AD22D: mov     [esp+3Ch+var_C], edx
0x8AD231: jle     short loc_8AD28A
0x8AD233: mov     edi, 0FFFFFFE0h
0x8AD238: lea     ecx, [eax+20h]
0x8AD23B: sub     edi, eax
0x8AD23D: lea     ecx, [ecx+0]
0x8AD240: mov     ebx, [ebp+10h]
0x8AD243: lea     eax, [edi+ecx]
0x8AD246: movaps  xmm0, xmmword ptr [eax+ebx]
0x8AD24A: add     eax, ebx
0x8AD24C: movaps  xmmword ptr [ecx-20h], xmm0
0x8AD250: movaps  xmm0, xmmword ptr [eax+10h]
0x8AD254: movaps  xmmword ptr [ecx-10h], xmm0
0x8AD258: mov     ebx, [eax+20h]
0x8AD25B: mov     [ecx], ebx
0x8AD25D: mov     ebx, [eax+24h]
0x8AD260: mov     [ecx+4], ebx
0x8AD263: mov     ebx, [eax+28h]
0x8AD266: mov     [ecx+8], ebx
0x8AD269: mov     eax, [eax+2Ch]
0x8AD26C: mov     [ecx+0Ch], eax
0x8AD26F: fld     dword ptr [ecx-4]
0x8AD272: fcomp   [esp+3Ch+var_24]
0x8AD276: fnstsw  ax
0x8AD278: test    ah, 5
0x8AD27B: jp      short loc_8AD284
0x8AD27D: mov     eax, [ecx-4]
0x8AD280: mov     [esp+3Ch+var_24], eax
0x8AD284: add     ecx, 30h ; '0'
0x8AD287: dec     edx
0x8AD288: jnz     short loc_8AD240
0x8AD28A: mov     eax, [esi+78h]
0x8AD28D: dec     eax
0x8AD28E: js      loc_8AD44D
0x8AD294: lea     ecx, [eax+eax*2]
0x8AD297: shl     ecx, 4
0x8AD29A: inc     eax
0x8AD29B: mov     [esp+3Ch+var_28], ecx
0x8AD29F: mov     [esp+3Ch+var_18], eax
0x8AD2A3: mov     eax, [esp+3Ch+var_C]
0x8AD2A7: mov     ecx, [esi+74h]
0x8AD2AA: mov     ebp, [esp+3Ch+var_28]
0x8AD2AE: xor     edi, edi
0x8AD2B0: test    eax, eax
0x8AD2B2: mov     [esp+3Ch+var_1C], 0FFFFFFFFh
0x8AD2BA: mov     [esp+3Ch+var_20], 3F8CCCCDh
0x8AD2C2: lea     ebx, [ecx+ebp]
0x8AD2C5: jle     loc_8AD3D6
0x8AD2CB: mov     edx, [esp+3Ch+arg_0]
0x8AD2CF: mov     [esp+3Ch+var_2C], edx
0x8AD2D3: mov     eax, [esp+3Ch+var_2C]
0x8AD2D7: push    ebx
0x8AD2D8: push    eax
0x8AD2D9: mov     ecx, esi
0x8AD2DB: call    sub_8ABF70
0x8AD2E0: fcom    [esp+3Ch+var_20]
0x8AD2E4: fnstsw  ax
0x8AD2E6: test    ah, 5
0x8AD2E9: jp      short loc_8AD2F5
0x8AD2EB: fstp    [esp+3Ch+var_20]
0x8AD2EF: mov     [esp+3Ch+var_1C], edi
0x8AD2F3: jmp     short loc_8AD2F7
0x8AD2F5: fstp    st
0x8AD2F7: mov     ecx, [esp+3Ch+var_2C]
0x8AD2FB: mov     eax, [esp+3Ch+var_C]
0x8AD2FF: inc     edi
0x8AD300: add     ecx, 30h ; '0'
0x8AD303: cmp     edi, eax
0x8AD305: mov     [esp+3Ch+var_2C], ecx
0x8AD309: jl      short loc_8AD2D3
0x8AD30B: mov     eax, [esp+3Ch+var_1C]
0x8AD30F: test    eax, eax
0x8AD311: jl      loc_8AD3D6
0x8AD317: mov     edx, [esp+3Ch+arg_0]
0x8AD31B: lea     ecx, [eax+eax*2]
0x8AD31E: shl     ecx, 4
0x8AD321: mov     eax, [ecx+edx+28h]
0x8AD325: lea     edi, [ecx+edx]
0x8AD328: cmp     eax, [ebx+28h]
0x8AD32B: jz      short loc_8AD372
0x8AD32D: mov     ebp, [esi+84h]
0x8AD333: dec     ebp
0x8AD334: js      short loc_8AD352
0x8AD336: jmp     short loc_8AD340
0x8AD338: align 10h
0x8AD340: mov     ecx, [esi+80h]
0x8AD346: mov     ecx, [ecx+ebp*4]
0x8AD349: mov     edx, [ecx]
0x8AD34B: push    ebx
0x8AD34C: call    dword ptr [edx+0Ch]
0x8AD34F: dec     ebp
0x8AD350: jns     short loc_8AD340
0x8AD352: mov     ebp, [esi+84h]
0x8AD358: dec     ebp
0x8AD359: js      short loc_8AD372
0x8AD35B: jmp     short loc_8AD360
0x8AD35D: align 10h
0x8AD360: mov     eax, [esi+80h]
0x8AD366: mov     ecx, [eax+ebp*4]
0x8AD369: mov     edx, [ecx]
0x8AD36B: push    edi
0x8AD36C: call    dword ptr [edx+8]
0x8AD36F: dec     ebp
0x8AD370: jns     short loc_8AD360
0x8AD372: movaps  xmm0, xmmword ptr [edi]
0x8AD375: movaps  xmmword ptr [ebx], xmm0
0x8AD378: movaps  xmm0, xmmword ptr [edi+10h]
0x8AD37C: movaps  xmmword ptr [ebx+10h], xmm0
0x8AD380: mov     eax, [edi+20h]
0x8AD383: mov     [ebx+20h], eax
0x8AD386: mov     ecx, [edi+24h]
0x8AD389: mov     [ebx+24h], ecx
0x8AD38C: mov     edx, [edi+28h]
0x8AD38F: mov     ecx, [esp+3Ch+arg_0]
0x8AD393: mov     [ebx+28h], edx
0x8AD396: mov     eax, [edi+2Ch]
0x8AD399: mov     [ebx+2Ch], eax
0x8AD39C: mov     eax, [esp+3Ch+var_C]
0x8AD3A0: dec     eax
0x8AD3A1: mov     [esp+3Ch+var_C], eax
0x8AD3A5: lea     eax, [eax+eax*2]
0x8AD3A8: shl     eax, 4
0x8AD3AB: movaps  xmm0, xmmword ptr [eax+ecx]
0x8AD3AF: add     eax, ecx
0x8AD3B1: movaps  xmmword ptr [edi], xmm0
0x8AD3B4: movaps  xmm0, xmmword ptr [eax+10h]
0x8AD3B8: movaps  xmmword ptr [edi+10h], xmm0
0x8AD3BC: mov     ecx, [eax+20h]
0x8AD3BF: mov     [edi+20h], ecx
0x8AD3C2: mov     edx, [eax+24h]
0x8AD3C5: mov     [edi+24h], edx
0x8AD3C8: mov     ecx, [eax+28h]
0x8AD3CB: mov     [edi+28h], ecx
0x8AD3CE: mov     edx, [eax+2Ch]
0x8AD3D1: mov     [edi+2Ch], edx
0x8AD3D4: jmp     short loc_8AD433
0x8AD3D6: mov     edi, [esi+84h]
0x8AD3DC: dec     edi
0x8AD3DD: js      short loc_8AD3F2
0x8AD3DF: nop
0x8AD3E0: mov     eax, [esi+80h]
0x8AD3E6: mov     ecx, [eax+edi*4]
0x8AD3E9: mov     edx, [ecx]
0x8AD3EB: push    ebx
0x8AD3EC: call    dword ptr [edx+0Ch]
0x8AD3EF: dec     edi
0x8AD3F0: jns     short loc_8AD3E0
0x8AD3F2: mov     ebx, [esi+78h]
0x8AD3F5: mov     ecx, [esi+74h]
0x8AD3F8: dec     ebx
0x8AD3F9: mov     [esi+78h], ebx
0x8AD3FC: mov     eax, ebx
0x8AD3FE: lea     eax, [eax+eax*2]
0x8AD401: shl     eax, 4
0x8AD404: movaps  xmm0, xmmword ptr [eax+ecx]
0x8AD408: add     eax, ecx
0x8AD40A: movaps  xmmword ptr [ecx+ebp], xmm0
0x8AD40E: movaps  xmm0, xmmword ptr [eax+10h]
0x8AD412: movaps  xmmword ptr [ecx+ebp+10h], xmm0
0x8AD417: mov     edx, [eax+20h]
0x8AD41A: mov     [ecx+ebp+20h], edx
0x8AD41E: mov     edx, [eax+24h]
0x8AD421: mov     [ecx+ebp+24h], edx
0x8AD425: mov     edx, [eax+28h]
0x8AD428: mov     [ecx+ebp+28h], edx
0x8AD42C: mov     eax, [eax+2Ch]
0x8AD42F: mov     [ecx+ebp+2Ch], eax
0x8AD433: mov     ecx, [esp+3Ch+var_28]
0x8AD437: mov     eax, [esp+3Ch+var_18]
0x8AD43B: sub     ecx, 30h ; '0'
0x8AD43E: dec     eax
0x8AD43F: mov     [esp+3Ch+var_28], ecx
0x8AD443: mov     [esp+3Ch+var_18], eax
0x8AD447: jnz     loc_8AD2A3
0x8AD44D: mov     eax, [esp+3Ch+var_C]
0x8AD451: test    eax, eax
0x8AD453: jle     loc_8AD508
0x8AD459: mov     edi, [esp+3Ch+arg_0]
0x8AD45D: add     edi, 10h
0x8AD460: mov     [esp+3Ch+var_18], eax
0x8AD464: fld     [esp+3Ch+var_24]
0x8AD468: fld     dword ptr [edi+0Ch]
0x8AD46B: fucompp
0x8AD46D: fnstsw  ax
0x8AD46F: test    ah, 44h
0x8AD472: jp      loc_8AD4F6
0x8AD478: lea     ebp, [edi-10h]
0x8AD47B: push    ebp
0x8AD47C: mov     ecx, esi
0x8AD47E: call    sub_8AC640
0x8AD483: test    eax, eax
0x8AD485: jge     short loc_8AD4F6
0x8AD487: mov     ebx, [esi+84h]
0x8AD48D: dec     ebx
0x8AD48E: js      short loc_8AD4A2
0x8AD490: mov     ecx, [esi+80h]
0x8AD496: mov     ecx, [ecx+ebx*4]
0x8AD499: mov     edx, [ecx]
0x8AD49B: push    ebp
0x8AD49C: call    dword ptr [edx+8]
0x8AD49F: dec     ebx
0x8AD4A0: jns     short loc_8AD490
0x8AD4A2: mov     eax, [esi+7Ch]
0x8AD4A5: mov     ecx, [esi+78h]
0x8AD4A8: lea     ebx, [esi+74h]
0x8AD4AB: and     eax, 3FFFFFFFh
0x8AD4B0: cmp     ecx, eax
0x8AD4B2: jnz     short loc_8AD4BF
0x8AD4B4: push    30h ; '0'
0x8AD4B6: push    ebx
0x8AD4B7: call    sub_8A6EE0
0x8AD4BC: add     esp, 8
0x8AD4BF: mov     ecx, [ebx+4]
0x8AD4C2: mov     edx, [ebx]
0x8AD4C4: lea     eax, [ecx+ecx*2]
0x8AD4C7: shl     eax, 4
0x8AD4CA: add     eax, edx
0x8AD4CC: inc     ecx
0x8AD4CD: mov     [ebx+4], ecx
0x8AD4D0: movaps  xmm0, xmmword ptr [ebp+0]
0x8AD4D4: movaps  xmmword ptr [eax], xmm0
0x8AD4D7: movaps  xmm0, xmmword ptr [edi]
0x8AD4DA: movaps  xmmword ptr [eax+10h], xmm0
0x8AD4DE: mov     ecx, [edi+10h]
0x8AD4E1: mov     [eax+20h], ecx
0x8AD4E4: mov     edx, [edi+14h]
0x8AD4E7: mov     [eax+24h], edx
0x8AD4EA: mov     ecx, [edi+18h]
0x8AD4ED: mov     [eax+28h], ecx
0x8AD4F0: mov     edx, [edi+1Ch]
0x8AD4F3: mov     [eax+2Ch], edx
0x8AD4F6: mov     eax, [esp+3Ch+var_18]
0x8AD4FA: add     edi, 30h ; '0'
0x8AD4FD: dec     eax
0x8AD4FE: mov     [esp+3Ch+var_18], eax
0x8AD502: jnz     loc_8AD464
0x8AD508: mov     eax, [esp+3Ch+arg_4]
0x8AD50C: mov     ecx, [eax+14h]
0x8AD50F: test    ecx, ecx
0x8AD511: jle     loc_8AD596
0x8AD517: mov     edi, [eax+10h]
0x8AD51A: push    edi
0x8AD51B: mov     ecx, esi
0x8AD51D: call    sub_8AC640
0x8AD522: cmp     eax, 0FFFFFFFFh
0x8AD525: jnz     short loc_8AD596
0x8AD527: mov     ebx, [esi+84h]
0x8AD52D: dec     ebx
0x8AD52E: js      short loc_8AD542
0x8AD530: mov     eax, [esi+80h]
0x8AD536: mov     ecx, [eax+ebx*4]
0x8AD539: mov     edx, [ecx]
0x8AD53B: push    edi
0x8AD53C: call    dword ptr [edx+8]
0x8AD53F: dec     ebx
0x8AD540: jns     short loc_8AD530
0x8AD542: mov     eax, [esi+7Ch]
0x8AD545: mov     ecx, [esi+78h]
0x8AD548: lea     ebx, [esi+74h]
0x8AD54B: and     eax, 3FFFFFFFh
0x8AD550: cmp     ecx, eax
0x8AD552: jnz     short loc_8AD55F
0x8AD554: push    30h ; '0'
0x8AD556: push    ebx
0x8AD557: call    sub_8A6EE0
0x8AD55C: add     esp, 8
0x8AD55F: mov     ecx, [ebx+4]
0x8AD562: mov     edx, [ebx]
0x8AD564: lea     eax, [ecx+ecx*2]
0x8AD567: shl     eax, 4
0x8AD56A: add     eax, edx
0x8AD56C: inc     ecx
0x8AD56D: mov     [ebx+4], ecx
0x8AD570: movaps  xmm0, xmmword ptr [edi]
0x8AD573: movaps  xmmword ptr [eax], xmm0
0x8AD576: movaps  xmm0, xmmword ptr [edi+10h]
0x8AD57A: movaps  xmmword ptr [eax+10h], xmm0
0x8AD57E: mov     ecx, [edi+20h]
0x8AD581: mov     [eax+20h], ecx
0x8AD584: mov     edx, [edi+24h]
0x8AD587: mov     [eax+24h], edx
0x8AD58A: mov     ecx, [edi+28h]
0x8AD58D: mov     [eax+28h], ecx
0x8AD590: mov     edx, [edi+2Ch]
0x8AD593: mov     [eax+2Ch], edx
0x8AD596: mov     eax, [esi+78h]
0x8AD599: dec     eax
0x8AD59A: test    eax, eax
0x8AD59C: jle     loc_8AD663
0x8AD5A2: lea     edi, [eax+eax*2]
0x8AD5A5: shl     edi, 4
0x8AD5A8: jmp     short loc_8AD5B0
0x8AD5AA: align 10h
0x8AD5B0: cmp     eax, 1
0x8AD5B3: lea     ebp, [eax-1]
0x8AD5B6: mov     [esp+3Ch+var_18], ebp
0x8AD5BA: jl      loc_8AD654
0x8AD5C0: mov     eax, [esi+74h]
0x8AD5C3: lea     ecx, [eax+edi]
0x8AD5C6: mov     [esp+3Ch+arg_4], ecx
0x8AD5CA: lea     ebx, [eax+edi-30h]
0x8AD5CE: mov     edi, edi
0x8AD5D0: mov     edx, [esp+3Ch+arg_4]
0x8AD5D4: push    ebx
0x8AD5D5: push    edx
0x8AD5D6: mov     ecx, esi
0x8AD5D8: call    sub_8ABF70
0x8AD5DD: fcomp   dword ptr ds:0A2FAACh
0x8AD5E3: fnstsw  ax
0x8AD5E5: test    ah, 5
0x8AD5E8: jnp     short loc_8AD5F4
0x8AD5EA: dec     ebp
0x8AD5EB: sub     ebx, 30h ; '0'
0x8AD5EE: test    ebp, ebp
0x8AD5F0: jge     short loc_8AD5D0
0x8AD5F2: jmp     short loc_8AD654
0x8AD5F4: mov     ebx, [esi+84h]
0x8AD5FA: dec     ebx
0x8AD5FB: js      short loc_8AD613
0x8AD5FD: mov     ebp, [esp+3Ch+arg_4]
0x8AD601: mov     eax, [esi+80h]
0x8AD607: mov     ecx, [eax+ebx*4]
0x8AD60A: mov     edx, [ecx]
0x8AD60C: push    ebp
0x8AD60D: call    dword ptr [edx+0Ch]
0x8AD610: dec     ebx
0x8AD611: jns     short loc_8AD601
0x8AD613: mov     ebp, [esi+78h]
0x8AD616: mov     ecx, [esi+74h]
0x8AD619: dec     ebp
0x8AD61A: mov     [esi+78h], ebp
0x8AD61D: mov     eax, ebp
0x8AD61F: lea     eax, [eax+eax*2]
0x8AD622: shl     eax, 4
0x8AD625: movaps  xmm0, xmmword ptr [eax+ecx]
0x8AD629: add     eax, ecx
0x8AD62B: movaps  xmmword ptr [ecx+edi], xmm0
0x8AD62F: movaps  xmm0, xmmword ptr [eax+10h]
0x8AD633: movaps  xmmword ptr [ecx+edi+10h], xmm0
0x8AD638: mov     edx, [eax+20h]
0x8AD63B: mov     [ecx+edi+20h], edx
0x8AD63F: mov     edx, [eax+24h]
0x8AD642: mov     [ecx+edi+24h], edx
0x8AD646: mov     edx, [eax+28h]
0x8AD649: mov     [ecx+edi+28h], edx
0x8AD64D: mov     eax, [eax+2Ch]
0x8AD650: mov     [ecx+edi+2Ch], eax
0x8AD654: mov     eax, [esp+3Ch+var_18]
0x8AD658: sub     edi, 30h ; '0'
0x8AD65B: test    eax, eax
0x8AD65D: jg      loc_8AD5B0
0x8AD663: mov     eax, [esi+78h]
0x8AD666: test    eax, eax
0x8AD668: mov     [esp+3Ch+arg_4], 0
0x8AD670: jle     loc_8AD76E
0x8AD676: xor     ebx, ebx
0x8AD678: jmp     short loc_8AD680
0x8AD67A: align 10h
0x8AD680: mov     ecx, [esi+74h]
0x8AD683: mov     eax, [ecx+ebx+28h]
0x8AD687: cmp     byte ptr [eax+18h], 1
0x8AD68B: jnz     short loc_8AD6EB
0x8AD68D: mov     ebp, [eax+10h]
0x8AD690: add     ebp, eax
0x8AD692: jz      short loc_8AD6EB
0x8AD694: mov     ecx, [esi+90h]
0x8AD69A: lea     edi, [esi+8Ch]
0x8AD6A0: xor     eax, eax
0x8AD6A2: test    ecx, ecx
0x8AD6A4: jle     short loc_8AD6BB
0x8AD6A6: mov     edx, [edi]
0x8AD6A8: cmp     [edx], ebp
0x8AD6AA: jz      short loc_8AD6B6
0x8AD6AC: inc     eax
0x8AD6AD: add     edx, 4
0x8AD6B0: cmp     eax, ecx
0x8AD6B2: jl      short loc_8AD6A8
0x8AD6B4: jmp     short loc_8AD6BB
0x8AD6B6: cmp     eax, 0FFFFFFFFh
0x8AD6B9: jnz     short loc_8AD6EB
0x8AD6BB: lea     edx, [esi+8]
0x8AD6BE: push    edx
0x8AD6BF: mov     ecx, ebp
0x8AD6C1: call    sub_8A6550
0x8AD6C6: mov     eax, [edi+8]
0x8AD6C9: mov     ecx, [edi+4]
0x8AD6CC: and     eax, 3FFFFFFFh
0x8AD6D1: cmp     ecx, eax
0x8AD6D3: jnz     short loc_8AD6E0
0x8AD6D5: push    4
0x8AD6D7: push    edi
0x8AD6D8: call    sub_8A6EE0
0x8AD6DD: add     esp, 8
0x8AD6E0: mov     ecx, [edi+4]
0x8AD6E3: mov     edx, [edi]
0x8AD6E5: mov     [edx+ecx*4], ebp
0x8AD6E8: inc     dword ptr [edi+4]
0x8AD6EB: mov     eax, [esi+74h]
0x8AD6EE: mov     eax, [eax+ebx+28h]
0x8AD6F2: cmp     byte ptr [eax+18h], 2
0x8AD6F6: jnz     short loc_8AD757
0x8AD6F8: mov     ebp, [eax+10h]
0x8AD6FB: add     ebp, eax
0x8AD6FD: jz      short loc_8AD757
0x8AD6FF: mov     ecx, [esi+9Ch]
0x8AD705: lea     edi, [esi+98h]
0x8AD70B: xor     eax, eax
0x8AD70D: test    ecx, ecx
0x8AD70F: jle     short loc_8AD726
0x8AD711: mov     edx, [edi]
0x8AD713: cmp     [edx], ebp
0x8AD715: jz      short loc_8AD721
0x8AD717: inc     eax
0x8AD718: add     edx, 4
0x8AD71B: cmp     eax, ecx
0x8AD71D: jl      short loc_8AD713
0x8AD71F: jmp     short loc_8AD726
0x8AD721: cmp     eax, 0FFFFFFFFh
0x8AD724: jnz     short loc_8AD757
0x8AD726: lea     ecx, [esi+0Ch]
0x8AD729: push    ecx
0x8AD72A: mov     ecx, ebp
0x8AD72C: call    sub_8DE710
0x8AD731: mov     edx, [edi+8]
0x8AD734: mov     eax, [edi+4]
0x8AD737: and     edx, 3FFFFFFFh
0x8AD73D: cmp     eax, edx
0x8AD73F: jnz     short loc_8AD74C
0x8AD741: push    4
0x8AD743: push    edi
0x8AD744: call    sub_8A6EE0
0x8AD749: add     esp, 8
0x8AD74C: mov     eax, [edi+4]
0x8AD74F: mov     ecx, [edi]
0x8AD751: mov     [ecx+eax*4], ebp
0x8AD754: inc     dword ptr [edi+4]
0x8AD757: mov     eax, [esp+3Ch+arg_4]
0x8AD75B: mov     ecx, [esi+78h]
0x8AD75E: inc     eax
0x8AD75F: add     ebx, 30h ; '0'
0x8AD762: cmp     eax, ecx
0x8AD764: mov     [esp+3Ch+arg_4], eax
0x8AD768: jl      loc_8AD680
0x8AD76E: mov     esi, [esp+3Ch+var_14]
0x8AD772: mov     ecx, [esi+19Ch]
0x8AD778: test    ecx, ecx
0x8AD77A: jnz     short loc_8AD782
0x8AD77C: mov     ecx, ds:0BA7D9Ch
0x8AD782: mov     eax, [esp+3Ch+arg_0]
0x8AD786: cmp     eax, [ecx+28h]
0x8AD789: mov     [ecx+20h], eax
0x8AD78C: jnz     short loc_8AD794
0x8AD78E: mov     edx, [ecx]
0x8AD790: push    eax
0x8AD791: call    dword ptr [edx+10h]
0x8AD794: mov     eax, [esp+3Ch+var_8]
0x8AD798: test    eax, eax
0x8AD79A: js      short loc_8AD7C4
0x8AD79C: mov     ecx, [esi+19Ch]
0x8AD7A2: test    ecx, ecx
0x8AD7A4: jnz     short loc_8AD7AC
0x8AD7A6: mov     ecx, ds:0BA7D9Ch
0x8AD7AC: and     eax, 3FFFFFFFh
0x8AD7B1: lea     edx, [eax+eax*2]
0x8AD7B4: mov     eax, [esp+3Ch+arg_0]
0x8AD7B8: push    14h
0x8AD7BA: shl     edx, 4
0x8AD7BD: push    edx
0x8AD7BE: push    eax
0x8AD7BF: call    sub_8A75D0
0x8AD7C4: pop     edi
0x8AD7C5: pop     esi
0x8AD7C6: pop     ebp
0x8AD7C7: pop     ebx
0x8AD7C8: add     esp, 2Ch
0x8AD7CB: retn    8
