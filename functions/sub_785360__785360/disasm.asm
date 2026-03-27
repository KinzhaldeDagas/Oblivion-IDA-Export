0x785360: push    ebp
0x785361: mov     ebp, esp
0x785363: push    0FFFFFFFFh
0x785365: push    offset SEH_785360
0x78536A: mov     eax, large fs:0
0x785370: push    eax
0x785371: sub     esp, 0Ch
0x785374: push    ebx
0x785375: push    esi
0x785376: push    edi
0x785377: mov     eax, ds:0B30AACh
0x78537C: xor     eax, ebp
0x78537E: push    eax
0x78537F: lea     eax, [ebp+var_C]
0x785382: mov     large fs:0, eax
0x785388: mov     [ebp+var_10], esp
0x78538B: push    30h ; '0'; Size
0x78538D: call    FormHeapAlloc
0x785392: mov     esi, eax
0x785394: add     esp, 4
0x785397: mov     [ebp+var_14], esi
0x78539A: mov     [ebp+var_4], 0
0x7853A1: mov     [ebp+var_18], esi
0x7853A4: test    esi, esi
0x7853A6: mov     byte ptr [ebp+var_4], 1
0x7853AA: jz      short loc_7853C7
0x7853AC: mov     eax, [ebp+arg_10]
0x7853AF: mov     ecx, [ebp+arg_C]
0x7853B2: mov     edx, [ebp+arg_8]
0x7853B5: push    eax
0x7853B6: mov     eax, [ebp+arg_4]
0x7853B9: push    ecx
0x7853BA: mov     ecx, [ebp+arg_0]
0x7853BD: push    edx
0x7853BE: push    eax
0x7853BF: push    ecx
0x7853C0: mov     ecx, esi
0x7853C2: call    sub_784F20
0x7853C7: mov     eax, esi
0x7853C9: mov     ecx, [ebp+var_C]
0x7853CC: mov     large fs:0, ecx
0x7853D3: pop     ecx
0x7853D4: pop     edi
0x7853D5: pop     esi
0x7853D6: pop     ebx
0x7853D7: mov     esp, ebp
0x7853D9: pop     ebp
0x7853DA: retn    14h
0x7853DD: mov     edx, [ebp+var_14]
0x7853E0: push    edx
0x7853E1: call    FormHeapFree
0x7853E6: add     esp, 4
0x7853E9: push    0
0x7853EB: push    0
0x7853ED: call    ThrowException??
