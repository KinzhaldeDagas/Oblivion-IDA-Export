0x737750: push    0FFFFFFFFh
0x737752: push    offset SEH_734B00
0x737757: mov     eax, large fs:0
0x73775D: push    eax
0x73775E: push    ecx
0x73775F: push    ebx
0x737760: push    ebp
0x737761: push    esi
0x737762: push    edi
0x737763: mov     eax, ds:0B30AACh
0x737768: xor     eax, esp
0x73776A: push    eax
0x73776B: lea     eax, [esp+24h+var_C]
0x73776F: mov     large fs:0, eax
0x737775: mov     ebp, ecx
0x737777: mov     [esp+24h+var_10], ebp
0x73777B: lea     eax, [ebp+80h]
0x737781: mov     dword ptr [ebp+0], offset ??_7NiImageReader@@6B@; const NiImageReader::`vftable'
0x737788: xor     ebx, ebx
0x73778A: push    eax; lpCriticalSection
0x73778B: mov     [eax+78h], ebx
0x73778E: mov     [eax+7Ch], ebx
0x737791: call    dword ptr ds:0A28064h
0x737797: lea     edi, [ebp+108h]
0x73779D: mov     ecx, edi
0x73779F: mov     [esp+24h+var_4], ebx
0x7377A3: mov     dword ptr [ebp+0], offset ??_7NiBMPReader@@6B@; const NiBMPReader::`vftable'
0x7377AA: call    InitSurfacEData
0x7377AF: mov     ecx, 11h
0x7377B4: mov     esi, offset unk_B25E48
0x7377B9: mov     [ebp+100h], ebx
0x7377BF: mov     [ebp+104h], ebx
0x7377C5: rep movsd
0x7377C7: mov     [ebp+14Ch], bx
0x7377CE: mov     [ebp+150h], ebx
0x7377D4: mov     [ebp+154h], ebx
0x7377DA: mov     [ebp+158h], bl
0x7377E0: mov     [ebp+159h], bl
0x7377E6: mov     eax, ebp
0x7377E8: mov     ecx, [esp+24h+var_C]
0x7377EC: mov     large fs:0, ecx
0x7377F3: pop     ecx
0x7377F4: pop     edi
0x7377F5: pop     esi
0x7377F6: pop     ebp
0x7377F7: pop     ebx
0x7377F8: add     esp, 10h
0x7377FB: retn
