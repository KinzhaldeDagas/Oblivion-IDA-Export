0x536660: push    ebp
0x536661: mov     ebp, esp
0x536663: and     esp, 0FFFFFFF0h
0x536666: sub     esp, 24h
0x536669: mov     eax, ds:0B30AACh
0x53666E: xor     eax, esp
0x536670: mov     [esp+24h+var_4], eax
0x536674: push    ebx
0x536675: mov     ebx, [ebp+arg_4]
0x536678: push    esi
0x536679: mov     esi, [ebp+arg_0]
0x53667C: test    esi, esi
0x53667E: push    edi
0x53667F: jz      loc_536728
0x536685: push    esi
0x536686: call    sub_47FAC0
0x53668B: add     esp, 4
0x53668E: test    eax, eax
0x536690: jz      short loc_5366E3
0x536692: mov     ecx, [eax+10h]
0x536695: test    ecx, ecx
0x536697: jz      short loc_5366E3
0x536699: fld     dword ptr [ebx]
0x53669B: mov     eax, [ecx+8]
0x53669E: test    eax, eax
0x5366A0: fstp    dword ptr [esp+30h+var_20]
0x5366A4: fld     dword ptr [ebx+4]
0x5366A7: fstp    dword ptr [esp+30h+var_20+4]
0x5366AB: fld     dword ptr [ebx+8]
0x5366AE: fstp    dword ptr [esp+30h+var_20+8]
0x5366B2: fldz
0x5366B4: fstp    dword ptr [esp+30h+var_20+0Ch]
0x5366B8: jz      short loc_5366C4
0x5366BA: mov     eax, [eax+50h]
0x5366BD: add     eax, 0D0h ; 'Ð'
0x5366C2: jmp     short loc_5366C9
0x5366C4: mov     eax, offset stru_BA7A40
0x5366C9: movaps  xmm1, xmmword ptr [eax]
0x5366CC: movaps  xmm0, [esp+30h+var_20]
0x5366D1: lea     eax, [esp+30h+var_20]
0x5366D5: addps   xmm0, xmm1
0x5366D8: push    eax
0x5366D9: movaps  [esp+34h+var_20], xmm0
0x5366DE: call    sub_4D6AF0
0x5366E3: mov     edx, [esi]
0x5366E5: mov     eax, [edx+8]
0x5366E8: mov     ecx, esi
0x5366EA: call    eax
0x5366EC: mov     edi, eax
0x5366EE: test    edi, edi
0x5366F0: jz      short loc_536728
0x5366F2: movzx   eax, word ptr [edi+0B6h]
0x5366F9: xor     esi, esi
0x5366FB: test    eax, eax
0x5366FD: jbe     short loc_536728
0x5366FF: cmp     eax, esi
0x536701: ja      short loc_536707
0x536703: xor     eax, eax
0x536705: jmp     short loc_536710
0x536707: mov     ecx, [edi+0B0h]
0x53670D: mov     eax, [ecx+esi*4]
0x536710: push    ebx
0x536711: push    eax
0x536712: call    sub_536660
0x536717: movzx   eax, word ptr [edi+0B6h]
0x53671E: add     esi, 1
0x536721: add     esp, 8
0x536724: cmp     eax, esi
0x536726: ja      short loc_536707
0x536728: mov     ecx, [esp+30h+var_4]
0x53672C: pop     edi
0x53672D: pop     esi
0x53672E: pop     ebx
0x53672F: xor     ecx, esp
0x536731: call    @__security_check_cookie@4; __security_check_cookie(x)
0x536736: mov     esp, ebp
0x536738: pop     ebp
0x536739: retn
