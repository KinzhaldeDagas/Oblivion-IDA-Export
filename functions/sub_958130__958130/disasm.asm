0x958130: sub     esp, 1Ch
0x958133: push    edi
0x958134: mov     edi, eax
0x958136: mov     eax, [esp+20h+arg_18]
0x95813A: push    eax
0x95813B: push    esi
0x95813C: lea     ecx, [esp+28h+var_10]
0x958140: call    sub_9183A0
0x958145: mov     ecx, [esp+20h+arg_4]
0x958149: mov     edx, [esp+20h+arg_0]
0x95814D: push    ecx
0x95814E: push    edx
0x95814F: lea     ecx, [esp+28h+var_10]
0x958153: call    sub_918460
0x958158: mov     eax, [esi]
0x95815A: lea     ecx, [esp+20h+var_19]
0x95815E: push    ecx
0x95815F: mov     ecx, esi
0x958161: call    dword ptr [eax+8]
0x958164: cmp     byte ptr [eax], 0
0x958167: lea     ecx, [esp+20h+var_10]
0x95816B: jz      short loc_958191
0x95816D: mov     edx, [esp+20h+arg_C]
0x958171: mov     eax, [esp+20h+arg_8]
0x958175: push    edx
0x958176: push    eax
0x958177: call    sub_918460
0x95817C: mov     edx, [esi]
0x95817E: lea     eax, [esp+20h+var_19]
0x958182: push    eax
0x958183: mov     ecx, esi
0x958185: call    dword ptr [edx+8]
0x958188: cmp     byte ptr [eax], 0
0x95818B: lea     ecx, [esp+20h+var_10]
0x95818F: jnz     short loc_95819E
0x958191: call    sub_918180
0x958196: or      eax, 0FFFFFFFFh
0x958199: pop     edi
0x95819A: add     esp, 1Ch
0x95819D: retn
0x95819E: push    ebx
0x95819F: push    ebp
0x9581A0: mov     ebp, [edi+4]
0x9581A3: push    ebp
0x9581A4: call    sub_918440
0x9581A9: xor     ebx, ebx
0x9581AB: test    ebp, ebp
0x9581AD: mov     [esp+28h+var_18], 14h
0x9581B5: jbe     short loc_9581FB
0x9581B7: mov     ecx, [edi]
0x9581B9: mov     edx, [ecx+ebx*8]
0x9581BC: push    edx
0x9581BD: lea     ecx, [esp+2Ch+var_10]
0x9581C1: call    sub_918440
0x9581C6: mov     eax, [edi]
0x9581C8: mov     ecx, [eax+ebx*8+4]
0x9581CC: push    ecx
0x9581CD: lea     ecx, [esp+2Ch+var_10]
0x9581D1: call    sub_918440
0x9581D6: mov     edx, [esi]
0x9581D8: lea     eax, [esp+28h+var_19]
0x9581DC: push    eax
0x9581DD: mov     ecx, esi
0x9581DF: call    dword ptr [edx+8]
0x9581E2: cmp     byte ptr [eax], 0
0x9581E5: jz      loc_958297
0x9581EB: mov     edx, [esp+28h+var_18]
0x9581EF: add     edx, 8
0x9581F2: inc     ebx
0x9581F3: cmp     ebx, ebp
0x9581F5: mov     [esp+28h+var_18], edx
0x9581F9: jb      short loc_9581B7
0x9581FB: mov     ebx, [edi+10h]
0x9581FE: push    ebx
0x9581FF: lea     ecx, [esp+2Ch+var_10]
0x958203: mov     [esp+2Ch+var_14], ebx
0x958207: call    sub_918440
0x95820C: mov     ecx, [esp+28h+var_18]
0x958210: add     ecx, 4
0x958213: xor     ebp, ebp
0x958215: test    ebx, ebx
0x958217: mov     [esp+28h+var_18], ecx
0x95821B: jbe     short loc_958278
0x95821D: xor     ebx, ebx
0x95821F: nop
0x958220: mov     ecx, [edi+0Ch]
0x958223: mov     edx, [ebx+ecx]
0x958226: push    edx
0x958227: lea     ecx, [esp+2Ch+var_10]
0x95822B: call    sub_918440
0x958230: mov     eax, [edi+0Ch]
0x958233: mov     ecx, [ebx+eax+4]
0x958237: push    0
0x958239: push    ecx
0x95823A: lea     ecx, [esp+30h+var_10]
0x95823E: call    sub_918460
0x958243: mov     edx, [edi+0Ch]
0x958246: mov     eax, [ebx+edx+8]
0x95824A: push    0
0x95824C: push    eax
0x95824D: lea     ecx, [esp+30h+var_10]
0x958251: call    sub_918460
0x958256: mov     edx, [esi]
0x958258: lea     eax, [esp+28h+var_19]
0x95825C: push    eax
0x95825D: mov     ecx, esi
0x95825F: call    dword ptr [edx+8]
0x958262: cmp     byte ptr [eax], 0
0x958265: jz      short loc_958297
0x958267: add     [esp+28h+var_18], 14h
0x95826C: mov     eax, [esp+28h+var_14]
0x958270: inc     ebp
0x958271: add     ebx, 0Ch
0x958274: cmp     ebp, eax
0x958276: jb      short loc_958220
0x958278: mov     edi, [esp+28h+arg_14]
0x95827C: push    edi
0x95827D: lea     ecx, [esp+2Ch+var_10]
0x958281: call    sub_918440
0x958286: mov     edx, [esi]
0x958288: lea     eax, [esp+28h+var_19]
0x95828C: push    eax
0x95828D: mov     ecx, esi
0x95828F: call    dword ptr [edx+8]
0x958292: cmp     byte ptr [eax], 0
0x958295: jnz     short loc_9582AA
0x958297: lea     ecx, [esp+28h+var_10]
0x95829B: call    sub_918180
0x9582A0: pop     ebp
0x9582A1: pop     ebx
0x9582A2: or      eax, 0FFFFFFFFh
0x9582A5: pop     edi
0x9582A6: add     esp, 1Ch
0x9582A9: retn
0x9582AA: mov     eax, [esp+28h+arg_10]
0x9582AE: mov     edx, [esi]
0x9582B0: push    edi
0x9582B1: push    eax
0x9582B2: mov     ecx, esi
0x9582B4: call    dword ptr [edx+0Ch]
0x9582B7: mov     edx, [esi]
0x9582B9: lea     eax, [esp+28h+var_19]
0x9582BD: push    eax
0x9582BE: mov     ecx, esi
0x9582C0: call    dword ptr [edx+8]
0x9582C3: cmp     byte ptr [eax], 0
0x9582C6: lea     ecx, [esp+28h+var_10]
0x9582CA: jz      short loc_95829B
0x9582CC: call    sub_918180
0x9582D1: mov     ecx, [esp+28h+var_18]
0x9582D5: pop     ebp
0x9582D6: pop     ebx
0x9582D7: lea     eax, [ecx+edi+4]
0x9582DB: pop     edi
0x9582DC: add     esp, 1Ch
0x9582DF: retn
