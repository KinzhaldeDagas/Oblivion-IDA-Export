0x4E5730: push    ebp
0x4E5731: mov     ebp, esp
0x4E5733: and     esp, 0FFFFFFF8h
0x4E5736: sub     esp, 64h
0x4E5739: mov     eax, [ebp+arg_10]
0x4E573C: push    ebx
0x4E573D: push    esi
0x4E573E: xor     ebx, ebx
0x4E5740: push    edi
0x4E5741: mov     edi, [ebp+arg_0]
0x4E5744: cmp     edi, ebx
0x4E5746: mov     esi, ecx
0x4E5748: mov     [esp+70h+var_64], ebx
0x4E574C: mov     [eax], bl
0x4E574E: jz      loc_4E59FC
0x4E5754: cmp     [ebp+arg_4], ebx
0x4E5757: jz      loc_4E59FC
0x4E575D: cmp     [esi+24h], ebx
0x4E5760: jz      loc_4E59FC
0x4E5766: fld     dword ptr ds:0A32048h
0x4E576C: push    offset sub_4E4990
0x4E5771: push    5
0x4E5773: fstp    [esp+78h+var_58]
0x4E5777: push    8
0x4E5779: lea     ecx, [esp+7Ch+var_28]
0x4E577D: push    ecx
0x4E577E: call    sub_401080
0x4E5783: mov     ecx, edi
0x4E5785: call    sub_4BEF40
0x4E578A: mov     edx, [eax]
0x4E578C: mov     ecx, [eax+4]
0x4E578F: mov     [esp+70h+var_34], edx
0x4E5793: mov     edx, [eax+8]
0x4E5796: mov     [esp+70h+var_30], ecx
0x4E579A: mov     [esp+70h+var_2C], edx
0x4E579E: fld     [esp+70h+var_34]
0x4E57A2: fistp   [esp+70h+var_60]
0x4E57A6: mov     ecx, [esp+70h+var_60]
0x4E57AA: sar     ecx, 9
0x4E57AD: mov     [esp+70h+var_4C], ecx
0x4E57B1: fld     [esp+70h+var_30]
0x4E57B5: fistp   [esp+70h+var_60]
0x4E57B9: mov     eax, [esp+70h+var_60]
0x4E57BD: sar     eax, 9
0x4E57C0: or      edx, 0FFFFFFFFh
0x4E57C3: add     esi, 44h ; 'D'
0x4E57C6: add     eax, 0FFFFFFFFh
0x4E57C9: mov     [esp+70h+var_60], edx
0x4E57CD: mov     [esp+70h+var_3C], esi
0x4E57D1: mov     [esp+70h+var_48], eax
0x4E57D5: jmp     short loc_4E57E8
0x4E57D7: jmp     short loc_4E57E0
0x4E57D9: align 10h
0x4E57E0: mov     ecx, [esp+70h+var_4C]
0x4E57E4: mov     edx, [esp+70h+var_60]
0x4E57E8: mov     esi, [esp+70h+var_48]
0x4E57EC: lea     eax, [edx+ecx]
0x4E57EF: lea     ecx, [edx+ecx+7FFFh]
0x4E57F6: mov     [esp+70h+var_40], eax
0x4E57FA: mov     [esp+70h+var_44], ecx
0x4E57FE: mov     [esp+70h+var_54], esi
0x4E5802: mov     [esp+70h+var_50], 3
0x4E580A: xor     eax, eax
0x4E580C: cmp     [esp+70h+var_44], 0FFFDh
0x4E5814: ja      short loc_4E5830
0x4E5816: lea     edx, [esi+7FFFh]
0x4E581C: cmp     edx, 0FFFDh
0x4E5822: ja      short loc_4E5830
0x4E5824: mov     eax, [esp+70h+var_40]
0x4E5828: movzx   ecx, si
0x4E582B: shl     eax, 10h
0x4E582E: or      eax, ecx
0x4E5830: mov     ecx, [esp+70h+var_3C]
0x4E5834: lea     edx, [esp+70h+var_5C]
0x4E5838: push    edx
0x4E5839: push    eax
0x4E583A: mov     [esp+78h+var_5C], ebx
0x4E583E: call    NiTMap_GetAt
0x4E5843: mov     edi, [esp+70h+var_5C]
0x4E5847: cmp     edi, ebx
0x4E5849: jz      loc_4E5935
0x4E584F: nop
0x4E5850: mov     esi, [edi]
0x4E5852: cmp     esi, ebx
0x4E5854: jz      loc_4E5926
0x4E585A: mov     ecx, esi
0x4E585C: call    sub_67ED70
0x4E5861: test    al, al
0x4E5863: jnz     loc_4E5926
0x4E5869: mov     ecx, esi
0x4E586B: call    sub_4E7DE0
0x4E5870: cmp     [eax+4], ebx
0x4E5873: jnz     short loc_4E587D
0x4E5875: cmp     [eax], ebx
0x4E5877: jz      loc_4E5926
0x4E587D: mov     eax, [ebp+arg_C]
0x4E5880: cmp     eax, ebx
0x4E5882: jz      short loc_4E5893
0x4E5884: cmp     [eax], esi
0x4E5886: jz      loc_4E5926
0x4E588C: mov     eax, [eax+4]
0x4E588F: cmp     eax, ebx
0x4E5891: jnz     short loc_4E5884
0x4E5893: mov     ecx, esi
0x4E5895: call    sub_4E8040
0x4E589A: push    ebx
0x4E589B: mov     ecx, esi
0x4E589D: mov     byte ptr [esp+74h+var_38], al
0x4E58A1: call    sub_4E8060
0x4E58A6: mov     eax, [ebp+arg_4]
0x4E58A9: mov     ecx, [ebp+arg_0]
0x4E58AC: push    eax
0x4E58AD: push    esi
0x4E58AE: push    ecx
0x4E58AF: call    sub_67EDE0
0x4E58B4: fstp    [esp+7Ch+var_5C]
0x4E58B8: mov     edx, [esp+7Ch+var_38]
0x4E58BC: add     esp, 0Ch
0x4E58BF: push    edx
0x4E58C0: mov     ecx, esi
0x4E58C2: call    sub_4E8060
0x4E58C7: fld     [esp+70h+var_5C]
0x4E58CB: fld     [esp+70h+var_58]
0x4E58CF: fcomp   st(1)
0x4E58D1: fnstsw  ax
0x4E58D3: test    ah, 41h
0x4E58D6: jnz     short loc_4E58E2
0x4E58D8: fstp    [esp+70h+var_58]
0x4E58DC: mov     [esp+70h+var_64], esi
0x4E58E0: jmp     short loc_4E58E4
0x4E58E2: fstp    st
0x4E58E4: cmp     [ebp+arg_8], bl
0x4E58E7: jz      short loc_4E5926
0x4E58E9: fld     dword ptr ds:0B3A448h
0x4E58EF: push    ecx
0x4E58F0: mov     ecx, esi
0x4E58F2: fstp    [esp+74h+var_74]; float
0x4E58F5: call    sub_4BEF40
0x4E58FA: mov     ecx, [ebp+arg_0]
0x4E58FD: push    eax; int
0x4E58FE: call    sub_4BEF40
0x4E5903: push    eax; int
0x4E5904: call    sub_480520
0x4E5909: add     esp, 0Ch
0x4E590C: test    eax, eax
0x4E590E: jge     short loc_4E5926
0x4E5910: fld     [esp+70h+var_5C]
0x4E5914: push    ecx
0x4E5915: fstp    [esp+74h+var_74]; float
0x4E5918: lea     eax, [esp+74h+var_28]
0x4E591C: push    esi; int
0x4E591D: push    eax; int
0x4E591E: call    sub_4E49B0
0x4E5923: add     esp, 0Ch
0x4E5926: mov     edi, [edi+4]
0x4E5929: cmp     edi, ebx
0x4E592B: jnz     loc_4E5850
0x4E5931: mov     esi, [esp+70h+var_54]
0x4E5935: add     esi, 1
0x4E5938: sub     [esp+70h+var_50], 1
0x4E593D: mov     [esp+70h+var_54], esi
0x4E5941: jnz     loc_4E580A
0x4E5947: mov     eax, [esp+70h+var_60]
0x4E594B: add     eax, 1
0x4E594E: cmp     eax, 1
0x4E5951: mov     [esp+70h+var_60], eax
0x4E5955: jle     loc_4E57E0
0x4E595B: cmp     [esp+70h+var_64], ebx
0x4E595F: jz      loc_4E59FC
0x4E5965: cmp     [ebp+arg_8], bl
0x4E5968: jz      loc_4E59FC
0x4E596E: fld     dword ptr ds:0B3A448h
0x4E5974: mov     esi, [ebp+arg_0]
0x4E5977: push    ecx
0x4E5978: mov     ecx, esi
0x4E597A: fstp    [esp+74h+var_74]; float
0x4E597D: call    sub_4BEF40
0x4E5982: mov     ecx, [esp+74h+var_64]
0x4E5986: push    eax; int
0x4E5987: call    sub_4BEF40
0x4E598C: push    eax; int
0x4E598D: call    sub_480520
0x4E5992: add     esp, 0Ch
0x4E5995: test    eax, eax
0x4E5997: jge     short loc_4E59FC
0x4E5999: mov     ecx, esi
0x4E599B: call    sub_4BEF40
0x4E59A0: mov     ecx, [eax]
0x4E59A2: mov     [esp+70h+var_34], ecx
0x4E59A6: mov     edx, [eax+4]
0x4E59A9: mov     [esp+70h+var_30], edx
0x4E59AD: mov     eax, [eax+8]
0x4E59B0: mov     [esp+70h+var_2C], eax
0x4E59B4: xor     esi, esi
0x4E59B6: mov     ecx, [esp+esi*8+70h+var_28]
0x4E59BA: cmp     ecx, ebx
0x4E59BC: jz      short loc_4E59FC
0x4E59BE: call    sub_4BEF40
0x4E59C3: mov     edx, [ebp+arg_4]
0x4E59C6: push    eax
0x4E59C7: lea     ecx, [esp+74h+var_34]
0x4E59CB: push    ecx
0x4E59CC: push    edx
0x4E59CD: call    sub_687C30
0x4E59D2: add     esp, 0Ch
0x4E59D5: test    al, al
0x4E59D7: jnz     short loc_4E59EE
0x4E59D9: add     esi, 1
0x4E59DC: cmp     esi, 5
0x4E59DF: jl      short loc_4E59B6
0x4E59E1: mov     eax, [esp+70h+var_64]
0x4E59E5: pop     edi
0x4E59E6: pop     esi
0x4E59E7: pop     ebx
0x4E59E8: mov     esp, ebp
0x4E59EA: pop     ebp
0x4E59EB: retn    14h
0x4E59EE: mov     eax, [ebp+arg_10]
0x4E59F1: mov     ecx, [esp+esi*8+70h+var_28]
0x4E59F5: mov     byte ptr [eax], 1
0x4E59F8: mov     [esp+70h+var_64], ecx
0x4E59FC: mov     eax, [esp+70h+var_64]
0x4E5A00: pop     edi
0x4E5A01: pop     esi
0x4E5A02: pop     ebx
0x4E5A03: mov     esp, ebp
0x4E5A05: pop     ebp
0x4E5A06: retn    14h
