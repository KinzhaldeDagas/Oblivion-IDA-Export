0x73F460: sub     esp, 0Ch
0x73F463: push    ebx
0x73F464: push    ebp
0x73F465: push    esi
0x73F466: push    edi
0x73F467: mov     edi, [esp+1Ch+arg_0]
0x73F46B: push    edi
0x73F46C: mov     esi, ecx
0x73F46E: call    sub_729450
0x73F473: mov     ebx, 4010007h
0x73F478: cmp     [edi+0D8h], ebx
0x73F47E: mov     ebp, 2
0x73F483: jnb     short loc_73F4A5
0x73F485: mov     eax, [edi+21Ch]
0x73F48B: push    1
0x73F48D: lea     ecx, [esp+20h+var_4]
0x73F491: push    ecx
0x73F492: push    ebp
0x73F493: lea     edx, [esp+28h+var_8]
0x73F497: push    edx
0x73F498: push    eax
0x73F499: mov     eax, [eax+4]
0x73F49C: mov     [esp+30h+var_4], ebp
0x73F4A0: call    eax
0x73F4A2: add     esp, 14h
0x73F4A5: movzx   eax, word ptr [esi+8]
0x73F4A9: xor     ecx, ecx
0x73F4AB: mov     edx, 4
0x73F4B0: mul     edx
0x73F4B2: seto    cl
0x73F4B5: neg     ecx
0x73F4B7: or      ecx, eax
0x73F4B9: push    ecx; Size
0x73F4BA: call    FormHeapAlloc
0x73F4BF: add     esp, 4
0x73F4C2: mov     [esi+44h], eax
0x73F4C5: cmp     dword ptr [edi+0D8h], 0A00010Dh
0x73F4CF: mov     eax, [edi+21Ch]
0x73F4D5: push    1
0x73F4D7: lea     ecx, [esp+20h+var_4]
0x73F4DB: push    ecx
0x73F4DC: jnb     short loc_73F51A
0x73F4DE: push    4
0x73F4E0: lea     edx, [esp+28h+var_8]
0x73F4E4: push    edx
0x73F4E5: push    eax
0x73F4E6: mov     eax, [eax+4]
0x73F4E9: mov     [esp+30h+var_4], 4
0x73F4F1: call    eax
0x73F4F3: xor     eax, eax
0x73F4F5: add     esp, 14h
0x73F4F8: cmp     [esi+8], ax
0x73F4FC: jbe     loc_73F584
0x73F502: mov     edx, [esi+44h]
0x73F505: fld     [esp+1Ch+var_8]
0x73F509: movzx   ecx, ax
0x73F50C: add     eax, 1
0x73F50F: fstp    dword ptr [edx+ecx*4]
0x73F512: cmp     ax, [esi+8]
0x73F516: jb      short loc_73F502
0x73F518: jmp     short loc_73F584
0x73F51A: push    1
0x73F51C: lea     edx, [esp+28h+var_9]
0x73F520: push    edx
0x73F521: push    eax
0x73F522: mov     eax, [eax+4]
0x73F525: mov     [esp+30h+var_4], 1
0x73F52D: call    eax
0x73F52F: add     esp, 14h
0x73F532: cmp     [esp+1Ch+var_9], 0
0x73F537: jz      short loc_73F566
0x73F539: movzx   edx, word ptr [esi+8]
0x73F53D: mov     eax, [edi+21Ch]
0x73F543: push    1
0x73F545: add     edx, edx
0x73F547: lea     ecx, [esp+20h+var_4]
0x73F54B: push    ecx
0x73F54C: mov     ecx, [esi+44h]
0x73F54F: add     edx, edx
0x73F551: push    edx
0x73F552: mov     edx, [eax+4]
0x73F555: push    ecx
0x73F556: push    eax
0x73F557: mov     [esp+30h+var_4], 4
0x73F55F: call    edx
0x73F561: add     esp, 14h
0x73F564: jmp     short loc_73F584
0x73F566: xor     eax, eax
0x73F568: cmp     [esi+8], ax
0x73F56C: jbe     short loc_73F584
0x73F56E: fld1
0x73F570: mov     edx, [esi+44h]
0x73F573: movzx   ecx, ax
0x73F576: add     eax, 1
0x73F579: fst     dword ptr [edx+ecx*4]
0x73F57C: cmp     ax, [esi+8]
0x73F580: jb      short loc_73F570
0x73F582: fstp    st
0x73F584: mov     eax, [edi+21Ch]
0x73F58A: push    1
0x73F58C: lea     ecx, [esp+20h+var_4]
0x73F590: push    ecx
0x73F591: push    ebp
0x73F592: lea     edx, [esi+48h]
0x73F595: push    edx
0x73F596: push    eax
0x73F597: mov     eax, [eax+4]
0x73F59A: mov     [esp+30h+var_4], ebp
0x73F59E: call    eax
0x73F5A0: mov     eax, [edi+21Ch]
0x73F5A6: add     esp, 14h
0x73F5A9: cmp     [edi+0D8h], ebx
0x73F5AF: push    1
0x73F5B1: lea     ecx, [esp+20h+var_4]
0x73F5B5: push    ecx
0x73F5B6: jnb     short loc_73F5DB
0x73F5B8: mov     edx, [eax+4]
0x73F5BB: push    4
0x73F5BD: lea     ebx, [esi+4Ch]
0x73F5C0: push    ebx
0x73F5C1: push    eax
0x73F5C2: mov     [esp+30h+var_4], 4
0x73F5CA: call    edx
0x73F5CC: add     esp, 14h
0x73F5CF: cmp     dword ptr [ebx], 0
0x73F5D2: setnz   al
0x73F5D5: mov     byte ptr [esp+1Ch+arg_0], al
0x73F5D9: jmp     short loc_73F5F3
0x73F5DB: push    1
0x73F5DD: lea     edx, [esp+28h+arg_0]
0x73F5E1: push    edx
0x73F5E2: push    eax
0x73F5E3: mov     eax, [eax+4]
0x73F5E6: mov     [esp+30h+var_4], 1
0x73F5EE: call    eax
0x73F5F0: add     esp, 14h
0x73F5F3: movzx   eax, word ptr [esi+8]
0x73F5F7: xor     ecx, ecx
0x73F5F9: mov     ebp, 4
0x73F5FE: mov     edx, ebp
0x73F600: mul     edx
0x73F602: seto    cl
0x73F605: neg     ecx
0x73F607: or      ecx, eax
0x73F609: push    ecx; Size
0x73F60A: call    FormHeapAlloc
0x73F60F: add     esp, 4
0x73F612: cmp     byte ptr [esp+1Ch+arg_0], 0
0x73F617: mov     [esi+4Ch], eax
0x73F61A: jz      short loc_73F642
0x73F61C: mov     ecx, [edi+21Ch]
0x73F622: push    1
0x73F624: lea     edx, [esp+20h+var_4]
0x73F628: push    edx
0x73F629: movzx   edx, word ptr [esi+8]
0x73F62D: add     edx, edx
0x73F62F: add     edx, edx
0x73F631: push    edx
0x73F632: push    eax
0x73F633: mov     eax, [ecx+4]
0x73F636: push    ecx
0x73F637: mov     [esp+30h+var_4], ebp
0x73F63B: call    eax
0x73F63D: add     esp, 14h
0x73F640: jmp     short loc_73F660
0x73F642: xor     eax, eax
0x73F644: cmp     [esi+8], ax
0x73F648: jbe     short loc_73F660
0x73F64A: fld1
0x73F64C: mov     edx, [esi+4Ch]
0x73F64F: movzx   ecx, ax
0x73F652: add     eax, 1
0x73F655: fst     dword ptr [edx+ecx*4]
0x73F658: cmp     ax, [esi+8]
0x73F65C: jb      short loc_73F64C
0x73F65E: fstp    st
0x73F660: cmp     byte ptr [esi+40h], 0
0x73F664: jz      loc_73F75B
0x73F66A: cmp     dword ptr [edi+0D8h], 4010000h
0x73F674: mov     eax, [edi+21Ch]
0x73F67A: push    1
0x73F67C: lea     ecx, [esp+20h+var_4]
0x73F680: push    ecx
0x73F681: jnb     short loc_73F6A2
0x73F683: mov     edx, [eax+4]
0x73F686: push    4
0x73F688: lea     ebx, [esi+50h]
0x73F68B: push    ebx
0x73F68C: push    eax
0x73F68D: mov     [esp+30h+var_4], ebp
0x73F691: call    edx
0x73F693: add     esp, 14h
0x73F696: cmp     dword ptr [ebx], 0
0x73F699: setnz   al
0x73F69C: mov     [esp+1Ch+var_9], al
0x73F6A0: jmp     short loc_73F6BA
0x73F6A2: push    1
0x73F6A4: lea     edx, [esp+28h+var_9]
0x73F6A8: push    edx
0x73F6A9: push    eax
0x73F6AA: mov     eax, [eax+4]
0x73F6AD: mov     [esp+30h+var_4], 1
0x73F6B5: call    eax
0x73F6B7: add     esp, 14h
0x73F6BA: movzx   eax, word ptr [esi+8]
0x73F6BE: xor     ecx, ecx
0x73F6C0: mov     edx, 10h
0x73F6C5: mul     edx
0x73F6C7: seto    cl
0x73F6CA: neg     ecx
0x73F6CC: or      ecx, eax
0x73F6CE: push    ecx; Size
0x73F6CF: call    FormHeapAlloc
0x73F6D4: add     esp, 4
0x73F6D7: cmp     [esp+1Ch+var_9], 0
0x73F6DC: mov     [esi+50h], eax
0x73F6DF: jz      short loc_73F70E
0x73F6E1: xor     ebx, ebx
0x73F6E3: cmp     [esi+8], bx
0x73F6E7: jbe     loc_73F815
0x73F6ED: xor     ebp, ebp
0x73F6EF: nop
0x73F6F0: mov     ecx, [esi+50h]
0x73F6F3: push    edi
0x73F6F4: add     ecx, ebp
0x73F6F6: call    sub_715420
0x73F6FB: movzx   eax, word ptr [esi+8]
0x73F6FF: add     ebx, 1
0x73F702: add     ebp, 10h
0x73F705: cmp     ebx, eax
0x73F707: jb      short loc_73F6F0
0x73F709: jmp     loc_73F815
0x73F70E: xor     ecx, ecx
0x73F710: cmp     [esi+8], cx
0x73F714: jbe     loc_73F815
0x73F71A: xor     edx, edx
0x73F71C: lea     esp, [esp+0]
0x73F720: mov     eax, [esi+50h]
0x73F723: mov     ebx, ds:0B27110h
0x73F729: add     eax, edx
0x73F72B: mov     [eax], ebx
0x73F72D: mov     ebx, ds:0B27114h
0x73F733: mov     [eax+4], ebx
0x73F736: mov     ebx, ds:0B27118h
0x73F73C: mov     [eax+8], ebx
0x73F73F: mov     ebx, ds:0B2711Ch
0x73F745: mov     [eax+0Ch], ebx
0x73F748: movzx   eax, word ptr [esi+8]
0x73F74C: add     ecx, 1
0x73F74F: add     edx, 10h
0x73F752: cmp     ecx, eax
0x73F754: jb      short loc_73F720
0x73F756: jmp     loc_73F815
0x73F75B: cmp     dword ptr [edi+0D8h], 5000008h
0x73F765: jb      loc_73F815
0x73F76B: mov     eax, [edi+21Ch]
0x73F771: push    1
0x73F773: lea     ecx, [esp+20h+var_4]
0x73F777: push    ecx
0x73F778: push    1
0x73F77A: lea     edx, [esp+28h+var_9]
0x73F77E: push    edx
0x73F77F: push    eax
0x73F780: mov     eax, [eax+4]
0x73F783: mov     [esp+30h+var_4], 1
0x73F78B: call    eax
0x73F78D: add     esp, 14h
0x73F790: cmp     [esp+1Ch+var_9], 0
0x73F795: jz      loc_73F815
0x73F79B: movzx   eax, word ptr [esi+8]
0x73F79F: xor     ecx, ecx
0x73F7A1: mov     edx, 10h
0x73F7A6: mul     edx
0x73F7A8: seto    cl
0x73F7AB: neg     ecx
0x73F7AD: or      ecx, eax
0x73F7AF: push    ecx; Size
0x73F7B0: call    FormHeapAlloc
0x73F7B5: xor     ebx, ebx
0x73F7B7: add     esp, 4
0x73F7BA: cmp     [esi+8], bx
0x73F7BE: mov     [esi+50h], eax
0x73F7C1: jbe     short loc_73F7DB
0x73F7C3: movzx   ecx, bx
0x73F7C6: shl     ecx, 4
0x73F7C9: add     ecx, [esi+50h]
0x73F7CC: push    edi
0x73F7CD: call    sub_715420
0x73F7D2: add     ebx, 1
0x73F7D5: cmp     bx, [esi+8]
0x73F7D9: jb      short loc_73F7C3
0x73F7DB: cmp     dword ptr [edi+0D8h], 0A000100h
0x73F7E5: ja      short loc_73F815
0x73F7E7: mov     eax, [esi]
0x73F7E9: mov     edx, [eax+4]
0x73F7EC: mov     ecx, esi
0x73F7EE: call    edx
0x73F7F0: test    eax, eax
0x73F7F2: jz      short loc_73F802
0x73F7F4: cmp     eax, offset dword_B401DC
0x73F7F9: jz      short loc_73F815
0x73F7FB: mov     eax, [eax+4]
0x73F7FE: test    eax, eax
0x73F800: jnz     short loc_73F7F4
0x73F802: mov     eax, [esi+50h]
0x73F805: push    eax
0x73F806: call    FormHeapFree
0x73F80B: add     esp, 4
0x73F80E: mov     dword ptr [esi+50h], 0
0x73F815: cmp     dword ptr [edi+0D8h], 0A000110h
0x73F81F: jnb     short loc_73F833
0x73F821: mov     cx, [esi+2Eh]
0x73F825: and     cx, 0FFFh
0x73F82A: or      cx, 8000h
0x73F82F: mov     [esi+2Eh], cx
0x73F833: cmp     dword ptr [edi+0D8h], 0A030005h
0x73F83D: jb      loc_73F942
0x73F843: mov     eax, [edi+21Ch]
0x73F849: push    1
0x73F84B: lea     edx, [esp+20h+var_4]
0x73F84F: push    edx
0x73F850: mov     edx, [eax+4]
0x73F853: push    1
0x73F855: lea     ecx, [esp+28h+var_9]
0x73F859: push    ecx
0x73F85A: push    eax
0x73F85B: mov     [esp+30h+var_4], 1
0x73F863: call    edx
0x73F865: add     esp, 14h
0x73F868: cmp     [esp+1Ch+var_9], 0
0x73F86D: jz      short loc_73F8D3
0x73F86F: movzx   eax, word ptr [esi+8]
0x73F873: xor     ecx, ecx
0x73F875: mov     edx, 4
0x73F87A: mul     edx
0x73F87C: seto    cl
0x73F87F: neg     ecx
0x73F881: or      ecx, eax
0x73F883: push    ecx; Size
0x73F884: call    FormHeapAlloc
0x73F889: xor     ebx, ebx
0x73F88B: add     esp, 4
0x73F88E: cmp     [esi+8], bx
0x73F892: mov     [esi+54h], eax
0x73F895: jbe     short loc_73F8D3
0x73F897: jmp     short loc_73F8A0
0x73F899: align 10h
0x73F8A0: mov     eax, [edi+21Ch]
0x73F8A6: push    1
0x73F8A8: lea     ecx, [esp+20h+var_4]
0x73F8AC: push    ecx
0x73F8AD: mov     ecx, [esi+54h]
0x73F8B0: movzx   edx, bx
0x73F8B3: push    4
0x73F8B5: lea     edx, [ecx+edx*4]
0x73F8B8: push    edx
0x73F8B9: push    eax
0x73F8BA: mov     eax, [eax+4]
0x73F8BD: mov     [esp+30h+var_4], 4
0x73F8C5: call    eax
0x73F8C7: add     ebx, 1
0x73F8CA: add     esp, 14h
0x73F8CD: cmp     bx, [esi+8]
0x73F8D1: jb      short loc_73F8A0
0x73F8D3: mov     eax, [edi+21Ch]
0x73F8D9: push    1
0x73F8DB: lea     ecx, [esp+20h+var_4]
0x73F8DF: push    ecx
0x73F8E0: push    1
0x73F8E2: lea     edx, [esp+28h+var_8]
0x73F8E6: push    edx
0x73F8E7: push    eax
0x73F8E8: mov     eax, [eax+4]
0x73F8EB: mov     [esp+30h+var_4], 1
0x73F8F3: call    eax
0x73F8F5: add     esp, 14h
0x73F8F8: cmp     byte ptr [esp+1Ch+var_8], 0
0x73F8FD: jz      short loc_73F942
0x73F8FF: movzx   eax, word ptr [esi+8]
0x73F903: xor     ecx, ecx
0x73F905: mov     edx, 0Ch
0x73F90A: mul     edx
0x73F90C: seto    cl
0x73F90F: neg     ecx
0x73F911: or      ecx, eax
0x73F913: push    ecx; Size
0x73F914: call    FormHeapAlloc
0x73F919: xor     ebx, ebx
0x73F91B: add     esp, 4
0x73F91E: cmp     [esi+8], bx
0x73F922: mov     [esi+58h], eax
0x73F925: jbe     short loc_73F942
0x73F927: mov     ecx, [esi+58h]
0x73F92A: movzx   eax, bx
0x73F92D: lea     eax, [eax+eax*2]
0x73F930: push    edi
0x73F931: lea     ecx, [ecx+eax*4]
0x73F934: call    sub_709430
0x73F939: add     ebx, 1
0x73F93C: cmp     bx, [esi+8]
0x73F940: jb      short loc_73F927
0x73F942: pop     edi
0x73F943: pop     esi
0x73F944: pop     ebp
0x73F945: pop     ebx
0x73F946: add     esp, 0Ch
0x73F949: retn    4
