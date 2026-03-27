0x6F3530: sub     esp, 8
0x6F3533: mov     edx, [esp+8+arg_8]
0x6F3537: push    ebx
0x6F3538: mov     ebx, [esp+0Ch+arg_0]
0x6F353C: push    esi
0x6F353D: mov     esi, [esp+10h+arg_4]
0x6F3541: push    edi
0x6F3542: mov     edi, [esp+14h+arg_8]
0x6F3546: xor     al, al
0x6F3548: mov     byte ptr [esp+14h+var_4], al
0x6F354C: mov     ecx, [esp+14h+var_4]
0x6F3550: mov     byte ptr [esp+14h+var_8], al
0x6F3554: mov     eax, [esp+14h+var_8]
0x6F3558: push    eax
0x6F3559: push    ecx
0x6F355A: push    edx
0x6F355B: push    edi
0x6F355C: push    esi
0x6F355D: push    ebx
0x6F355E: call    sub_6F2E30
0x6F3563: sub     esi, ebx
0x6F3565: mov     eax, 2E8BA2E9h
0x6F356A: imul    esi
0x6F356C: sar     edx, 3
0x6F356F: mov     eax, edx
0x6F3571: shr     eax, 1Fh
0x6F3574: add     eax, edx
0x6F3576: imul    eax, 2Ch ; ','
0x6F3579: add     esp, 18h
0x6F357C: add     eax, edi
0x6F357E: pop     edi
0x6F357F: pop     esi
0x6F3580: pop     ebx
0x6F3581: add     esp, 8
0x6F3584: retn
