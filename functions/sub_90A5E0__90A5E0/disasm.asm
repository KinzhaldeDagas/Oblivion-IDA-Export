0x90A5E0: push    ebp
0x90A5E1: mov     ebp, esp
0x90A5E3: and     esp, 0FFFFFFF0h
0x90A5E6: sub     esp, 98h
0x90A5EC: mov     eax, [ebp+arg_8]
0x90A5EF: movaps  xmm0, xmmword ptr ds:0A965C0h
0x90A5F6: movaps  xmm1, xmmword ptr [eax+10h]
0x90A5FA: mov     edx, ecx
0x90A5FC: push    esi
0x90A5FD: push    edi
0x90A5FE: mov     esi, eax
0x90A600: add     eax, 10h
0x90A603: mov     ecx, 0Ch
0x90A608: lea     edi, [esp+0A0h+var_30]
0x90A60C: rep movsd
0x90A60E: mov     ecx, eax
0x90A610: mov     edi, [ecx]
0x90A612: mov     [esp+0A0h+var_80], edi
0x90A616: mov     edi, [ecx+4]
0x90A619: mov     [esp+0A0h+var_7C], edi
0x90A61D: mov     edi, [ecx+8]
0x90A620: mov     ecx, [ecx+0Ch]
0x90A623: mov     [esp+0A0h+var_74], ecx
0x90A627: mov     ecx, [ebp+arg_C]
0x90A62A: mov     [esp+0A0h+var_70], ecx
0x90A62E: mov     ecx, [ebp+arg_10]
0x90A631: test    ecx, ecx
0x90A633: mov     esi, offset off_A9B4E8
0x90A638: xorps   xmm1, xmm0
0x90A63B: movaps  [esp+0A0h+var_20], xmm1
0x90A643: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x90A64B: mov     [esp+0A0h+var_90], esi
0x90A64F: mov     [esp+0A0h+var_78], edi
0x90A653: jz      short loc_90A687
0x90A655: mov     [esp+0A0h+var_60], esi
0x90A659: mov     esi, [eax]
0x90A65B: mov     [esp+0A0h+var_50], esi
0x90A65F: mov     esi, [eax+4]
0x90A662: mov     [esp+0A0h+var_4C], esi
0x90A666: mov     esi, [eax+8]
0x90A669: mov     eax, [eax+0Ch]
0x90A66C: mov     [esp+0A0h+var_40], ecx
0x90A670: lea     ecx, [esp+0A0h+var_60]
0x90A674: mov     [esp+0A0h+var_5C], 7F7FFFFFh
0x90A67C: mov     [esp+0A0h+var_48], esi
0x90A680: mov     [esp+0A0h+var_44], eax
0x90A684: push    ecx
0x90A685: jmp     short loc_90A689
0x90A687: push    0
0x90A689: lea     eax, [esp+0A4h+var_90]
0x90A68D: push    eax
0x90A68E: mov     eax, [ebp+arg_0]
0x90A691: lea     ecx, [esp+0A8h+var_30]
0x90A695: push    ecx
0x90A696: mov     ecx, [ebp+arg_4]
0x90A699: push    eax
0x90A69A: push    ecx
0x90A69B: mov     ecx, edx
0x90A69D: call    sub_909AD0
0x90A6A2: pop     edi
0x90A6A3: pop     esi
0x90A6A4: mov     esp, ebp
0x90A6A6: pop     ebp
0x90A6A7: retn    14h
