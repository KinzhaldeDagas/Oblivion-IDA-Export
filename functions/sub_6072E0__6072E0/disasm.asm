0x6072E0: push    ecx
0x6072E1: push    ebx
0x6072E2: push    ebp
0x6072E3: push    esi
0x6072E4: mov     esi, ecx
0x6072E6: mov     ecx, [esi+58h]
0x6072E9: mov     eax, [ecx]
0x6072EB: mov     edx, [eax+8]
0x6072EE: push    edi
0x6072EF: mov     [esp+14h+var_2], 1
0x6072F4: mov     [esp+14h+var_1], 0
0x6072F9: call    edx
0x6072FB: mov     ecx, esi; this
0x6072FD: mov     ebx, eax
0x6072FF: mov     ebp, 3
0x607304: call    TESObjectREFR_GetParentCell
0x607309: cmp     dword ptr [esi+60h], 2
0x60730D: mov     edi, eax
0x60730F: jnz     short loc_607346
0x607311: mov     eax, [esi+5Ch]
0x607314: test    eax, eax
0x607316: jz      short loc_607346
0x607318: mov     ecx, [eax+28h]; this
0x60731B: test    ecx, ecx
0x60731D: jz      short loc_607346
0x60731F: cmp     ecx, ds:0B333C4h
0x607325: jnz     short loc_60733F
0x607327: test    ebx, ebx
0x607329: jz      short loc_607337
0x60732B: mov     eax, [esi]
0x60732D: mov     edx, [eax+1A4h]
0x607333: mov     ecx, esi
0x607335: call    edx
0x607337: pop     edi
0x607338: pop     esi
0x607339: pop     ebp
0x60733A: mov     al, 1
0x60733C: pop     ebx
0x60733D: pop     ecx
0x60733E: retn
0x60733F: call    TESObjectREFR_GetParentCell
0x607344: mov     edi, eax
0x607346: mov     eax, [esi]
0x607348: mov     edx, [eax+154h]
0x60734E: mov     ecx, esi
0x607350: call    edx
0x607352: test    eax, eax
0x607354: jnz     short loc_607366
0x607356: mov     ecx, ds:0B33A1Ch
0x60735C: push    esi
0x60735D: call    sub_4354F0
0x607362: test    al, al
0x607364: jz      short loc_607393
0x607366: mov     ecx, ds:0B333A0h
0x60736C: push    1; a2
0x60736E: push    edi; a1
0x60736F: call    TESObjectCELL_IsProcessLevel?LowHigh
0x607374: test    al, al
0x607376: jz      short loc_60737C
0x607378: xor     ebp, ebp
0x60737A: jmp     short loc_607393
0x60737C: mov     ecx, ds:0B333A0h
0x607382: push    0; a2
0x607384: push    edi; a1
0x607385: call    TESObjectCELL_IsProcessLevel?LowHigh
0x60738A: test    al, al
0x60738C: jz      short loc_607393
0x60738E: mov     ebp, 1
0x607393: cmp     dword ptr [esi+60h], 0
0x607397: mov     cl, 1
0x607399: jz      short loc_60739F
0x60739B: mov     cl, [esp+14h+var_1]
0x60739F: cmp     ebx, ebp
0x6073A1: jz      short loc_607337
0x6073A3: mov     eax, ebp
0x6073A5: sub     eax, 0
0x6073A8: jz      short loc_6073E3
0x6073AA: sub     eax, 1
0x6073AD: jnz     short loc_6073C9
0x6073AF: test    cl, cl
0x6073B1: jnz     short loc_6073C9
0x6073B3: mov     eax, [esi]
0x6073B5: mov     edx, [eax+1B0h]
0x6073BB: mov     ecx, esi
0x6073BD: call    edx
0x6073BF: mov     al, [esp+14h+var_2]
0x6073C3: pop     edi
0x6073C4: pop     esi
0x6073C5: pop     ebp
0x6073C6: pop     ebx
0x6073C7: pop     ecx
0x6073C8: retn
0x6073C9: mov     eax, [esi]
0x6073CB: mov     edx, [eax+10h]
0x6073CE: push    1
0x6073D0: mov     ecx, esi
0x6073D2: call    edx
0x6073D4: pop     edi
0x6073D5: pop     esi
0x6073D6: mov     [esp+0Ch+var_2], 0
0x6073DB: mov     al, [esp+0Ch+var_2]
0x6073DF: pop     ebp
0x6073E0: pop     ebx
0x6073E1: pop     ecx
0x6073E2: retn
0x6073E3: mov     eax, [esi]
0x6073E5: mov     edx, [eax+1A4h]
0x6073EB: mov     ecx, esi
0x6073ED: call    edx
0x6073EF: mov     al, [esp+14h+var_2]
0x6073F3: pop     edi
0x6073F4: pop     esi
0x6073F5: pop     ebp
0x6073F6: pop     ebx
0x6073F7: pop     ecx
0x6073F8: retn
