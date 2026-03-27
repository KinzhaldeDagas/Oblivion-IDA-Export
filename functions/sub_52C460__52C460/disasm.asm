0x52C460: push    ecx
0x52C461: push    ebx
0x52C462: mov     ebx, [esp+8+a2]
0x52C466: push    esi
0x52C467: push    edi
0x52C468: push    0; int
0x52C46A: push    offset ??_R0?AVTESRace@@@8; struct TypeDescriptor *
0x52C46F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52C474: push    0; int
0x52C476: push    ebx; void *
0x52C477: mov     edi, ecx
0x52C479: call    OblivionDynamicCast
0x52C47E: mov     esi, eax
0x52C480: add     esp, 14h
0x52C483: test    esi, esi
0x52C485: jz      loc_52C85B
0x52C48B: push    ebx; a2
0x52C48C: mov     ecx, edi; this
0x52C48E: call    TESForm_CopyAllComponentsFrom
0x52C493: mov     eax, [esi+300h]
0x52C499: test    eax, eax
0x52C49B: jnz     short loc_52C49F
0x52C49D: mov     eax, esi
0x52C49F: mov     [edi+300h], eax
0x52C4A5: mov     eax, [esi+304h]
0x52C4AB: test    eax, eax
0x52C4AD: jnz     short loc_52C4B1
0x52C4AF: mov     eax, esi
0x52C4B1: fldz
0x52C4B3: mov     [edi+304h], eax
0x52C4B9: mov     eax, [esi+94h]
0x52C4BF: mov     [edi+94h], eax
0x52C4C5: mov     ecx, [esi+98h]
0x52C4CB: mov     [edi+98h], ecx
0x52C4D1: mov     dl, [esi+9Ch]
0x52C4D7: mov     [edi+9Ch], dl
0x52C4DD: fcom    dword ptr [esi+0A0h]
0x52C4E3: fnstsw  ax
0x52C4E5: test    ah, 5
0x52C4E8: jp      short loc_52C4F2
0x52C4EA: fld     dword ptr [esi+0A0h]
0x52C4F0: jmp     short loc_52C4F8
0x52C4F2: fld     dword ptr ds:0A31E2Ch
0x52C4F8: fstp    [esp+10h+a2]
0x52C4FC: fld     [esp+10h+a2]
0x52C500: fstp    dword ptr [edi+0A0h]
0x52C506: fcomp   dword ptr [esi+0A4h]
0x52C50C: fnstsw  ax
0x52C50E: test    ah, 5
0x52C511: jp      short loc_52C51B
0x52C513: fld     dword ptr [esi+0A4h]
0x52C519: jmp     short loc_52C521
0x52C51B: fld     dword ptr ds:0A46C30h
0x52C521: mov     eax, [edi+74h]
0x52C524: fstp    [esp+10h+a2]
0x52C528: fld     [esp+10h+a2]
0x52C52C: mov     eax, [eax+8]
0x52C52F: lea     ecx, [edi+74h]
0x52C532: fstp    dword ptr [edi+0A4h]
0x52C538: push    ebp
0x52C539: lea     edx, [esi+74h]
0x52C53C: push    edx
0x52C53D: call    eax
0x52C53F: mov     edx, [edi+80h]
0x52C545: mov     edx, [edx+8]
0x52C548: lea     ecx, [edi+80h]
0x52C54E: lea     eax, [esi+80h]
0x52C554: push    eax
0x52C555: call    edx
0x52C557: movzx   eax, byte ptr [esi+50h]
0x52C55B: mov     [edi+50h], al
0x52C55E: movzx   ecx, byte ptr [esi+51h]
0x52C562: mov     [edi+51h], cl
0x52C565: movzx   edx, byte ptr [esi+52h]
0x52C569: mov     [edi+52h], dl
0x52C56C: movzx   eax, byte ptr [esi+53h]
0x52C570: mov     [edi+53h], al
0x52C573: movzx   ecx, byte ptr [esi+54h]
0x52C577: mov     [edi+54h], cl
0x52C57A: movzx   edx, byte ptr [esi+55h]
0x52C57E: mov     [edi+55h], dl
0x52C581: movzx   eax, byte ptr [esi+56h]
0x52C585: mov     [edi+56h], al
0x52C588: movzx   ecx, byte ptr [esi+57h]
0x52C58C: mov     [edi+57h], cl
0x52C58F: movzx   edx, byte ptr [esi+58h]
0x52C593: mov     [edi+58h], dl
0x52C596: movzx   eax, byte ptr [esi+59h]
0x52C59A: mov     [edi+59h], al
0x52C59D: movzx   ecx, byte ptr [esi+5Ah]
0x52C5A1: mov     [edi+5Ah], cl
0x52C5A4: movzx   edx, byte ptr [esi+5Bh]
0x52C5A8: mov     [edi+5Bh], dl
0x52C5AB: movzx   eax, byte ptr [esi+5Ch]
0x52C5AF: mov     [edi+5Ch], al
0x52C5B2: movzx   ecx, byte ptr [esi+5Dh]
0x52C5B6: mov     [edi+5Dh], cl
0x52C5B9: lea     eax, [edi+1BCh]
0x52C5BF: fld     dword ptr [esi+60h]
0x52C5C2: xor     ebx, ebx
0x52C5C4: fstp    dword ptr [edi+60h]
0x52C5C7: mov     [esp+14h+a2], eax
0x52C5CB: fld     dword ptr [esi+68h]
0x52C5CE: lea     ebp, [edi+0E0h]
0x52C5D4: fstp    dword ptr [edi+68h]
0x52C5D7: fld     dword ptr [esi+64h]
0x52C5DA: fstp    dword ptr [edi+64h]
0x52C5DD: fld     dword ptr [esi+6Ch]
0x52C5E0: fstp    dword ptr [edi+6Ch]
0x52C5E3: mov     edx, [esi+70h]
0x52C5E6: mov     [edi+70h], edx
0x52C5E9: lea     esp, [esp+0]
0x52C5F0: push    ebx
0x52C5F1: mov     ecx, esi
0x52C5F3: call    sub_52BC50
0x52C5F8: mov     edx, [eax]
0x52C5FA: mov     ecx, eax
0x52C5FC: mov     eax, [edx+14h]
0x52C5FF: call    eax
0x52C601: cmp     ebx, 8
0x52C604: ja      short loc_52C611
0x52C606: mov     edx, [ebp+0]
0x52C609: push    eax
0x52C60A: mov     eax, [edx+18h]
0x52C60D: mov     ecx, ebp
0x52C60F: call    eax
0x52C611: push    ebx
0x52C612: mov     ecx, esi
0x52C614: call    sub_52BD00
0x52C619: mov     eax, [eax+4]
0x52C61C: test    eax, eax
0x52C61E: jnz     short loc_52C625
0x52C620: mov     eax, offset EmptyString
0x52C625: cmp     ebx, 8
0x52C628: ja      short loc_52C636
0x52C62A: mov     ecx, [esp+14h+a2]; this
0x52C62E: push    0; a3
0x52C630: push    eax; a2
0x52C631: call    BSStringT_Set
0x52C636: add     [esp+14h+a2], 0Ch
0x52C63B: add     ebx, 1
0x52C63E: add     ebp, 18h
0x52C641: cmp     ebx, 9
0x52C644: jb      short loc_52C5F0
0x52C646: xor     ebp, ebp
0x52C648: lea     ecx, [edi+0B0h]
0x52C64E: mov     [esp+14h+a2], ebp
0x52C652: mov     [esp+14h+var_4], ecx
0x52C656: xor     ebx, ebx
0x52C658: cmp     ebp, 5
0x52C65B: ja      short loc_52C67D
0x52C65D: cmp     ebx, 5
0x52C660: jge     short loc_52C67D
0x52C662: lea     eax, [ebx+ebp]
0x52C665: lea     edx, [eax+eax*2]
0x52C668: lea     eax, [esi+edx*4+224h]
0x52C66F: mov     eax, [eax+4]
0x52C672: test    eax, eax
0x52C674: jnz     short loc_52C67F
0x52C676: mov     eax, offset EmptyString
0x52C67B: jmp     short loc_52C67F
0x52C67D: xor     eax, eax
0x52C67F: cmp     ebp, 5
0x52C682: ja      short loc_52C69B
0x52C684: cmp     ebx, 4
0x52C687: ja      short loc_52C69B
0x52C689: push    0; a3
0x52C68B: push    eax; a2
0x52C68C: lea     eax, [ebx+ebp+2Eh]
0x52C690: lea     eax, [eax+eax*2]
0x52C693: lea     ecx, [edi+eax*4]; this
0x52C696: call    BSStringT_Set
0x52C69B: add     ebx, 1
0x52C69E: cmp     ebx, 5
0x52C6A1: jb      short loc_52C658
0x52C6A3: mov     ecx, [esp+14h+a2]
0x52C6A7: push    ecx
0x52C6A8: mov     ecx, esi
0x52C6AA: call    sub_52BDB0
0x52C6AF: test    eax, eax
0x52C6B1: jz      short loc_52C6CE
0x52C6B3: mov     ebx, [esp+14h+a2]
0x52C6B7: push    ebx
0x52C6B8: call    sub_52BDB0
0x52C6BD: mov     edx, [eax]
0x52C6BF: mov     ecx, eax
0x52C6C1: mov     eax, [edx+14h]
0x52C6C4: call    eax
0x52C6C6: cmp     ebx, 1
0x52C6C9: ja      short loc_52C6E2
0x52C6CB: push    eax
0x52C6CC: jmp     short loc_52C6D7
0x52C6CE: cmp     [esp+14h+a2], 1
0x52C6D3: ja      short loc_52C6E2
0x52C6D5: push    0
0x52C6D7: mov     ecx, [esp+18h+var_4]
0x52C6DB: mov     edx, [ecx]
0x52C6DD: mov     eax, [edx+18h]
0x52C6E0: call    eax
0x52C6E2: add     [esp+14h+a2], 1
0x52C6E7: add     [esp+14h+var_4], 18h
0x52C6EC: add     ebp, 5
0x52C6EF: cmp     ebp, 0Ah
0x52C6F2: jb      loc_52C656
0x52C6F8: cmp     dword ptr [edi+90h], 0
0x52C6FF: lea     ebp, [edi+8Ch]
0x52C705: lea     ecx, [esi+8Ch]
0x52C70B: mov     [esp+14h+a2], ecx
0x52C70F: jz      short loc_52C727
0x52C711: mov     eax, [ebp+4]
0x52C714: mov     ebx, [eax+4]
0x52C717: push    eax
0x52C718: call    FormHeapFree
0x52C71D: add     esp, 4
0x52C720: test    ebx, ebx
0x52C722: mov     [ebp+4], ebx
0x52C725: jnz     short loc_52C711
0x52C727: cmp     [esp+14h+a2], 0
0x52C72C: mov     dword ptr [ebp+0], 0
0x52C733: jz      short loc_52C796
0x52C735: mov     edx, [esp+14h+a2]
0x52C739: mov     eax, [edx]
0x52C73B: test    eax, eax
0x52C73D: mov     [esp+14h+var_4], eax
0x52C741: jz      short loc_52C796
0x52C743: mov     ebx, ebp
0x52C745: cmp     dword ptr [ebx+4], 0
0x52C749: jz      short loc_52C759
0x52C74B: jmp     short loc_52C750
0x52C74D: align 10h
0x52C750: mov     ebx, [ebx+4]
0x52C753: cmp     dword ptr [ebx+4], 0
0x52C757: jnz     short loc_52C750
0x52C759: cmp     dword ptr [ebx], 0
0x52C75C: jz      short loc_52C785
0x52C75E: push    8; Size
0x52C760: call    FormHeapAlloc
0x52C765: add     esp, 4
0x52C768: test    eax, eax
0x52C76A: jz      short loc_52C77E
0x52C76C: mov     ecx, [esp+14h+var_4]
0x52C770: mov     [eax], ecx
0x52C772: mov     dword ptr [eax+4], 0
0x52C779: mov     [ebx+4], eax
0x52C77C: jmp     short loc_52C787
0x52C77E: xor     eax, eax
0x52C780: mov     [ebx+4], eax
0x52C783: jmp     short loc_52C787
0x52C785: mov     [ebx], eax
0x52C787: mov     edx, [esp+14h+a2]
0x52C78B: mov     eax, [edx+4]
0x52C78E: test    eax, eax
0x52C790: mov     [esp+14h+a2], eax
0x52C794: jnz     short loc_52C735
0x52C796: cmp     dword ptr [edi+0ACh], 0
0x52C79D: lea     ebp, [edi+0A8h]
0x52C7A3: lea     eax, [esi+0A8h]
0x52C7A9: mov     [esp+14h+a2], eax
0x52C7AD: jz      short loc_52C7C6
0x52C7AF: nop
0x52C7B0: mov     eax, [ebp+4]
0x52C7B3: mov     ebx, [eax+4]
0x52C7B6: push    eax
0x52C7B7: call    FormHeapFree
0x52C7BC: add     esp, 4
0x52C7BF: test    ebx, ebx
0x52C7C1: mov     [ebp+4], ebx
0x52C7C4: jnz     short loc_52C7B0
0x52C7C6: cmp     [esp+14h+a2], 0
0x52C7CB: mov     dword ptr [ebp+0], 0
0x52C7D2: jz      short loc_52C836
0x52C7D4: mov     ecx, [esp+14h+a2]
0x52C7D8: mov     eax, [ecx]
0x52C7DA: test    eax, eax
0x52C7DC: mov     [esp+14h+var_4], eax
0x52C7E0: jz      short loc_52C836
0x52C7E2: mov     ebx, ebp
0x52C7E4: cmp     dword ptr [ebx+4], 0
0x52C7E8: jz      short loc_52C7F9
0x52C7EA: lea     ebx, [ebx+0]
0x52C7F0: mov     ebx, [ebx+4]
0x52C7F3: cmp     dword ptr [ebx+4], 0
0x52C7F7: jnz     short loc_52C7F0
0x52C7F9: cmp     dword ptr [ebx], 0
0x52C7FC: jz      short loc_52C825
0x52C7FE: push    8; Size
0x52C800: call    FormHeapAlloc
0x52C805: add     esp, 4
0x52C808: test    eax, eax
0x52C80A: jz      short loc_52C81E
0x52C80C: mov     edx, [esp+14h+var_4]
0x52C810: mov     [eax], edx
0x52C812: mov     dword ptr [eax+4], 0
0x52C819: mov     [ebx+4], eax
0x52C81C: jmp     short loc_52C827
0x52C81E: xor     eax, eax
0x52C820: mov     [ebx+4], eax
0x52C823: jmp     short loc_52C827
0x52C825: mov     [ebx], eax
0x52C827: mov     eax, [esp+14h+a2]
0x52C82B: mov     eax, [eax+4]
0x52C82E: test    eax, eax
0x52C830: mov     [esp+14h+a2], eax
0x52C834: jnz     short loc_52C7D4
0x52C836: lea     ecx, [edi+29Ch]
0x52C83C: push    ecx
0x52C83D: lea     edx, [esi+29Ch]
0x52C843: push    edx
0x52C844: call    sub_5528F0
0x52C849: mov     ax, [esi+2FCh]
0x52C850: add     esp, 8
0x52C853: mov     [edi+2FCh], ax
0x52C85A: pop     ebp
0x52C85B: pop     edi
0x52C85C: pop     esi
0x52C85D: pop     ebx
0x52C85E: pop     ecx
0x52C85F: retn    4
