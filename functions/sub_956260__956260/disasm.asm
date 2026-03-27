0x956260: push    ebp
0x956261: mov     ebp, esp
0x956263: and     esp, 0FFFFFFF8h
0x956266: sub     esp, 10Ch
0x95626C: mov     eax, [ebp+arg_4]
0x95626F: push    ebx
0x956270: mov     ebx, [ebp+arg_0]
0x956273: push    esi
0x956274: mov     esi, ecx
0x956276: mov     ecx, [ebp+arg_8]
0x956279: mov     edx, [esi]
0x95627B: push    edi
0x95627C: mov     [esi+0Ch], eax
0x95627F: lea     eax, [esi+30h]
0x956282: push    eax
0x956283: mov     [esi+20h], ecx
0x956286: xor     edi, edi
0x956288: push    ebx
0x956289: mov     ecx, esi
0x95628B: mov     [esp+120h+var_10C], esi
0x95628F: mov     [esi+24h], edi
0x956292: call    dword ptr [edx+14h]
0x956295: cmp     ebx, edi
0x956297: jz      loc_956484
0x95629D: mov     [esi+14h], edi
0x9562A0: mov     eax, [ebx+28h]
0x9562A3: cmp     eax, edi
0x9562A5: jz      short loc_9562BA
0x9562A7: xor     ecx, ecx
0x9562A9: lea     esp, [esp+0]
0x9562B0: shr     eax, 1
0x9562B2: inc     ecx
0x9562B3: cmp     eax, edi
0x9562B5: jnz     short loc_9562B0
0x9562B7: mov     [esi+14h], ecx
0x9562BA: mov     eax, [esi+14h]
0x9562BD: mov     ecx, eax
0x9562BF: sar     ecx, 1
0x9562C1: cdq
0x9562C2: mov     [esi+18h], ecx
0x9562C5: mov     ecx, [esi+60h]
0x9562C8: idiv    ecx
0x9562CA: add     eax, 2
0x9562CD: imul    eax, ecx
0x9562D0: dec     eax
0x9562D1: mov     [esi+14h], eax
0x9562D4: lea     eax, [esi+30h]
0x9562D7: push    eax
0x9562D8: push    ebx
0x9562D9: lea     ecx, [esp+120h+var_A8]
0x9562DD: call    sub_954C10
0x9562E2: push    ebx
0x9562E3: lea     ecx, [esp+11Ch+var_A8]
0x9562E7: mov     [esp+11Ch+var_84], 10h
0x9562F2: mov     [esp+11Ch+var_78], edi
0x9562F9: mov     [esp+11Ch+var_7C], edi
0x956300: mov     [esp+11Ch+var_80], edi
0x956307: mov     [esp+11Ch+var_A8], 0FFFFFFFFh
0x95630F: mov     [esp+11Ch+var_74], edi
0x956316: mov     [esp+11Ch+var_A4], 0
0x95631B: call    sub_954710
0x956320: lea     ecx, [esp+118h+var_A8]
0x956324: call    sub_954CA0
0x956329: mov     ecx, 12h
0x95632E: lea     esi, [esp+118h+var_A8]
0x956332: lea     edi, [esp+118h+var_108]
0x956336: rep movsd
0x956338: push    ebx
0x956339: lea     ecx, [esp+11Ch+var_108]
0x95633D: call    sub_954710
0x956342: mov     esi, [esp+118h+var_10C]
0x956346: add     esi, 30h ; '0'
0x956349: push    esi
0x95634A: push    ebx
0x95634B: lea     ecx, [esp+120h+var_108]
0x95634F: call    sub_954C10
0x956354: mov     edx, [esp+118h+var_A8]
0x956358: inc     edx
0x956359: lea     ecx, [esp+118h+var_108]
0x95635D: mov     [esp+118h+var_108], edx
0x956361: mov     [esp+118h+var_104], 0
0x956366: call    sub_954CA0
0x95636B: lea     eax, [esp+118h+var_108]
0x95636F: push    eax
0x956370: lea     ecx, [esp+11Ch+var_A8]
0x956374: push    ecx
0x956375: mov     ecx, [esp+120h+var_10C]
0x956379: push    ebx
0x95637A: call    sub_954EC0
0x95637F: push    esi
0x956380: push    ebx
0x956381: lea     ecx, [esp+120h+var_108]
0x956385: call    sub_954C10
0x95638A: xor     eax, eax
0x95638C: push    ebx
0x95638D: lea     ecx, [esp+11Ch+var_108]
0x956391: mov     [esp+11Ch+var_E4], 10h
0x956399: mov     [esp+11Ch+var_D8], eax
0x95639D: mov     [esp+11Ch+var_DC], eax
0x9563A1: mov     [esp+11Ch+var_E0], eax
0x9563A5: mov     [esp+11Ch+var_108], 0FFFFFFFFh
0x9563AD: mov     [esp+11Ch+var_D4], eax
0x9563B1: mov     [esp+11Ch+var_104], al
0x9563B5: call    sub_954710
0x9563BA: lea     ecx, [esp+118h+var_108]
0x9563BE: call    sub_954CA0
0x9563C3: mov     ecx, 12h
0x9563C8: lea     esi, [esp+118h+var_108]
0x9563CC: lea     edi, [esp+118h+var_60]
0x9563D3: rep movsd
0x9563D5: push    ebx
0x9563D6: lea     ecx, [esp+11Ch+var_60]
0x9563DD: call    sub_954710
0x9563E2: mov     eax, [esp+118h+var_10C]
0x9563E6: add     eax, 30h ; '0'
0x9563E9: push    eax
0x9563EA: push    ebx
0x9563EB: lea     ecx, [esp+120h+var_60]
0x9563F2: call    sub_954C10
0x9563F7: mov     edx, [esp+118h+var_108]
0x9563FB: inc     edx
0x9563FC: lea     ecx, [esp+118h+var_60]
0x956403: mov     [esp+118h+var_60], edx
0x95640A: mov     [esp+118h+var_5C], 0
0x956412: call    sub_954CA0
0x956417: lea     eax, [esp+118h+var_60]
0x95641E: push    eax
0x95641F: lea     ecx, [esp+11Ch+var_108]
0x956423: push    ecx
0x956424: mov     ecx, [esp+120h+var_10C]
0x956428: push    ebx
0x956429: call    sub_955CA0
0x95642E: mov     ecx, 12h
0x956433: lea     esi, [esp+118h+var_A8]
0x956437: lea     edi, [esp+118h+var_108]
0x95643B: rep movsd
0x95643D: push    ebx
0x95643E: lea     ecx, [esp+11Ch+var_108]
0x956442: call    sub_954710
0x956447: mov     eax, [esp+118h+var_10C]
0x95644B: add     eax, 30h ; '0'
0x95644E: push    eax
0x95644F: push    ebx
0x956450: lea     ecx, [esp+120h+var_108]
0x956454: call    sub_954C10
0x956459: mov     edx, [esp+118h+var_A8]
0x95645D: inc     edx
0x95645E: lea     ecx, [esp+118h+var_108]
0x956462: mov     [esp+118h+var_108], edx
0x956466: mov     [esp+118h+var_104], 0
0x95646B: call    sub_954CA0
0x956470: lea     eax, [esp+118h+var_108]
0x956474: push    eax
0x956475: lea     ecx, [esp+11Ch+var_A8]
0x956479: push    ecx
0x95647A: mov     ecx, [esp+120h+var_10C]
0x95647E: push    ebx
0x95647F: call    sub_955F50
0x956484: pop     edi
0x956485: pop     esi
0x956486: pop     ebx
0x956487: mov     esp, ebp
0x956489: pop     ebp
0x95648A: retn    0Ch
