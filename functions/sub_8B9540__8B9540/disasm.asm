0x8B9540: push    ebp
0x8B9541: mov     ebp, esp
0x8B9543: and     esp, 0FFFFFFF0h
0x8B9546: push    0FFFFFFFFh
0x8B9548: push    offset SEH_8B9540
0x8B954D: mov     eax, large fs:0
0x8B9553: push    eax
0x8B9554: sub     esp, 98h
0x8B955A: mov     eax, ds:0B30AACh
0x8B955F: xor     eax, esp
0x8B9561: mov     [esp+0A4h+var_14], eax
0x8B9568: push    ebx
0x8B9569: push    esi
0x8B956A: push    edi
0x8B956B: mov     eax, ds:0B30AACh
0x8B9570: xor     eax, esp
0x8B9572: push    eax
0x8B9573: lea     eax, [esp+0B4h+var_C]
0x8B957A: mov     large fs:0, eax
0x8B9580: mov     esi, [ebp+arg_0]
0x8B9583: xor     ebx, ebx
0x8B9585: cmp     esi, ebx
0x8B9587: mov     edi, ecx
0x8B9589: mov     [esp+0B4h+var_98], edi
0x8B958D: jz      short loc_8B95EC
0x8B958F: cmp     [esi+8], ebx
0x8B9592: jnz     short loc_8B959B
0x8B9594: mov     ebx, esi
0x8B9596: jmp     loc_8B9625
0x8B959B: push    0DCh ; 'Ü'; Size
0x8B95A0: call    FormHeapAlloc
0x8B95A5: add     esp, 4
0x8B95A8: mov     [esp+0B4h+var_9C], eax
0x8B95AC: cmp     eax, ebx
0x8B95AE: mov     [esp+0B4h+var_4], ebx
0x8B95B5: jz      short loc_8B95C1
0x8B95B7: push    ebx
0x8B95B8: mov     ecx, eax; this
0x8B95BA: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x8B95BF: mov     ebx, eax
0x8B95C1: mov     eax, [esi]
0x8B95C3: mov     edx, [eax+84h]
0x8B95C9: push    0
0x8B95CB: push    ebx
0x8B95CC: mov     ecx, esi
0x8B95CE: mov     [esp+0BCh+var_4], 0FFFFFFFFh
0x8B95D9: call    edx
0x8B95DB: fldz
0x8B95DD: push    1; a3
0x8B95DF: push    ecx
0x8B95E0: mov     ecx, ebx; this
0x8B95E2: fstp    [esp+0BCh+a2]; a2
0x8B95E5: call    NiAVObject_UpdateNiAVObject
0x8B95EA: jmp     short loc_8B9625
0x8B95EC: push    0DCh ; 'Ü'; Size
0x8B95F1: call    FormHeapAlloc
0x8B95F6: add     esp, 4
0x8B95F9: mov     [esp+0B4h+var_9C], eax
0x8B95FD: cmp     eax, ebx
0x8B95FF: mov     [esp+0B4h+var_4], 1
0x8B960A: jz      short loc_8B9616
0x8B960C: push    ebx
0x8B960D: mov     ecx, eax; this
0x8B960F: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x8B9614: jmp     short loc_8B9618
0x8B9616: xor     eax, eax
0x8B9618: mov     [esp+0B4h+var_4], 0FFFFFFFFh
0x8B9623: mov     ebx, eax
0x8B9625: push    offset aBhkrigidbodyt; "bhkRigidBodyT"
0x8B962A: mov     ecx, ebx
0x8B962C: call    NiObjectNET_SetName
0x8B9631: lea     eax, [edi+20h]
0x8B9634: push    eax
0x8B9635: lea     ecx, [esp+0B8h+var_60]
0x8B9639: call    sub_8B1DD0
0x8B963E: movaps  xmm0, xmmword ptr [edi+30h]
0x8B9642: lea     ecx, [esp+0B4h+var_60]
0x8B9646: push    ecx
0x8B9647: lea     edx, [esp+0B8h+var_94]
0x8B964B: push    edx
0x8B964C: movaps  [esp+0BCh+var_30], xmm0
0x8B9654: call    sub_607740
0x8B9659: lea     eax, [esp+0BCh+var_30]
0x8B9660: push    eax
0x8B9661: lea     ecx, [esp+0C0h+var_70]
0x8B9665: push    ecx
0x8B9666: call    sub_43F3E0
0x8B966B: mov     edx, [esp+0C4h+var_70]
0x8B966F: mov     eax, [esp+0C4h+var_6C]
0x8B9673: lea     edi, [ebx+30h]
0x8B9676: mov     ecx, 9
0x8B967B: lea     esi, [esp+0C4h+var_94]
0x8B967F: rep movsd
0x8B9681: mov     ecx, [esp+0C4h+var_68]
0x8B9685: mov     [ebx+54h], edx
0x8B9688: add     esp, 10h
0x8B968B: mov     [ebx+58h], eax
0x8B968E: mov     [ebx+5Ch], ecx
0x8B9691: mov     ecx, [esp+0B4h+var_98]
0x8B9695: push    ebx
0x8B9696: call    sub_8A30E0
0x8B969B: mov     ecx, [esp+0B4h+var_C]
0x8B96A2: mov     large fs:0, ecx
0x8B96A9: pop     ecx
0x8B96AA: pop     edi
0x8B96AB: pop     esi
0x8B96AC: pop     ebx
0x8B96AD: mov     ecx, [esp+0A4h+var_14]
0x8B96B4: xor     ecx, esp
0x8B96B6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B96BB: mov     esp, ebp
0x8B96BD: pop     ebp
0x8B96BE: retn    4
