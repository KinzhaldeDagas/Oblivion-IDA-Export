0x732750: push    0FFFFFFFFh
0x732752: push    offset SEH_7F1810
0x732757: mov     eax, large fs:0
0x73275D: push    eax
0x73275E: push    ecx
0x73275F: push    esi
0x732760: mov     eax, ds:0B30AACh
0x732765: xor     eax, esp
0x732767: push    eax
0x732768: lea     eax, [esp+18h+var_C]
0x73276C: mov     large fs:0, eax
0x732772: mov     esi, ecx
0x732774: mov     [esp+18h+var_10], esi
0x732778: call    NiObject_constr
0x73277D: mov     al, [esp+18h+arg_0]
0x732781: mov     [esi+8], al
0x732784: mov     eax, [esp+18h+arg_4]
0x732788: xor     ecx, ecx
0x73278A: mov     [esi+0Ch], eax
0x73278D: mov     edx, 4
0x732792: mul     edx
0x732794: seto    cl
0x732797: mov     [esp+18h+var_4], 0
0x73279F: mov     dword ptr [esi], offset ??_7NiPalette@@6B@; const NiPalette::`vftable'
0x7327A5: mov     dword ptr [esi+10h], 1
0x7327AC: neg     ecx
0x7327AE: or      ecx, eax
0x7327B0: push    ecx; Size
0x7327B1: call    FormHeapAlloc
0x7327B6: mov     ecx, [esi+0Ch]
0x7327B9: mov     edx, [esp+1Ch+Src]
0x7327BD: add     ecx, ecx
0x7327BF: add     ecx, ecx
0x7327C1: push    ecx; Size
0x7327C2: push    edx; Src
0x7327C3: push    eax; Dst
0x7327C4: mov     [esi+14h], eax
0x7327C7: call    _memcpy
0x7327CC: mov     dword ptr [esi+18h], 0
0x7327D3: mov     ecx, ds:0B3F928h
0x7327D9: add     esp, 10h
0x7327DC: test    ecx, ecx
0x7327DE: jz      short loc_7327EB
0x7327E0: mov     eax, [ecx]
0x7327E2: mov     edx, [eax+118h]
0x7327E8: push    esi
0x7327E9: call    edx
0x7327EB: mov     ecx, esi
0x7327ED: call    sub_7322F0
0x7327F2: mov     eax, esi
0x7327F4: mov     ecx, dword ptr [esp+18h+var_C]
0x7327F8: mov     large fs:0, ecx
0x7327FF: pop     ecx
0x732800: pop     esi
0x732801: add     esp, 10h
0x732804: retn    0Ch
