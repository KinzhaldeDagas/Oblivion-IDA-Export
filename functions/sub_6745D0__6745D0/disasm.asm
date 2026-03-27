0x6745D0: push    ecx
0x6745D1: push    esi
0x6745D2: push    edi
0x6745D3: push    8; Size
0x6745D5: call    FormHeapAlloc
0x6745DA: add     esp, 4
0x6745DD: test    eax, eax
0x6745DF: jz      short loc_6745F2
0x6745E1: mov     dword ptr [eax], 0
0x6745E7: mov     dword ptr [eax+4], 0
0x6745EE: mov     esi, eax
0x6745F0: jmp     short loc_6745F4
0x6745F2: xor     esi, esi
0x6745F4: push    ebx
0x6745F5: mov     ebx, [esp+10h+arg_0]
0x6745F9: test    ebx, ebx
0x6745FB: jz      short loc_67464E
0x6745FD: lea     ecx, [ecx+0]
0x674600: mov     ecx, [ebx]
0x674602: test    ecx, ecx
0x674604: jz      short loc_67464E
0x674606: mov     eax, [ecx]
0x674608: mov     edx, [eax+190h]
0x67460E: call    edx
0x674610: test    al, al
0x674612: jz      short loc_674647
0x674614: mov     edi, [ebx]
0x674616: test    edi, edi
0x674618: jz      short loc_674647
0x67461A: cmp     dword ptr [esi], 0
0x67461D: jz      short loc_674645
0x67461F: push    8; Size
0x674621: call    FormHeapAlloc
0x674626: add     esp, 4
0x674629: test    eax, eax
0x67462B: jz      short loc_67463A
0x67462D: mov     ecx, [esi]
0x67462F: mov     [eax], ecx
0x674631: mov     dword ptr [eax+4], 0
0x674638: jmp     short loc_67463C
0x67463A: xor     eax, eax
0x67463C: mov     edx, [esi+4]
0x67463F: mov     [eax+4], edx
0x674642: mov     [esi+4], eax
0x674645: mov     [esi], edi
0x674647: mov     ebx, [ebx+4]
0x67464A: test    ebx, ebx
0x67464C: jnz     short loc_674600
0x67464E: test    esi, esi
0x674650: jz      loc_674780
0x674656: mov     bl, 2
0x674658: jmp     short loc_674660
0x67465A: align 10h
0x674660: mov     edi, [esi]
0x674662: test    edi, edi
0x674664: jz      loc_674780
0x67466A: cmp     edi, ds:0B333C4h
0x674670: jz      loc_674756
0x674676: cmp     dword ptr [edi+58h], 0
0x67467A: jz      loc_674756
0x674680: mov     eax, [edi+8]
0x674683: mov     ecx, eax
0x674685: shr     ecx, 5
0x674688: test    cl, 1
0x67468B: jnz     loc_674756
0x674691: shr     eax, 0Bh
0x674694: test    al, 1
0x674696: jnz     loc_674756
0x67469C: mov     edx, [edi]
0x67469E: mov     eax, [edx+334h]
0x6746A4: push    1
0x6746A6: mov     ecx, edi
0x6746A8: call    eax
0x6746AA: test    al, al
0x6746AC: jnz     loc_674756
0x6746B2: mov     ecx, edi; this
0x6746B4: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x6746B9: fstp    [esp+10h+var_4]
0x6746BD: mov     ecx, offset TimeGlobals
0x6746C2: call    TimeGlobals_GetGameHour
0x6746C7: fstp    [esp+10h+arg_0]
0x6746CB: fld     [esp+10h+arg_0]
0x6746CF: fld     st
0x6746D1: fld     [esp+10h+var_4]
0x6746D5: fld     st
0x6746D7: fsubp   st(2), st
0x6746D9: fxch    st(1)
0x6746DB: fstp    [esp+10h+arg_0]
0x6746DF: fcom    st(1)
0x6746E1: fnstsw  ax
0x6746E3: test    ah, 41h
0x6746E6: jnz     short loc_6746F8
0x6746E8: fxch    st(1)
0x6746EA: fadd    qword ptr ds:0A2F920h
0x6746F0: fsubrp  st(1), st
0x6746F2: fstp    [esp+10h+arg_0]
0x6746F6: jmp     short loc_6746FC
0x6746F8: fstp    st(1)
0x6746FA: fstp    st
0x6746FC: fld     [esp+10h+arg_0]
0x674700: fcomp   qword ptr ds:0A30068h
0x674706: fnstsw  ax
0x674708: test    ah, 5
0x67470B: jp      short loc_674713
0x67470D: fldz
0x67470F: fstp    [esp+10h+arg_0]
0x674713: mov     ecx, [edi+58h]
0x674716: mov     eax, [ecx+8]
0x674719: test    eax, eax
0x67471B: jz      short loc_674722
0x67471D: cmp     [eax+20h], bl
0x674720: jz      short loc_67472D
0x674722: mov     ecx, edi
0x674724: call    sub_5E3220
0x674729: test    al, al
0x67472B: jz      short loc_674742
0x67472D: mov     ecx, [edi+58h]
0x674730: mov     edx, [ecx]
0x674732: mov     eax, [edx+0CCh]
0x674738: call    eax
0x67473A: cmp     eax, ds:0B333C4h
0x674740: jz      short loc_674756
0x674742: mov     edx, [edi]
0x674744: fld     [esp+10h+arg_0]
0x674748: mov     eax, [edx+1C0h]
0x67474E: push    ecx
0x67474F: mov     ecx, edi
0x674751: fstp    [esp+14h+var_14]
0x674754: call    eax
0x674756: mov     eax, [esi+4]
0x674759: test    eax, eax
0x67475B: jz      short loc_674775
0x67475D: mov     ecx, [eax+4]
0x674760: mov     [esi+4], ecx
0x674763: mov     edx, [eax]
0x674765: push    eax
0x674766: mov     [esi], edx
0x674768: call    FormHeapFree
0x67476D: add     esp, 4
0x674770: jmp     loc_674660
0x674775: mov     dword ptr [esi], 0
0x67477B: jmp     loc_674660
0x674780: cmp     dword ptr [esi+4], 0
0x674784: pop     ebx
0x674785: jz      short loc_67479D
0x674787: mov     eax, [esi+4]
0x67478A: mov     edi, [eax+4]
0x67478D: push    eax
0x67478E: call    FormHeapFree
0x674793: add     esp, 4
0x674796: test    edi, edi
0x674798: mov     [esi+4], edi
0x67479B: jnz     short loc_674787
0x67479D: push    esi
0x67479E: mov     dword ptr [esi], 0
0x6747A4: call    FormHeapFree
0x6747A9: add     esp, 4
0x6747AC: pop     edi
0x6747AD: pop     esi
0x6747AE: pop     ecx
0x6747AF: retn    4
