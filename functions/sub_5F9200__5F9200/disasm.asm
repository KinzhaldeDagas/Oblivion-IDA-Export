0x5F9200: sub     esp, 14h
0x5F9203: push    ebx
0x5F9204: push    ebp
0x5F9205: push    esi
0x5F9206: mov     ebp, ecx
0x5F9208: push    edi
0x5F9209: xor     edi, edi
0x5F920B: test    ebp, ebp
0x5F920D: mov     [esp+24h+var_10], ebp
0x5F9211: mov     esi, ebp
0x5F9213: mov     [esp+24h+var_14], edi
0x5F9217: jz      loc_5F949E
0x5F921D: mov     ebx, [esp+24h+arg_0]
0x5F9221: jmp     short loc_5F9227
0x5F9223: mov     edi, [esp+50h+var_40]
0x5F9227: mov     eax, [esi]
0x5F9229: mov     edx, [eax+198h]
0x5F922F: push    0
0x5F9231: mov     ecx, esi
0x5F9233: call    edx
0x5F9235: test    al, al
0x5F9237: jnz     loc_5F946B
0x5F923D: push    esi; int
0x5F923E: call    Actor__CanUSeDoor?
0x5F9243: add     esp, 4
0x5F9246: test    al, al
0x5F9248: jnz     short loc_5F925C
0x5F924A: mov     eax, ds:0B333C4h
0x5F924F: cmp     byte ptr [eax+114h], 0
0x5F9256: jnz     loc_5F946B
0x5F925C: mov     ecx, [esp+28h+var_10]
0x5F9260: mov     edx, [esp+28h+var_C]
0x5F9264: sub     esp, 0Ch
0x5F9267: mov     eax, esp
0x5F9269: mov     [eax], ecx
0x5F926B: mov     ecx, [esp+34h+var_8]
0x5F926F: mov     [eax+4], edx
0x5F9272: lea     edx, [esp+34h]
0x5F9276: push    edx; int
0x5F9277: mov     [eax+8], ecx
0x5F927A: push    ebx; int
0x5F927B: mov     ecx, esi; int
0x5F927D: call    sub_5F0810
0x5F9282: mov     ecx, [esi+58h]
0x5F9285: mov     eax, [ecx]
0x5F9287: mov     edx, [eax+36Ch]
0x5F928D: call    edx
0x5F928F: test    eax, eax
0x5F9291: jz      loc_5F93E5
0x5F9297: mov     eax, [esi]
0x5F9299: mov     edx, [eax+380h]
0x5F929F: mov     ecx, esi
0x5F92A1: call    edx
0x5F92A3: test    eax, eax
0x5F92A5: jnz     loc_5F93E5
0x5F92AB: mov     edi, [esi+58h]
0x5F92AE: push    eax
0x5F92AF: mov     eax, [edi]
0x5F92B1: mov     edx, [eax+374h]
0x5F92B7: mov     ecx, edi
0x5F92B9: call    edx
0x5F92BB: push    eax
0x5F92BC: mov     eax, [edi]
0x5F92BE: mov     edx, [eax+378h]
0x5F92C4: mov     ecx, edi
0x5F92C6: call    edx
0x5F92C8: mov     ecx, eax
0x5F92CA: call    sub_4D7300
0x5F92CF: mov     eax, [esi]
0x5F92D1: mov     edx, [eax+164h]
0x5F92D7: mov     ecx, esi
0x5F92D9: call    edx
0x5F92DB: mov     byte ptr [eax+0C4h], 1
0x5F92E2: mov     edi, [esi+58h]
0x5F92E5: mov     ebp, [edi]
0x5F92E7: mov     eax, [ebp+378h]
0x5F92ED: push    7Fh
0x5F92EF: mov     ecx, edi
0x5F92F1: call    eax
0x5F92F3: mov     edx, [ebp+370h]
0x5F92F9: push    eax; int
0x5F92FA: push    0; int
0x5F92FC: push    esi
0x5F92FD: mov     ecx, edi
0x5F92FF: call    edx
0x5F9301: mov     edi, [esi+58h]
0x5F9304: mov     eax, [edi]
0x5F9306: mov     edx, [eax+378h]
0x5F930C: mov     ecx, edi
0x5F930E: call    edx
0x5F9310: mov     ebp, eax
0x5F9312: mov     eax, [edi]
0x5F9314: mov     edx, [eax+380h]
0x5F931A: mov     ecx, edi
0x5F931C: call    edx
0x5F931E: movzx   eax, byte ptr [eax+0Eh]
0x5F9322: push    eax
0x5F9323: mov     eax, [ebp+0]
0x5F9326: mov     edx, [eax+170h]
0x5F932C: mov     ecx, ebp
0x5F932E: call    edx
0x5F9330: mov     ecx, eax
0x5F9332: call    sub_4AEBE0
0x5F9337: push    ecx
0x5F9338: fchs
0x5F933A: mov     ecx, esi
0x5F933C: fstp    [esp+3Ch+var_3C]; float
0x5F933F: call    sub_659B90
0x5F9344: mov     edi, [esi]
0x5F9346: mov     eax, [edi+1E0h]
0x5F934C: mov     ecx, esi
0x5F934E: call    eax
0x5F9350: fadd    qword ptr ds:0A3D5B8h
0x5F9356: mov     edx, [edi+1E8h]
0x5F935C: push    ecx
0x5F935D: fstp    [esp+3Ch+var_10]
0x5F9361: mov     ecx, esi
0x5F9363: fld     [esp+3Ch+var_10]
0x5F9367: fstp    [esp+3Ch+var_3C]
0x5F936A: call    edx
0x5F936C: mov     ecx, [esi+58h]
0x5F936F: fldz
0x5F9371: mov     eax, [ecx]
0x5F9373: mov     edx, [eax+380h]
0x5F9379: push    ecx
0x5F937A: fstp    [esp+40h+var_40]; float
0x5F937D: call    edx
0x5F937F: mov     ecx, eax
0x5F9381: call    sub_6FAEE0
0x5F9386: mov     ecx, [esi+58h]
0x5F9389: mov     eax, [ecx]
0x5F938B: mov     edx, [eax+380h]
0x5F9391: call    edx
0x5F9393: mov     byte ptr [eax+0Eh], 0
0x5F9397: mov     ecx, [esi+58h]
0x5F939A: mov     eax, [ecx]
0x5F939C: mov     edx, [eax+380h]
0x5F93A2: call    edx
0x5F93A4: mov     ecx, ds:0B3F9A8h
0x5F93AA: mov     [eax], ecx
0x5F93AC: mov     edx, ds:0B3F9ACh
0x5F93B2: mov     [eax+4], edx
0x5F93B5: mov     ecx, ds:0B3F9B0h
0x5F93BB: mov     [eax+8], ecx
0x5F93BE: mov     edi, [esi+58h]
0x5F93C1: mov     ebp, [edi]
0x5F93C3: mov     edx, [ebp+380h]
0x5F93C9: mov     ecx, edi
0x5F93CB: call    edx
0x5F93CD: push    eax
0x5F93CE: mov     eax, [ebp+3E8h]
0x5F93D4: push    7Fh
0x5F93D6: push    0
0x5F93D8: mov     ecx, edi
0x5F93DA: call    eax
0x5F93DC: push    0; a4
0x5F93DE: mov     ecx, esi
0x5F93E0: call    sub_65AC20
0x5F93E5: mov     ecx, ebx; this
0x5F93E7: call    TESObjectREFR_GetParentCell
0x5F93EC: mov     ecx, ebx; this
0x5F93EE: mov     edi, eax
0x5F93F0: call    TESObjectREFR_GetWorldSpace
0x5F93F5: mov     edx, [ebx]
0x5F93F7: mov     ebp, eax
0x5F93F9: mov     eax, [edx+174h]
0x5F93FF: mov     ecx, ebx
0x5F9401: call    eax
0x5F9403: mov     edx, [eax]
0x5F9405: sub     esp, 0Ch
0x5F9408: mov     ecx, esp
0x5F940A: mov     [ecx], edx
0x5F940C: mov     edx, [eax+4]
0x5F940F: mov     eax, [eax+8]
0x5F9412: mov     [ecx+4], edx
0x5F9415: mov     [ecx+8], eax
0x5F9418: mov     ecx, esi; this
0x5F941A: call    TESObjectREFR_SetPosition
0x5F941F: test    edi, edi
0x5F9421: jz      short loc_5F9447
0x5F9423: mov     ecx, ds:0B333A0h
0x5F9429: push    0; a2
0x5F942B: push    edi; a1
0x5F942C: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5F9431: test    al, al
0x5F9433: jz      short loc_5F9447
0x5F9435: fld     dword ptr [ebx+28h]
0x5F9438: push    ecx
0x5F9439: mov     ecx, esi
0x5F943B: fstp    [esp+4Ch+var_4C]; float
0x5F943E: call    sub_4D8A10
0x5F9443: fldz
0x5F9445: jmp     short loc_5F944D
0x5F9447: fld     dword ptr ds:0A32048h
0x5F944D: push    ecx
0x5F944E: mov     ecx, esi
0x5F9450: fstp    [esp+50h+a3]; float
0x5F9453: call    sub_4D89D0
0x5F9458: push    ebp; a2
0x5F9459: push    edi; int
0x5F945A: push    esi; Concurrency::details::SchedulerBase *
0x5F945B: call    sub_4DD4B0
0x5F9460: mov     ebp, [esp+5Ch+var_3C]
0x5F9464: mov     edi, [esp+5Ch+var_40]
0x5F9468: add     esp, 0Ch
0x5F946B: cmp     esi, ebp
0x5F946D: jnz     short loc_5F9489
0x5F946F: lea     ecx, [ebp+44h]
0x5F9472: call    GetExtraDataFollower
0x5F9477: test    eax, eax
0x5F9479: jz      short loc_5F949E
0x5F947B: mov     eax, [eax+0Ch]
0x5F947E: mov     ecx, [eax+4]
0x5F9481: mov     esi, [eax]
0x5F9483: mov     [esp+50h+var_40], ecx
0x5F9487: jmp     short loc_5F9496
0x5F9489: test    edi, edi
0x5F948B: jz      short loc_5F949E
0x5F948D: mov     edx, [edi+4]
0x5F9490: mov     esi, [edi]
0x5F9492: mov     [esp+50h+var_40], edx
0x5F9496: test    esi, esi
0x5F9498: jnz     loc_5F9223
0x5F949E: pop     edi
0x5F949F: pop     esi
0x5F94A0: pop     ebp
0x5F94A1: pop     ebx
0x5F94A2: add     esp, 14h
0x5F94A5: retn    4
