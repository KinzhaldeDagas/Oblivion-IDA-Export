0x716140: push    ecx
0x716141: mov     eax, ds:0B3FC98h
0x716146: push    ebx
0x716147: push    esi
0x716148: push    edi
0x716149: push    eax; ArgList
0x71614A: mov     edi, ecx
0x71614C: call    TESOutput_PrintString
0x716151: mov     esi, dword ptr [esp+14h+arg_0]
0x716155: movzx   ebx, word ptr [esi+0Ah]
0x716159: movzx   ecx, word ptr [esi+8]
0x71615D: add     esp, 4
0x716160: cmp     ebx, ecx
0x716162: mov     [esp+10h+var_4], eax
0x716166: jb      short loc_716176
0x716168: movzx   edx, word ptr [esi+0Eh]
0x71616C: add     edx, ebx
0x71616E: push    edx
0x71616F: mov     ecx, esi
0x716171: call    NiTArray_SetSize
0x716176: lea     eax, [esp+10h+var_4]
0x71617A: push    eax
0x71617B: push    ebx
0x71617C: mov     ecx, esi
0x71617E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x716183: fld     dword ptr [edi+0Ch]
0x716186: push    ecx
0x716187: fstp    [esp+14h+var_14]; float
0x71618A: push    offset aM_ffrequency; "m_fFrequency"
0x71618F: call    TESOutput_PrintLabeledFloat
0x716194: movzx   ebx, word ptr [esi+0Ah]
0x716198: movzx   ecx, word ptr [esi+8]
0x71619C: add     esp, 8
0x71619F: cmp     ebx, ecx
0x7161A1: mov     dword ptr [esp+10h+arg_0], eax
0x7161A5: jb      short loc_7161B5
0x7161A7: movzx   edx, word ptr [esi+0Eh]
0x7161AB: add     edx, ebx
0x7161AD: push    edx
0x7161AE: mov     ecx, esi
0x7161B0: call    NiTArray_SetSize
0x7161B5: lea     eax, [esp+10h+arg_0]
0x7161B9: push    eax
0x7161BA: push    ebx
0x7161BB: mov     ecx, esi
0x7161BD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7161C2: fld     dword ptr [edi+10h]
0x7161C5: push    ecx
0x7161C6: fstp    [esp+14h+var_14]; float
0x7161C9: push    offset aM_fphase; "m_fPhase"
0x7161CE: call    TESOutput_PrintLabeledFloat
0x7161D3: movzx   ebx, word ptr [esi+0Ah]
0x7161D7: movzx   ecx, word ptr [esi+8]
0x7161DB: add     esp, 8
0x7161DE: cmp     ebx, ecx
0x7161E0: mov     dword ptr [esp+10h+arg_0], eax
0x7161E4: jb      short loc_7161F4
0x7161E6: movzx   edx, word ptr [esi+0Eh]
0x7161EA: add     edx, ebx
0x7161EC: push    edx
0x7161ED: mov     ecx, esi
0x7161EF: call    NiTArray_SetSize
0x7161F4: lea     eax, [esp+10h+arg_0]
0x7161F8: push    eax
0x7161F9: push    ebx
0x7161FA: mov     ecx, esi
0x7161FC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x716201: fld     dword ptr [edi+14h]
0x716204: push    ecx
0x716205: fstp    [esp+14h+var_14]; float
0x716208: push    offset aM_flokeytime; "m_fLoKeyTime"
0x71620D: call    TESOutput_PrintLabeledFloat
0x716212: movzx   ebx, word ptr [esi+0Ah]
0x716216: movzx   ecx, word ptr [esi+8]
0x71621A: add     esp, 8
0x71621D: cmp     ebx, ecx
0x71621F: mov     dword ptr [esp+10h+arg_0], eax
0x716223: jb      short loc_716233
0x716225: movzx   edx, word ptr [esi+0Eh]
0x716229: add     edx, ebx
0x71622B: push    edx
0x71622C: mov     ecx, esi
0x71622E: call    NiTArray_SetSize
0x716233: lea     eax, [esp+10h+arg_0]
0x716237: push    eax
0x716238: push    ebx
0x716239: mov     ecx, esi
0x71623B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x716240: fld     dword ptr [edi+18h]
0x716243: push    ecx
0x716244: fstp    [esp+14h+var_14]; float
0x716247: push    offset aM_fhikeytime; "m_fHiKeyTime"
0x71624C: call    TESOutput_PrintLabeledFloat
0x716251: movzx   ebx, word ptr [esi+0Ah]
0x716255: movzx   ecx, word ptr [esi+8]
0x716259: add     esp, 8
0x71625C: cmp     ebx, ecx
0x71625E: mov     dword ptr [esp+10h+arg_0], eax
0x716262: jb      short loc_716272
0x716264: movzx   edx, word ptr [esi+0Eh]
0x716268: add     edx, ebx
0x71626A: push    edx
0x71626B: mov     ecx, esi
0x71626D: call    NiTArray_SetSize
0x716272: lea     eax, [esp+10h+arg_0]
0x716276: push    eax
0x716277: push    ebx
0x716278: mov     ecx, esi
0x71627A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71627F: fld     dword ptr [edi+1Ch]
0x716282: push    ecx
0x716283: fstp    [esp+14h+var_14]; float
0x716286: push    offset aM_fstarttime; "m_fStartTime"
0x71628B: call    TESOutput_PrintLabeledFloat
0x716290: movzx   ebx, word ptr [esi+0Ah]
0x716294: movzx   ecx, word ptr [esi+8]
0x716298: add     esp, 8
0x71629B: cmp     ebx, ecx
0x71629D: mov     dword ptr [esp+10h+arg_0], eax
0x7162A1: jb      short loc_7162B1
0x7162A3: movzx   edx, word ptr [esi+0Eh]
0x7162A7: add     edx, ebx
0x7162A9: push    edx
0x7162AA: mov     ecx, esi
0x7162AC: call    NiTArray_SetSize
0x7162B1: lea     eax, [esp+10h+arg_0]
0x7162B5: push    eax
0x7162B6: push    ebx
0x7162B7: mov     ecx, esi
0x7162B9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7162BE: fld     dword ptr [edi+20h]
0x7162C1: push    ecx
0x7162C2: fstp    [esp+14h+var_14]; float
0x7162C5: push    offset aM_flasttime; "m_fLastTime"
0x7162CA: call    TESOutput_PrintLabeledFloat
0x7162CF: movzx   ebx, word ptr [esi+0Ah]
0x7162D3: movzx   ecx, word ptr [esi+8]
0x7162D7: add     esp, 8
0x7162DA: cmp     ebx, ecx
0x7162DC: mov     dword ptr [esp+10h+arg_0], eax
0x7162E0: jb      short loc_7162F0
0x7162E2: movzx   edx, word ptr [esi+0Eh]
0x7162E6: add     edx, ebx
0x7162E8: push    edx
0x7162E9: mov     ecx, esi
0x7162EB: call    NiTArray_SetSize
0x7162F0: lea     eax, [esp+10h+arg_0]
0x7162F4: push    eax
0x7162F5: push    ebx
0x7162F6: mov     ecx, esi
0x7162F8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7162FD: mov     ecx, [edi+30h]
0x716300: push    ecx; int
0x716301: push    offset aM_ptarget; "m_pTarget"
0x716306: call    TESOutput_PrintLabeledPointer
0x71630B: movzx   ebx, word ptr [esi+0Ah]
0x71630F: movzx   edx, word ptr [esi+8]
0x716313: add     esp, 8
0x716316: cmp     ebx, edx
0x716318: mov     dword ptr [esp+10h+arg_0], eax
0x71631C: jb      short loc_71632C
0x71631E: movzx   eax, word ptr [esi+0Eh]
0x716322: add     eax, ebx
0x716324: push    eax
0x716325: mov     ecx, esi
0x716327: call    NiTArray_SetSize
0x71632C: lea     ecx, [esp+10h+arg_0]
0x716330: push    ecx
0x716331: push    ebx
0x716332: mov     ecx, esi
0x716334: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x716339: movzx   eax, byte ptr [edi+8]
0x71633D: and     eax, 1
0x716340: push    eax; int
0x716341: push    offset aAnimType; "anim type"
0x716346: call    sub_7158A0
0x71634B: movzx   ebx, word ptr [esi+0Ah]
0x71634F: movzx   edx, word ptr [esi+8]
0x716353: add     esp, 8
0x716356: cmp     ebx, edx
0x716358: mov     dword ptr [esp+10h+arg_0], eax
0x71635C: jb      short loc_71636C
0x71635E: movzx   eax, word ptr [esi+0Eh]
0x716362: add     eax, ebx
0x716364: push    eax
0x716365: mov     ecx, esi
0x716367: call    NiTArray_SetSize
0x71636C: lea     ecx, [esp+10h+arg_0]
0x716370: push    ecx
0x716371: push    ebx
0x716372: mov     ecx, esi
0x716374: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x716379: movzx   eax, byte ptr [edi+8]
0x71637D: shr     eax, 1
0x71637F: and     eax, 3
0x716382: push    eax; int
0x716383: push    offset aCycleType; "cycle type"
0x716388: call    sub_715910
0x71638D: movzx   ebx, word ptr [esi+0Ah]
0x716391: movzx   edx, word ptr [esi+8]
0x716395: add     esp, 8
0x716398: cmp     ebx, edx
0x71639A: mov     dword ptr [esp+10h+arg_0], eax
0x71639E: jb      short loc_7163AE
0x7163A0: movzx   eax, word ptr [esi+0Eh]
0x7163A4: add     eax, ebx
0x7163A6: push    eax
0x7163A7: mov     ecx, esi
0x7163A9: call    NiTArray_SetSize
0x7163AE: lea     ecx, [esp+10h+arg_0]
0x7163B2: push    ecx
0x7163B3: push    ebx
0x7163B4: mov     ecx, esi
0x7163B6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7163BB: mov     dl, [edi+8]
0x7163BE: shr     dl, 3
0x7163C1: and     dl, 1
0x7163C4: mov     [esp+10h+arg_0], dl
0x7163C8: mov     eax, dword ptr [esp+10h+arg_0]
0x7163CC: push    eax; char
0x7163CD: push    offset aActive; "Active"
0x7163D2: call    TESOutput_PrintLabeledBool
0x7163D7: movzx   ebx, word ptr [esi+0Ah]
0x7163DB: movzx   ecx, word ptr [esi+8]
0x7163DF: add     esp, 8
0x7163E2: cmp     ebx, ecx
0x7163E4: mov     dword ptr [esp+10h+arg_0], eax
0x7163E8: jb      short loc_7163F8
0x7163EA: movzx   edx, word ptr [esi+0Eh]
0x7163EE: add     edx, ebx
0x7163F0: push    edx
0x7163F1: mov     ecx, esi
0x7163F3: call    NiTArray_SetSize
0x7163F8: lea     eax, [esp+10h+arg_0]
0x7163FC: push    eax
0x7163FD: push    ebx
0x7163FE: mov     ecx, esi
0x716400: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x716405: mov     cl, [edi+8]
0x716408: shr     cl, 4
0x71640B: and     cl, 1
0x71640E: mov     [esp+10h+arg_0], cl
0x716412: mov     edx, dword ptr [esp+10h+arg_0]
0x716416: push    edx; char
0x716417: push    offset aPlayBackwards; "Play Backwards"
0x71641C: call    TESOutput_PrintLabeledBool
0x716421: movzx   edi, word ptr [esi+0Ah]
0x716425: mov     dword ptr [esp+18h+arg_0], eax
0x716429: movzx   eax, word ptr [esi+8]
0x71642D: add     esp, 8
0x716430: cmp     edi, eax
0x716432: jb      short loc_716442
0x716434: movzx   ecx, word ptr [esi+0Eh]
0x716438: add     ecx, edi
0x71643A: push    ecx
0x71643B: mov     ecx, esi
0x71643D: call    NiTArray_SetSize
0x716442: lea     edx, [esp+10h+arg_0]
0x716446: push    edx
0x716447: push    edi
0x716448: mov     ecx, esi
0x71644A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71644F: pop     edi
0x716450: pop     esi
0x716451: pop     ebx
0x716452: pop     ecx
0x716453: retn    4
