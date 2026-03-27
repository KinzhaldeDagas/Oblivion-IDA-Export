0x4978A0: push    esi
0x4978A1: mov     esi, ecx
0x4978A3: mov     eax, [esi+4]
0x4978A6: push    edi; ArgList
0x4978A7: push    eax
0x4978A8: mov     byte ptr [esi], 0
0x4978AB: call    FormHeapFree
0x4978B0: mov     edi, [esp+0Ch+arg_0]
0x4978B4: add     esp, 4
0x4978B7: test    edi, edi
0x4978B9: jz      loc_497944
0x4978BF: mov     edx, [edi]
0x4978C1: mov     eax, [edx+154h]
0x4978C7: mov     ecx, edi
0x4978C9: call    eax
0x4978CB: test    eax, eax
0x4978CD: jz      short loc_497944
0x4978CF: mov     edx, [edi]
0x4978D1: mov     eax, [edx+154h]
0x4978D7: mov     ecx, edi
0x4978D9: call    eax
0x4978DB: test    eax, eax
0x4978DD: jz      short loc_4978EC
0x4978DF: mov     edx, [eax]
0x4978E1: mov     ecx, eax
0x4978E3: mov     eax, [edx+8]
0x4978E6: call    eax
0x4978E8: mov     edi, eax
0x4978EA: jmp     short loc_4978EE
0x4978EC: xor     edi, edi
0x4978EE: push    edi
0x4978EF: call    sub_4977B0
0x4978F4: add     esp, 4
0x4978F7: test    al, al
0x4978F9: mov     [esi], al
0x4978FB: jz      short loc_497944
0x4978FD: movzx   eax, al
0x497900: xor     ecx, ecx
0x497902: mov     edx, 1Ch
0x497907: mul     edx
0x497909: seto    cl
0x49790C: neg     ecx
0x49790E: or      ecx, eax
0x497910: push    ecx; Size
0x497911: call    FormHeapAlloc
0x497916: add     esp, 4
0x497919: mov     [esi+4], eax
0x49791C: push    1
0x49791E: lea     eax, [esp+0Ch+arg_0]
0x497922: push    eax
0x497923: push    edi
0x497924: mov     ecx, esi
0x497926: mov     [esp+14h+arg_0], 0
0x49792E: call    sub_497500
0x497933: test    al, al
0x497935: jnz     short loc_497944
0x497937: push    offset aFailedToInitia; "Failed to initialize RagDollData."
0x49793C: call    PrintError
0x497941: add     esp, 4
0x497944: pop     edi
0x497945: pop     esi
0x497946: retn    4
