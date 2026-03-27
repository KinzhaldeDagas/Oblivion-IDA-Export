0x7802D0: push    ecx
0x7802D1: push    ebx
0x7802D2: push    ebp
0x7802D3: push    esi
0x7802D4: push    edi
0x7802D5: mov     esi, ecx
0x7802D7: xor     edi, edi
0x7802D9: push    offset NiRefObject_objcount; lpAddend
0x7802DE: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7802E4: mov     [esi+4], edi
0x7802E7: call    dword ptr ds:0A28078h
0x7802ED: fldz
0x7802EF: mov     dword ptr [esi], offset ??_7NiD3DRenderState@@6B@; const NiD3DRenderState::`vftable'
0x7802F5: mov     [esi+74h], edi
0x7802F8: fst     dword ptr [esi+8Ch]
0x7802FE: fst     dword ptr [esi+90h]
0x780304: lea     ecx, [esi+0F8h]; this
0x78030A: fstp    dword ptr [esi+94h]
0x780310: call    sub_7616D0
0x780315: lea     eax, [esi+120h]
0x78031B: mov     ecx, 0FFh
0x780320: mov     edx, 7FFFFFFFh
0x780325: mov     ebp, 1
0x78032A: lea     ebx, [ebx+0]
0x780330: mov     [eax], edx
0x780332: mov     [eax+4], edx
0x780335: add     eax, 8
0x780338: sub     ecx, ebp
0x78033A: jns     short loc_780330
0x78033C: lea     eax, [esi+920h]
0x780342: mov     ecx, 7Fh
0x780347: mov     [eax], edx
0x780349: mov     [eax+4], edx
0x78034C: add     eax, 8
0x78034F: sub     ecx, ebp
0x780351: jns     short loc_780347
0x780353: lea     eax, [esi+0D20h]
0x780359: mov     ecx, 4Fh ; 'O'
0x78035E: mov     edi, edi
0x780360: mov     [eax], edx
0x780362: mov     [eax+4], edx
0x780365: add     eax, 8
0x780368: sub     ecx, ebp
0x78036A: jns     short loc_780360
0x78036C: mov     eax, [esp+14h+arg_0]
0x780370: mov     [esi+0FF0h], edi
0x780376: push    eax
0x780377: mov     ecx, esi
0x780379: mov     [esi+0FF8h], edi
0x78037F: mov     [esi+0FFCh], edi
0x780385: call    sub_77F840
0x78038A: mov     [esi+0Ch], edi
0x78038D: xor     eax, eax
0x78038F: mov     edi, 2
0x780394: mov     ebx, 3
0x780399: push    1Ch; Size
0x78039B: mov     [esi+10h], ebp
0x78039E: mov     [esi+14h], ebp
0x7803A1: mov     [esi+18h], edi
0x7803A4: mov     [esi+1Ch], ebx
0x7803A7: mov     [esi+6Ch], eax
0x7803AA: mov     [esi+70h], eax
0x7803AD: call    FormHeapAlloc
0x7803B2: add     esp, 4
0x7803B5: test    eax, eax
0x7803B7: mov     [esp+14h+arg_0], eax
0x7803BB: jz      short loc_7803DE
0x7803BD: mov     ecx, eax; this
0x7803BF: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7803C4: mov     eax, [esp+14h+arg_0]
0x7803C8: mov     dword ptr [eax], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x7803CE: mov     word ptr [eax+18h], 0ECh ; 'ì'
0x7803D4: mov     byte ptr [eax+1Ah], 0
0x7803D8: mov     [esp+14h+arg_0], eax
0x7803DC: jmp     short loc_7803EA
0x7803DE: mov     [esp+14h+arg_0], 0
0x7803E6: mov     eax, [esp+14h+arg_0]
0x7803EA: mov     ecx, [esi+74h]
0x7803ED: cmp     ecx, eax
0x7803EF: mov     [esp+14h+var_4], ecx
0x7803F3: jz      short loc_78042B
0x7803F5: test    ecx, ecx
0x7803F7: jz      short loc_78041A
0x7803F9: add     ecx, 4
0x7803FC: push    ecx; lpAddend
0x7803FD: call    dword ptr ds:0A2807Ch
0x780403: test    eax, eax
0x780405: jnz     short loc_780416
0x780407: mov     ecx, [esp+14h+var_4]
0x78040B: test    ecx, ecx
0x78040D: jz      short loc_780416
0x78040F: mov     edx, [ecx]
0x780411: mov     eax, [edx]
0x780413: push    ebp
0x780414: call    eax
0x780416: mov     eax, [esp+14h+arg_0]
0x78041A: test    eax, eax
0x78041C: mov     [esi+74h], eax
0x78041F: jz      short loc_78042B
0x780421: add     eax, 4
0x780424: push    eax; lpAddend
0x780425: call    dword ptr ds:0A28078h
0x78042B: fldz
0x78042D: mov     eax, 4
0x780432: fst     dword ptr [esi+78h]
0x780435: mov     [esi+2Ch], eax
0x780438: fst     dword ptr [esi+7Ch]
0x78043B: mov     [esi+58h], eax
0x78043E: fst     dword ptr [esi+80h]
0x780444: mov     [esi+0A8h], eax
0x78044A: fstp    dword ptr [esi+84h]
0x780450: mov     [esi+0C8h], eax
0x780456: fld1
0x780458: mov     edx, 5
0x78045D: fstp    dword ptr [esi+88h]
0x780463: mov     [esi+38h], edx
0x780466: mov     ecx, 6
0x78046B: fnstcw  word ptr [esp+14h+arg_0]
0x78046F: mov     [esi+5Ch], edx
0x780472: mov     [esi+0ACh], edx
0x780478: mov     [esi+0CCh], edx
0x78047E: mov     [esi+20h], edi
0x780481: mov     [esi+24h], ebp
0x780484: mov     [esi+28h], ebx
0x780487: mov     dword ptr [esi+30h], 9
0x78048E: mov     dword ptr [esi+34h], 0Ah
0x780495: mov     [esi+3Ch], ecx
0x780498: mov     dword ptr [esi+40h], 7
0x78049F: mov     dword ptr [esi+44h], 8
0x7804A6: mov     dword ptr [esi+48h], 0Bh
0x7804AD: mov     dword ptr [esi+4Ch], 8
0x7804B4: mov     [esi+50h], edi
0x7804B7: mov     [esi+54h], ebx
0x7804BA: mov     [esi+60h], ecx
0x7804BD: mov     dword ptr [esi+64h], 7
0x7804C4: mov     [esi+68h], ebp
0x7804C7: mov     dword ptr [esi+0B8h], 8
0x7804D1: mov     [esi+0A0h], edi
0x7804D7: mov     [esi+0A4h], ebx
0x7804DD: mov     [esi+0B0h], ecx
0x7804E3: mov     dword ptr [esi+0B4h], 7
0x7804ED: mov     [esi+9Ch], ebp
0x7804F3: mov     [esi+0BCh], ebp
0x7804F9: mov     [esi+0C0h], edi
0x7804FF: mov     [esi+0C4h], ebx
0x780505: mov     [esi+0D0h], ecx
0x78050B: mov     [esi+0D4h], edi
0x780511: mov     [esi+0DCh], edi
0x780517: mov     [esi+0E4h], ebx
0x78051D: mov     [esi+0ECh], ebp
0x780523: mov     [esi+0D8h], ebx
0x780529: mov     [esi+0E0h], ebx
0x78052F: mov     [esi+0E8h], edi
0x780535: mov     [esi+0F0h], ebp
0x78053B: mov     dword ptr [esi+0F4h], 0
0x780545: mov     edx, ds:0B3FA90h
0x78054B: mov     [esi+8Ch], edx
0x780551: mov     eax, ds:0B3FA94h
0x780556: mov     [esi+90h], eax
0x78055C: movzx   eax, word ptr [esp+14h+arg_0]
0x780561: mov     edx, ds:0B3FA98h
0x780567: mov     [esi+94h], edx
0x78056D: or      eax, 0C00h
0x780572: fld     dword ptr [esi+8Ch]
0x780578: mov     [esp+14h+var_4], eax
0x78057C: fld     qword ptr ds:0A3DDD8h
0x780582: fmul    st(1), st
0x780584: fldcw   word ptr [esp+14h+var_4]
0x780588: fxch    st(1)
0x78058A: fistp   [esp+14h+var_4]
0x78058E: movzx   eax, byte ptr [esp+14h+var_4]
0x780593: movzx   edx, al
0x780596: fldcw   word ptr [esp+14h+arg_0]
0x78059A: or      edx, 0FFFFFF00h
0x7805A0: shl     edx, 8
0x7805A3: fld     dword ptr [esi+90h]
0x7805A9: fnstcw  word ptr [esp+14h+arg_0]
0x7805AD: fmul    st, st(1)
0x7805AF: movzx   eax, word ptr [esp+14h+arg_0]
0x7805B4: or      eax, 0C00h
0x7805B9: mov     [esp+14h+var_4], eax
0x7805BD: fldcw   word ptr [esp+14h+var_4]
0x7805C1: fistp   [esp+14h+var_4]
0x7805C5: movzx   eax, byte ptr [esp+14h+var_4]
0x7805CA: fldcw   word ptr [esp+14h+arg_0]
0x7805CE: movzx   eax, al
0x7805D1: or      edx, eax
0x7805D3: fmul    dword ptr [esi+94h]
0x7805D9: push    42h ; 'B'
0x7805DB: fnstcw  word ptr [esp+18h+arg_0]
0x7805DF: shl     edx, 8
0x7805E2: movzx   eax, word ptr [esp+18h+arg_0]
0x7805E7: or      eax, 0C00h
0x7805EC: mov     [esp+18h+var_4], eax
0x7805F0: push    0FFFFh
0x7805F5: push    offset word_B427E0
0x7805FA: fldcw   word ptr [esp+20h+var_4]
0x7805FE: mov     dword ptr [esi+8], 0
0x780605: mov     dword ptr [esi+100h], 8
0x78060F: mov     [esi+104h], edi
0x780615: mov     [esi+108h], ebx
0x78061B: mov     dword ptr [esi+10Ch], 4
0x780625: fistp   [esp+20h+var_4]
0x780629: mov     dword ptr [esi+110h], 5
0x780633: movzx   eax, byte ptr [esp+20h+var_4]
0x780638: movzx   eax, al
0x78063B: fldcw   word ptr [esp+20h+arg_0]
0x78063F: or      edx, eax
0x780641: mov     [esi+98h], edx
0x780647: mov     [esi+114h], ecx
0x78064D: mov     dword ptr [esi+118h], 7
0x780657: mov     [esi+11Ch], ebp
0x78065D: mov     byte ptr [esi+0FF4h], 0
0x780664: mov     byte ptr [esi+0FF5h], 0
0x78066B: call    __memset
0x780670: add     esp, 0Ch
0x780673: mov     eax, 4
0x780678: mov     ds:0B427EAh, ax
0x78067E: mov     ds:0B4282Ah, ax
0x780684: or      eax, 0FFFFFFFFh
0x780687: mov     ds:0B427B8h, eax
0x78068C: mov     ds:0B427BCh, eax
0x780691: mov     ds:0B427E6h, di
0x780698: mov     ds:0B42826h, di
0x78069F: mov     ds:0B427B0h, eax
0x7806A4: mov     ds:0B427B4h, eax
0x7806A9: mov     ds:0B427BAh, di
0x7806B0: mov     ds:0B427D0h, edi
0x7806B6: pop     edi
0x7806B7: mov     ds:0B427C0h, eax
0x7806BC: mov     ds:0B427C4h, eax
0x7806C1: mov     ds:0B427C8h, eax
0x7806C6: mov     eax, esi
0x7806C8: pop     esi
0x7806C9: mov     edx, 6
0x7806CE: mov     ecx, 7
0x7806D3: mov     ds:0B427E4h, bp
0x7806DA: mov     ds:0B42824h, bp
0x7806E1: mov     ds:0B427B4h, bp
0x7806E8: mov     ds:0B427CCh, ebp
0x7806EE: pop     ebp
0x7806EF: mov     ds:0B427E8h, bx
0x7806F6: mov     ds:0B42828h, bx
0x7806FD: mov     ds:0B427BCh, bx
0x780704: mov     word ptr ds:0B427E2h, 0
0x78070D: mov     word ptr ds:0B427ECh, 5
0x780716: mov     ds:0B427EEh, dx
0x78071D: mov     ds:0B42810h, cx
0x780724: mov     word ptr ds:0B4282Ch, 5
0x78072D: mov     ds:0B4282Eh, dx
0x780734: mov     ds:0B42830h, cx
0x78073B: mov     word ptr ds:0B42832h, 18h
0x780744: mov     word ptr ds:0B427B2h, 0
0x78074D: mov     word ptr ds:0B427BEh, 4
0x780756: mov     dword ptr ds:0B427D4h, 5
0x780760: mov     ds:0B427D8h, edx
0x780766: mov     ds:0B427DCh, ecx
0x78076C: pop     ebx
0x78076D: pop     ecx
0x78076E: retn    4
