0x489820: push    0FFFFFFFFh
0x489822: push    offset SEH_489820
0x489827: mov     eax, large fs:0
0x48982D: push    eax
0x48982E: sub     esp, 110h
0x489834: mov     eax, ds:0B30AACh
0x489839: xor     eax, esp
0x48983B: mov     [esp+11Ch+var_10], eax
0x489842: push    ebx
0x489843: push    ebp
0x489844: push    esi
0x489845: push    edi
0x489846: mov     eax, ds:0B30AACh
0x48984B: xor     eax, esp
0x48984D: push    eax
0x48984E: lea     eax, [esp+130h+var_C]
0x489855: mov     large fs:0, eax
0x48985B: mov     eax, [esp+130h+arg_4]
0x489862: mov     ebp, [esp+130h+arg_0]
0x489869: mov     esi, ecx
0x48986B: mov     [esp+130h+var_11C], eax
0x48986F: mov     eax, [esi]
0x489871: test    eax, eax
0x489873: mov     [esp+130h+var_118], esi
0x489877: mov     dl, 1
0x489879: jz      short loc_48989E
0x48987B: jmp     short loc_489880
0x48987D: align 10h
0x489880: test    dl, dl
0x489882: jz      loc_48990C
0x489888: mov     ecx, [eax]
0x48988A: test    ecx, ecx
0x48988C: jz      short loc_489897
0x48988E: cmp     [ecx+8], ebp
0x489891: jnz     short loc_489897
0x489893: xor     dl, dl
0x489895: jmp     short loc_48989A
0x489897: mov     eax, [eax+4]
0x48989A: test    eax, eax
0x48989C: jnz     short loc_489880
0x48989E: xor     edi, edi
0x4898A0: mov     ecx, [esi+4]; this
0x4898A3: test    ecx, ecx
0x4898A5: jz      short loc_4898AC
0x4898A7: call    TESObjectREFR_GetContainer
0x4898AC: mov     edx, [esp+130h+var_11C]
0x4898B0: xor     ebx, ebx
0x4898B2: test    edx, edx
0x4898B4: jz      short loc_489918
0x4898B6: mov     ecx, edx
0x4898B8: call    sub_41DF40
0x4898BD: test    al, al
0x4898BF: jz      short loc_489914
0x4898C1: push    103h
0x4898C6: lea     ecx, [esp+134h+var_114+1]
0x4898CA: push    ebx
0x4898CB: push    ecx
0x4898CC: mov     [esp+13Ch+var_114], bl
0x4898D0: call    __memset
0x4898D5: mov     edx, ds:0B38BB8h
0x4898DB: push    edx
0x4898DC: lea     eax, [esp+140h+var_114]
0x4898E0: push    offset aS; "%s"
0x4898E5: push    eax
0x4898E6: call    __sprintf
0x4898EB: fld     dword ptr ds:0A379B4h
0x4898F1: add     esp, 18h
0x4898F4: push    ebx; int
0x4898F5: push    ebx; int
0x4898F6: push    ecx
0x4898F7: lea     ecx, [esp+13Ch+var_114]
0x4898FB: fstp    [esp+13Ch+var_13C]; float
0x4898FE: push    ecx; int
0x4898FF: call    QueueUIMessage
0x489904: add     esp, 10h
0x489907: jmp     def_4899CC; jumptable 004899CC default case, cases 21-25,27-32
0x48990C: test    eax, eax
0x48990E: jz      short loc_48989E
0x489910: mov     edi, [eax]
0x489912: jmp     short loc_4898A0
0x489914: mov     edx, [esp+130h+var_11C]
0x489918: mov     ecx, [esi+4]; this
0x48991B: test    ecx, ecx
0x48991D: jz      short loc_489946
0x48991F: call    TESObjectREFR_GetContainer
0x489924: test    eax, eax
0x489926: jz      short loc_489942
0x489928: mov     ecx, [esi+4]; this
0x48992B: test    ecx, ecx
0x48992D: jz      short loc_489936
0x48992F: call    TESObjectREFR_GetContainer
0x489934: jmp     short loc_489938
0x489936: xor     eax, eax
0x489938: push    ebp
0x489939: mov     ecx, eax
0x48993B: call    TESContainer_GetEntryForForm
0x489940: mov     ebx, eax
0x489942: mov     edx, [esp+130h+var_11C]
0x489946: test    edi, edi
0x489948: jz      loc_489B1A
0x48994E: mov     eax, [edi]
0x489950: test    eax, eax
0x489952: jz      short loc_489965
0x489954: test    edx, edx
0x489956: jz      short loc_489965
0x489958: mov     esi, [eax]
0x48995A: cmp     esi, edx
0x48995C: jz      short loc_489992
0x48995E: mov     eax, [eax+4]
0x489961: test    eax, eax
0x489963: jnz     short loc_489954
0x489965: push    14h; Size
0x489967: call    FormHeapAlloc
0x48996C: add     esp, 4
0x48996F: mov     [esp+130h+var_118], eax
0x489973: xor     ebp, ebp
0x489975: cmp     eax, ebp
0x489977: mov     [esp+130h+var_4], ebp
0x48997E: jz      loc_489AB0
0x489984: mov     ecx, eax
0x489986: call    ExtraDataList_constr
0x48998B: mov     esi, eax
0x48998D: jmp     loc_489AB2
0x489992: mov     ebp, [esp+130h+arg_8]
0x489999: push    ebp
0x48999A: mov     ecx, esi
0x48999C: call    sub_422BA0
0x4899A1: push    0
0x4899A3: mov     ecx, esi
0x4899A5: call    ExtraDataList_HasWorn
0x4899AA: test    al, al
0x4899AC: jz      def_4899CC; jumptable 004899CC default case, cases 21-25,27-32
0x4899B2: mov     edx, [edi+8]
0x4899B5: movzx   eax, byte ptr [edx+4]
0x4899B9: add     eax, 0FFFFFFECh; switch 15 cases
0x4899BC: cmp     eax, 0Eh
0x4899BF: ja      def_4899CC; jumptable 004899CC default case, cases 21-25,27-32
0x4899C5: movzx   eax, ds:byte_489C14[eax]
0x4899CC: jmp     ds:jpt_4899CC[eax*4]; switch jump
0x4899D3: mov     ecx, ds:0B333C4h; jumptable 004899CC case 33
0x4899D9: mov     ecx, [ecx+58h]
0x4899DC: mov     edx, [ecx]
0x4899DE: mov     eax, [edx+0ECh]
0x4899E4: push    1
0x4899E6: call    eax
0x4899E8: test    eax, eax
0x4899EA: jz      def_4899CC; jumptable 004899CC default case, cases 21-25,27-32
0x4899F0: mov     ecx, ds:0B333C4h
0x4899F6: mov     ecx, [ecx+58h]
0x4899F9: mov     edx, [ecx]
0x4899FB: mov     eax, [edx+0ECh]
0x489A01: jmp     loc_489A91
0x489A06: mov     eax, ds:0B333C4h; jumptable 004899CC case 34
0x489A0B: mov     ecx, [eax+58h]
0x489A0E: mov     edx, [ecx]
0x489A10: mov     eax, [edx+0F4h]
0x489A16: push    1
0x489A18: call    eax
0x489A1A: test    eax, eax
0x489A1C: jz      def_4899CC; jumptable 004899CC default case, cases 21-25,27-32
0x489A22: mov     ecx, ds:0B333C4h
0x489A28: mov     ecx, [ecx+58h]
0x489A2B: mov     edx, [ecx]
0x489A2D: mov     eax, [edx+0F4h]
0x489A33: jmp     short loc_489A91
0x489A35: mov     eax, ds:0B333C4h; jumptable 004899CC case 20
0x489A3A: mov     ecx, [eax+58h]
0x489A3D: mov     edx, [ecx]
0x489A3F: mov     eax, [edx+0F8h]
0x489A45: push    1
0x489A47: call    eax
0x489A49: test    eax, eax
0x489A4B: jz      def_4899CC; jumptable 004899CC default case, cases 21-25,27-32
0x489A51: mov     ecx, ds:0B333C4h
0x489A57: mov     ecx, [ecx+58h]
0x489A5A: mov     edx, [ecx]
0x489A5C: mov     eax, [edx+0F8h]
0x489A62: jmp     short loc_489A91
0x489A64: mov     eax, ds:0B333C4h; jumptable 004899CC case 26
0x489A69: mov     ecx, [eax+58h]
0x489A6C: mov     edx, [ecx]
0x489A6E: mov     eax, [edx+0F0h]
0x489A74: push    1
0x489A76: call    eax
0x489A78: test    eax, eax
0x489A7A: jz      def_4899CC; jumptable 004899CC default case, cases 21-25,27-32
0x489A80: mov     ecx, ds:0B333C4h
0x489A86: mov     ecx, [ecx+58h]
0x489A89: mov     edx, [ecx]
0x489A8B: mov     eax, [edx+0F0h]
0x489A91: push    1
0x489A93: call    eax
0x489A95: mov     ecx, [edi+8]
0x489A98: cmp     ecx, [eax+8]
0x489A9B: jnz     def_4899CC; jumptable 004899CC default case, cases 21-25,27-32
0x489AA1: mov     edx, [eax]
0x489AA3: mov     ecx, [edx]
0x489AA5: push    ebp
0x489AA6: call    sub_422BA0
0x489AAB: jmp     def_4899CC; jumptable 004899CC default case, cases 21-25,27-32
0x489AB0: xor     esi, esi
0x489AB2: mov     eax, [esp+130h+arg_8]
0x489AB9: push    eax
0x489ABA: mov     ecx, esi
0x489ABC: mov     [esp+134h+var_4], 0FFFFFFFFh
0x489AC7: call    sub_422BA0
0x489ACC: xor     eax, eax
0x489ACE: cmp     ebx, ebp
0x489AD0: jz      short loc_489AD4
0x489AD2: mov     eax, [ebx]
0x489AD4: movzx   ecx, word ptr [edi+4]
0x489AD8: add     cx, ax
0x489ADB: push    ecx
0x489ADC: mov     ecx, esi
0x489ADE: call    ExtraDataList_SetExtraCount
0x489AE3: cmp     [edi], ebp
0x489AE5: jnz     short loc_489B0D
0x489AE7: push    8; Size
0x489AE9: call    FormHeapAlloc
0x489AEE: add     esp, 4
0x489AF1: cmp     eax, ebp
0x489AF3: jz      short loc_489B09
0x489AF5: mov     [eax], ebp
0x489AF7: mov     [eax+4], ebp
0x489AFA: push    esi
0x489AFB: mov     ecx, eax
0x489AFD: mov     [edi], eax
0x489AFF: call    BSSimpleList_PushFront
0x489B04: jmp     def_4899CC; jumptable 004899CC default case, cases 21-25,27-32
0x489B09: xor     eax, eax
0x489B0B: mov     [edi], eax
0x489B0D: mov     ecx, [edi]
0x489B0F: push    esi
0x489B10: call    BSSimpleList_PushFront
0x489B15: jmp     def_4899CC; jumptable 004899CC default case, cases 21-25,27-32
0x489B1A: push    0Ch; Size
0x489B1C: call    FormHeapAlloc
0x489B21: add     esp, 4
0x489B24: mov     [esp+130h+var_11C], eax
0x489B28: test    eax, eax
0x489B2A: mov     [esp+130h+var_4], 1
0x489B35: jz      short loc_489B45
0x489B37: push    0
0x489B39: push    ebp
0x489B3A: mov     ecx, eax
0x489B3C: call    ContainerEntryExtraData_constr
0x489B41: mov     edi, eax
0x489B43: jmp     short loc_489B47
0x489B45: xor     edi, edi
0x489B47: or      ebp, 0FFFFFFFFh
0x489B4A: push    14h; Size
0x489B4C: mov     [esp+134h+var_4], ebp
0x489B53: call    FormHeapAlloc
0x489B58: add     esp, 4
0x489B5B: mov     [esp+130h+var_11C], eax
0x489B5F: test    eax, eax
0x489B61: mov     [esp+130h+var_4], 2
0x489B6C: jz      short loc_489B79
0x489B6E: mov     ecx, eax
0x489B70: call    ExtraDataList_constr
0x489B75: mov     esi, eax
0x489B77: jmp     short loc_489B7B
0x489B79: xor     esi, esi
0x489B7B: mov     edx, [esp+130h+arg_8]
0x489B82: push    edx
0x489B83: mov     ecx, esi
0x489B85: mov     [esp+134h+var_4], ebp
0x489B8C: call    sub_422BA0
0x489B91: movzx   eax, word ptr [ebx]
0x489B94: push    eax
0x489B95: mov     ecx, esi
0x489B97: call    ExtraDataList_SetExtraCount
0x489B9C: cmp     dword ptr [edi], 0
0x489B9F: jnz     short loc_489BC2
0x489BA1: push    8; Size
0x489BA3: call    FormHeapAlloc
0x489BA8: add     esp, 4
0x489BAB: test    eax, eax
0x489BAD: jz      short loc_489BBE
0x489BAF: mov     dword ptr [eax], 0
0x489BB5: mov     dword ptr [eax+4], 0
0x489BBC: jmp     short loc_489BC0
0x489BBE: xor     eax, eax
0x489BC0: mov     [edi], eax
0x489BC2: mov     ecx, [edi]
0x489BC4: push    esi
0x489BC5: call    BSSimpleList_PushFront
0x489BCA: mov     ecx, [esp+130h+var_118]
0x489BCE: mov     ecx, [ecx]
0x489BD0: push    edi
0x489BD1: call    BSSimpleList_PushFront
0x489BD6: mov     ecx, [esp+130h+var_C]; jumptable 004899CC default case, cases 21-25,27-32
0x489BDD: mov     large fs:0, ecx
0x489BE4: pop     ecx
0x489BE5: pop     edi
0x489BE6: pop     esi
0x489BE7: pop     ebp
0x489BE8: pop     ebx
0x489BE9: mov     ecx, [esp+11Ch+var_10]
0x489BF0: xor     ecx, esp
0x489BF2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x489BF7: add     esp, 11Ch
0x489BFD: retn    0Ch
