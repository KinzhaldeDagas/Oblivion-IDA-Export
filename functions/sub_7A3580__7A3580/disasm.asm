0x7A3580: push    ebx
0x7A3581: mov     ebx, [esp+4+arg_0]
0x7A3585: mov     eax, [ebx+4]
0x7A3588: push    esi
0x7A3589: push    edi
0x7A358A: mov     edi, ecx
0x7A358C: xor     ecx, ecx
0x7A358E: cmp     eax, ecx
0x7A3590: jnz     short loc_7A3596
0x7A3592: xor     esi, esi
0x7A3594: jmp     short loc_7A359E
0x7A3596: mov     esi, [ebx+8]
0x7A3599: sub     esi, eax
0x7A359B: sar     esi, 2
0x7A359E: cmp     esi, ecx
0x7A35A0: mov     [edi+4], ecx
0x7A35A3: mov     [edi+8], ecx
0x7A35A6: mov     [edi+0Ch], ecx
0x7A35A9: jz      short loc_7A360D
0x7A35AB: cmp     esi, 3FFFFFFFh
0x7A35B1: jbe     short loc_7A35B8
0x7A35B3: call    sub_790B90
0x7A35B8: push    ecx
0x7A35B9: push    esi; char *
0x7A35BA: call    sub_78FB60
0x7A35BF: mov     [edi+4], eax
0x7A35C2: mov     [edi+8], eax
0x7A35C5: lea     eax, [eax+esi*4]
0x7A35C8: mov     [edi+0Ch], eax
0x7A35CB: mov     esi, [ebx+8]
0x7A35CE: add     esp, 8
0x7A35D1: cmp     [ebx+4], esi
0x7A35D4: jbe     short loc_7A35DB
0x7A35D6: call    __invalid_parameter_noinfo
0x7A35DB: push    ebp; MaxCount
0x7A35DC: mov     ebp, [ebx+4]
0x7A35DF: cmp     ebp, [ebx+8]
0x7A35E2: jbe     short loc_7A35E9
0x7A35E4: call    __invalid_parameter_noinfo
0x7A35E9: mov     ecx, [edi+4]
0x7A35EC: sub     esi, ebp
0x7A35EE: sar     esi, 2
0x7A35F1: lea     eax, ds:0[esi*4]
0x7A35F8: lea     esi, [eax+ecx]
0x7A35FB: jz      short loc_7A3609
0x7A35FD: push    eax; Src
0x7A35FE: push    ebp; Src
0x7A35FF: push    eax; DstSize
0x7A3600: push    ecx; Dst
0x7A3601: call    _memmove_s
0x7A3606: add     esp, 10h
0x7A3609: mov     [edi+8], esi
0x7A360C: pop     ebp
0x7A360D: mov     eax, edi
0x7A360F: pop     edi
0x7A3610: pop     esi
0x7A3611: pop     ebx
0x7A3612: retn    4
