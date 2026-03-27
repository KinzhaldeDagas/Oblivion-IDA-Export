0x67A420: sub     esp, 28h
0x67A423: push    ebx
0x67A424: push    ebp
0x67A425: push    esi
0x67A426: push    edi
0x67A427: mov     ebx, ecx
0x67A429: push    8; Size
0x67A42B: mov     [esp+3Ch+var_4], ebx
0x67A42F: call    FormHeapAlloc
0x67A434: xor     ecx, ecx
0x67A436: add     esp, 4
0x67A439: cmp     eax, ecx
0x67A43B: jz      short loc_67A44A
0x67A43D: mov     ebp, eax
0x67A43F: mov     [eax], ecx
0x67A441: mov     [eax+4], ecx
0x67A444: mov     [esp+38h+var_24], ebp
0x67A448: jmp     short loc_67A450
0x67A44A: mov     [esp+38h+var_24], ecx
0x67A44E: mov     ebp, ecx
0x67A450: mov     edi, [esp+38h+arg_0]
0x67A454: mov     esi, [edi+0Ch]
0x67A457: mov     ecx, esi; this
0x67A459: mov     [esp+38h+var_8], esi
0x67A45D: call    TESObjectREFR_GetParentCell
0x67A462: mov     ecx, esi; this
0x67A464: mov     [esp+38h+var_18], eax
0x67A468: call    TESObjectREFR_GetWorldSpace
0x67A46D: test    esi, esi
0x67A46F: mov     [esp+38h+var_C], eax
0x67A473: mov     byte ptr [edi+10h], 1
0x67A477: jz      loc_67A74C
0x67A47D: xor     esi, esi
0x67A47F: mov     [esp+38h+var_1C], esi
0x67A483: test    esi, esi
0x67A485: jnz     short loc_67A49B
0x67A487: push    3; a2
0x67A489: mov     ecx, ebx; this
0x67A48B: call    sub_673A50
0x67A490: mov     ecx, eax; this
0x67A492: call    sub_7616D0
0x67A497: mov     edi, eax
0x67A499: jmp     short loc_67A4C3
0x67A49B: cmp     esi, 1
0x67A49E: jnz     short loc_67A4A4
0x67A4A0: push    2
0x67A4A2: jmp     short loc_67A4AF
0x67A4A4: cmp     esi, 2
0x67A4A7: jnz     short loc_67A4AD
0x67A4A9: push    1
0x67A4AB: jmp     short loc_67A4AF
0x67A4AD: push    0; a2
0x67A4AF: mov     ecx, ebx; this
0x67A4B1: call    sub_673A50
0x67A4B6: mov     ecx, eax; this
0x67A4B8: call    sub_7616D0
0x67A4BD: mov     [esp+38h+var_28], eax
0x67A4C1: mov     edi, eax
0x67A4C3: test    edi, edi
0x67A4C5: jz      loc_67A72C
0x67A4CB: jmp     short loc_67A4D4
0x67A4CD: align 10h
0x67A4D0: mov     edi, [esp+38h+var_28]
0x67A4D4: mov     ecx, [edi]
0x67A4D6: test    ecx, ecx
0x67A4D8: jz      loc_67A72C
0x67A4DE: mov     eax, [ecx]
0x67A4E0: mov     edx, [eax+190h]
0x67A4E6: xor     esi, esi
0x67A4E8: call    edx
0x67A4EA: test    al, al
0x67A4EC: jz      short loc_67A4F0
0x67A4EE: mov     esi, [edi]
0x67A4F0: test    esi, esi
0x67A4F2: mov     eax, [edi+4]
0x67A4F5: mov     [esp+38h+var_28], eax
0x67A4F9: mov     [esp+38h+var_10], 0
0x67A501: jz      loc_67A71D
0x67A507: jmp     short loc_67A510
0x67A509: align 10h
0x67A510: mov     edx, [esi]
0x67A512: mov     eax, [edx+198h]
0x67A518: push    0
0x67A51A: mov     ecx, esi
0x67A51C: call    eax
0x67A51E: test    al, al
0x67A520: jnz     loc_67A6EA
0x67A526: mov     eax, [esi+8]
0x67A529: mov     ecx, eax
0x67A52B: shr     ecx, 0Bh
0x67A52E: test    cl, 1
0x67A531: jnz     loc_67A6EA
0x67A537: shr     eax, 5
0x67A53A: test    al, 1
0x67A53C: jnz     loc_67A6EA
0x67A542: mov     edx, [esi]
0x67A544: mov     eax, [edx+198h]
0x67A54A: push    0
0x67A54C: mov     ecx, esi
0x67A54E: call    eax
0x67A550: test    al, al
0x67A552: jnz     loc_67A6EA
0x67A558: mov     ecx, esi; this
0x67A55A: call    TESObjectREFR_GetParentCell
0x67A55F: mov     ebx, eax
0x67A561: mov     ecx, esi; this
0x67A563: mov     [esp+38h+var_14], ebx
0x67A567: call    TESObjectREFR_GetWorldSpace
0x67A56C: mov     ecx, esi
0x67A56E: mov     edi, eax
0x67A570: call    sub_5E0380
0x67A575: test    eax, eax
0x67A577: jz      short loc_67A593
0x67A579: cmp     byte ptr [eax+20h], 0Fh
0x67A57D: jnz     short loc_67A593
0x67A57F: mov     ecx, [esp+38h+arg_0]
0x67A583: push    ecx
0x67A584: mov     ecx, eax
0x67A586: call    sub_606AD0
0x67A58B: test    al, al
0x67A58D: jnz     loc_67A6EA
0x67A593: test    ebx, ebx
0x67A595: jz      short loc_67A59D
0x67A597: cmp     ebx, [esp+38h+var_18]
0x67A59B: jz      short loc_67A5C7
0x67A59D: cmp     [esp+38h+var_C], edi
0x67A5A1: jnz     loc_67A634
0x67A5A7: test    ebx, ebx
0x67A5A9: jz      short loc_67A5B6
0x67A5AB: mov     ecx, ebx; this
0x67A5AD: call    TESObjectCELL_IsInterior
0x67A5B2: test    al, al
0x67A5B4: jz      short loc_67A5C7
0x67A5B6: mov     ecx, [esp+38h+var_18]; this
0x67A5BA: test    ecx, ecx
0x67A5BC: jz      short loc_67A634
0x67A5BE: call    TESObjectCELL_IsInterior
0x67A5C3: test    al, al
0x67A5C5: jnz     short loc_67A634
0x67A5C7: mov     edx, [esp+38h+var_8]
0x67A5CB: push    0
0x67A5CD: push    edx
0x67A5CE: mov     ecx, esi
0x67A5D0: call    TesObjectREF_GetDistance
0x67A5D5: fstp    [esp+38h+var_20]
0x67A5D9: fld     [esp+38h+var_20]
0x67A5DD: fild    dword ptr ds:0B36A50h
0x67A5E3: fcompp
0x67A5E5: fnstsw  ax
0x67A5E7: test    ah, 1
0x67A5EA: jnz     loc_67A6EA
0x67A5F0: cmp     dword ptr [ebp+0], 0
0x67A5F4: jz      short loc_67A62C
0x67A5F6: push    8; Size
0x67A5F8: call    FormHeapAlloc
0x67A5FD: add     esp, 4
0x67A600: test    eax, eax
0x67A602: jz      short loc_67A621
0x67A604: mov     ecx, [ebp+0]
0x67A607: mov     [eax], ecx
0x67A609: mov     dword ptr [eax+4], 0
0x67A610: mov     edx, [ebp+4]
0x67A613: mov     [eax+4], edx
0x67A616: mov     [ebp+4], eax
0x67A619: mov     [ebp+0], esi
0x67A61C: jmp     loc_67A6EA
0x67A621: mov     edx, [ebp+4]
0x67A624: xor     eax, eax
0x67A626: mov     [eax+4], edx
0x67A629: mov     [ebp+4], eax
0x67A62C: mov     [ebp+0], esi
0x67A62F: jmp     loc_67A6EA
0x67A634: mov     ebp, [esp+38h+arg_4]
0x67A638: test    ebp, ebp
0x67A63A: jz      loc_67A6E6
0x67A640: mov     ecx, [ebp+0]; this
0x67A643: test    ecx, ecx
0x67A645: jz      loc_67A6E6
0x67A64B: call    GetTeleportExtraData
0x67A650: test    eax, eax
0x67A652: jz      short loc_67A6AC
0x67A654: mov     ecx, eax
0x67A656: call    sub_42B410
0x67A65B: mov     edi, eax
0x67A65D: mov     ecx, edi; this
0x67A65F: call    TESObjectREFR_GetParentCell
0x67A664: cmp     eax, ebx
0x67A666: jz      short loc_67A68B
0x67A668: mov     ecx, edi; this
0x67A66A: call    TESObjectREFR_GetParentCell
0x67A66F: test    eax, eax
0x67A671: jnz     short loc_67A6AC
0x67A673: mov     ecx, edi; this
0x67A675: call    TESObjectREFR_GetWorldSpace
0x67A67A: mov     ecx, esi; this
0x67A67C: mov     ebx, eax
0x67A67E: call    TESObjectREFR_GetWorldSpace
0x67A683: cmp     ebx, eax
0x67A685: mov     ebx, [esp+38h+var_14]
0x67A689: jnz     short loc_67A6AC
0x67A68B: push    0
0x67A68D: push    edi
0x67A68E: mov     ecx, esi
0x67A690: call    TesObjectREF_GetDistance
0x67A695: fstp    [esp+38h+var_20]
0x67A699: fld     [esp+38h+var_20]
0x67A69D: fild    dword ptr ds:0B36A50h
0x67A6A3: fcompp
0x67A6A5: fnstsw  ax
0x67A6A7: test    ah, 1
0x67A6AA: jz      short loc_67A6B5
0x67A6AC: mov     ebp, [ebp+4]
0x67A6AF: test    ebp, ebp
0x67A6B1: jnz     short loc_67A640
0x67A6B3: jmp     short loc_67A6E6
0x67A6B5: mov     edi, [esp+38h+var_24]
0x67A6B9: cmp     dword ptr [edi], 0
0x67A6BC: jz      short loc_67A6E4
0x67A6BE: push    8; Size
0x67A6C0: call    FormHeapAlloc
0x67A6C5: add     esp, 4
0x67A6C8: test    eax, eax
0x67A6CA: jz      short loc_67A6D9
0x67A6CC: mov     ecx, [edi]
0x67A6CE: mov     [eax], ecx
0x67A6D0: mov     dword ptr [eax+4], 0
0x67A6D7: jmp     short loc_67A6DB
0x67A6D9: xor     eax, eax
0x67A6DB: mov     edx, [edi+4]
0x67A6DE: mov     [eax+4], edx
0x67A6E1: mov     [edi+4], eax
0x67A6E4: mov     [edi], esi
0x67A6E6: mov     ebp, [esp+38h+var_24]
0x67A6EA: mov     edi, [esp+38h+var_10]
0x67A6EE: test    edi, edi
0x67A6F0: jz      short loc_67A719
0x67A6F2: mov     ecx, [edi]
0x67A6F4: test    ecx, ecx
0x67A6F6: jz      short loc_67A719
0x67A6F8: mov     eax, [ecx]
0x67A6FA: mov     edx, [eax+190h]
0x67A700: xor     esi, esi
0x67A702: call    edx
0x67A704: test    al, al
0x67A706: jz      short loc_67A70A
0x67A708: mov     esi, [edi]
0x67A70A: test    esi, esi
0x67A70C: mov     eax, [edi+4]
0x67A70F: mov     [esp+38h+var_10], eax
0x67A713: jnz     loc_67A510
0x67A719: mov     ebx, [esp+38h+var_4]
0x67A71D: cmp     [esp+38h+var_28], 0
0x67A722: mov     esi, [esp+38h+var_1C]
0x67A726: jnz     loc_67A4D0
0x67A72C: add     esi, 1
0x67A72F: cmp     esi, 4
0x67A732: mov     [esp+38h+var_1C], esi
0x67A736: jl      loc_67A483
0x67A73C: test    ebp, ebp
0x67A73E: jz      short loc_67A74C
0x67A740: push    offset sub_673B70
0x67A745: mov     ecx, ebp
0x67A747: call    sub_5B27A0
0x67A74C: pop     edi
0x67A74D: pop     esi
0x67A74E: mov     eax, ebp
0x67A750: pop     ebp
0x67A751: pop     ebx
0x67A752: add     esp, 28h
0x67A755: retn    8
