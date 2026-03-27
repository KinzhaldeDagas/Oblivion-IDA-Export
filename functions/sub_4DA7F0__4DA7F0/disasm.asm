0x4DA7F0: push    ecx
0x4DA7F1: fld     dword ptr ds:0A30634h
0x4DA7F7: fcomp   [esp+4+arg_4]
0x4DA7FB: fnstsw  ax
0x4DA7FD: test    ah, 44h
0x4DA800: jp      short loc_4DA80C
0x4DA802: fld     dword ptr ds:0B33A30h
0x4DA808: fstp    [esp+4+arg_4]
0x4DA80C: mov     ecx, ds:0B33B00h
0x4DA812: push    ebx
0x4DA813: push    ebp
0x4DA814: push    edi
0x4DA815: push    2; Size
0x4DA817: lea     eax, [esp+14h+Src]
0x4DA81B: xor     edi, edi
0x4DA81D: mov     [esp+14h+Src], edi
0x4DA821: mov     ebp, [ecx+14h]
0x4DA824: push    eax; Src
0x4DA825: call    SaveLoad_SaveData
0x4DA82A: mov     ebx, [esp+10h+arg_0]
0x4DA82E: cmp     ebx, edi
0x4DA830: jz      loc_4DA8D8
0x4DA836: mov     cl, [ebx+8]
0x4DA839: shr     cl, 3
0x4DA83C: test    cl, 1
0x4DA83F: jz      short loc_4DA8BC
0x4DA841: cmp     [ebx+46h], di
0x4DA845: jbe     loc_4DA8CA
0x4DA84B: push    esi
0x4DA84C: lea     esp, [esp+0]
0x4DA850: mov     edx, [ebx+40h]
0x4DA853: mov     esi, [edx+edi*4]
0x4DA856: test    esi, esi
0x4DA858: jz      short loc_4DA8B0
0x4DA85A: cmp     dword ptr [esi+44h], 0
0x4DA85E: jz      short loc_4DA8B0
0x4DA860: mov     eax, [esi+8]
0x4DA863: lea     edx, [eax+1]
0x4DA866: mov     cl, [eax]
0x4DA868: add     eax, 1
0x4DA86B: test    cl, cl
0x4DA86D: jnz     short loc_4DA866
0x4DA86F: mov     ecx, ds:0B33B00h
0x4DA875: sub     eax, edx
0x4DA877: mov     byte ptr [esp+14h+arg_0], al
0x4DA87B: push    1; Size
0x4DA87D: lea     eax, [esp+18h+arg_0]
0x4DA881: push    eax; Src
0x4DA882: call    SaveLoad_SaveData
0x4DA887: movzx   ecx, byte ptr [esp+14h+arg_0]
0x4DA88C: mov     edx, [esi+8]
0x4DA88F: push    ecx; Size
0x4DA890: mov     ecx, ds:0B33B00h
0x4DA896: push    edx; Src
0x4DA897: call    SaveLoad_SaveData
0x4DA89C: push    ecx
0x4DA89D: fld     [esp+18h+arg_4]
0x4DA8A1: mov     ecx, esi
0x4DA8A3: fstp    [esp+18h+var_18]; Src
0x4DA8A6: call    sub_49F570
0x4DA8AB: add     [esp+14h+Src], 1
0x4DA8B0: movzx   eax, word ptr [ebx+46h]
0x4DA8B4: add     edi, 1
0x4DA8B7: cmp     edi, eax
0x4DA8B9: jb      short loc_4DA850
0x4DA8BB: pop     esi
0x4DA8BC: mov     cx, word ptr [esp+10h+Src]
0x4DA8C1: pop     edi
0x4DA8C2: mov     [ebp+0], cx
0x4DA8C6: pop     ebp
0x4DA8C7: pop     ebx
0x4DA8C8: pop     ecx
0x4DA8C9: retn
0x4DA8CA: mov     dx, word ptr [esp+10h+Src]
0x4DA8CF: pop     edi
0x4DA8D0: mov     [ebp+0], dx
0x4DA8D4: pop     ebp
0x4DA8D5: pop     ebx
0x4DA8D6: pop     ecx
0x4DA8D7: retn
0x4DA8D8: mov     ax, word ptr [esp+10h+Src]
0x4DA8DD: pop     edi
0x4DA8DE: mov     [ebp+0], ax
0x4DA8E2: pop     ebp
0x4DA8E3: pop     ebx
0x4DA8E4: pop     ecx
0x4DA8E5: retn
