0x4F65B0: fldz
0x4F65B2: push    ebx
0x4F65B3: push    esi
0x4F65B4: mov     esi, [esp+8+arg_0]
0x4F65B8: push    edi
0x4F65B9: mov     edi, [esp+0Ch+arg_C]
0x4F65BD: xor     ebx, ebx
0x4F65BF: fstp    qword ptr [edi]
0x4F65C1: test    esi, esi
0x4F65C3: jz      short loc_4F65F8
0x4F65C5: mov     eax, [esi]
0x4F65C7: mov     edx, [eax+190h]
0x4F65CD: mov     ecx, esi
0x4F65CF: call    edx
0x4F65D1: test    al, al
0x4F65D3: jz      short loc_4F65F8
0x4F65D5: mov     ecx, [esi+58h]
0x4F65D8: mov     eax, [ecx]
0x4F65DA: mov     edx, [eax+374h]
0x4F65E0: mov     ebx, esi
0x4F65E2: call    edx
0x4F65E4: test    eax, eax
0x4F65E6: mov     [esp+0Ch+arg_C], eax
0x4F65EA: fild    [esp+0Ch+arg_C]
0x4F65EE: jge     short loc_4F65F6
0x4F65F0: fadd    dword ptr ds:0A2FC78h
0x4F65F6: fstp    qword ptr [edi]
0x4F65F8: cmp     byte ptr ds:0B361ACh, 0
0x4F65FF: jz      short loc_4F6616
0x4F6601: fld     qword ptr [edi]
0x4F6603: sub     esp, 8
0x4F6606: fstp    [esp+14h+var_14]
0x4F6609: push    offset aGetfurniturema; "GetFurnitureMarkerID >> %0.2f"
0x4F660E: call    Interface_ConsolePrint
0x4F6613: add     esp, 0Ch
0x4F6616: mov     eax, [ebx]
0x4F6618: mov     edx, [eax+358h]
0x4F661E: mov     ecx, ebx
0x4F6620: call    edx
0x4F6622: test    al, al
0x4F6624: mov     al, 1
0x4F6626: jz      short loc_4F662E
0x4F6628: fld     qword ptr [edi]
0x4F662A: fchs
0x4F662C: fstp    qword ptr [edi]
0x4F662E: pop     edi
0x4F662F: pop     esi
0x4F6630: pop     ebx
0x4F6631: retn
