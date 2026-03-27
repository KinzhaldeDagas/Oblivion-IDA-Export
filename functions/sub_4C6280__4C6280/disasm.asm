0x4C6280: sub     esp, 10h
0x4C6283: push    ebx
0x4C6284: push    ebp
0x4C6285: push    edi
0x4C6286: mov     edi, ecx
0x4C6288: and     dword ptr [edi+1Ch], 0FFFFFFF7h
0x4C628C: call    sub_4C58D0
0x4C6291: xor     ebp, ebp
0x4C6293: cmp     [edi+24h], ebp
0x4C6296: jz      loc_4C64B0
0x4C629C: push    esi
0x4C629D: xor     esi, esi
0x4C629F: mov     [esp+20h+var_10], ebp
0x4C62A3: mov     [esp+20h+var_8], esi
0x4C62A7: jmp     short loc_4C62B0
0x4C62A9: align 10h
0x4C62B0: mov     eax, [edi+24h]
0x4C62B3: cmp     dword ptr [eax+ebp+40h], 0
0x4C62B8: lea     eax, [eax+ebp+40h]
0x4C62BC: jz      short loc_4C62E3
0x4C62BE: mov     ecx, [eax]
0x4C62C0: mov     edx, [ecx]
0x4C62C2: push    edx
0x4C62C3: call    FormHeapFree
0x4C62C8: mov     eax, [edi+24h]
0x4C62CB: mov     ecx, [eax+ebp+40h]
0x4C62CF: push    ecx
0x4C62D0: call    FormHeapFree
0x4C62D5: mov     edx, [edi+24h]
0x4C62D8: add     esp, 8
0x4C62DB: mov     dword ptr [edx+ebp+40h], 0
0x4C62E3: mov     eax, [edi+24h]
0x4C62E6: cmp     dword ptr [eax+ebp+30h], 0
0x4C62EB: lea     eax, [eax+ebp+30h]
0x4C62EF: jz      short loc_4C6307
0x4C62F1: mov     ecx, [eax]
0x4C62F3: push    ecx
0x4C62F4: call    FormHeapFree
0x4C62F9: mov     edx, [edi+24h]
0x4C62FC: add     esp, 4
0x4C62FF: mov     dword ptr [edx+ebp+30h], 0
0x4C6307: mov     eax, [edi+24h]
0x4C630A: mov     eax, [eax+4]
0x4C630D: test    eax, eax
0x4C630F: jz      short loc_4C632A
0x4C6311: mov     ecx, [eax+ebp]
0x4C6314: push    ecx
0x4C6315: call    FormHeapFree
0x4C631A: mov     edx, [edi+24h]
0x4C631D: mov     eax, [edx+4]
0x4C6320: add     esp, 4
0x4C6323: mov     dword ptr [eax+ebp], 0
0x4C632A: mov     ecx, [edi+24h]
0x4C632D: mov     eax, [ecx+8]
0x4C6330: test    eax, eax
0x4C6332: jz      short loc_4C634D
0x4C6334: mov     edx, [eax+ebp]
0x4C6337: push    edx
0x4C6338: call    FormHeapFree
0x4C633D: mov     eax, [edi+24h]
0x4C6340: mov     ecx, [eax+8]
0x4C6343: add     esp, 4
0x4C6346: mov     dword ptr [ecx+ebp], 0
0x4C634D: mov     edx, [edi+24h]
0x4C6350: mov     eax, [edx+0Ch]
0x4C6353: test    eax, eax
0x4C6355: jz      short loc_4C6370
0x4C6357: mov     eax, [eax+ebp]
0x4C635A: push    eax
0x4C635B: call    FormHeapFree
0x4C6360: mov     ecx, [edi+24h]
0x4C6363: mov     edx, [ecx+0Ch]
0x4C6366: add     esp, 4
0x4C6369: mov     dword ptr [edx+ebp], 0
0x4C6370: mov     eax, [edi+24h]
0x4C6373: mov     eax, [eax+10h]
0x4C6376: test    eax, eax
0x4C6378: jz      short loc_4C6393
0x4C637A: mov     ecx, [eax+ebp]
0x4C637D: push    ecx
0x4C637E: call    FormHeapFree
0x4C6383: mov     edx, [edi+24h]
0x4C6386: mov     eax, [edx+10h]
0x4C6389: add     esp, 4
0x4C638C: mov     dword ptr [eax+ebp], 0
0x4C6393: mov     ecx, [edi+24h]
0x4C6396: cmp     dword ptr [esi+ecx+60h], 0
0x4C639B: jbe     loc_4C642C
0x4C63A1: mov     edx, [esi+ecx+58h]
0x4C63A5: xor     eax, eax
0x4C63A7: test    edx, edx
0x4C63A9: jbe     short loc_4C63C4
0x4C63AB: mov     ebx, [esi+ecx+5Ch]
0x4C63AF: mov     ecx, ebx
0x4C63B1: cmp     dword ptr [ecx], 0
0x4C63B4: jnz     loc_4C64D7
0x4C63BA: add     eax, 1
0x4C63BD: add     ecx, 4
0x4C63C0: cmp     eax, edx
0x4C63C2: jb      short loc_4C63B1
0x4C63C4: xor     eax, eax
0x4C63C6: test    eax, eax
0x4C63C8: mov     [esp+20h+var_C], eax
0x4C63CC: jz      short loc_4C642C
0x4C63CE: mov     edi, edi
0x4C63D0: lea     ecx, [esp+20h+var_10]
0x4C63D4: push    ecx
0x4C63D5: mov     ecx, [edi+24h]
0x4C63D8: lea     edx, [esp+24h+var_4]
0x4C63DC: push    edx
0x4C63DD: lea     eax, [esp+28h+var_C]
0x4C63E1: push    eax
0x4C63E2: lea     ecx, [esi+ecx+54h]
0x4C63E6: call    sub_452600
0x4C63EB: mov     ebx, [esp+20h+var_10]
0x4C63EF: test    ebx, ebx
0x4C63F1: jz      short loc_4C6425
0x4C63F3: xor     esi, esi
0x4C63F5: cmp     dword ptr [ebx+esi*4], 0
0x4C63F9: jz      short loc_4C6410
0x4C63FB: mov     edx, [ebx+esi*4]
0x4C63FE: mov     dword ptr [edx], 0
0x4C6404: mov     eax, [ebx+esi*4]
0x4C6407: push    eax
0x4C6408: call    FormHeapFree
0x4C640D: add     esp, 4
0x4C6410: add     esi, 1
0x4C6413: cmp     esi, 10h
0x4C6416: jl      short loc_4C63F5
0x4C6418: push    ebx
0x4C6419: call    FormHeapFree
0x4C641E: mov     esi, [esp+24h+var_8]
0x4C6422: add     esp, 4
0x4C6425: cmp     [esp+20h+var_C], 0
0x4C642A: jnz     short loc_4C63D0
0x4C642C: mov     ecx, [edi+24h]
0x4C642F: lea     ecx, [esi+ecx+54h]
0x4C6433: call    NiTMap_Clear
0x4C6438: add     ebp, 4
0x4C643B: add     esi, 10h
0x4C643E: cmp     ebp, 10h
0x4C6441: mov     [esp+20h+var_8], esi
0x4C6445: jl      loc_4C62B0
0x4C644B: mov     edx, [edi+24h]
0x4C644E: mov     eax, [edx+10h]
0x4C6451: push    eax
0x4C6452: call    FormHeapFree
0x4C6457: mov     ecx, [edi+24h]
0x4C645A: mov     edx, [ecx+4]
0x4C645D: push    edx
0x4C645E: call    FormHeapFree
0x4C6463: mov     eax, [edi+24h]
0x4C6466: mov     ecx, [eax+0Ch]
0x4C6469: push    ecx
0x4C646A: call    FormHeapFree
0x4C646F: mov     edx, [edi+24h]
0x4C6472: mov     eax, [edx+8]
0x4C6475: push    eax
0x4C6476: call    FormHeapFree
0x4C647B: mov     ecx, [edi+24h]
0x4C647E: mov     ecx, [ecx+50h]
0x4C6481: add     esp, 10h
0x4C6484: test    ecx, ecx
0x4C6486: pop     esi
0x4C6487: jz      short loc_4C64B0
0x4C6489: cmp     word ptr [ecx+4], 0
0x4C648E: jz      short loc_4C64A6
0x4C6490: add     word ptr [ecx+6], 0FFFFh
0x4C6495: movzx   eax, word ptr [ecx+6]
0x4C6499: test    ax, ax
0x4C649C: jnz     short loc_4C64A6
0x4C649E: mov     edx, [ecx]
0x4C64A0: mov     eax, [edx]
0x4C64A2: push    1
0x4C64A4: call    eax
0x4C64A6: mov     ecx, [edi+24h]
0x4C64A9: mov     dword ptr [ecx+50h], 0
0x4C64B0: mov     ebx, [edi+24h]
0x4C64B3: test    ebx, ebx
0x4C64B5: jz      short loc_4C64C7
0x4C64B7: mov     ecx, ebx
0x4C64B9: call    sub_4C2180
0x4C64BE: push    ebx
0x4C64BF: call    FormHeapFree
0x4C64C4: add     esp, 4
0x4C64C7: mov     dword ptr [edi+24h], 0
0x4C64CE: pop     edi
0x4C64CF: pop     ebp
0x4C64D0: mov     al, 1
0x4C64D2: pop     ebx
0x4C64D3: add     esp, 10h
0x4C64D6: retn
0x4C64D7: mov     eax, [ebx+eax*4]
0x4C64DA: jmp     loc_4C63C6
