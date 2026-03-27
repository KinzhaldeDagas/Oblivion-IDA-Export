0x6843C0: push    ecx
0x6843C1: cmp     byte ptr ds:0B3C088h, 0
0x6843C8: jz      short loc_6843CE
0x6843CA: xor     al, al
0x6843CC: pop     ecx
0x6843CD: retn
0x6843CE: mov     eax, [esp+4+arg_C]
0x6843D2: push    ebx
0x6843D3: xor     bl, bl
0x6843D5: push    ebp
0x6843D6: mov     [eax], bl
0x6843D8: fild    dword ptr ds:0B33EA0h
0x6843DE: mov     ecx, ds:0B33EA0h
0x6843E4: test    ecx, ecx
0x6843E6: push    esi
0x6843E7: push    edi
0x6843E8: jge     short loc_6843F0
0x6843EA: fadd    dword ptr ds:0A2FC78h
0x6843F0: fstp    [esp+14h+var_4]
0x6843F4: mov     edi, offset dword_B3C08C
0x6843F9: xor     ebp, ebp
0x6843FB: jmp     short loc_684400
0x6843FD: align 10h
0x684400: test    bl, bl
0x684402: jnz     short loc_684478
0x684404: mov     esi, [edi]
0x684406: test    esi, esi
0x684408: jz      short loc_68446F
0x68440A: fld     [esp+14h+var_4]
0x68440E: fsub    dword ptr [esi+1Ch]
0x684411: fcomp   qword ptr ds:0A2FC70h
0x684417: fnstsw  ax
0x684419: test    ah, 5
0x68441C: jp      short loc_684480
0x68441E: mov     edx, [esp+14h+arg_0]
0x684422: cmp     [esi], edx
0x684424: jnz     short loc_68446F
0x684426: fld     dword ptr ds:0A417B4h
0x68442C: mov     eax, [esp+14h+arg_4]
0x684430: push    ecx
0x684431: fstp    [esp+18h+var_18]; float
0x684434: push    eax; int
0x684435: lea     ecx, [esi+4]
0x684438: push    ecx; int
0x684439: call    sub_47D810
0x68443E: add     esp, 0Ch
0x684441: test    al, al
0x684443: jz      short loc_68446F
0x684445: fld     dword ptr ds:0A417B4h
0x68444B: mov     edx, [esp+14h+arg_8]
0x68444F: push    ecx
0x684450: fstp    [esp+18h+var_18]; float
0x684453: push    edx; int
0x684454: lea     eax, [esi+10h]
0x684457: push    eax; int
0x684458: call    sub_47D810
0x68445D: add     esp, 0Ch
0x684460: test    al, al
0x684462: jz      short loc_68446F
0x684464: mov     cl, [esi+20h]
0x684467: mov     edx, [esp+14h+arg_C]
0x68446B: mov     bl, 1
0x68446D: mov     [edx], cl
0x68446F: mov     ebp, edi
0x684471: mov     edi, [edi+4]
0x684474: test    edi, edi
0x684476: jnz     short loc_684400
0x684478: pop     edi
0x684479: pop     esi
0x68447A: pop     ebp
0x68447B: mov     al, bl
0x68447D: pop     ebx
0x68447E: pop     ecx
0x68447F: retn
0x684480: test    ebp, ebp
0x684482: jz      short loc_68449A
0x684484: push    esi
0x684485: mov     ecx, ebp
0x684487: call    BSSimpleList_Remove
0x68448C: push    esi
0x68448D: call    FormHeapFree
0x684492: mov     edi, [ebp+4]
0x684495: add     esp, 4
0x684498: jmp     short loc_684474
0x68449A: mov     eax, [edi+4]
0x68449D: test    eax, eax
0x68449F: jz      short loc_6844BF
0x6844A1: mov     ecx, [eax+4]
0x6844A4: mov     [edi+4], ecx
0x6844A7: mov     edx, [eax]
0x6844A9: push    eax
0x6844AA: mov     [edi], edx
0x6844AC: call    FormHeapFree
0x6844B1: add     esp, 4
0x6844B4: push    esi
0x6844B5: call    FormHeapFree
0x6844BA: add     esp, 4
0x6844BD: jmp     short loc_684474
0x6844BF: push    esi
0x6844C0: mov     dword ptr [edi], 0
0x6844C6: call    FormHeapFree
0x6844CB: add     esp, 4
0x6844CE: jmp     short loc_684474
