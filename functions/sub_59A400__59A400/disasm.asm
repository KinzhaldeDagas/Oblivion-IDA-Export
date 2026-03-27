0x59A400: push    0FFFFFFFFh
0x59A402: push    offset SEH_59A400
0x59A407: mov     eax, large fs:0
0x59A40D: push    eax
0x59A40E: sub     esp, 344h
0x59A414: mov     eax, ds:0B30AACh
0x59A419: xor     eax, esp
0x59A41B: mov     [esp+350h+var_10], eax
0x59A422: push    ebx
0x59A423: push    ebp; a3
0x59A424: push    esi; a3
0x59A425: push    edi; a3
0x59A426: mov     eax, ds:0B30AACh
0x59A42B: xor     eax, esp
0x59A42D: push    eax; a3
0x59A42E: lea     eax, [esp+364h+var_C]
0x59A435: mov     large fs:0, eax
0x59A43B: mov     ebp, [esp+364h+arg_4]
0x59A442: push    0
0x59A444: push    3E9h
0x59A449: mov     ebx, ecx
0x59A44B: mov     [esp+36Ch+var_33C], ebp
0x59A44F: call    sub_5790E0
0x59A454: add     esp, 8
0x59A457: test    al, al
0x59A459: jnz     loc_59B60E
0x59A45F: mov     esi, [esp+364h+arg_0]
0x59A466: lea     eax, [esi-1]
0x59A469: cmp     eax, 4
0x59A46C: ja      short loc_59A47F
0x59A46E: push    5; int
0x59A470: call    sub_57DE50
0x59A475: add     esp, 4
0x59A478: push    ebp
0x59A479: push    esi
0x59A47A: jmp     loc_59B607
0x59A47F: cmp     esi, 7
0x59A482: jz      loc_59B5AA
0x59A488: cmp     esi, 8
0x59A48B: jz      loc_59B5AA
0x59A491: lea     ecx, [esi-10h]
0x59A494: cmp     ecx, 4
0x59A497: ja      short loc_59A4CE
0x59A499: movzx   edx, byte ptr [ebx+60h]
0x59A49D: lea     edi, [ebx+60h]
0x59A4A0: lea     eax, [esi-10h]
0x59A4A3: and     edx, 7Fh
0x59A4A6: cmp     edx, eax
0x59A4A8: mov     ecx, edi
0x59A4AA: jnz     short loc_59A4BB
0x59A4AC: call    sub_597A60
0x59A4B1: call    ContainerMenu_Update
0x59A4B6: jmp     loc_59B60E
0x59A4BB: push    eax
0x59A4BC: call    sub_597A40
0x59A4C1: and     byte ptr [edi], 7Fh
0x59A4C4: call    ContainerMenu_Update
0x59A4C9: jmp     loc_59B60E
0x59A4CE: cmp     esi, 33h ; '3'
0x59A4D1: jnz     loc_59B333
0x59A4D7: cmp     byte ptr [ebx+54h], 0
0x59A4DB: jnz     loc_59B60E
0x59A4E1: mov     al, [ebx+64h]
0x59A4E4: test    al, al
0x59A4E6: mov     ecx, ds:0B333C4h
0x59A4EC: jz      short loc_59A4F7
0x59A4EE: mov     edi, [ebx+44h]
0x59A4F1: mov     [esp+364h+var_338], edi
0x59A4F5: jmp     short loc_59A4FD
0x59A4F7: mov     [esp+364h+var_338], ecx
0x59A4FB: mov     edi, ecx
0x59A4FD: test    al, al
0x59A4FF: jz      short loc_59A507
0x59A501: mov     [esp+364h+var_334], ecx
0x59A505: jmp     short loc_59A50E
0x59A507: mov     eax, [ebx+44h]
0x59A50A: mov     [esp+364h+var_334], eax
0x59A50E: cmp     byte ptr [ebx+63h], 0
0x59A512: mov     [esp+364h+var_34D], 1
0x59A517: jz      short loc_59A520
0x59A519: mov     byte ptr ds:0B13E90h, 0
0x59A520: push    0FB9h
0x59A525: mov     ecx, ebp
0x59A527: call    Tile_GetFloat
0x59A52C: call    Double_To_SInt32
0x59A531: cmp     edi, ds:0B333C4h
0x59A537: mov     ecx, edi; this
0x59A539: jnz     loc_59A5EC
0x59A53F: push    0; a3
0x59A541: push    eax; a2
0x59A542: call    GetInventoryEntryOfItem
0x59A547: mov     esi, eax
0x59A549: mov     ecx, [esi+8]
0x59A54C: mov     edx, [ecx]
0x59A54E: mov     eax, [edx+78h]
0x59A551: call    eax
0x59A553: test    al, al
0x59A555: jz      short loc_59A589
0x59A557: push    ecx
0x59A558: mov     ecx, ds:0B38568h
0x59A55E: fld     dword ptr ds:0A30634h
0x59A564: fstp    [esp+368h+a2]; duration
0x59A567: push    1; unk2
0x59A569: push    0; unk1
0x59A56B: push    ecx; string
0x59A56C: call    GameUI_QueueMessage
0x59A571: add     esp, 10h
0x59A574: mov     ecx, esi
0x59A576: call    ContainerEntryExtraData_DestroyDataTable
0x59A57B: push    esi
0x59A57C: call    FormHeapFree
0x59A581: add     esp, 4
0x59A584: jmp     loc_59B60E
0x59A589: mov     ecx, ds:0B333C4h
0x59A58F: mov     edx, [ecx]
0x59A591: mov     eax, [edx+380h]
0x59A597: call    eax
0x59A599: test    eax, eax
0x59A59B: jz      short loc_59A5F9
0x59A59D: mov     ecx, ds:0B333C4h
0x59A5A3: mov     ecx, [ecx+58h]
0x59A5A6: mov     edx, [ecx]
0x59A5A8: mov     eax, [edx+0ECh]
0x59A5AE: push    0
0x59A5B0: call    eax
0x59A5B2: test    eax, eax
0x59A5B4: jz      short loc_59A5F9
0x59A5B6: push    0
0x59A5B8: mov     ecx, esi
0x59A5BA: call    ContainerEntryExtraData_HasWorn
0x59A5BF: test    al, al
0x59A5C1: jz      short loc_59A5F9
0x59A5C3: mov     ecx, ds:0B333C4h
0x59A5C9: mov     ecx, [ecx+58h]
0x59A5CC: mov     edx, [ecx]
0x59A5CE: mov     eax, [edx+0ECh]
0x59A5D4: push    0
0x59A5D6: call    eax
0x59A5D8: mov     eax, [eax+8]
0x59A5DB: cmp     [esi+8], eax
0x59A5DE: jnz     short loc_59A5F9
0x59A5E0: push    ecx
0x59A5E1: mov     ecx, ds:0B38A40h
0x59A5E7: jmp     loc_59A55E
0x59A5EC: movzx   edx, byte ptr [ebx+61h]
0x59A5F0: push    edx; a3
0x59A5F1: push    eax; a2
0x59A5F2: call    GetInventoryEntryOfItem
0x59A5F7: mov     esi, eax
0x59A5F9: test    esi, esi
0x59A5FB: jz      loc_59B316
0x59A601: mov     eax, [esi]
0x59A603: test    eax, eax
0x59A605: jz      short loc_59A61C
0x59A607: mov     eax, [eax]
0x59A609: test    eax, eax
0x59A60B: jz      short loc_59A61C
0x59A60D: mov     ecx, eax
0x59A60F: call    sub_41DF50
0x59A614: test    al, al
0x59A616: jnz     loc_59B60E
0x59A61C: push    0
0x59A61E: push    0FDDh
0x59A623: push    0
0x59A625: push    1; arg1
0x59A627: push    0; canCreate
0x59A629: call    InterfaceManager_GetSingleton
0x59A62E: add     esp, 8
0x59A631: mov     ecx, eax
0x59A633: call    sub_57F9F0
0x59A638: cmp     byte ptr ds:0B3B27Ah, 0
0x59A63F: mov     ebp, [ebx+44h]
0x59A642: jz      short loc_59A64A
0x59A644: cmp     byte ptr [ebx+61h], 0
0x59A648: jnz     short loc_59A650
0x59A64A: cmp     byte ptr [ebx+61h], 0
0x59A64E: jnz     short loc_59A66B
0x59A650: mov     ecx, ds:0B333C4h
0x59A656: cmp     edi, ecx
0x59A658: mov     eax, [esi+8]
0x59A65B: push    0
0x59A65D: jnz     short loc_59A663
0x59A65F: push    0
0x59A661: jmp     short loc_59A665
0x59A663: push    1
0x59A665: push    eax
0x59A666: call    sub_5E99C0
0x59A66B: mov     eax, ds:0B13E94h
0x59A670: cmp     eax, 0FFFFFFFFh
0x59A673: mov     edi, 1
0x59A678: mov     dword ptr [esp+364h+var_344], edi
0x59A67C: jz      loc_59A741
0x59A682: mov     edi, eax
0x59A684: mov     dword ptr [esp+364h+var_344], edi
0x59A688: cmp     byte ptr [ebx+61h], 0
0x59A68C: mov     byte ptr [esp+364h+var_346+1], 0
0x59A691: jz      loc_59ABD7
0x59A697: cmp     byte ptr ds:0B3B27Ah, 0
0x59A69E: jnz     loc_59A932
0x59A6A4: xor     eax, eax
0x59A6A6: mov     dword ptr [esp+364h+var_344], eax
0x59A6AA: mov     word ptr [esp+364h+var_344+4], ax
0x59A6AF: mov     word ptr [esp+364h+var_344+6], ax
0x59A6B4: mov     edx, [esp+364h+var_338]
0x59A6B8: cmp     edx, ds:0B333C4h
0x59A6BE: mov     [esp+364h+var_4], eax
0x59A6C5: mov     ecx, esi
0x59A6C7: jnz     loc_59A82E
0x59A6CD: push    eax
0x59A6CE: push    ebp
0x59A6CF: push    1
0x59A6D1: call    sub_488E50
0x59A6D6: fstp    [esp+364h+var_34C]
0x59A6DA: or      ebx, 0FFFFFFFFh
0x59A6DD: cmp     ds:0B13E94h, ebx
0x59A6E3: jz      short loc_59A6F3
0x59A6E5: fild    dword ptr ds:0B13E94h
0x59A6EB: fmul    [esp+364h+var_34C]
0x59A6EF: fstp    [esp+364h+var_34C]
0x59A6F3: fld1
0x59A6F5: fld     [esp+364h+var_34C]
0x59A6F9: fcom    st(1)
0x59A6FB: fnstsw  ax
0x59A6FD: fstp    st(1)
0x59A6FF: test    ah, 5
0x59A702: jp      loc_59A7DC
0x59A708: cmp     edi, 1
0x59A70B: fstp    st
0x59A70D: mov     byte ptr ds:0B3B288h, 1
0x59A714: mov     ecx, esi
0x59A716: jle     loc_59A7B8
0x59A71C: mov     ebp, ds:0B38CC0h
0x59A722: call    sub_488DF0
0x59A727: push    eax
0x59A728: push    edi
0x59A729: push    ebp; ArgList
0x59A72A: lea     eax, [esp+370h+var_344]
0x59A72E: push    offset aSIS?; "%s %i %s?"
0x59A733: push    eax; int
0x59A734: call    BSStringT_Static_Format
0x59A739: add     esp, 14h
0x59A73C: jmp     loc_59A8D6
0x59A741: mov     eax, [esp+364h+var_334]
0x59A745: cmp     eax, ds:0B333C4h
0x59A74B: jnz     short loc_59A77E
0x59A74D: mov     eax, [esi+8]
0x59A750: push    eax
0x59A751: call    sub_469980
0x59A756: add     esp, 4
0x59A759: test    al, al
0x59A75B: jnz     short loc_59A76D
0x59A75D: cmp     [ebx+61h], al
0x59A760: jnz     short loc_59A77E
0x59A762: mov     eax, [esi+8]
0x59A765: cmp     eax, ds:0B35EC8h
0x59A76B: jnz     short loc_59A77E
0x59A76D: mov     ecx, esi
0x59A76F: call    TESHealthForm_GetHealth
0x59A774: mov     ds:0B13E94h, eax
0x59A779: jmp     loc_59A688
0x59A77E: mov     ecx, esi
0x59A780: call    TESHealthForm_GetHealth
0x59A785: cmp     eax, ds:0B38688h
0x59A78B: jl      loc_59A688
0x59A791: push    0
0x59A793: mov     ecx, esi
0x59A795: mov     byte ptr [ebx+54h], 1
0x59A799: call    TESHealthForm_GetHealth
0x59A79E: mov     ecx, [esp+368h+var_33C]
0x59A7A2: push    eax
0x59A7A3: push    ecx
0x59A7A4: push    33h ; '3'
0x59A7A6: push    offset g_ContainerMenu_Quantity
0x59A7AB: call    sub_5C05D0
0x59A7B0: add     esp, 14h
0x59A7B3: jmp     loc_59A574
0x59A7B8: mov     edi, ds:0B38CC0h
0x59A7BE: call    sub_488DF0
0x59A7C3: push    eax
0x59A7C4: push    edi; ArgList
0x59A7C5: lea     ecx, [esp+36Ch+var_344]
0x59A7C9: push    offset aSS?; "%s %s?"
0x59A7CE: push    ecx; int
0x59A7CF: call    BSStringT_Static_Format
0x59A7D4: add     esp, 10h
0x59A7D7: jmp     loc_59A8D6
0x59A7DC: cmp     edi, 1
0x59A7DF: mov     edx, ds:0B38D20h
0x59A7E5: push    edx
0x59A7E6: push    ecx
0x59A7E7: fstp    [esp+36Ch+var_36C]; float
0x59A7EA: jnz     short loc_59A826
0x59A7EC: mov     edi, ds:0B38CB8h
0x59A7F2: call    FloatFloor
0x59A7F7: add     esp, 4
0x59A7FA: call    Double_To_SInt32
0x59A7FF: push    eax
0x59A800: mov     eax, ds:0B38D10h
0x59A805: push    eax
0x59A806: mov     ecx, esi
0x59A808: call    sub_488DF0
0x59A80D: push    eax
0x59A80E: push    edi; ArgList
0x59A80F: lea     ecx, [esp+378h+var_344]
0x59A813: push    offset aSSSIS?; "%s %s %s %i %s?"
0x59A818: push    ecx; int
0x59A819: call    BSStringT_Static_Format
0x59A81E: add     esp, 1Ch
0x59A821: jmp     loc_59A8D6
0x59A826: mov     ebp, ds:0B38CB8h
0x59A82C: jmp     short loc_59A8A6
0x59A82E: push    1
0x59A830: push    ebp
0x59A831: push    1
0x59A833: call    sub_488E50
0x59A838: fstp    [esp+364h+var_34C]
0x59A83C: or      ebx, 0FFFFFFFFh
0x59A83F: cmp     ds:0B13E94h, ebx
0x59A845: jz      short loc_59A855
0x59A847: fild    dword ptr ds:0B13E94h
0x59A84D: fmul    [esp+364h+var_34C]
0x59A851: fstp    [esp+364h+var_34C]
0x59A855: cmp     edi, 1
0x59A858: fld     [esp+364h+var_34C]
0x59A85C: mov     edx, ds:0B38D20h
0x59A862: push    edx
0x59A863: push    ecx
0x59A864: fstp    [esp+36Ch+var_36C]; float
0x59A867: jnz     short loc_59A8A0
0x59A869: mov     edi, ds:0B38CB0h
0x59A86F: call    FloatFloor
0x59A874: add     esp, 4
0x59A877: call    Double_To_SInt32
0x59A87C: push    eax
0x59A87D: mov     eax, ds:0B38D10h
0x59A882: push    eax
0x59A883: mov     ecx, esi
0x59A885: call    sub_488DF0
0x59A88A: push    eax
0x59A88B: push    edi; ArgList
0x59A88C: lea     ecx, [esp+378h+var_344]
0x59A890: push    offset aSSSIS?; "%s %s %s %i %s?"
0x59A895: push    ecx; int
0x59A896: call    BSStringT_Static_Format
0x59A89B: add     esp, 1Ch
0x59A89E: jmp     short loc_59A8D6
0x59A8A0: mov     ebp, ds:0B38CB0h
0x59A8A6: call    FloatFloor
0x59A8AB: add     esp, 4
0x59A8AE: call    Double_To_SInt32
0x59A8B3: push    eax
0x59A8B4: mov     eax, ds:0B38D10h
0x59A8B9: push    eax
0x59A8BA: mov     ecx, esi
0x59A8BC: call    sub_488DF0
0x59A8C1: push    eax
0x59A8C2: push    edi
0x59A8C3: push    ebp; ArgList
0x59A8C4: lea     ecx, [esp+37Ch+var_344]
0x59A8C8: push    offset aSISSIS?; "%s %i %s %s %i %s?"
0x59A8CD: push    ecx; int
0x59A8CE: call    BSStringT_Static_Format
0x59A8D3: add     esp, 20h
0x59A8D6: mov     eax, ds:0B38D00h
0x59A8DB: mov     ecx, ds:0B38CF8h
0x59A8E1: mov     edx, [esp+364h+var_33C]
0x59A8E5: push    0
0x59A8E7: push    eax
0x59A8E8: push    ecx
0x59A8E9: push    1
0x59A8EB: mov     ds:0B3B280h, edx
0x59A8F1: mov     edx, dword ptr [esp+374h+var_344]
0x59A8F5: push    offset ContainerMenuCallback
0x59A8FA: push    edx
0x59A8FB: mov     dword ptr ds:0B3B284h, 33h ; '3'
0x59A905: call    ShowUIMessageBox
0x59A90A: add     esp, 18h
0x59A90D: mov     ecx, esi
0x59A90F: call    ContainerEntryExtraData_DestroyDataTable
0x59A914: push    esi
0x59A915: call    FormHeapFree
0x59A91A: add     esp, 4
0x59A91D: lea     ecx, [esp+364h+var_344]; void *
0x59A921: mov     [esp+364h+var_4], ebx
0x59A928: call    BSStringT_Clear
0x59A92D: jmp     loc_59B60E
0x59A932: mov     ecx, esi
0x59A934: call    sub_484B70
0x59A939: test    eax, eax
0x59A93B: jz      short loc_59A951
0x59A93D: mov     ecx, esi
0x59A93F: call    sub_484B70
0x59A944: cmp     eax, ds:0B333C4h
0x59A94A: jz      short loc_59A951
0x59A94C: mov     byte ptr [esp+364h+var_346+1], 1
0x59A951: mov     eax, ds:0B333C4h
0x59A956: cmp     [esp+364h+var_338], eax
0x59A95A: mov     ecx, esi
0x59A95C: jnz     loc_59ACD7
0x59A962: push    0
0x59A964: push    ebp
0x59A965: push    1
0x59A967: call    sub_488E50
0x59A96C: fstp    [esp+364h+var_34C]
0x59A970: cmp     dword ptr ds:0B13E94h, 0FFFFFFFFh
0x59A977: jz      short loc_59A987
0x59A979: fild    dword ptr ds:0B13E94h
0x59A97F: fmul    [esp+364h+var_34C]
0x59A983: fstp    [esp+364h+var_34C]
0x59A987: mov     ecx, esi
0x59A989: call    sub_484B70
0x59A98E: test    eax, eax
0x59A990: jz      short loc_59A9A6
0x59A992: mov     ecx, esi
0x59A994: call    sub_484B70
0x59A999: cmp     eax, ds:0B333C4h
0x59A99F: jz      short loc_59A9A6
0x59A9A1: mov     byte ptr [esp+364h+var_346+1], 1
0x59A9A6: fld1
0x59A9A8: fcomp   [esp+364h+var_34C]
0x59A9AC: fnstsw  ax
0x59A9AE: test    ah, 41h
0x59A9B1: jz      loc_59AA66
0x59A9B7: mov     ecx, ds:0B333C4h
0x59A9BD: push    ecx; float
0x59A9BE: mov     ecx, ebp
0x59A9C0: call    sub_5E10F0
0x59A9C5: test    al, al
0x59A9C7: jnz     loc_59AA66
0x59A9CD: fld     [esp+364h+var_34C]
0x59A9D1: push    ecx
0x59A9D2: fstp    [esp+368h+a2]; float
0x59A9D5: call    FloatFloor
0x59A9DA: call    Double_To_SInt32
0x59A9DF: neg     eax
0x59A9E1: push    eax
0x59A9E2: call    sub_5489E0
0x59A9E7: fstp    dword ptr [esp+36Ch+var_344]
0x59A9EB: mov     edx, [ebp+0]
0x59A9EE: fld     dword ptr [esp+36Ch+var_344]
0x59A9F2: mov     eax, ds:0B333C4h
0x59A9F7: fstp    [esp+36Ch+a2]
0x59A9FB: mov     edx, [edx+374h]
0x59AA01: add     esp, 4
0x59AA04: push    eax
0x59AA05: mov     ecx, ebp
0x59AA07: call    edx
0x59AA09: push    2
0x59AA0B: push    5
0x59AA0D: call    TESTopic__GEtTopic
0x59AA12: mov     edi, eax
0x59AA14: mov     eax, ds:0B33398h
0x59AA19: mov     ecx, [eax+24h]
0x59AA1C: add     esp, 8
0x59AA1F: call    sub_6AC3D0
0x59AA24: mov     eax, ds:0B333C4h
0x59AA29: mov     edx, [ebp+0]
0x59AA2C: mov     edx, [edx+0DCh]
0x59AA32: push    0
0x59AA34: push    1
0x59AA36: push    1
0x59AA38: push    eax
0x59AA39: push    edi
0x59AA3A: mov     ecx, ebp
0x59AA3C: call    edx
0x59AA3E: fstp    st
0x59AA40: fld     dword ptr ds:0A30634h
0x59AA46: mov     eax, ds:0B38DB8h
0x59AA4B: push    ecx
0x59AA4C: fstp    [esp+368h+a2]; duration
0x59AA4F: push    1; unk2
0x59AA51: push    0; unk1
0x59AA53: push    eax; string
0x59AA54: call    GameUI_QueueMessage
0x59AA59: add     esp, 10h
0x59AA5C: mov     [esp+364h+var_34D], 0
0x59AA61: jmp     loc_59ABC5
0x59AA66: fld     [esp+364h+var_34C]
0x59AA6A: push    ecx
0x59AA6B: fstp    [esp+368h+a2]; float
0x59AA6E: call    FloatFloor
0x59AA73: fnstcw  word ptr [esp+368h+var_34C]
0x59AA77: add     esp, 4
0x59AA7A: movzx   eax, word ptr [esp+364h+var_34C]
0x59AA7F: or      eax, 0C00h
0x59AA84: mov     dword ptr [esp+364h+var_344], eax
0x59AA88: mov     ecx, ebp
0x59AA8A: fldcw   word ptr [esp+364h+var_344]
0x59AA8E: fistp   [esp+364h+var_344]
0x59AA92: mov     edi, dword ptr [esp+364h+var_344]
0x59AA96: fldcw   word ptr [esp+364h+var_34C]
0x59AA9A: call    sub_5FAA70
0x59AA9F: cmp     eax, edi
0x59AAA1: jb      loc_59AC74
0x59AAA7: test    edi, edi
0x59AAA9: jle     loc_59AB85
0x59AAAF: push    edi
0x59AAB0: call    sub_5489E0
0x59AAB5: fstp    dword ptr [esp+368h+var_344]
0x59AAB9: mov     edx, [ebp+0]
0x59AABC: fld     dword ptr [esp+368h+var_344]
0x59AAC0: mov     eax, ds:0B333C4h
0x59AAC5: fstp    [esp+368h+a2]
0x59AAC8: mov     edx, [edx+374h]
0x59AACE: push    eax
0x59AACF: mov     ecx, ebp
0x59AAD1: call    edx
0x59AAD3: mov     ecx, ds:0B33A98h
0x59AAD9: push    0Fh
0x59AADB: mov     byte ptr ds:0B3B27Ah, 0
0x59AAE2: call    TESDataHandler_LookupFormByID
0x59AAE7: mov     ecx, ds:0B333C4h
0x59AAED: push    edi
0x59AAEE: push    0
0x59AAF0: push    eax
0x59AAF1: call    TESObjectREFR_AddItem_Abbrev
0x59AAF6: mov     eax, [esi]
0x59AAF8: xor     ecx, ecx
0x59AAFA: test    eax, eax
0x59AAFC: jz      short loc_59AB00
0x59AAFE: mov     ecx, [eax]
0x59AB00: cmp     byte ptr [esp+364h+var_346+1], 0
0x59AB05: jz      short loc_59AB12
0x59AB07: mov     eax, ds:0B333C4h
0x59AB0C: add     [eax+614h], edi
0x59AB12: mov     eax, ds:0B333C4h
0x59AB17: push    4000h
0x59AB1C: push    ecx
0x59AB1D: push    eax
0x59AB1E: call    Script_AddEventToExtraScript
0x59AB23: push    7
0x59AB25: push    5
0x59AB27: call    TESTopic__GEtTopic
0x59AB2C: add     esp, 14h
0x59AB2F: test    eax, eax
0x59AB31: mov     dword ptr [esp+364h+var_344], eax
0x59AB35: jz      short loc_59AB85
0x59AB37: mov     ecx, [ebx+44h]
0x59AB3A: push    0; int
0x59AB3C: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x59AB41: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x59AB46: push    0; int
0x59AB48: push    ecx; void *
0x59AB49: call    OblivionDynamicCast
0x59AB4E: mov     edi, eax
0x59AB50: add     esp, 14h
0x59AB53: test    edi, edi
0x59AB55: jz      short loc_59AB85
0x59AB57: mov     edx, ds:0B33398h
0x59AB5D: mov     ecx, [edx+24h]
0x59AB60: call    sub_6AC3D0
0x59AB65: mov     ecx, ds:0B333C4h
0x59AB6B: mov     eax, [edi]
0x59AB6D: mov     edx, dword ptr [esp+364h+var_344]
0x59AB71: mov     eax, [eax+0DCh]
0x59AB77: push    0
0x59AB79: push    1
0x59AB7B: push    1
0x59AB7D: push    ecx
0x59AB7E: push    edx
0x59AB7F: mov     ecx, edi
0x59AB81: call    eax
0x59AB83: fstp    st
0x59AB85: cmp     byte ptr ds:0B3B288h, 0
0x59AB8C: jnz     short loc_59ABC5
0x59AB8E: mov     ecx, ds:0B333C4h
0x59AB94: mov     edx, [ecx+11Ch]
0x59AB9A: mov     edi, [ecx]
0x59AB9C: mov     eax, 51EB851Fh
0x59ABA1: imul    edx
0x59ABA3: sar     edx, 5
0x59ABA6: mov     eax, edx
0x59ABA8: shr     eax, 1Fh
0x59ABAB: add     eax, edx
0x59ABAD: mov     edx, [edi+39Ch]
0x59ABB3: mov     dword ptr [esp+364h+var_344], eax
0x59ABB7: push    ecx
0x59ABB8: fild    dword ptr [esp+368h+var_344]
0x59ABBC: fstp    [esp+368h+a2]
0x59ABBF: push    0
0x59ABC1: push    1Dh
0x59ABC3: call    edx
0x59ABC5: cmp     [esp+364h+var_34D], 0
0x59ABCA: mov     byte ptr ds:0B3B288h, 0
0x59ABD1: jz      loc_59B302
0x59ABD7: cmp     dword ptr ds:0B13E94h, 0FFFFFFFFh
0x59ABDE: jnz     short loc_59ABEA
0x59ABE0: mov     dword ptr ds:0B13E94h, 1
0x59ABEA: cmp     byte ptr [ebx+63h], 0
0x59ABEE: jz      loc_59AF11
0x59ABF4: mov     eax, [esp+364h+var_338]
0x59ABF8: cmp     eax, ds:0B333C4h
0x59ABFE: jnz     loc_59AF11
0x59AC04: mov     eax, [esi+8]
0x59AC07: push    eax
0x59AC08: mov     byte ptr ds:0B3B279h, 0
0x59AC0F: call    TESWeightForm_GetWeightForForm_Fast
0x59AC14: fstp    dword ptr [esp+368h+var_344]
0x59AC18: mov     ecx, [ebx+44h]; this
0x59AC1B: add     esp, 4
0x59AC1E: call    Actor_IsNPC
0x59AC23: test    al, al
0x59AC25: jz      loc_59AF11
0x59AC2B: mov     ecx, [ebx+44h]
0x59AC2E: mov     edx, [ecx]
0x59AC30: mov     eax, [edx+198h]
0x59AC36: push    0
0x59AC38: call    eax
0x59AC3A: test    al, al
0x59AC3C: jnz     loc_59AF11
0x59AC42: fldz
0x59AC44: fcomp   dword ptr [esp+364h+var_344]
0x59AC48: fnstsw  ax
0x59AC4A: test    ah, 5
0x59AC4D: jp      loc_59AF11
0x59AC53: mov     ecx, ds:0B38CF0h
0x59AC59: mov     edx, ds:0B38C40h
0x59AC5F: push    0
0x59AC61: push    ecx
0x59AC62: push    1
0x59AC64: push    0
0x59AC66: push    edx
0x59AC67: call    ShowUIMessageBox
0x59AC6C: add     esp, 14h
0x59AC6F: jmp     loc_59A574
0x59AC74: push    2
0x59AC76: push    5
0x59AC78: call    TESTopic__GEtTopic
0x59AC7D: mov     ecx, ds:0B33398h
0x59AC83: mov     ecx, [ecx+24h]
0x59AC86: add     esp, 8
0x59AC89: mov     edi, eax
0x59AC8B: call    sub_6AC3D0
0x59AC90: mov     eax, ds:0B333C4h
0x59AC95: mov     edx, [ebp+0]
0x59AC98: mov     edx, [edx+0DCh]
0x59AC9E: push    0
0x59ACA0: push    1
0x59ACA2: push    0
0x59ACA4: push    eax
0x59ACA5: push    edi
0x59ACA6: mov     ecx, ebp
0x59ACA8: call    edx
0x59ACAA: fstp    st
0x59ACAC: fld     dword ptr ds:0A30634h
0x59ACB2: push    ecx
0x59ACB3: fstp    [esp+368h+a2]; duration
0x59ACB6: push    1; unk2
0x59ACB8: push    0; unk1
0x59ACBA: push    offset aMerchantDoesNo; "Merchant does not have enough gold."
0x59ACBF: call    GameUI_QueueMessage
0x59ACC4: mov     dword ptr ds:0B13E94h, 1
0x59ACCE: mov     byte ptr [ebx+54h], 0
0x59ACD2: jmp     loc_59A571
0x59ACD7: push    1
0x59ACD9: push    ebp
0x59ACDA: push    1
0x59ACDC: call    sub_488E50
0x59ACE1: fstp    [esp+364h+var_34C]
0x59ACE5: cmp     dword ptr ds:0B13E94h, 0FFFFFFFFh
0x59ACEC: jz      short loc_59ACFC
0x59ACEE: fild    dword ptr ds:0B13E94h
0x59ACF4: fmul    [esp+364h+var_34C]
0x59ACF8: fstp    [esp+364h+var_34C]
0x59ACFC: fld1
0x59ACFE: fcomp   [esp+364h+var_34C]
0x59AD02: fnstsw  ax
0x59AD04: test    ah, 41h
0x59AD07: jz      loc_59ADBB
0x59AD0D: mov     eax, ds:0B333C4h
0x59AD12: push    eax; float
0x59AD13: mov     ecx, ebp
0x59AD15: call    sub_5E10F0
0x59AD1A: test    al, al
0x59AD1C: jnz     loc_59ADBB
0x59AD22: fld     [esp+364h+var_34C]
0x59AD26: push    ecx
0x59AD27: fstp    [esp+368h+a2]; float
0x59AD2A: call    FloatFloor
0x59AD2F: call    Double_To_SInt32
0x59AD34: neg     eax
0x59AD36: push    eax
0x59AD37: call    sub_5489E0
0x59AD3C: fstp    dword ptr [esp+36Ch+var_344]
0x59AD40: mov     edx, [ebp+0]
0x59AD43: fld     dword ptr [esp+36Ch+var_344]
0x59AD47: mov     eax, ds:0B333C4h
0x59AD4C: fstp    [esp+36Ch+a2]
0x59AD50: mov     edx, [edx+374h]
0x59AD56: add     esp, 4
0x59AD59: push    eax
0x59AD5A: mov     ecx, ebp
0x59AD5C: call    edx
0x59AD5E: push    2
0x59AD60: push    5
0x59AD62: call    TESTopic__GEtTopic
0x59AD67: mov     edi, eax
0x59AD69: mov     eax, ds:0B33398h
0x59AD6E: mov     ecx, [eax+24h]
0x59AD71: add     esp, 8
0x59AD74: call    sub_6AC3D0
0x59AD79: mov     eax, ds:0B333C4h
0x59AD7E: mov     edx, [ebp+0]
0x59AD81: mov     edx, [edx+0DCh]
0x59AD87: push    0
0x59AD89: push    1
0x59AD8B: push    1
0x59AD8D: push    eax
0x59AD8E: push    edi
0x59AD8F: mov     ecx, ebp
0x59AD91: call    edx
0x59AD93: fstp    st
0x59AD95: fld     dword ptr ds:0A30634h
0x59AD9B: mov     eax, ds:0B38DB8h
0x59ADA0: push    ecx
0x59ADA1: fstp    [esp+368h+a2]; duration
0x59ADA4: push    1; unk2
0x59ADA6: push    0; unk1
0x59ADA8: push    eax; string
0x59ADA9: call    GameUI_QueueMessage
0x59ADAE: add     esp, 10h
0x59ADB1: mov     [esp+364h+var_34D], 0
0x59ADB6: jmp     loc_59ABC5
0x59ADBB: fld     [esp+364h+var_34C]
0x59ADBF: push    ecx
0x59ADC0: fstp    [esp+368h+a2]; float
0x59ADC3: call    FloatFloor
0x59ADC8: add     esp, 4
0x59ADCB: call    Double_To_SInt32
0x59ADD0: mov     ecx, ds:0B333C4h
0x59ADD6: mov     edi, eax
0x59ADD8: call    sub_5E4420
0x59ADDD: cmp     eax, edi
0x59ADDF: jl      loc_59AEEA
0x59ADE5: push    edi
0x59ADE6: call    sub_5489E0
0x59ADEB: fstp    [esp+368h+var_33C]
0x59ADEF: mov     edx, [ebp+0]
0x59ADF2: fld     [esp+368h+var_33C]
0x59ADF6: mov     eax, ds:0B333C4h
0x59ADFB: fstp    [esp+368h+a2]
0x59ADFE: mov     edx, [edx+374h]
0x59AE04: push    eax
0x59AE05: mov     ecx, ebp
0x59AE07: call    edx
0x59AE09: test    edi, edi
0x59AE0B: jle     short loc_59AE2C
0x59AE0D: mov     ecx, ds:0B333C4h
0x59AE13: add     ecx, 44h ; 'D'; this
0x59AE16: call    ExtraDataList_GetContainerChanges
0x59AE1B: mov     ecx, ds:0B333C4h
0x59AE21: push    0
0x59AE23: push    edi
0x59AE24: push    ecx
0x59AE25: mov     ecx, eax
0x59AE27: call    sub_491700
0x59AE2C: mov     ecx, [esi]
0x59AE2E: xor     eax, eax
0x59AE30: test    ecx, ecx
0x59AE32: jz      short loc_59AE36
0x59AE34: mov     eax, [ecx]
0x59AE36: push    4000h
0x59AE3B: push    eax
0x59AE3C: push    ebp
0x59AE3D: call    Script_AddEventToExtraScript
0x59AE42: mov     edx, dword ptr [esp+370h+var_344]
0x59AE46: mov     ecx, ds:0B33A98h
0x59AE4C: add     esp, 0Ch
0x59AE4F: push    ebp
0x59AE50: push    edx
0x59AE51: push    esi
0x59AE52: call    sub_44D340
0x59AE57: push    6
0x59AE59: push    5
0x59AE5B: mov     dword ptr ds:0B13E94h, 0FFFFFFFFh
0x59AE65: call    TESTopic__GEtTopic
0x59AE6A: mov     edi, eax
0x59AE6C: add     esp, 8
0x59AE6F: test    edi, edi
0x59AE71: jz      short loc_59AEBD
0x59AE73: mov     eax, [ebx+44h]
0x59AE76: push    0; int
0x59AE78: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x59AE7D: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x59AE82: push    0; int
0x59AE84: push    eax; void *
0x59AE85: call    OblivionDynamicCast
0x59AE8A: mov     ebp, eax
0x59AE8C: add     esp, 14h
0x59AE8F: test    ebp, ebp
0x59AE91: jz      short loc_59AEBD
0x59AE93: mov     ecx, ds:0B33398h
0x59AE99: mov     ecx, [ecx+24h]
0x59AE9C: call    sub_6AC3D0
0x59AEA1: mov     eax, ds:0B333C4h
0x59AEA6: mov     edx, [ebp+0]
0x59AEA9: mov     edx, [edx+0DCh]
0x59AEAF: push    0
0x59AEB1: push    1
0x59AEB3: push    1
0x59AEB5: push    eax
0x59AEB6: push    edi
0x59AEB7: mov     ecx, ebp
0x59AEB9: call    edx
0x59AEBB: fstp    st
0x59AEBD: mov     ecx, ds:0B33A98h
0x59AEC3: call    sub_446C10
0x59AEC8: mov     ecx, ds:0B33A98h
0x59AECE: cmp     dword ptr [ecx+0CDCh], 0
0x59AED5: jz      short loc_59AEE0
0x59AED7: mov     eax, [ebx+44h]
0x59AEDA: push    eax
0x59AEDB: call    sub_448F40
0x59AEE0: call    ContainerMenu_Update
0x59AEE5: jmp     loc_59A574
0x59AEEA: fld     dword ptr ds:0A30634h
0x59AEF0: push    ecx
0x59AEF1: mov     ecx, ds:0B38DB0h
0x59AEF7: fstp    [esp+368h+a2]; duration
0x59AEFA: push    1; unk2
0x59AEFC: push    0; unk1
0x59AEFE: push    ecx; string
0x59AEFF: call    GameUI_QueueMessage
0x59AF04: add     esp, 10h
0x59AF07: mov     [esp+364h+var_34D], 0
0x59AF0C: jmp     loc_59ABC5
0x59AF11: mov     eax, [ebx+44h]
0x59AF14: push    0; int
0x59AF16: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x59AF1B: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x59AF20: push    0; int
0x59AF22: push    eax; void *
0x59AF23: call    OblivionDynamicCast
0x59AF28: add     esp, 14h
0x59AF2B: cmp     byte ptr [ebx+63h], 0
0x59AF2F: mov     [esp+364h+var_33C], eax
0x59AF33: jz      loc_59B0B1
0x59AF39: mov     ecx, ds:0B333C4h
0x59AF3F: cmp     [esp+364h+var_338], ecx
0x59AF43: jz      loc_59B0B7
0x59AF49: mov     ecx, esi
0x59AF4B: mov     [esp+364h+var_34D], 0
0x59AF50: call    sub_4842E0
0x59AF55: imul    eax, ds:0B13E94h
0x59AF5C: mov     ecx, ds:0B333C4h
0x59AF62: mov     edx, [ecx]
0x59AF64: mov     dword ptr [esp+364h+var_344], eax
0x59AF68: mov     eax, [edx+284h]
0x59AF6E: fild    dword ptr [esp+364h+var_344]
0x59AF72: push    7
0x59AF74: fstp    [esp+368h+var_34C]
0x59AF78: call    eax
0x59AF7A: mov     ecx, ds:0B333C4h
0x59AF80: mov     edx, [ecx]
0x59AF82: push    eax
0x59AF83: mov     eax, [edx+284h]
0x59AF89: push    1Fh
0x59AF8B: call    eax
0x59AF8D: push    eax
0x59AF8E: call    Calc_LuckModifiedSkill
0x59AF93: add     esp, 8
0x59AF96: call    Double_To_SInt32
0x59AF9B: mov     edi, dword ptr [esp+36Ch+var_344]
0x59AF9F: mov     edx, [edi]
0x59AFA1: mov     [esp+36Ch+var_34C], eax
0x59AFA5: mov     eax, [edx+284h]
0x59AFAB: push    7
0x59AFAD: mov     ecx, edi
0x59AFAF: call    eax
0x59AFB1: mov     edx, [edi]
0x59AFB3: push    eax
0x59AFB4: mov     eax, [edx+284h]
0x59AFBA: push    1Fh
0x59AFBC: mov     ecx, edi
0x59AFBE: call    eax
0x59AFC0: push    eax
0x59AFC1: call    Calc_LuckModifiedSkill
0x59AFC6: call    Double_To_SInt32
0x59AFCB: fld     [esp+36Ch+var_34C]
0x59AFCF: mov     ecx, dword ptr [esp+36Ch+var_344]
0x59AFD3: fstp    [esp+36Ch+a2]; float
0x59AFD7: add     esp, 4
0x59AFDA: push    eax; int
0x59AFDB: push    ecx; int
0x59AFDC: call    sub_546660
0x59AFE1: push    0; Seed
0x59AFE3: mov     dword ptr [esp+374h+var_344], eax
0x59AFE7: call    GetRandomLargeInteger?
0x59AFEC: mov     edi, eax
0x59AFEE: mov     eax, 0AE147AE1h
0x59AFF3: imul    edi
0x59AFF5: sar     edx, 5
0x59AFF8: mov     eax, edx
0x59AFFA: shr     eax, 1Fh
0x59AFFD: add     eax, edx
0x59AFFF: imul    eax, 64h ; 'd'
0x59B002: add     edi, eax
0x59B004: add     esp, 10h
0x59B007: cmp     dword ptr [esp+364h+var_344], edi
0x59B00B: jg      short loc_59B014
0x59B00D: mov     [esp+364h+var_34D], 1
0x59B012: jmp     short loc_59B035
0x59B014: mov     eax, [esi+8]
0x59B017: push    eax
0x59B018: call    sub_469980
0x59B01D: add     esp, 4
0x59B020: test    al, al
0x59B022: jnz     short loc_59B035
0x59B024: mov     eax, ds:0B333C4h
0x59B029: mov     ecx, ds:0B13E94h
0x59B02F: add     [eax+6CCh], ecx
0x59B035: mov     edx, dword ptr [esp+364h+var_344]
0x59B039: mov     ecx, [esp+364h+var_33C]; this
0x59B03D: push    edi
0x59B03E: push    offset aRandomChanceIs; "random chance is "
0x59B043: push    edx
0x59B044: push    offset aPickpocketedCh; "pickpocketed  chance of "
0x59B049: call    TESObjectREFR_GetName
0x59B04E: push    eax
0x59B04F: lea     eax, [esp+378h+Format]
0x59B053: push    offset aSSDSD; "%s %s %d %s %d "
0x59B058: push    eax; ArgList
0x59B059: call    __sprintf
0x59B05E: lea     ecx, [esp+380h+Format]
0x59B062: push    ecx; Format
0x59B063: call    PrintToLog???
0x59B068: add     esp, 20h
0x59B06B: cmp     [esp+364h+var_34D], 0
0x59B070: jz      short loc_59B0B1
0x59B072: mov     edx, [ebp+0]
0x59B075: mov     eax, [edx+19Ch]
0x59B07B: mov     ecx, ebp
0x59B07D: call    eax
0x59B07F: test    al, al
0x59B081: jnz     short loc_59B0B1
0x59B083: mov     ds:0B3B279h, al
0x59B088: call    sub_5982A0
0x59B08D: mov     eax, ds:0B13E94h
0x59B092: mov     ecx, ds:0B333C4h
0x59B098: mov     edx, [ecx]
0x59B09A: mov     edx, [edx+23Ch]
0x59B0A0: push    eax
0x59B0A1: mov     eax, [esi+8]
0x59B0A4: push    eax
0x59B0A5: mov     eax, [esp+36Ch+var_33C]
0x59B0A9: push    eax
0x59B0AA: call    edx
0x59B0AC: jmp     loc_59A574
0x59B0B1: mov     ecx, ds:0B333C4h
0x59B0B7: cmp     byte ptr ds:0B3B279h, 0
0x59B0BE: mov     eax, [esi+8]
0x59B0C1: mov     dword ptr [esp+364h+var_344], eax
0x59B0C5: jz      short loc_59B110
0x59B0C7: cmp     [esp+364h+var_338], ecx
0x59B0CB: jz      short loc_59B110
0x59B0CD: mov     edx, [ecx]
0x59B0CF: mov     eax, [edx+170h]
0x59B0D5: call    eax
0x59B0D7: mov     ecx, esi
0x59B0D9: mov     edi, eax
0x59B0DB: call    sub_484B70
0x59B0E0: cmp     eax, edi
0x59B0E2: jz      short loc_59B109
0x59B0E4: mov     ecx, esi
0x59B0E6: call    sub_4842E0
0x59B0EB: mov     ecx, eax
0x59B0ED: mov     eax, ds:0B13E94h
0x59B0F2: imul    ecx, eax
0x59B0F5: add     ds:0B3B27Ch, ecx
0x59B0FB: mov     ecx, ds:0B333C4h
0x59B101: add     [ecx+6C8h], eax
0x59B107: jmp     short loc_59B110
0x59B109: mov     byte ptr ds:0B3B279h, 0
0x59B110: cmp     byte ptr [ebx+61h], 0
0x59B114: jz      short loc_59B131
0x59B116: test    ebp, ebp
0x59B118: jz      short loc_59B131
0x59B11A: lea     ecx, [ebp+44h]
0x59B11D: call    sub_420680
0x59B122: test    eax, eax
0x59B124: jz      short loc_59B12A
0x59B126: mov     [esp+364h+var_334], eax
0x59B12A: mov     byte ptr ds:0B3B279h, 0
0x59B131: mov     edi, [esi]
0x59B133: test    edi, edi
0x59B135: jz      loc_59B247
0x59B13B: mov     ebp, ds:0B13E94h
0x59B141: cmp     ebp, 1
0x59B144: jnz     short loc_59B189
0x59B146: cmp     byte ptr [esp+364h+var_346+1], 0
0x59B14B: mov     edi, [edi]
0x59B14D: jz      short loc_59B165
0x59B14F: cmp     byte ptr [ebx+61h], 0
0x59B153: jnz     short loc_59B15E
0x59B155: mov     edx, [esi+8]
0x59B158: cmp     byte ptr [edx+4], 22h ; '"'
0x59B15C: jnz     short loc_59B165
0x59B15E: mov     ecx, edi
0x59B160: call    ExtraDataList_RemoveOwner
0x59B165: mov     edx, [esp+364h+var_334]
0x59B169: push    0
0x59B16B: push    1
0x59B16D: push    0
0x59B16F: push    0
0x59B171: push    edx
0x59B172: movzx   edx, byte ptr ds:0B3B279h
0x59B179: push    0
0x59B17B: push    edx
0x59B17C: mov     edx, ds:0B13E94h
0x59B182: push    edx
0x59B183: push    edi
0x59B184: jmp     loc_59B26B
0x59B189: mov     ecx, edi
0x59B18B: call    BSSimpleList_IsEmpty
0x59B190: test    al, al
0x59B192: jnz     loc_59B247
0x59B198: test    ebp, ebp
0x59B19A: mov     [esp+364h+var_34C], edi
0x59B19E: jz      loc_59B247
0x59B1A4: mov     ebp, edi
0x59B1A6: test    ebp, ebp
0x59B1A8: jz      loc_59B247
0x59B1AE: mov     ecx, [ebp+0]
0x59B1B1: test    ecx, ecx
0x59B1B3: jz      loc_59B247
0x59B1B9: call    ExtraDataList_GetExtraCount
0x59B1BE: movsx   edi, ax
0x59B1C1: test    edi, edi
0x59B1C3: jle     short loc_59B233
0x59B1C5: mov     ecx, [ebp+0]
0x59B1C8: call    ExtraDataList_GetExtraCount
0x59B1CD: movsx   ecx, ax
0x59B1D0: mov     eax, ds:0B13E94h
0x59B1D5: cmp     eax, ecx
0x59B1D7: jge     short loc_59B1DB
0x59B1D9: mov     edi, eax
0x59B1DB: cmp     byte ptr [esp+364h+var_346+1], 0
0x59B1E0: mov     edx, [esp+364h+var_34C]
0x59B1E4: mov     ebp, [edx]
0x59B1E6: jz      short loc_59B1FE
0x59B1E8: cmp     byte ptr [ebx+61h], 0
0x59B1EC: jnz     short loc_59B1F7
0x59B1EE: mov     eax, [esi+8]
0x59B1F1: cmp     byte ptr [eax+4], 22h ; '"'
0x59B1F5: jnz     short loc_59B1FE
0x59B1F7: mov     ecx, ebp
0x59B1F9: call    ExtraDataList_RemoveOwner
0x59B1FE: mov     eax, [esp+364h+var_334]
0x59B202: mov     ecx, [esp+364h+var_338]
0x59B206: mov     edx, [ecx]
0x59B208: mov     edx, [edx+100h]
0x59B20E: push    0
0x59B210: push    1
0x59B212: push    0
0x59B214: push    0
0x59B216: push    eax
0x59B217: movzx   eax, byte ptr ds:0B3B279h
0x59B21E: push    0
0x59B220: push    eax
0x59B221: mov     eax, [esi+8]
0x59B224: push    edi
0x59B225: push    ebp
0x59B226: push    eax
0x59B227: call    edx
0x59B229: sub     ds:0B13E94h, edi
0x59B22F: mov     ebp, [esp+364h+var_34C]
0x59B233: cmp     dword ptr ds:0B13E94h, 0
0x59B23A: mov     ebp, [ebp+4]
0x59B23D: mov     [esp+364h+var_34C], ebp
0x59B241: jnz     loc_59B1A6
0x59B247: mov     edi, ds:0B13E94h
0x59B24D: test    edi, edi
0x59B24F: jle     short loc_59B27D
0x59B251: mov     edx, [esp+364h+var_334]
0x59B255: push    0
0x59B257: push    1
0x59B259: push    0
0x59B25B: push    0
0x59B25D: push    edx
0x59B25E: movzx   edx, byte ptr ds:0B3B279h
0x59B265: push    0
0x59B267: push    edx
0x59B268: push    edi
0x59B269: push    0
0x59B26B: mov     ecx, [esp+388h+var_338]
0x59B26F: mov     edx, [esi+8]
0x59B272: mov     eax, [ecx]
0x59B274: mov     eax, [eax+100h]
0x59B27A: push    edx
0x59B27B: call    eax
0x59B27D: cmp     byte ptr [ebx+61h], 0
0x59B281: jz      short loc_59B29D
0x59B283: mov     ecx, ds:0B33A98h
0x59B289: call    sub_446C10
0x59B28E: mov     ecx, [ebx+44h]
0x59B291: push    ecx
0x59B292: mov     ecx, ds:0B33A98h
0x59B298: call    sub_448F40
0x59B29D: mov     edi, [esp+364h+var_33C]
0x59B2A1: test    edi, edi
0x59B2A3: jz      short loc_59B2F3
0x59B2A5: mov     edx, [edi]
0x59B2A7: mov     eax, [edx+154h]
0x59B2AD: mov     ecx, edi
0x59B2AF: call    eax
0x59B2B1: test    eax, eax
0x59B2B3: jz      short loc_59B2F3
0x59B2B5: mov     ecx, [edi+58h]
0x59B2B8: mov     edx, [ecx]
0x59B2BA: mov     eax, [edx+42Ch]
0x59B2C0: push    0
0x59B2C2: push    0
0x59B2C4: push    1
0x59B2C6: push    edi
0x59B2C7: call    eax
0x59B2C9: mov     eax, dword ptr [esp+364h+var_344]
0x59B2CD: test    eax, eax
0x59B2CF: jz      short loc_59B2F3
0x59B2D1: cmp     byte ptr [eax+4], 22h ; '"'
0x59B2D5: jnz     short loc_59B2F3
0x59B2D7: cmp     dword ptr ds:0B3B7D0h, 0
0x59B2DE: jle     short loc_59B2F3
0x59B2E0: push    0
0x59B2E2: push    1
0x59B2E4: push    edi
0x59B2E5: push    7FFFFFFFh
0x59B2EA: push    eax
0x59B2EB: call    sub_607F90
0x59B2F0: add     esp, 14h
0x59B2F3: mov     dword ptr ds:0B13E94h, 0FFFFFFFFh
0x59B2FD: call    ContainerMenu_Update
0x59B302: mov     ecx, esi
0x59B304: call    ContainerEntryExtraData_DestroyDataTable
0x59B309: push    esi
0x59B30A: call    FormHeapFree
0x59B30F: mov     edi, [esp+368h+var_338]
0x59B313: add     esp, 4
0x59B316: cmp     edi, ds:0B333C4h
0x59B31C: mov     byte ptr ds:0B3B27Ah, 0
0x59B323: jnz     loc_59B60E
0x59B329: call    sub_5C1900
0x59B32E: jmp     loc_59B60E
0x59B333: cmp     esi, 2Ah ; '*'
0x59B336: jnz     short loc_59B3B0
0x59B338: cmp     byte ptr [ebx+64h], 0
0x59B33C: jz      loc_59B60E
0x59B342: push    0Eh; int
0x59B344: call    sub_57DE50
0x59B349: mov     ecx, [ebx+28h]
0x59B34C: add     esp, 4
0x59B34F: push    0FB5h
0x59B354: call    Tile_GetFloat
0x59B359: call    Double_To_SInt32
0x59B35E: fld     dword ptr ds:0A6B618h
0x59B364: push    ecx
0x59B365: mov     ecx, [ebx+2Ch]; this
0x59B368: fstp    [esp+368h+a2]; a3
0x59B36B: push    0FB7h; a2
0x59B370: mov     [ebx+4Ch], eax
0x59B373: call    Tile_SetFloat
0x59B378: fild    dword ptr [ebx+48h]
0x59B37B: push    ecx
0x59B37C: mov     ecx, [ebx+2Ch]; this
0x59B37F: fstp    [esp+368h+a2]; a3
0x59B382: push    0FB7h; a2
0x59B387: call    Tile_SetFloat
0x59B38C: fldz
0x59B38E: push    ecx
0x59B38F: fstp    [esp+368h+a2]; a3
0x59B392: mov     ecx, [ebx+2Ch]; this
0x59B395: push    0FB7h; a2
0x59B39A: call    Tile_SetFloat
0x59B39F: fld1
0x59B3A1: cmp     byte ptr [ebx+64h], 0
0x59B3A5: setz    cl
0x59B3A8: mov     [ebx+64h], cl
0x59B3AB: jmp     loc_59B430
0x59B3B0: cmp     esi, 2Bh ; '+'
0x59B3B3: jnz     loc_59B44B
0x59B3B9: cmp     byte ptr [ebx+64h], 0
0x59B3BD: jnz     loc_59B60E
0x59B3C3: push    0Eh; int
0x59B3C5: call    sub_57DE50
0x59B3CA: mov     ecx, [ebx+28h]
0x59B3CD: add     esp, 4
0x59B3D0: push    0FB5h
0x59B3D5: call    Tile_GetFloat
0x59B3DA: call    Double_To_SInt32
0x59B3DF: fld     dword ptr ds:0A6B618h
0x59B3E5: push    ecx
0x59B3E6: mov     ecx, [ebx+2Ch]; this
0x59B3E9: fstp    [esp+368h+a2]; a3
0x59B3EC: push    0FB7h; a2
0x59B3F1: mov     [ebx+48h], eax
0x59B3F4: call    Tile_SetFloat
0x59B3F9: fild    dword ptr [ebx+4Ch]
0x59B3FC: push    ecx
0x59B3FD: mov     ecx, [ebx+2Ch]; this
0x59B400: fstp    [esp+368h+a2]; a3
0x59B403: push    0FB7h; a2
0x59B408: call    Tile_SetFloat
0x59B40D: fldz
0x59B40F: push    ecx
0x59B410: fstp    [esp+368h+a2]; a3
0x59B413: mov     ecx, [ebx+2Ch]; this
0x59B416: push    0FB7h; a2
0x59B41B: call    Tile_SetFloat
0x59B420: fld     dword ptr ds:0A379B4h
0x59B426: cmp     byte ptr [ebx+64h], 0
0x59B42A: setz    dl
0x59B42D: mov     [ebx+64h], dl
0x59B430: push    ecx
0x59B431: mov     ecx, [ebx+4]; this
0x59B434: fstp    [esp+368h+a2]; a3
0x59B437: push    0FB5h; a2
0x59B43C: call    Tile_SetFloat
0x59B441: call    ContainerMenu_Update
0x59B446: jmp     loc_59B60E
0x59B44B: cmp     esi, 20h ; ' '
0x59B44E: jnz     loc_59B4E7
0x59B454: mov     al, [ebx+64h]
0x59B457: test    al, al
0x59B459: mov     ebp, ds:0B333C4h
0x59B45F: jz      short loc_59B466
0x59B461: mov     edi, [ebx+44h]
0x59B464: jmp     short loc_59B468
0x59B466: mov     edi, ebp
0x59B468: test    al, al
0x59B46A: jnz     short loc_59B46F
0x59B46C: mov     ebp, [ebx+44h]
0x59B46F: lea     ecx, [edi+44h]; this
0x59B472: call    ExtraDataList_GetContainerChanges
0x59B477: mov     ecx, [ebx+44h]
0x59B47A: mov     esi, eax
0x59B47C: mov     eax, [ecx]
0x59B47E: mov     edx, [eax+190h]
0x59B484: call    edx
0x59B486: test    al, al
0x59B488: jz      short loc_59B495
0x59B48A: mov     eax, [ebx+44h]
0x59B48D: push    eax
0x59B48E: mov     ecx, esi
0x59B490: call    sub_4876C0
0x59B495: test    esi, esi
0x59B497: jz      short loc_59B4B8
0x59B499: movzx   ecx, byte ptr ds:0B3B279h
0x59B4A0: push    0
0x59B4A2: push    0
0x59B4A4: push    ecx
0x59B4A5: push    ebp
0x59B4A6: push    edi
0x59B4A7: mov     ecx, esi
0x59B4A9: call    sub_492E70
0x59B4AE: call    Double_To_SInt32
0x59B4B3: mov     ds:0B3B27Ch, eax
0x59B4B8: cmp     dword ptr ds:0B3B7D0h, 0
0x59B4BF: jle     short loc_59B4CC
0x59B4C1: push    1
0x59B4C3: push    edi
0x59B4C4: call    sub_607B90
0x59B4C9: add     esp, 8
0x59B4CC: push    1Dh; int
0x59B4CE: call    sub_57DE50
0x59B4D3: add     esp, 4
0x59B4D6: mov     byte ptr ds:0B3B278h, 1
0x59B4DD: call    sub_5982A0
0x59B4E2: jmp     loc_59B60E
0x59B4E7: cmp     esi, 22h ; '"'
0x59B4EA: jnz     short loc_59B569
0x59B4EC: mov     al, [ebx+64h]
0x59B4EF: test    al, al
0x59B4F1: mov     ecx, ds:0B333C4h
0x59B4F7: jz      short loc_59B4FE
0x59B4F9: mov     esi, [ebx+44h]
0x59B4FC: jmp     short loc_59B500
0x59B4FE: mov     esi, ecx
0x59B500: test    al, al
0x59B502: jz      short loc_59B508
0x59B504: mov     ebx, ecx
0x59B506: jmp     short loc_59B50B
0x59B508: mov     ebx, [ebx+44h]
0x59B50B: push    1; int
0x59B50D: call    sub_57DE50
0x59B512: add     esp, 4
0x59B515: cmp     esi, ds:0B333C4h
0x59B51B: jnz     short loc_59B543
0x59B51D: lea     ecx, [ebx+44h]
0x59B520: call    sub_422DC0
0x59B525: call    Double_To_SInt32
0x59B52A: push    0
0x59B52C: lea     edx, [esp+368h+var_344]
0x59B530: push    ebx
0x59B531: push    edx
0x59B532: mov     dword ptr [esp+370h+var_344], eax
0x59B536: call    sub_5BD080
0x59B53B: add     esp, 0Ch
0x59B53E: jmp     loc_59B60E
0x59B543: lea     ecx, [esi+44h]
0x59B546: call    sub_422DC0
0x59B54B: call    Double_To_SInt32
0x59B550: push    1
0x59B552: mov     [esp+368h+var_334], eax
0x59B556: lea     eax, [esp+368h+var_334]
0x59B55A: push    esi
0x59B55B: push    eax
0x59B55C: call    sub_5BD080
0x59B561: add     esp, 0Ch
0x59B564: jmp     loc_59B60E
0x59B569: cmp     esi, 21h ; '!'
0x59B56C: jnz     loc_59B60E
0x59B572: fld     dword ptr ds:0A40098h
0x59B578: push    ecx
0x59B579: fstp    [esp+368h+a2]; a3
0x59B57C: push    0FA7h; a2
0x59B581: mov     ecx, ebp; this
0x59B583: call    Tile_SetFloat
0x59B588: cmp     byte ptr [ebx+61h], 0
0x59B58C: jz      short loc_59B599
0x59B58E: mov     ecx, ds:0B33A98h
0x59B594: call    sub_446C10
0x59B599: push    2; int
0x59B59B: call    sub_57DE50
0x59B5A0: add     esp, 4
0x59B5A3: call    sub_5982A0
0x59B5A8: jmp     short loc_59B60E
0x59B5AA: mov     ecx, [ebx+4]
0x59B5AD: push    0FAEh
0x59B5B2: call    Tile_GetFloat
0x59B5B7: call    Double_To_SInt32
0x59B5BC: cmp     esi, 7
0x59B5BF: mov     edi, eax
0x59B5C1: jnz     short loc_59B5C8
0x59B5C3: sub     edi, 1
0x59B5C6: jmp     short loc_59B5CB
0x59B5C8: add     edi, 1
0x59B5CB: cmp     edi, 1
0x59B5CE: mov     [esp+364h+var_33C], edi
0x59B5D2: jge     short loc_59B5DB
0x59B5D4: mov     edi, 5
0x59B5D9: jmp     short loc_59B5E5
0x59B5DB: cmp     edi, 5
0x59B5DE: jle     short loc_59B5E9
0x59B5E0: mov     edi, 1
0x59B5E5: mov     [esp+364h+var_33C], edi
0x59B5E9: push    6; int
0x59B5EB: call    sub_57DE50
0x59B5F0: fild    [esp+368h+var_33C]
0x59B5F4: mov     ecx, [ebx+4]; this
0x59B5F7: fstp    [esp+368h+a2]; a3
0x59B5FA: push    0FAEh; a2
0x59B5FF: call    Tile_SetFloat
0x59B604: push    0
0x59B606: push    edi
0x59B607: mov     ecx, ebx
0x59B609: call    sub_599200
0x59B60E: mov     ecx, [esp+364h+var_C]
0x59B615: mov     large fs:0, ecx
0x59B61C: pop     ecx
0x59B61D: pop     edi
0x59B61E: pop     esi
0x59B61F: pop     ebp
0x59B620: pop     ebx
0x59B621: mov     ecx, [esp+350h+var_10]
0x59B628: xor     ecx, esp
0x59B62A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x59B62F: add     esp, 350h
0x59B635: retn    8
