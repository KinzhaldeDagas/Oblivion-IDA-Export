0x806490: push    0FFFFFFFFh
0x806492: push    offset SEH_8C8970
0x806497: mov     eax, large fs:0
0x80649D: push    eax
0x80649E: push    ecx
0x80649F: push    esi
0x8064A0: push    edi
0x8064A1: mov     eax, ds:0B30AACh
0x8064A6: xor     eax, esp
0x8064A8: push    eax
0x8064A9: lea     eax, [esp+1Ch+var_C]
0x8064AD: mov     large fs:0, eax
0x8064B3: mov     edi, [esp+1Ch+arg_0]
0x8064B7: push    4
0x8064B9: mov     ecx, edi
0x8064BB: call    NiNode_GetNiPropertyByID
0x8064C0: test    eax, eax
0x8064C2: jz      short loc_806511
0x8064C4: mov     edx, [eax]
0x8064C6: mov     ecx, eax
0x8064C8: mov     eax, [edx+54h]
0x8064CB: call    eax
0x8064CD: xor     ecx, ecx
0x8064CF: cmp     eax, 3
0x8064D2: setz    cl
0x8064D5: mov     eax, ecx
0x8064D7: test    eax, eax
0x8064D9: jnz     loc_806577
0x8064DF: push    4
0x8064E1: lea     edx, [esp+20h+arg_0]
0x8064E5: push    edx
0x8064E6: mov     ecx, edi
0x8064E8: call    sub_708560
0x8064ED: mov     esi, [esp+1Ch+arg_0]
0x8064F1: test    esi, esi
0x8064F3: jz      short loc_806511
0x8064F5: lea     eax, [esi+4]
0x8064F8: push    eax; lpAddend
0x8064F9: call    dword ptr ds:0A2807Ch
0x8064FF: test    eax, eax
0x806501: jnz     short loc_806511
0x806503: test    esi, esi
0x806505: jz      short loc_806511
0x806507: mov     edx, [esi]
0x806509: mov     eax, [edx]
0x80650B: push    1
0x80650D: mov     ecx, esi
0x80650F: call    eax
0x806511: push    9Ch ; 'œ'; Size
0x806516: call    FormHeapAlloc
0x80651B: add     esp, 4
0x80651E: mov     [esp+1Ch+var_10], eax
0x806522: test    eax, eax
0x806524: mov     [esp+1Ch+var_4], 0
0x80652C: jz      short loc_806539
0x80652E: mov     ecx, eax
0x806530: call    sub_864750
0x806535: mov     esi, eax
0x806537: jmp     short loc_80653B
0x806539: xor     esi, esi
0x80653B: push    esi; a2
0x80653C: mov     ecx, edi; this
0x80653E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x806546: call    sub_405680
0x80654B: mov     edx, [esi]
0x80654D: mov     eax, [edx+58h]
0x806550: push    edi
0x806551: mov     ecx, esi
0x806553: call    eax
0x806555: test    al, al
0x806557: jnz     short loc_806577
0x806559: push    esi
0x80655A: mov     ecx, edi
0x80655C: call    sub_4A1220
0x806561: xor     al, al
0x806563: mov     ecx, [esp+1Ch+var_C]
0x806567: mov     large fs:0, ecx
0x80656E: pop     ecx
0x80656F: pop     edi
0x806570: pop     esi
0x806571: add     esp, 10h
0x806574: retn    4
0x806577: mov     al, 1
0x806579: mov     ecx, [esp+1Ch+var_C]
0x80657D: mov     large fs:0, ecx
0x806584: pop     ecx
0x806585: pop     edi
0x806586: pop     esi
0x806587: add     esp, 10h
0x80658A: retn    4
