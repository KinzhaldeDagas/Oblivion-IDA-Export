0x85A390: push    0FFFFFFFFh
0x85A392: push    offset SEH_85A390
0x85A397: mov     eax, large fs:0
0x85A39D: push    eax
0x85A39E: sub     esp, 28h
0x85A3A1: push    ebx
0x85A3A2: push    ebp
0x85A3A3: push    esi
0x85A3A4: push    edi
0x85A3A5: mov     eax, ds:0B30AACh
0x85A3AA: xor     eax, esp
0x85A3AC: push    eax
0x85A3AD: lea     eax, [esp+48h+var_C]
0x85A3B1: mov     large fs:0, eax
0x85A3B7: mov     edi, ecx
0x85A3B9: mov     [esp+48h+var_30], edi
0x85A3BD: mov     ebx, [esp+48h+arg_0]
0x85A3C1: push    4
0x85A3C3: mov     ecx, ebx
0x85A3C5: mov     [esp+4Ch+var_34], 0
0x85A3CD: call    NiNode_GetNiPropertyByID
0x85A3D2: mov     ebp, [esp+48h+arg_4]
0x85A3D6: lea     eax, [esp+48h+var_1C]
0x85A3DA: push    eax
0x85A3DB: mov     ecx, ebp
0x85A3DD: call    sub_405AD0
0x85A3E2: mov     eax, [esp+48h+var_1C]
0x85A3E6: test    eax, eax
0x85A3E8: jz      short loc_85A408
0x85A3EA: mov     esi, eax
0x85A3EC: add     eax, 4
0x85A3EF: push    eax; lpAddend
0x85A3F0: call    dword ptr ds:0A2807Ch
0x85A3F6: test    eax, eax
0x85A3F8: jnz     short loc_85A408
0x85A3FA: test    esi, esi
0x85A3FC: jz      short loc_85A408
0x85A3FE: mov     edx, [esi]
0x85A400: mov     eax, [edx]
0x85A402: push    1
0x85A404: mov     ecx, esi
0x85A406: call    eax
0x85A408: mov     ecx, [esp+48h+arg_18]
0x85A40C: mov     edx, [esp+48h+arg_10]
0x85A410: mov     eax, [esp+48h+arg_C]
0x85A414: push    ecx
0x85A415: mov     ecx, [esp+4Ch+arg_8]
0x85A419: push    edx
0x85A41A: push    eax
0x85A41B: push    ecx
0x85A41C: push    ebp
0x85A41D: push    ebx
0x85A41E: mov     ecx, edi
0x85A420: call    sub_854380
0x85A425: mov     eax, ds:0B2C674h
0x85A42A: test    eax, eax
0x85A42C: jbe     short loc_85A448
0x85A42E: movzx   ecx, word ptr [edi+0CCh]
0x85A435: add     eax, 0FFFFFFFFh
0x85A438: cmp     ecx, eax
0x85A43A: jnb     short loc_85A442
0x85A43C: mov     [esp+48h+var_2C], ecx
0x85A440: jmp     short loc_85A453
0x85A442: mov     [esp+48h+var_2C], eax
0x85A446: jmp     short loc_85A453
0x85A448: movzx   edx, word ptr [edi+0CCh]
0x85A44F: mov     [esp+48h+var_2C], edx
0x85A453: cmp     byte ptr ds:0B42E86h, 0
0x85A45A: jnz     loc_85AA0C
0x85A460: mov     ecx, edi
0x85A462: call    sub_7ED2A0
0x85A467: test    eax, eax
0x85A469: mov     [esp+48h+arg_18], eax
0x85A46D: jz      loc_85A70E
0x85A473: mov     ecx, [esp+48h+var_30]
0x85A477: call    sub_7ED4B0
0x85A47C: mov     edi, ds:0A2807Ch
0x85A482: mov     ebp, eax
0x85A484: test    ebp, ebp
0x85A486: jz      short loc_85A4DE
0x85A488: lea     eax, [esp+48h+var_1C]
0x85A48C: push    eax
0x85A48D: mov     ecx, ebp
0x85A48F: call    sub_405AD0
0x85A494: mov     ecx, [eax]
0x85A496: fld     dword ptr [ecx+0ECh]
0x85A49C: or      [esp+48h+var_34], 1
0x85A4A1: fld     dword ptr ds:0B3FA90h
0x85A4A7: fucompp
0x85A4A9: fnstsw  ax
0x85A4AB: test    ah, 44h
0x85A4AE: jp      short loc_85A4DE
0x85A4B0: fld     dword ptr [ecx+0F0h]
0x85A4B6: fld     dword ptr ds:0B3FA94h
0x85A4BC: fucompp
0x85A4BE: fnstsw  ax
0x85A4C0: test    ah, 44h
0x85A4C3: jp      short loc_85A4DE
0x85A4C5: fld     dword ptr [ecx+0F4h]
0x85A4CB: fld     dword ptr ds:0B3FA98h
0x85A4D1: fucompp
0x85A4D3: fnstsw  ax
0x85A4D5: test    ah, 44h
0x85A4D8: jp      short loc_85A4DE
0x85A4DA: mov     bl, 1
0x85A4DC: jmp     short loc_85A4E0
0x85A4DE: xor     bl, bl
0x85A4E0: test    byte ptr [esp+48h+var_34], 1
0x85A4E5: jz      short loc_85A50C
0x85A4E7: mov     esi, [esp+48h+var_1C]
0x85A4EB: and     [esp+48h+var_34], 0FFFFFFFEh
0x85A4F0: test    esi, esi
0x85A4F2: jz      short loc_85A50C
0x85A4F4: lea     ecx, [esi+4]
0x85A4F7: push    ecx; lpAddend
0x85A4F8: call    edi ; InterlockedDecrement
0x85A4FA: test    eax, eax
0x85A4FC: jnz     short loc_85A50C
0x85A4FE: test    esi, esi
0x85A500: jz      short loc_85A50C
0x85A502: mov     edx, [esi]
0x85A504: mov     eax, [edx]
0x85A506: push    1
0x85A508: mov     ecx, esi
0x85A50A: call    eax
0x85A50C: mov     ecx, [esp+48h+var_30]
0x85A510: call    sub_7ED4B0
0x85A515: test    bl, bl
0x85A517: jnz     loc_85A482
0x85A51D: mov     edi, eax
0x85A51F: test    edi, edi
0x85A521: jz      short loc_85A579
0x85A523: lea     ecx, [esp+48h+var_28]
0x85A527: push    ecx
0x85A528: mov     ecx, edi
0x85A52A: call    sub_405AD0
0x85A52F: mov     ecx, [eax]
0x85A531: fld     dword ptr [ecx+0ECh]
0x85A537: or      [esp+48h+var_34], 2
0x85A53C: fld     dword ptr ds:0B3FA90h
0x85A542: fucompp
0x85A544: fnstsw  ax
0x85A546: test    ah, 44h
0x85A549: jp      short loc_85A579
0x85A54B: fld     dword ptr [ecx+0F0h]
0x85A551: fld     dword ptr ds:0B3FA94h
0x85A557: fucompp
0x85A559: fnstsw  ax
0x85A55B: test    ah, 44h
0x85A55E: jp      short loc_85A579
0x85A560: fld     dword ptr [ecx+0F4h]
0x85A566: fld     dword ptr ds:0B3FA98h
0x85A56C: fucompp
0x85A56E: fnstsw  ax
0x85A570: test    ah, 44h
0x85A573: jp      short loc_85A579
0x85A575: mov     bl, 1
0x85A577: jmp     short loc_85A57B
0x85A579: xor     bl, bl
0x85A57B: test    byte ptr [esp+48h+var_34], 2
0x85A580: jz      short loc_85A5AE
0x85A582: and     [esp+48h+var_34], 0FFFFFFFDh
0x85A587: cmp     [esp+48h+var_28], 0
0x85A58C: jz      short loc_85A5AE
0x85A58E: mov     esi, [esp+48h+var_28]
0x85A592: lea     edx, [esi+4]
0x85A595: push    edx; lpAddend
0x85A596: call    dword ptr ds:0A2807Ch
0x85A59C: test    eax, eax
0x85A59E: jnz     short loc_85A5AE
0x85A5A0: test    esi, esi
0x85A5A2: jz      short loc_85A5AE
0x85A5A4: mov     eax, [esi]
0x85A5A6: mov     edx, [eax]
0x85A5A8: push    1
0x85A5AA: mov     ecx, esi
0x85A5AC: call    edx
0x85A5AE: test    bl, bl
0x85A5B0: jz      short loc_85A5C0
0x85A5B2: mov     ecx, [esp+48h+var_30]
0x85A5B6: call    sub_7ED4B0
0x85A5BB: jmp     loc_85A51D
0x85A5C0: cmp     [esp+48h+arg_18], 0
0x85A5C5: jz      short loc_85A61F
0x85A5C7: mov     ecx, [esp+48h+arg_18]
0x85A5CB: lea     eax, [esp+48h+var_24]
0x85A5CF: push    eax
0x85A5D0: call    sub_405AD0
0x85A5D5: mov     ecx, [eax]
0x85A5D7: fld     dword ptr [ecx+0ECh]
0x85A5DD: or      [esp+48h+var_34], 4
0x85A5E2: fld     dword ptr ds:0B3FA90h
0x85A5E8: fucompp
0x85A5EA: fnstsw  ax
0x85A5EC: test    ah, 44h
0x85A5EF: jp      short loc_85A61B
0x85A5F1: fld     dword ptr [ecx+0F0h]
0x85A5F7: fld     dword ptr ds:0B3FA94h
0x85A5FD: fucompp
0x85A5FF: fnstsw  ax
0x85A601: test    ah, 44h
0x85A604: jp      short loc_85A61B
0x85A606: fld     dword ptr [ecx+0F4h]
0x85A60C: fld     dword ptr ds:0B3FA98h
0x85A612: fucompp
0x85A614: fnstsw  ax
0x85A616: test    ah, 44h
0x85A619: jnp     short loc_85A61F
0x85A61B: mov     bl, 1
0x85A61D: jmp     short loc_85A621
0x85A61F: xor     bl, bl
0x85A621: test    byte ptr [esp+48h+var_34], 4
0x85A626: jz      short loc_85A654
0x85A628: and     [esp+48h+var_34], 0FFFFFFFBh
0x85A62D: cmp     [esp+48h+var_24], 0
0x85A632: jz      short loc_85A654
0x85A634: mov     esi, [esp+48h+var_24]
0x85A638: lea     ecx, [esi+4]
0x85A63B: push    ecx; lpAddend
0x85A63C: call    dword ptr ds:0A2807Ch
0x85A642: test    eax, eax
0x85A644: jnz     short loc_85A654
0x85A646: test    esi, esi
0x85A648: jz      short loc_85A654
0x85A64A: mov     edx, [esi]
0x85A64C: mov     eax, [edx]
0x85A64E: push    1
0x85A650: mov     ecx, esi
0x85A652: call    eax
0x85A654: test    bl, bl
0x85A656: jz      loc_85A6F9
0x85A65C: cmp     byte ptr [esp+48h+arg_C], 1
0x85A661: jnz     loc_85A6F1
0x85A667: push    10h; Size
0x85A669: call    FormHeapAlloc
0x85A66E: add     esp, 4
0x85A671: mov     [esp+48h+var_14], eax
0x85A675: test    eax, eax
0x85A677: mov     [esp+48h+var_4], 0
0x85A67F: jz      short loc_85A6A9
0x85A681: mov     ecx, [esp+48h+arg_18]
0x85A685: mov     edx, [esp+48h+arg_10]
0x85A689: push    edi
0x85A68A: push    ebp
0x85A68B: push    ecx
0x85A68C: movzx   ecx, byte ptr [edx]
0x85A68F: mov     edx, [esp+54h+arg_0]
0x85A693: push    3
0x85A695: push    ecx
0x85A696: push    169h
0x85A69B: push    edx
0x85A69C: push    eax
0x85A69D: call    sub_7E2370
0x85A6A2: add     esp, 20h
0x85A6A5: mov     edi, eax
0x85A6A7: jmp     short loc_85A6AB
0x85A6A9: xor     edi, edi
0x85A6AB: mov     esi, [esp+48h+var_30]
0x85A6AF: mov     eax, [esi+28h]
0x85A6B2: mov     edx, [eax+4]
0x85A6B5: add     esi, 28h ; '('
0x85A6B8: mov     ecx, esi
0x85A6BA: mov     [esp+48h+var_4], 0FFFFFFFFh
0x85A6C2: call    edx
0x85A6C4: mov     [eax+8], edi
0x85A6C7: mov     dword ptr [eax], 0
0x85A6CD: mov     ecx, [esi+8]
0x85A6D0: mov     [eax+4], ecx
0x85A6D3: mov     ecx, [esi+8]
0x85A6D6: test    ecx, ecx
0x85A6D8: jz      short loc_85A6E5
0x85A6DA: mov     [ecx], eax
0x85A6DC: add     dword ptr [esi+0Ch], 1
0x85A6E0: mov     [esi+8], eax
0x85A6E3: jmp     short loc_85A6F9
0x85A6E5: add     dword ptr [esi+0Ch], 1
0x85A6E9: mov     [esi+4], eax
0x85A6EC: mov     [esi+8], eax
0x85A6EF: jmp     short loc_85A6F9
0x85A6F1: mov     eax, [esp+48h+arg_8]
0x85A6F5: add     word ptr [eax], 1
0x85A6F9: mov     ecx, [esp+48h+var_30]
0x85A6FD: call    sub_7ED4B0
0x85A702: test    eax, eax
0x85A704: mov     [esp+48h+arg_18], eax
0x85A708: jnz     loc_85A473
0x85A70E: cmp     [esp+48h+var_2C], 0
0x85A713: mov     [esp+48h+var_28], 0
0x85A71B: jle     loc_85AA0C
0x85A721: mov     ecx, [esp+48h+arg_0]
0x85A725: push    4
0x85A727: call    NiNode_GetNiPropertyByID
0x85A72C: mov     ecx, [esp+48h+var_28]
0x85A730: mov     edx, [eax]
0x85A732: add     ecx, 1
0x85A735: mov     [esp+48h+var_14], ecx
0x85A739: push    ecx
0x85A73A: mov     ecx, eax
0x85A73C: mov     eax, [edx+88h]
0x85A742: call    eax
0x85A744: test    eax, eax
0x85A746: jz      loc_85A9FA
0x85A74C: mov     ecx, [esp+48h+var_30]
0x85A750: call    sub_7ED2A0
0x85A755: test    eax, eax
0x85A757: mov     [esp+48h+arg_18], eax
0x85A75B: jz      loc_85A9FA
0x85A761: mov     ecx, [esp+48h+var_30]
0x85A765: call    sub_7ED4B0
0x85A76A: test    eax, eax
0x85A76C: mov     [esp+48h+var_1C], eax
0x85A770: jz      short loc_85A7C8
0x85A772: lea     ecx, [esp+48h+var_18]
0x85A776: push    ecx
0x85A777: mov     ecx, eax
0x85A779: call    sub_405AD0
0x85A77E: mov     ecx, [eax]
0x85A780: fld     dword ptr [ecx+0ECh]
0x85A786: or      [esp+48h+var_34], 8
0x85A78B: fld     dword ptr ds:0B3FA90h
0x85A791: fucompp
0x85A793: fnstsw  ax
0x85A795: test    ah, 44h
0x85A798: jp      short loc_85A7C8
0x85A79A: fld     dword ptr [ecx+0F0h]
0x85A7A0: fld     dword ptr ds:0B3FA94h
0x85A7A6: fucompp
0x85A7A8: fnstsw  ax
0x85A7AA: test    ah, 44h
0x85A7AD: jp      short loc_85A7C8
0x85A7AF: fld     dword ptr [ecx+0F4h]
0x85A7B5: fld     dword ptr ds:0B3FA98h
0x85A7BB: fucompp
0x85A7BD: fnstsw  ax
0x85A7BF: test    ah, 44h
0x85A7C2: jp      short loc_85A7C8
0x85A7C4: mov     bl, 1
0x85A7C6: jmp     short loc_85A7CA
0x85A7C8: xor     bl, bl
0x85A7CA: test    byte ptr [esp+48h+var_34], 8
0x85A7CF: jz      short loc_85A7FA
0x85A7D1: mov     esi, [esp+48h+var_18]
0x85A7D5: and     [esp+48h+var_34], 0FFFFFFF7h
0x85A7DA: test    esi, esi
0x85A7DC: jz      short loc_85A7FA
0x85A7DE: lea     edx, [esi+4]
0x85A7E1: push    edx; lpAddend
0x85A7E2: call    dword ptr ds:0A2807Ch
0x85A7E8: test    eax, eax
0x85A7EA: jnz     short loc_85A7FA
0x85A7EC: test    esi, esi
0x85A7EE: jz      short loc_85A7FA
0x85A7F0: mov     eax, [esi]
0x85A7F2: mov     edx, [eax]
0x85A7F4: push    1
0x85A7F6: mov     ecx, esi
0x85A7F8: call    edx
0x85A7FA: test    bl, bl
0x85A7FC: jnz     loc_85A761
0x85A802: mov     ebp, [esp+48h+var_30]
0x85A806: mov     ecx, ebp
0x85A808: call    sub_7ED4B0
0x85A80D: mov     edi, eax
0x85A80F: test    edi, edi
0x85A811: jz      short loc_85A869
0x85A813: lea     eax, [esp+48h+var_24]
0x85A817: push    eax
0x85A818: mov     ecx, edi
0x85A81A: call    sub_405AD0
0x85A81F: mov     ecx, [eax]
0x85A821: fld     dword ptr [ecx+0ECh]
0x85A827: or      [esp+48h+var_34], 10h
0x85A82C: fld     dword ptr ds:0B3FA90h
0x85A832: fucompp
0x85A834: fnstsw  ax
0x85A836: test    ah, 44h
0x85A839: jp      short loc_85A869
0x85A83B: fld     dword ptr [ecx+0F0h]
0x85A841: fld     dword ptr ds:0B3FA94h
0x85A847: fucompp
0x85A849: fnstsw  ax
0x85A84B: test    ah, 44h
0x85A84E: jp      short loc_85A869
0x85A850: fld     dword ptr [ecx+0F4h]
0x85A856: fld     dword ptr ds:0B3FA98h
0x85A85C: fucompp
0x85A85E: fnstsw  ax
0x85A860: test    ah, 44h
0x85A863: jp      short loc_85A869
0x85A865: mov     bl, 1
0x85A867: jmp     short loc_85A86B
0x85A869: xor     bl, bl
0x85A86B: test    byte ptr [esp+48h+var_34], 10h
0x85A870: jz      short loc_85A89E
0x85A872: and     [esp+48h+var_34], 0FFFFFFEFh
0x85A877: cmp     [esp+48h+var_24], 0
0x85A87C: jz      short loc_85A89E
0x85A87E: mov     esi, [esp+48h+var_24]
0x85A882: lea     ecx, [esi+4]
0x85A885: push    ecx; lpAddend
0x85A886: call    dword ptr ds:0A2807Ch
0x85A88C: test    eax, eax
0x85A88E: jnz     short loc_85A89E
0x85A890: test    esi, esi
0x85A892: jz      short loc_85A89E
0x85A894: mov     edx, [esi]
0x85A896: mov     eax, [edx]
0x85A898: push    1
0x85A89A: mov     ecx, esi
0x85A89C: call    eax
0x85A89E: test    bl, bl
0x85A8A0: jnz     loc_85A806
0x85A8A6: cmp     [esp+48h+arg_18], 0
0x85A8AB: jz      short loc_85A905
0x85A8AD: lea     ecx, [esp+48h+var_20]
0x85A8B1: push    ecx
0x85A8B2: mov     ecx, [esp+4Ch+arg_18]
0x85A8B6: call    sub_405AD0
0x85A8BB: mov     ecx, [eax]
0x85A8BD: fld     dword ptr [ecx+0ECh]
0x85A8C3: or      [esp+48h+var_34], 20h
0x85A8C8: fld     dword ptr ds:0B3FA90h
0x85A8CE: fucompp
0x85A8D0: fnstsw  ax
0x85A8D2: test    ah, 44h
0x85A8D5: jp      short loc_85A901
0x85A8D7: fld     dword ptr [ecx+0F0h]
0x85A8DD: fld     dword ptr ds:0B3FA94h
0x85A8E3: fucompp
0x85A8E5: fnstsw  ax
0x85A8E7: test    ah, 44h
0x85A8EA: jp      short loc_85A901
0x85A8EC: fld     dword ptr [ecx+0F4h]
0x85A8F2: fld     dword ptr ds:0B3FA98h
0x85A8F8: fucompp
0x85A8FA: fnstsw  ax
0x85A8FC: test    ah, 44h
0x85A8FF: jnp     short loc_85A905
0x85A901: mov     bl, 1
0x85A903: jmp     short loc_85A907
0x85A905: xor     bl, bl
0x85A907: test    byte ptr [esp+48h+var_34], 20h
0x85A90C: jz      short loc_85A93A
0x85A90E: and     [esp+48h+var_34], 0FFFFFFDFh
0x85A913: cmp     [esp+48h+var_20], 0
0x85A918: jz      short loc_85A93A
0x85A91A: mov     esi, [esp+48h+var_20]
0x85A91E: lea     edx, [esi+4]
0x85A921: push    edx; lpAddend
0x85A922: call    dword ptr ds:0A2807Ch
0x85A928: test    eax, eax
0x85A92A: jnz     short loc_85A93A
0x85A92C: test    esi, esi
0x85A92E: jz      short loc_85A93A
0x85A930: mov     eax, [esi]
0x85A932: mov     edx, [eax]
0x85A934: push    1
0x85A936: mov     ecx, esi
0x85A938: call    edx
0x85A93A: test    bl, bl
0x85A93C: jz      loc_85A9E7
0x85A942: cmp     byte ptr [esp+48h+arg_C], 1
0x85A947: jnz     loc_85A9DF
0x85A94D: push    10h; Size
0x85A94F: call    FormHeapAlloc
0x85A954: add     esp, 4
0x85A957: mov     [esp+48h+var_10], eax
0x85A95B: test    eax, eax
0x85A95D: mov     ebx, 1
0x85A962: mov     [esp+48h+var_4], ebx
0x85A966: jz      short loc_85A994
0x85A968: mov     ecx, [esp+48h+var_1C]
0x85A96C: mov     edx, [esp+48h+arg_18]
0x85A970: push    edi
0x85A971: push    ecx
0x85A972: mov     ecx, [esp+50h+arg_10]
0x85A976: push    edx
0x85A977: movzx   edx, byte ptr [ecx]
0x85A97A: mov     ecx, [esp+54h+arg_0]
0x85A97E: push    3
0x85A980: push    edx
0x85A981: push    172h
0x85A986: push    ecx
0x85A987: push    eax
0x85A988: call    sub_7E2370
0x85A98D: add     esp, 20h
0x85A990: mov     edi, eax
0x85A992: jmp     short loc_85A996
0x85A994: xor     edi, edi
0x85A996: mov     dl, byte ptr [esp+48h+var_28]
0x85A99A: add     dl, bl
0x85A99C: mov     [edi+9], dl
0x85A99F: mov     eax, [ebp+28h]
0x85A9A2: mov     edx, [eax+4]
0x85A9A5: lea     esi, [ebp+28h]
0x85A9A8: mov     ecx, esi
0x85A9AA: mov     [esp+48h+var_4], 0FFFFFFFFh
0x85A9B2: call    edx
0x85A9B4: mov     [eax+8], edi
0x85A9B7: mov     dword ptr [eax], 0
0x85A9BD: mov     ecx, [esi+8]
0x85A9C0: mov     [eax+4], ecx
0x85A9C3: mov     ecx, [esi+8]
0x85A9C6: test    ecx, ecx
0x85A9C8: jz      short loc_85A9D4
0x85A9CA: mov     [ecx], eax
0x85A9CC: add     [esi+0Ch], ebx
0x85A9CF: mov     [esi+8], eax
0x85A9D2: jmp     short loc_85A9E7
0x85A9D4: add     [esi+0Ch], ebx
0x85A9D7: mov     [esi+4], eax
0x85A9DA: mov     [esi+8], eax
0x85A9DD: jmp     short loc_85A9E7
0x85A9DF: mov     eax, [esp+48h+arg_8]
0x85A9E3: add     word ptr [eax], 1
0x85A9E7: mov     ecx, ebp
0x85A9E9: call    sub_7ED4B0
0x85A9EE: test    eax, eax
0x85A9F0: mov     [esp+48h+arg_18], eax
0x85A9F4: jnz     loc_85A761
0x85A9FA: mov     eax, [esp+48h+var_14]
0x85A9FE: cmp     eax, [esp+48h+var_2C]
0x85AA02: mov     [esp+48h+var_28], eax
0x85AA06: jl      loc_85A721
0x85AA0C: cmp     byte ptr [esp+48h+arg_C], 1
0x85AA11: jnz     loc_85AAA2
0x85AA17: push    10h; Size
0x85AA19: call    FormHeapAlloc
0x85AA1E: add     esp, 4
0x85AA21: mov     [esp+48h+arg_C], eax
0x85AA25: test    eax, eax
0x85AA27: mov     [esp+48h+var_4], 2
0x85AA2F: jz      short loc_85AA57
0x85AA31: mov     edx, [esp+48h+arg_4]
0x85AA35: mov     ecx, [esp+48h+arg_10]
0x85AA39: push    edx
0x85AA3A: movzx   edx, byte ptr [ecx]
0x85AA3D: mov     ecx, [esp+4Ch+arg_0]
0x85AA41: push    1
0x85AA43: push    edx
0x85AA44: push    176h
0x85AA49: push    ecx
0x85AA4A: push    eax
0x85AA4B: call    sub_7E2370
0x85AA50: add     esp, 18h
0x85AA53: mov     edi, eax
0x85AA55: jmp     short loc_85AA59
0x85AA57: xor     edi, edi
0x85AA59: mov     esi, [esp+48h+var_30]
0x85AA5D: add     esi, 28h ; '('
0x85AA60: mov     byte ptr [edi+9], 9
0x85AA64: mov     edx, [esi]
0x85AA66: mov     eax, [edx+4]
0x85AA69: mov     ecx, esi
0x85AA6B: mov     [esp+48h+var_4], 0FFFFFFFFh
0x85AA73: call    eax
0x85AA75: mov     [eax+8], edi
0x85AA78: mov     dword ptr [eax], 0
0x85AA7E: mov     ecx, [esi+8]
0x85AA81: mov     [eax+4], ecx
0x85AA84: mov     ecx, [esi+8]
0x85AA87: test    ecx, ecx
0x85AA89: jz      short loc_85AA96
0x85AA8B: mov     [ecx], eax
0x85AA8D: add     dword ptr [esi+0Ch], 1
0x85AA91: mov     [esi+8], eax
0x85AA94: jmp     short loc_85AAAA
0x85AA96: add     dword ptr [esi+0Ch], 1
0x85AA9A: mov     [esi+4], eax
0x85AA9D: mov     [esi+8], eax
0x85AAA0: jmp     short loc_85AAAA
0x85AAA2: mov     eax, [esp+48h+arg_8]
0x85AAA6: add     word ptr [eax], 1
0x85AAAA: mov     ecx, [esp+48h+var_C]
0x85AAAE: mov     large fs:0, ecx
0x85AAB5: pop     ecx
0x85AAB6: pop     edi
0x85AAB7: pop     esi
0x85AAB8: pop     ebp
0x85AAB9: pop     ebx
0x85AABA: add     esp, 34h
0x85AABD: retn    1Ch
